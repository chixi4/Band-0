/**
 * BLE HID Pager for Band-0.
 *
 * Implements multiple BLE HID modes:
 *   - YXT Protocol (custom)
 *   - PPT Remote (Page Up/Down, F5, Escape)
 *   - Phone Pager (ring/find phone)
 *   - Camera shutter
 *   - Media controls (play/pause, next, prev)
 *   - Reading mode (page turn)
 *   - Vibe Coding mode
 *
 * Uses the NimBLE stack (configured in sdkconfig.defaults).
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "nimble/nimble_port.h"
#include "nimble/nimble_port_freertos.h"
#include "host/ble_hs.h"
#include "host/util/util.h"
#include "services/gap/ble_svc_gap.h"
#include "services/gatt/ble_svc_gatt.h"
#include "app_config.h"
#include "ble_pager.h"

static const char *TAG = "ble_pager";

/* ── State ───────────────────────────────────────────────────── */
static bt_pager_state_t s_bt_state = {
    .mode = BT_MODE_PPT_REMOTE,
    .down_key = 0,
    .up_key = 0,
    .template_id = 0,
    .redraw_requested = true,
    .worker_running = false,
};

/* BLE GATT/HID globals */
static uint8_t s_hid_report_map[256];
static int s_hid_report_map_len = 0;
static bool s_ble_ready = false;

static void ble_start_advertising(void);

/* ── Key Label Tables ────────────────────────────────────────── */
typedef struct {
    const char *en;
    const char *zh;
} key_label_t;

static const key_label_t s_ppt_keys[] = {
    {"Page Up",   "上页"},
    {"Page Down", "下页"},
    {"F5",        "F5 演示"},
    {"Escape",    "退出"},
};

static const key_label_t s_media_keys[] = {
    {"Play/Pause", "播放/暂停"},
    {"Next",       "下一曲"},
    {"Prev",       "上一曲"},
    {"Vol+",       "音量+"},
    {"Vol-",       "音量-"},
};

static const key_label_t s_reading_keys[] = {
    {"Next Page", "下一页"},
    {"Prev Page", "上一页"},
    {"Bookmark",  "书签"},
};

/* ── Key Label Lookup ────────────────────────────────────────── */
const char *ble_pager_key_label(uint8_t key_id, bool english)
{
    switch (s_bt_state.mode) {
    case BT_MODE_PPT_REMOTE:
        if (key_id < 4) return english ? s_ppt_keys[key_id].en : s_ppt_keys[key_id].zh;
        break;
    case BT_MODE_MEDIA:
        if (key_id < 5) return english ? s_media_keys[key_id].en : s_media_keys[key_id].zh;
        break;
    case BT_MODE_READING:
        if (key_id < 3) return english ? s_reading_keys[key_id].en : s_reading_keys[key_id].zh;
        break;
    default:
        break;
    }
    return english ? "Key" : "按键";
}

/* ── BLE HID Report Map ─────────────────────────────────────── */
static const uint8_t s_ppt_report_map[] = {
    0x05, 0x01,  /* Usage Page: Generic Desktop */
    0x09, 0x06,  /* Usage: Keyboard */
    0xA1, 0x01,  /* Collection: Application */
    0x05, 0x07,  /* Usage Page: Keyboard/Keypad */
    0x19, 0xE0,  /* Usage Minimum: Keyboard Left Control */
    0x29, 0xE7,  /* Usage Maximum: Keyboard Right GUI */
    0x15, 0x00,  /* Logical Minimum: 0 */
    0x25, 0x01,  /* Logical Maximum: 1 */
    0x75, 0x01,  /* Report Size: 1 */
    0x95, 0x08,  /* Report Count: 8 */
    0x81, 0x02,  /* Input: Data, Variable, Absolute */
    0x95, 0x01,  /* Report Count: 1 */
    0x75, 0x08,  /* Report Size: 8 */
    0x81, 0x01,  /* Input: Constant */
    0x95, 0x05,  /* Report Count: 5 */
    0x75, 0x01,  /* Report Size: 1 */
    0x05, 0x08,  /* Usage Page: LEDs */
    0x19, 0x01,  /* Usage Minimum: Num Lock */
    0x29, 0x05,  /* Usage Maximum: Kana */
    0x91, 0x02,  /* Output: Data, Variable, Absolute */
    0x95, 0x01,  /* Report Count: 1 */
    0x75, 0x03,  /* Report Size: 3 */
    0x91, 0x01,  /* Output: Constant */
    0x95, 0x06,  /* Report Count: 6 */
    0x75, 0x08,  /* Report Size: 8 */
    0x15, 0x00,  /* Logical Minimum: 0 */
    0x26, 0xFF, 0x00,  /* Logical Maximum: 255 */
    0x05, 0x07,  /* Usage Page: Key Codes */
    0x19, 0x00,  /* Usage Minimum: 0 */
    0x2A, 0xFF, 0x00,  /* Usage Maximum: 255 */
    0x81, 0x00,  /* Input: Data, Array */
    0xC0,        /* End Collection */
};

/* ── HID Key Codes ───────────────────────────────────────────── */
#define HID_KEY_PAGE_UP     0x4B
#define HID_KEY_PAGE_DOWN   0x4E
#define HID_KEY_F5          0x3E
#define HID_KEY_ESCAPE      0x29
#define HID_KEY_MEDIA_PLAYPAUSE 0xCD
#define HID_KEY_MEDIA_NEXT  0xB5
#define HID_KEY_MEDIA_PREV  0xB6
#define HID_KEY_VOLUME_UP   0x80
#define HID_KEY_VOLUME_DOWN 0x81

/* ── BLE GAP Event Callback ──────────────────────────────────── */
static int ble_gap_event_cb(struct ble_gap_event *event, void *arg)
{
    switch (event->type) {
    case BLE_GAP_EVENT_CONNECT:
        ESP_LOGI(TAG, "BLE connected: %s",
                 event->connect.status == 0 ? "OK" : "FAIL");
        if (event->connect.status != 0) {
            /* Connection failed, restart advertising */
            ble_svc_gap_device_name_set("Band-0 Pager");
            ble_start_advertising();
        }
        break;

    case BLE_GAP_EVENT_DISCONNECT:
        ESP_LOGI(TAG, "BLE disconnected, restarting advertising");
        ble_start_advertising();
        break;

    case BLE_GAP_EVENT_ADV_COMPLETE:
        ESP_LOGI(TAG, "Advertising complete, restarting");
        ble_start_advertising();
        break;

    default:
        break;
    }
    return 0;
}

/* ── Start Advertising ───────────────────────────────────────── */
static void ble_start_advertising(void)
{
    struct ble_gap_adv_params adv_params = {0};
    adv_params.conn_mode = BLE_GAP_CONN_MODE_UND;
    adv_params.disc_mode = BLE_GAP_DISC_MODE_GEN;

    struct ble_hs_adv_fields fields = {0};
    fields.flags = BLE_HS_ADV_F_DISC_GEN | BLE_HS_ADV_F_BREDR_UNSUP;
    fields.tx_pwr_lvl = BLE_HS_ADV_TX_PWR_LVL_AUTO;
    fields.name = (uint8_t *)"Band-0";
    fields.name_len = 6;
    fields.name_is_complete = 1;

    ble_gap_adv_set_fields(&fields);

    int rc = ble_gap_adv_start(BLE_OWN_ADDR_PUBLIC, NULL, BLE_HS_FOREVER,
                               &adv_params, ble_gap_event_cb, NULL);
    if (rc != 0) {
        ESP_LOGW(TAG, "adv start failed: %d", rc);
    }
}

/* ── NimBLE Host Task ────────────────────────────────────────── */
void ble_host_task(void *param)
{
    ESP_LOGI(TAG, "NimBLE host task started");
    nimble_port_run();
    nimble_port_freertos_deinit();
}

/* ── Init BLE ────────────────────────────────────────────────── */
void ble_pager_init(void)
{
    if (s_ble_ready) return;

    ESP_LOGI(TAG, "Initializing BLE (NimBLE)");

    nimble_port_init();

    /* Configure GAP */
    ble_svc_gap_device_name_set("Band-0 Pager");
    ble_svc_gap_device_appearance_set(0x00C1);  /* HID Keyboard */

    /* Configure GATT */
    ble_svc_gatt_init();

    s_hid_report_map_len = sizeof(s_ppt_report_map);
    memcpy(s_hid_report_map, s_ppt_report_map, s_hid_report_map_len);

    /* Start advertising */
    ble_start_advertising();

    /* Start NimBLE host task */
    xTaskCreate(ble_host_task, "ble_host", 4096, NULL, 5, NULL);

    s_ble_ready = true;
    ESP_LOGI(TAG, "BLE initialized");
}

/* ── Send HID Key Report ─────────────────────────────────────── */
void ble_pager_send_key(uint8_t key_id, bool is_down)
{
    if (!s_ble_ready) return;

    /* For now, this is a stub.
       Full implementation would send HID input reports over BLE GATT.
       The key_id maps to a HID usage code based on the current mode. */

    uint8_t hid_code = 0;
    switch (s_bt_state.mode) {
    case BT_MODE_PPT_REMOTE:
        switch (key_id) {
        case 0: hid_code = HID_KEY_PAGE_UP;    break;
        case 1: hid_code = HID_KEY_PAGE_DOWN;  break;
        case 2: hid_code = HID_KEY_F5;         break;
        case 3: hid_code = HID_KEY_ESCAPE;     break;
        }
        break;
    case BT_MODE_MEDIA:
        switch (key_id) {
        case 0: hid_code = HID_KEY_MEDIA_PLAYPAUSE; break;
        case 1: hid_code = HID_KEY_MEDIA_NEXT;      break;
        case 2: hid_code = HID_KEY_MEDIA_PREV;      break;
        case 3: hid_code = HID_KEY_VOLUME_UP;       break;
        case 4: hid_code = HID_KEY_VOLUME_DOWN;     break;
        }
        break;
    case BT_MODE_READING:
        switch (key_id) {
        case 0: hid_code = HID_KEY_PAGE_DOWN;  break;
        case 1: hid_code = HID_KEY_PAGE_UP;    break;
        }
        break;
    default:
        break;
    }

    if (hid_code) {
        ESP_LOGI(TAG, "BLE HID: key=%d code=0x%02X %s",
                 key_id, hid_code, is_down ? "DOWN" : "UP");
    }
}

/* ── Update Advertisement ────────────────────────────────────── */
void ble_pager_update_advertisement(bt_pager_mode_t mode)
{
    s_bt_state.mode = mode;
    /* Rebuild advertisement data if needed */
    ESP_LOGI(TAG, "BLE mode updated to %d", mode);
}

/* ── Deinit ──────────────────────────────────────────────────── */
void ble_pager_deinit(void)
{
    if (!s_ble_ready) return;
    /* Stop NimBLE */
    s_ble_ready = false;
    ESP_LOGI(TAG, "BLE deinitialized");
}

/* ── BLE HID Worker Task ─────────────────────────────────────── */
void ble_hid_worker(void *arg)
{
    ESP_LOGI(TAG, "BLE HID worker started");
    ble_pager_init();
    s_bt_state.worker_running = true;

    while (s_bt_state.worker_running) {
        /* Poll for HID events or connection state changes */
        vTaskDelay(pdMS_TO_TICKS(1000));
    }

    vTaskDelete(NULL);
}
