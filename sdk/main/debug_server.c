/**
 * Local HTTP debug API for Band-0.
 *
 * This is intentionally small: it gives the browser/bridge a way to push
 * Claude Usage payloads and stage OTA URLs without depending on USB data.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_http_server.h"
#include "esp_log.h"
#include "esp_heap_caps.h"
#include "nvs_flash.h"
#include "esp_ota_ops.h"
#include "esp_system.h"
#include "esp_timer.h"
#include "cJSON.h"
#include "app_config.h"
#include "ble_usage.h"
#include "claude_usage.h"
#include "diag_log.h"
#include "debug_server.h"
#include "display_epd.h"
#include "power_monitor.h"
#include "ui_render.h"
#include "wifi_config.h"

static const char *TAG = "debug_http";
static httpd_handle_t s_httpd;

#define OTA_KEY_URL       "url"
#define OTA_KEY_SSID_1    "ssid_1"
#define OTA_KEY_STA_SSID  "sta.ssid"
#define OTA_KEY_ATTEMPT   "attempt_id"
#define OTA_KEY_RESULT    "result"
#define OTA_KEY_RESULT_FOR "result_for"
#define OTA_KEY_FAIL      "fail_reason"
#define OTA_KEY_ARMED     "armed_attempt"

static void register_uri_checked(const httpd_uri_t *uri)
{
    esp_err_t err = httpd_register_uri_handler(s_httpd, uri);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "register %s method=%d failed: %s",
                 uri->uri, uri->method, esp_err_to_name(err));
        diag_log_event("E", "http", "register %s err=%d", uri->uri, err);
    }
}

static void add_cors(httpd_req_t *req)
{
    httpd_resp_set_hdr(req, "Access-Control-Allow-Origin", "*");
    httpd_resp_set_hdr(req, "Access-Control-Allow-Methods", "GET,POST,OPTIONS");
    httpd_resp_set_hdr(req, "Access-Control-Allow-Headers", "Content-Type");
    httpd_resp_set_hdr(req, "Cache-Control", "no-store");
}

static esp_err_t send_json(httpd_req_t *req, const char *status, cJSON *root)
{
    char *raw = cJSON_PrintUnformatted(root);
    if (!raw) {
        httpd_resp_send_err(req, HTTPD_500_INTERNAL_SERVER_ERROR, "json encode failed");
        return ESP_FAIL;
    }
    httpd_resp_set_status(req, status);
    httpd_resp_set_type(req, "application/json");
    add_cors(req);
    esp_err_t ret = httpd_resp_sendstr(req, raw);
    cJSON_free(raw);
    return ret;
}

static void add_usage_json(cJSON *root)
{
    claude_usage_state_t usage;
    claude_usage_get_state(&usage);

    cJSON *u = cJSON_AddObjectToObject(root, "usage");
    cJSON_AddBoolToObject(u, "has_data", usage.has_data);
    cJSON_AddNumberToObject(u, "current_used", usage.current_used);
    cJSON_AddNumberToObject(u, "current_remaining", usage.current_remaining);
    cJSON_AddStringToObject(u, "current_resets_in", usage.current_resets_in);
    cJSON_AddNumberToObject(u, "weekly_used", usage.weekly_used);
    cJSON_AddNumberToObject(u, "weekly_remaining", usage.weekly_remaining);
    cJSON_AddStringToObject(u, "weekly_resets_in", usage.weekly_resets_in);
    cJSON_AddStringToObject(u, "model", usage.model);
    cJSON_AddStringToObject(u, "status", usage.status);
    cJSON_AddStringToObject(u, "source", usage.source);
    cJSON_AddStringToObject(u, "error", usage.error);
    cJSON_AddStringToObject(u, "transport", usage.last_transport);
    cJSON_AddBoolToObject(u, "stale", usage.stale);
    cJSON_AddBoolToObject(u, "demo", usage.is_demo);
    cJSON_AddNumberToObject(u, "last_update_ms", usage.last_update_ms);
}

static void add_wifi_json(cJSON *root)
{
    wifi_runtime_status_t wifi;
    wifi_get_runtime_status(&wifi);
    cJSON *w = cJSON_AddObjectToObject(root, "wifi");
    cJSON_AddBoolToObject(w, "sta_connected", wifi.sta_connected);
    cJSON_AddBoolToObject(w, "portal_active", wifi.portal_active);
    cJSON_AddNumberToObject(w, "state", wifi.state);
    cJSON_AddNumberToObject(w, "retry_count", wifi.retry_count);
    cJSON_AddStringToObject(w, "ip", wifi.ip);
}

static void add_ble_json(cJSON *root)
{
    ble_usage_status_t ble;
    ble_usage_get_status(&ble);
    cJSON *b = cJSON_AddObjectToObject(root, "ble");
    cJSON_AddBoolToObject(b, "auto_start", BAND0_AUTO_START_BLE != 0);
    cJSON_AddBoolToObject(b, "ready", ble.ready);
    cJSON_AddBoolToObject(b, "advertising", ble.advertising);
    cJSON_AddBoolToObject(b, "connected", ble.connected);
    cJSON_AddNumberToObject(b, "conn_handle", ble.conn_handle);
    cJSON_AddNumberToObject(b, "rx_count", ble.rx_count);
    cJSON_AddNumberToObject(b, "notify_count", ble.notify_count);
    cJSON_AddStringToObject(b, "last_error", ble.last_error);
}

static void add_power_json(cJSON *root)
{
    battery_state_t battery = power_monitor_get_battery();
    cJSON *p = cJSON_AddObjectToObject(root, "power");
    cJSON_AddNumberToObject(p, "battery_pct", battery.percentage);
    cJSON_AddBoolToObject(p, "charging", battery.charging);
    cJSON_AddNumberToObject(p, "adc_mv", power_monitor_get_adc_mv());
    cJSON_AddNumberToObject(p, "cell_mv", power_monitor_get_cell_mv());
    cJSON_AddStringToObject(p, "source", "adc1_ch2_gpio2_stock_curve");
}

static void add_heap_json(cJSON *root)
{
    cJSON *heap = cJSON_AddObjectToObject(root, "heap");
    cJSON_AddNumberToObject(heap, "free", esp_get_free_heap_size());
    cJSON_AddNumberToObject(heap, "min_free", esp_get_minimum_free_heap_size());
    cJSON_AddNumberToObject(heap, "largest_8bit",
                            heap_caps_get_largest_free_block(MALLOC_CAP_8BIT));
}

static const char *health_label(bool *ok_out, cJSON *reasons)
{
    bool ok = true;
    wifi_runtime_status_t wifi;
    wifi_get_runtime_status(&wifi);
    ble_usage_status_t ble;
    ble_usage_get_status(&ble);
    claude_usage_state_t usage;
    claude_usage_get_state(&usage);

    if (!display_is_ready()) {
        ok = false;
        cJSON_AddItemToArray(reasons, cJSON_CreateString("display_not_ready"));
    }
    if (!wifi.sta_connected && !wifi.portal_active) {
        ok = false;
        cJSON_AddItemToArray(reasons, cJSON_CreateString("wifi_not_ready"));
    }
    if ((BAND0_AUTO_START_BLE != 0) && !ble.ready) {
        ok = false;
        cJSON_AddItemToArray(reasons, cJSON_CreateString("ble_not_ready"));
    }
    if (!usage.has_data) {
        cJSON_AddItemToArray(reasons, cJSON_CreateString("usage_waiting"));
    }
    if (esp_get_free_heap_size() < 24000) {
        ok = false;
        cJSON_AddItemToArray(reasons, cJSON_CreateString("low_heap"));
    }

    if (ok_out) *ok_out = ok;
    return ok ? "ok" : "degraded";
}

static void add_health_json(cJSON *root)
{
    cJSON *reasons = cJSON_CreateArray();
    bool ok = false;
    const char *label = health_label(&ok, reasons);
    cJSON_AddStringToObject(root, "health", label);
    cJSON_AddBoolToObject(root, "ok", ok);
    cJSON_AddItemToObject(root, "reasons", reasons);
}

static void add_nvs_str_if_exists(cJSON *root, nvs_handle_t nvs, const char *json_key,
                                  const char *nvs_key, size_t max_len)
{
    char value[256] = {0};
    if (max_len > sizeof(value)) {
        max_len = sizeof(value);
    }
    size_t len = max_len;
    if (nvs_get_str(nvs, nvs_key, value, &len) == ESP_OK) {
        cJSON_AddStringToObject(root, json_key, value);
    } else {
        cJSON_AddNullToObject(root, json_key);
    }
}

static cJSON *build_ota_status_json(void)
{
    cJSON *ota = cJSON_CreateObject();
    if (!ota) return NULL;

    nvs_handle_t nvs;
    esp_err_t err = nvs_open(NVS_OTA_NS, NVS_READONLY, &nvs);
    if (err != ESP_OK) {
        cJSON_AddBoolToObject(ota, "nvs_open", false);
        cJSON_AddStringToObject(ota, "nvs_error", esp_err_to_name(err));
        return ota;
    }

    cJSON_AddBoolToObject(ota, "nvs_open", true);
    int32_t attempt = 0;
    int32_t result = 0x7fffffff;
    int32_t result_for = 0;
    int32_t armed_attempt = 0;
    bool has_attempt = (nvs_get_i32(nvs, OTA_KEY_ATTEMPT, &attempt) == ESP_OK);
    bool has_result = (nvs_get_i32(nvs, OTA_KEY_RESULT, &result) == ESP_OK);
    bool has_result_for = (nvs_get_i32(nvs, OTA_KEY_RESULT_FOR, &result_for) == ESP_OK);
    bool has_armed = (nvs_get_i32(nvs, OTA_KEY_ARMED, &armed_attempt) == ESP_OK);

    cJSON_AddBoolToObject(ota, "has_attempt", has_attempt);
    cJSON_AddNumberToObject(ota, "attempt_id", attempt);
    cJSON_AddBoolToObject(ota, "has_result", has_result);
    if (has_result) {
        cJSON_AddNumberToObject(ota, "result", result);
        cJSON_AddBoolToObject(ota, "success", result == 0);
    } else {
        cJSON_AddNullToObject(ota, "result");
        cJSON_AddNullToObject(ota, "success");
    }
    cJSON_AddBoolToObject(ota, "has_result_for", has_result_for);
    cJSON_AddNumberToObject(ota, "result_for", result_for);
    cJSON_AddBoolToObject(ota, "has_armed", has_armed);
    cJSON_AddNumberToObject(ota, "armed_attempt", armed_attempt);
    add_nvs_str_if_exists(ota, nvs, "url", OTA_KEY_URL, 256);
    add_nvs_str_if_exists(ota, nvs, "updater_ssid", OTA_KEY_SSID_1, 33);
    add_nvs_str_if_exists(ota, nvs, "sta_ssid", OTA_KEY_STA_SSID, 33);
    add_nvs_str_if_exists(ota, nvs, "fail_reason", OTA_KEY_FAIL, 96);

    nvs_close(nvs);
    return ota;
}

static esp_err_t read_body(httpd_req_t *req, char *buf, size_t buf_len)
{
    if (req->content_len >= buf_len) {
        return ESP_ERR_NO_MEM;
    }

    int total = 0;
    while (total < req->content_len) {
        int got = httpd_req_recv(req, buf + total, req->content_len - total);
        if (got <= 0) {
            return ESP_FAIL;
        }
        total += got;
    }
    buf[total] = '\0';
    return ESP_OK;
}

static esp_err_t options_handler(httpd_req_t *req)
{
    add_cors(req);
    httpd_resp_send(req, NULL, 0);
    return ESP_OK;
}

static esp_err_t status_get_handler(httpd_req_t *req)
{
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "device", "Band-0");
    cJSON_AddStringToObject(root, "firmware", BAND0_FIRMWARE_VERSION);
    cJSON_AddStringToObject(root, "runtime", "local-base");
    cJSON_AddStringToObject(root, "official_reference", "1.2.6");
    cJSON_AddBoolToObject(root, "official_compat_mode", true);
    cJSON_AddNumberToObject(root, "mode", current_mode());
    cJSON_AddNumberToObject(root, "uptime_ms", esp_timer_get_time() / 1000);
    cJSON_AddNumberToObject(root, "diag_count", diag_log_count());
    cJSON_AddBoolToObject(root, "display_ready", display_is_ready());
    cJSON_AddBoolToObject(root, "display_inverted", display_get_inverted());
    add_health_json(root);
    add_wifi_json(root);
    add_ble_json(root);
    add_usage_json(root);
    add_power_json(root);
    cJSON *ota = build_ota_status_json();
    if (ota) cJSON_AddItemToObject(root, "ota", ota);
    add_heap_json(root);
    esp_err_t ret = send_json(req, "200 OK", root);
    cJSON_Delete(root);
    return ret;
}

static esp_err_t health_get_handler(httpd_req_t *req)
{
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "device", "Band-0");
    cJSON_AddStringToObject(root, "firmware", BAND0_FIRMWARE_VERSION);
    add_health_json(root);
    add_wifi_json(root);
    add_ble_json(root);
    add_power_json(root);
    add_heap_json(root);
    esp_err_t ret = send_json(req, "200 OK", root);
    cJSON_Delete(root);
    return ret;
}

static esp_err_t heap_get_handler(httpd_req_t *req)
{
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "device", "Band-0");
    add_heap_json(root);
    esp_err_t ret = send_json(req, "200 OK", root);
    cJSON_Delete(root);
    return ret;
}

static esp_err_t logs_get_handler(httpd_req_t *req)
{
    diag_log_entry_t entries[8];
    size_t count = diag_log_snapshot(entries, 8);
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "device", "Band-0");
    cJSON_AddNumberToObject(root, "count", count);
    cJSON_AddNumberToObject(root, "total", diag_log_count());
    cJSON *arr = cJSON_AddArrayToObject(root, "events");
    for (size_t i = 0; i < count; i++) {
        cJSON *e = cJSON_CreateObject();
        cJSON_AddNumberToObject(e, "seq", entries[i].seq);
        cJSON_AddNumberToObject(e, "ms", entries[i].ms);
        cJSON_AddStringToObject(e, "level", entries[i].level);
        cJSON_AddStringToObject(e, "module", entries[i].module);
        cJSON_AddStringToObject(e, "message", entries[i].message);
        cJSON_AddItemToArray(arr, e);
    }
    esp_err_t ret = send_json(req, "200 OK", root);
    cJSON_Delete(root);
    return ret;
}

static esp_err_t ota_status_handler(httpd_req_t *req)
{
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "device", "Band-0");
    cJSON_AddStringToObject(root, "firmware", BAND0_FIRMWARE_VERSION);
    cJSON *ota = build_ota_status_json();
    if (ota) cJSON_AddItemToObject(root, "ota", ota);
    esp_err_t ret = send_json(req, "200 OK", root);
    cJSON_Delete(root);
    return ret;
}

static esp_err_t usage_push_handler(httpd_req_t *req)
{
    char body[768];
    esp_err_t err = read_body(req, body, sizeof(body));
    if (err == ESP_ERR_NO_MEM) {
        httpd_resp_send_err(req, HTTPD_413_CONTENT_TOO_LARGE, "payload too large");
        return ESP_FAIL;
    }
    if (err != ESP_OK) {
        httpd_resp_send_err(req, HTTPD_400_BAD_REQUEST, "failed to read body");
        return ESP_FAIL;
    }

    bool ok = claude_usage_receive_json(body, "wifi");
    if (ok) {
        if (current_mode() == APP_MODE_CLAUDE_USAGE && claude_usage_visual_changed()) {
            ui_request_redraw();
        }
        ble_usage_notify_status();
        diag_log_event("I", "usage", "push via wifi");
    }

    cJSON *root = cJSON_CreateObject();
    cJSON_AddBoolToObject(root, "ok", ok);
    add_usage_json(root);
    add_power_json(root);
    esp_err_t ret = send_json(req, ok ? "200 OK" : "400 Bad Request", root);
    cJSON_Delete(root);
    return ret;
}

static void delayed_restart_task(void *arg)
{
    (void)arg;
    vTaskDelay(pdMS_TO_TICKS(500));
    esp_restart();
}

static esp_err_t reboot_handler(httpd_req_t *req)
{
    cJSON *root = cJSON_CreateObject();
    cJSON_AddBoolToObject(root, "ok", true);
    cJSON_AddStringToObject(root, "message", "reboot scheduled");
    esp_err_t ret = send_json(req, "200 OK", root);
    cJSON_Delete(root);
    diag_log_event("W", "api", "reboot scheduled");
    xTaskCreate(delayed_restart_task, "api_reboot", 2048, NULL, 5, NULL);
    return ret;
}

static esp_err_t redraw_handler(httpd_req_t *req)
{
    ui_request_redraw();
    diag_log_event("I", "api", "redraw requested");
    cJSON *root = cJSON_CreateObject();
    cJSON_AddBoolToObject(root, "ok", true);
    cJSON_AddStringToObject(root, "message", "redraw requested");
    esp_err_t ret = send_json(req, "200 OK", root);
    cJSON_Delete(root);
    return ret;
}

static esp_err_t display_invert_handler(httpd_req_t *req)
{
    bool invert = false;
    char buf[128] = {0};
    int len = httpd_req_recv(req, buf, sizeof(buf) - 1);
    if (len > 0) {
        cJSON *body = cJSON_Parse(buf);
        if (body) {
            cJSON *item = cJSON_GetObjectItem(body, "invert");
            if (cJSON_IsBool(item)) invert = cJSON_IsTrue(item);
            cJSON_Delete(body);
        }
    }
    display_set_inverted(invert);
    ui_request_redraw();
    cJSON *root = cJSON_CreateObject();
    cJSON_AddBoolToObject(root, "ok", true);
    cJSON_AddBoolToObject(root, "inverted", display_get_inverted());
    esp_err_t ret = send_json(req, "200 OK", root);
    cJSON_Delete(root);
    return ret;
}

static esp_err_t ble_start_handler(httpd_req_t *req)
{
    int rc = ble_usage_init();
    ble_usage_status_t ble;
    ble_usage_get_status(&ble);

    cJSON *root = cJSON_CreateObject();
    cJSON_AddBoolToObject(root, "ok", rc == 0);
    cJSON_AddNumberToObject(root, "rc", rc);
    cJSON_AddNumberToObject(root, "heap_free", heap_caps_get_free_size(MALLOC_CAP_8BIT));
    cJSON_AddNumberToObject(root, "heap_largest", heap_caps_get_largest_free_block(MALLOC_CAP_8BIT));
    cJSON *b = cJSON_AddObjectToObject(root, "ble");
    cJSON_AddBoolToObject(b, "ready", ble.ready);
    cJSON_AddBoolToObject(b, "advertising", ble.advertising);
    cJSON_AddBoolToObject(b, "connected", ble.connected);
    cJSON_AddStringToObject(b, "last_error", ble.last_error);
    esp_err_t ret = send_json(req, rc == 0 ? "200 OK" : "503 Service Unavailable", root);
    cJSON_Delete(root);
    return ret;
}

static bool parse_mode_name(const char *name, app_mode_t *mode)
{
    if (!name || !mode) return false;
    if (!strcmp(name, "answers")) *mode = APP_MODE_ANSWERS;
    else if (!strcmp(name, "fortune")) *mode = APP_MODE_FORTUNE;
    else if (!strcmp(name, "merit")) *mode = APP_MODE_MERIT;
    else if (!strcmp(name, "ble") || !strcmp(name, "pager")) *mode = APP_MODE_BT_PAGER;
    else if (!strcmp(name, "clock")) *mode = APP_MODE_CLOCK;
    else if (!strcmp(name, "mbti")) *mode = APP_MODE_MBTI_GUIDE;
    else if (!strcmp(name, "menu") || !strcmp(name, "apps")) *mode = APP_MODE_APP_MENU;
    else if (!strcmp(name, "usage") || !strcmp(name, "claude")) *mode = APP_MODE_CLAUDE_USAGE;
    else if (!strcmp(name, "setup") || !strcmp(name, "settings")) *mode = APP_MODE_SETUP;
    else if (!strcmp(name, "wireless") || !strcmp(name, "wifi")) *mode = APP_MODE_WIRELESS;
    else if (!strcmp(name, "safe") || !strcmp(name, "status")) *mode = APP_MODE_SAFE_STATUS;
    else return false;
    return true;
}

static esp_err_t mode_post_handler(httpd_req_t *req)
{
    char body[128];
    esp_err_t err = read_body(req, body, sizeof(body));
    if (err == ESP_ERR_NO_MEM) {
        httpd_resp_send_err(req, HTTPD_413_CONTENT_TOO_LARGE, "payload too large");
        return ESP_FAIL;
    }
    if (err != ESP_OK) {
        httpd_resp_send_err(req, HTTPD_400_BAD_REQUEST, "failed to read body");
        return ESP_FAIL;
    }

    cJSON *json = cJSON_Parse(body);
    if (!json) {
        httpd_resp_send_err(req, HTTPD_400_BAD_REQUEST, "bad json");
        return ESP_FAIL;
    }

    bool ok = false;
    app_mode_t mode = current_mode();
    cJSON *mode_item = cJSON_GetObjectItem(json, "mode");
    if (cJSON_IsNumber(mode_item)) {
        int requested = mode_item->valueint;
        if (requested >= APP_MODE_ANSWERS && requested <= APP_MODE_SAFE_STATUS) {
            mode = (app_mode_t)requested;
            ok = true;
        }
    } else if (cJSON_IsString(mode_item)) {
        ok = parse_mode_name(mode_item->valuestring, &mode);
    }

    if (ok) {
        set_current_mode(mode);
        ui_request_redraw();
        diag_log_event("I", "api", "mode=%d", mode);
    }

    cJSON *root = cJSON_CreateObject();
    cJSON_AddBoolToObject(root, "ok", ok);
    cJSON_AddNumberToObject(root, "mode", current_mode());
    if (!ok) cJSON_AddStringToObject(root, "error", "invalid mode");
    esp_err_t ret = send_json(req, ok ? "200 OK" : "400 Bad Request", root);
    cJSON_Delete(root);
    cJSON_Delete(json);
    return ret;
}

static esp_err_t ota_url_handler(httpd_req_t *req)
{
    char body[640];
    esp_err_t err = read_body(req, body, sizeof(body));
    if (err == ESP_ERR_NO_MEM) {
        httpd_resp_send_err(req, HTTPD_413_CONTENT_TOO_LARGE, "payload too large");
        return ESP_FAIL;
    }
    if (err != ESP_OK) {
        httpd_resp_send_err(req, HTTPD_400_BAD_REQUEST, "failed to read body");
        return ESP_FAIL;
    }

    cJSON *json = cJSON_Parse(body);
    if (!json) {
        httpd_resp_send_err(req, HTTPD_400_BAD_REQUEST, "bad json");
        return ESP_FAIL;
    }

    cJSON *url_item = cJSON_GetObjectItem(json, "url");
    if (!cJSON_IsString(url_item) || !url_item->valuestring[0]) {
        cJSON_Delete(json);
        httpd_resp_send_err(req, HTTPD_400_BAD_REQUEST, "missing url");
        return ESP_FAIL;
    }

    char url[256] = {0};
    char password[48] = {0};
    char ssid[33] = {0};
    char pwd[65] = {0};
    strlcpy(url, url_item->valuestring, sizeof(url));

    cJSON *password_item = cJSON_GetObjectItem(json, "password");
    cJSON *ssid_item = cJSON_GetObjectItem(json, "ssid");
    cJSON *pwd_item = cJSON_GetObjectItem(json, "pwd");
    cJSON *reboot_item = cJSON_GetObjectItem(json, "reboot");

    if (cJSON_IsString(password_item)) strlcpy(password, password_item->valuestring, sizeof(password));
    if (cJSON_IsString(ssid_item)) strlcpy(ssid, ssid_item->valuestring, sizeof(ssid));
    if (cJSON_IsString(pwd_item)) strlcpy(pwd, pwd_item->valuestring, sizeof(pwd));

    ota_wifi_request_t ota = {
        .url = url,
        .password = password[0] ? password : NULL,
        .ssid = { ssid[0] ? ssid : NULL, NULL, ssid[0] ? ssid : NULL },
        .pwd = { pwd[0] ? pwd : NULL, NULL, pwd[0] ? pwd : NULL },
    };

    int save_err = wifi_save_ota_request(&ota);
    bool reboot = cJSON_IsBool(reboot_item) && cJSON_IsTrue(reboot_item);
    bool boot_set = false;
    if (save_err == 0 && reboot) {
        const esp_partition_t *updater = esp_partition_find_first(
            ESP_PARTITION_TYPE_APP, ESP_PARTITION_SUBTYPE_APP_OTA_1, "updater");
        if (updater && esp_ota_set_boot_partition(updater) == ESP_OK) {
            if (wifi_mark_ota_reboot_armed() == 0) {
                boot_set = true;
                diag_log_event("W", "ota", "reboot to updater");
                xTaskCreate(delayed_restart_task, "ota_reboot", 2048, NULL, 5, NULL);
            }
        }
    }

    cJSON *root = cJSON_CreateObject();
    cJSON_AddBoolToObject(root, "ok", save_err == 0);
    cJSON_AddNumberToObject(root, "err", save_err);
    cJSON_AddBoolToObject(root, "reboot_requested", reboot);
    cJSON_AddBoolToObject(root, "boot_set_to_updater", boot_set);
    cJSON_AddStringToObject(root, "url", url);
    esp_err_t ret = send_json(req, save_err == 0 ? "200 OK" : "500 Internal Server Error", root);
    cJSON_Delete(root);
    cJSON_Delete(json);
    return ret;
}

void debug_server_start(void)
{
    if (s_httpd) return;

    httpd_config_t cfg = HTTPD_DEFAULT_CONFIG();
    cfg.uri_match_fn = httpd_uri_match_wildcard;
    cfg.stack_size = 6144;
    cfg.max_uri_handlers = 16;
    cfg.max_open_sockets = 2;
    cfg.lru_purge_enable = true;

    esp_err_t err = httpd_start(&s_httpd, &cfg);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "start failed: %s", esp_err_to_name(err));
        return;
    }

    const httpd_uri_t options = {
        .uri = "/*",
        .method = HTTP_OPTIONS,
        .handler = options_handler,
    };
    const httpd_uri_t status = {
        .uri = "/api/status",
        .method = HTTP_GET,
        .handler = status_get_handler,
    };
    const httpd_uri_t usage = {
        .uri = "/api/usage",
        .method = HTTP_GET,
        .handler = status_get_handler,
    };
    const httpd_uri_t health = {
        .uri = "/api/health",
        .method = HTTP_GET,
        .handler = health_get_handler,
    };
    const httpd_uri_t logs = {
        .uri = "/api/logs",
        .method = HTTP_GET,
        .handler = logs_get_handler,
    };
    const httpd_uri_t heap = {
        .uri = "/api/debug/heap",
        .method = HTTP_GET,
        .handler = heap_get_handler,
    };
    const httpd_uri_t push = {
        .uri = "/api/push",
        .method = HTTP_POST,
        .handler = usage_push_handler,
    };
    const httpd_uri_t redraw = {
        .uri = "/api/redraw",
        .method = HTTP_POST,
        .handler = redraw_handler,
    };
    const httpd_uri_t display_invert = {
        .uri = "/api/display/invert",
        .method = HTTP_POST,
        .handler = display_invert_handler,
    };
    const httpd_uri_t ota = {
        .uri = "/api/ota/url",
        .method = HTTP_POST,
        .handler = ota_url_handler,
    };
    const httpd_uri_t ota_status = {
        .uri = "/api/ota/status",
        .method = HTTP_GET,
        .handler = ota_status_handler,
    };
    const httpd_uri_t reboot = {
        .uri = "/api/reboot",
        .method = HTTP_POST,
        .handler = reboot_handler,
    };
    const httpd_uri_t mode = {
        .uri = "/api/mode",
        .method = HTTP_POST,
        .handler = mode_post_handler,
    };
    const httpd_uri_t ble_start = {
        .uri = "/api/ble/start",
        .method = HTTP_POST,
        .handler = ble_start_handler,
    };

    register_uri_checked(&options);
    register_uri_checked(&status);
    register_uri_checked(&usage);
    register_uri_checked(&health);
    register_uri_checked(&logs);
    register_uri_checked(&heap);
    register_uri_checked(&push);
    register_uri_checked(&redraw);
    register_uri_checked(&display_invert);
    register_uri_checked(&ota);
    register_uri_checked(&ota_status);
    register_uri_checked(&reboot);
    register_uri_checked(&mode);
    register_uri_checked(&ble_start);
    ESP_LOGI(TAG, "HTTP debug API started");
}
