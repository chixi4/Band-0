/**
 * Minimal BLE GATT bridge for Claude Usage.
 *
 * This is intentionally not a BLE OTA transport. It only accepts compact
 * usage JSON and exposes a tiny status characteristic so BLE can be a direct
 * data/debug fallback when ADV Wi-Fi is unavailable.
 */

#include <stdio.h>
#include <string.h>
#include "esp_system.h"
#include "esp_heap_caps.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "host/ble_hs.h"
#include "host/ble_uuid.h"
#include "host/util/util.h"
#include "nimble/nimble_port.h"
#include "nimble/nimble_port_freertos.h"
#include "os/os_mbuf.h"
#include "services/gap/ble_svc_gap.h"
#include "services/gatt/ble_svc_gatt.h"
#include "cJSON.h"
#include "app_config.h"
#include "claude_usage.h"
#include "ui_render.h"
#include "ble_usage.h"
#include "diag_log.h"

static const char *TAG = "ble_usage";

static bool s_ready;
static bool s_advertising;
static bool s_connected;
static uint8_t s_own_addr_type;
static uint16_t s_conn_handle = BLE_HS_CONN_HANDLE_NONE;
static uint16_t s_status_val_handle;
static uint32_t s_rx_count;
static uint32_t s_notify_count;
static char s_last_error[40];

/* UUIDs match the cardputer-claude-usage family for easy Web Bluetooth reuse. */
static const ble_uuid128_t s_usage_svc_uuid =
    BLE_UUID128_INIT(0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80,
                     0x00, 0x10, 0x00, 0x00, 0x34, 0x12, 0xfe, 0xca);
static const ble_uuid128_t s_usage_write_uuid =
    BLE_UUID128_INIT(0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80,
                     0x00, 0x10, 0x00, 0x00, 0x78, 0x56, 0xfe, 0xca);
static const ble_uuid128_t s_usage_status_uuid =
    BLE_UUID128_INIT(0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80,
                     0x00, 0x10, 0x00, 0x00, 0x99, 0x99, 0xfe, 0xca);

static void ble_usage_start_advertising(void);

static void make_status_json(char *out, size_t out_len)
{
    claude_usage_state_t usage;
    claude_usage_get_state(&usage);
    snprintf(out, out_len,
             "{\"fw\":\"%s\",\"mode\":%d,\"data\":%s,\"status\":\"%s\",\"stale\":%s,\"rx\":%lu}",
             BAND0_FIRMWARE_VERSION,
             current_mode(),
             usage.has_data ? "true" : "false",
             usage.status[0] ? usage.status : "waiting",
             usage.stale ? "true" : "false",
             (unsigned long)s_rx_count);
}

static int append_mbuf_to_buffer(struct os_mbuf *om, char *out, size_t out_len)
{
    if (!om || !out || out_len == 0) return BLE_ATT_ERR_INVALID_ATTR_VALUE_LEN;
    uint16_t len = OS_MBUF_PKTLEN(om);
    if (len >= out_len) {
        strlcpy(s_last_error, "BLE payload too large", sizeof(s_last_error));
        return BLE_ATT_ERR_INVALID_ATTR_VALUE_LEN;
    }

    int rc = ble_hs_mbuf_to_flat(om, out, out_len - 1, &len);
    if (rc != 0) {
        strlcpy(s_last_error, "BLE mbuf read failed", sizeof(s_last_error));
        return BLE_ATT_ERR_UNLIKELY;
    }
    out[len] = '\0';
    return 0;
}

static void ble_usage_reboot_task(void *param)
{
    (void)param;
    vTaskDelay(pdMS_TO_TICKS(350));
    esp_restart();
}

static bool extract_command(const char *payload, char *out, size_t out_len)
{
    if (!payload || !out || out_len == 0) return false;
    out[0] = '\0';

    cJSON *root = cJSON_Parse(payload);
    if (!root) return false;

    cJSON *data = root;
    cJSON *nested = cJSON_GetObjectItem(root, "payload");
    if (cJSON_IsObject(nested)) {
        data = nested;
    }

    cJSON *cmd = cJSON_GetObjectItem(data, "cmd");
    if (!cJSON_IsString(cmd) || !cmd->valuestring || !cmd->valuestring[0]) {
        cmd = cJSON_GetObjectItem(root, "cmd");
    }

    bool ok = false;
    if (cJSON_IsString(cmd) && cmd->valuestring && cmd->valuestring[0]) {
        strlcpy(out, cmd->valuestring, out_len);
        ok = true;
    }

    cJSON_Delete(root);
    return ok;
}

static bool handle_command(const char *payload)
{
    char cmd[16] = {0};
    if (!extract_command(payload, cmd, sizeof(cmd))) return false;

    if (!strcmp(cmd, "status")) {
        diag_log_event("I", "ble", "cmd status");
        ble_usage_notify_status();
        return true;
    }
    if (!strcmp(cmd, "usage")) {
        set_current_mode(APP_MODE_CLAUDE_USAGE);
        ui_request_redraw();
        diag_log_event("I", "ble", "cmd usage");
        ble_usage_notify_status();
        return true;
    }
    if (!strcmp(cmd, "safe")) {
        set_current_mode(APP_MODE_SAFE_STATUS);
        ui_request_redraw();
        diag_log_event("I", "ble", "cmd safe");
        ble_usage_notify_status();
        return true;
    }
    if (!strcmp(cmd, "redraw")) {
        ui_request_redraw();
        diag_log_event("I", "ble", "cmd redraw");
        ble_usage_notify_status();
        return true;
    }
    if (!strcmp(cmd, "reboot")) {
        diag_log_event("W", "ble", "cmd reboot");
        ble_usage_notify_status();
        xTaskCreate(ble_usage_reboot_task, "ble_reboot", 2048, NULL, 5, NULL);
        return true;
    }

    return false;
}

static int usage_gatt_access_cb(uint16_t conn_handle, uint16_t attr_handle,
                                struct ble_gatt_access_ctxt *ctxt, void *arg)
{
    (void)conn_handle;
    const char *which = (const char *)arg;

    if (ctxt->op == BLE_GATT_ACCESS_OP_WRITE_CHR && which && !strcmp(which, "write")) {
        char payload[768] = {0};
        int rc = append_mbuf_to_buffer(ctxt->om, payload, sizeof(payload));
        if (rc != 0) return rc;

        if (handle_command(payload)) {
            s_rx_count++;
            return 0;
        }

        bool ok = claude_usage_receive_json(payload, "ble");
        s_rx_count++;
        if (ok) {
            if (current_mode() == APP_MODE_CLAUDE_USAGE && claude_usage_visual_changed()) {
                ui_request_redraw();
            }
            diag_log_event("I", "ble", "usage write ok");
            ble_usage_notify_status();
            return 0;
        }

        strlcpy(s_last_error, "Bad usage JSON", sizeof(s_last_error));
        diag_log_event("W", "ble", "usage write failed");
        return BLE_ATT_ERR_UNLIKELY;
    }

    if (ctxt->op == BLE_GATT_ACCESS_OP_READ_CHR && which && !strcmp(which, "status")) {
        char status[180];
        make_status_json(status, sizeof(status));
        int rc = os_mbuf_append(ctxt->om, status, strlen(status));
        return rc == 0 ? 0 : BLE_ATT_ERR_INSUFFICIENT_RES;
    }

    (void)attr_handle;
    return BLE_ATT_ERR_UNLIKELY;
}

static const struct ble_gatt_svc_def s_gatt_svcs[] = {
    {
        .type = BLE_GATT_SVC_TYPE_PRIMARY,
        .uuid = &s_usage_svc_uuid.u,
        .characteristics = (struct ble_gatt_chr_def[]) {
            {
                .uuid = &s_usage_write_uuid.u,
                .access_cb = usage_gatt_access_cb,
                .arg = "write",
                .flags = BLE_GATT_CHR_F_WRITE | BLE_GATT_CHR_F_WRITE_NO_RSP,
            },
            {
                .uuid = &s_usage_status_uuid.u,
                .access_cb = usage_gatt_access_cb,
                .arg = "status",
                .flags = BLE_GATT_CHR_F_READ | BLE_GATT_CHR_F_NOTIFY,
                .val_handle = &s_status_val_handle,
            },
            {0}
        },
    },
    {0},
};

static int ble_usage_gap_event_cb(struct ble_gap_event *event, void *arg)
{
    (void)arg;
    switch (event->type) {
    case BLE_GAP_EVENT_CONNECT:
        s_connected = (event->connect.status == 0);
        s_advertising = false;
        if (s_connected) {
            s_conn_handle = event->connect.conn_handle;
            diag_log_event("I", "ble", "connected");
        } else {
            s_conn_handle = BLE_HS_CONN_HANDLE_NONE;
            diag_log_event("W", "ble", "connect failed");
            ble_usage_start_advertising();
        }
        break;

    case BLE_GAP_EVENT_DISCONNECT:
        s_connected = false;
        s_conn_handle = BLE_HS_CONN_HANDLE_NONE;
        diag_log_event("I", "ble", "disconnected");
        ble_usage_start_advertising();
        break;

    case BLE_GAP_EVENT_ADV_COMPLETE:
        s_advertising = false;
        ble_usage_start_advertising();
        break;

    case BLE_GAP_EVENT_SUBSCRIBE:
        if (event->subscribe.attr_handle == s_status_val_handle) {
            diag_log_event("I", "ble", "status notify %s",
                           event->subscribe.cur_notify ? "on" : "off");
        }
        break;

    default:
        break;
    }
    return 0;
}

static void ble_usage_start_advertising(void)
{
    if (!s_ready) return;

    struct ble_hs_adv_fields fields = {0};
    fields.flags = BLE_HS_ADV_F_DISC_GEN | BLE_HS_ADV_F_BREDR_UNSUP;
    fields.tx_pwr_lvl = BLE_HS_ADV_TX_PWR_LVL_AUTO;
    fields.name = (uint8_t *)"Band-0 Usage";
    fields.name_len = strlen("Band-0 Usage");
    fields.name_is_complete = 1;

    ble_uuid16_t svc_uuid = BLE_UUID16_INIT(0x181C); /* User Data, hint only. */
    fields.uuids16 = &svc_uuid;
    fields.num_uuids16 = 1;
    fields.uuids16_is_complete = 0;

    int rc = ble_gap_adv_set_fields(&fields);
    if (rc != 0) {
        snprintf(s_last_error, sizeof(s_last_error), "adv fields rc=%d", rc);
        ESP_LOGW(TAG, "%s", s_last_error);
        return;
    }

    struct ble_gap_adv_params adv_params = {0};
    adv_params.conn_mode = BLE_GAP_CONN_MODE_UND;
    adv_params.disc_mode = BLE_GAP_DISC_MODE_GEN;

    rc = ble_gap_adv_start(s_own_addr_type, NULL, BLE_HS_FOREVER,
                           &adv_params, ble_usage_gap_event_cb, NULL);
    if (rc == 0) {
        s_advertising = true;
        diag_log_event("I", "ble", "advertising");
    } else {
        snprintf(s_last_error, sizeof(s_last_error), "adv start rc=%d", rc);
        ESP_LOGW(TAG, "%s", s_last_error);
    }
}

static void ble_usage_on_sync(void)
{
    int rc = ble_hs_id_infer_auto(0, &s_own_addr_type);
    if (rc != 0) {
        snprintf(s_last_error, sizeof(s_last_error), "addr infer rc=%d", rc);
        ESP_LOGW(TAG, "%s", s_last_error);
        return;
    }
    ble_usage_start_advertising();
}

static void ble_usage_host_task(void *param)
{
    (void)param;
    ESP_LOGI(TAG, "NimBLE host task started");
    nimble_port_run();
    nimble_port_freertos_deinit();
}

int ble_usage_init(void)
{
    if (s_ready) return 0;

    uint32_t heap_before = heap_caps_get_free_size(MALLOC_CAP_8BIT);
    ESP_LOGI(TAG, "Initializing BLE Usage GATT, heap=%lu", (unsigned long)heap_before);
    int rc = nimble_port_init();
    if (rc != 0) {
        snprintf(s_last_error, sizeof(s_last_error), "nimble rc=%d heap=%lu",
                 rc, (unsigned long)heap_before);
        diag_log_event("E", "ble", "%s", s_last_error);
        return rc;
    }

    ble_svc_gap_init();
    ble_svc_gatt_init();
    ble_svc_gap_device_name_set("Band-0 Usage");
    ble_svc_gap_device_appearance_set(0x0080); /* Generic computer-ish device. */

    rc = ble_gatts_count_cfg(s_gatt_svcs);
    if (rc == 0) {
        rc = ble_gatts_add_svcs(s_gatt_svcs);
    }
    if (rc != 0) {
        snprintf(s_last_error, sizeof(s_last_error), "gatt cfg rc=%d", rc);
        diag_log_event("E", "ble", "%s", s_last_error);
        return rc;
    }

    ble_hs_cfg.sync_cb = ble_usage_on_sync;
    s_ready = true;
    nimble_port_freertos_init(ble_usage_host_task);
    diag_log_event("I", "ble", "usage GATT init");
    return 0;
}

void ble_usage_notify_status(void)
{
    if (!s_ready || !s_connected || s_conn_handle == BLE_HS_CONN_HANDLE_NONE) return;

    char status[180];
    make_status_json(status, sizeof(status));
    struct os_mbuf *om = ble_hs_mbuf_from_flat(status, strlen(status));
    if (!om) return;
    int rc = ble_gatts_notify_custom(s_conn_handle, s_status_val_handle, om);
    if (rc == 0) {
        s_notify_count++;
    } else {
        snprintf(s_last_error, sizeof(s_last_error), "notify rc=%d", rc);
    }
}

void ble_usage_get_status(ble_usage_status_t *out)
{
    if (!out) return;
    memset(out, 0, sizeof(*out));
    out->ready = s_ready;
    out->advertising = s_advertising;
    out->connected = s_connected;
    out->conn_handle = s_conn_handle;
    out->rx_count = s_rx_count;
    out->notify_count = s_notify_count;
    strlcpy(out->last_error, s_last_error, sizeof(out->last_error));
}
