/**
 * Wi-Fi configuration and OTA request storage for Band-0.
 *
 * Manages Wi-Fi STA connections, SoftAP portal, and
 * persists OTA+Wi-Fi credentials to NVS for the updater.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "esp_netif.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "lwip/inet.h"
#include "app_config.h"
#include "wifi_config.h"

static const char *TAG = "wifi_cfg";

/* ── NVS Keys ────────────────────────────────────────────────── */
#define KEY_URL       "url"
#define KEY_PASSWORD  "password"
#define KEY_SSID_1    "ssid_1"
#define KEY_PWD_1     "pwd_1"
#define KEY_SSID_2    "ssid_2"
#define KEY_PWD_2     "pwd_2"
#define KEY_STA_SSID  "sta.ssid"
#define KEY_STA_PWD   "sta.pswd"
#define KEY_ATTEMPT   "attempt_id"
#define KEY_RESULT    "result"
#define KEY_RESULT_FOR "result_for"
#define KEY_FAIL      "fail_reason"
#define KEY_ARMED     "armed_attempt"

#define BAND0_AP_SSID      "Band-0 Setup"
#define BAND0_AP_IP        "192.168.50.1"
#define BAND0_AP_GATEWAY   "192.168.50.1"
#define BAND0_AP_NETMASK   "255.255.255.0"

/* ── Wi-Fi Event Group Bits ──────────────────────────────────── */
#define WIFI_CONNECTED_BIT   BIT0
#define WIFI_FAIL_BIT        BIT1

static EventGroupHandle_t s_wifi_event_group = NULL;
static esp_netif_t *s_sta_netif = NULL;
static esp_netif_t *s_ap_netif = NULL;
static int s_retry_count = 0;

static void configure_softap_ip(void)
{
    if (!s_ap_netif) return;

    esp_netif_ip_info_t ip_info = {0};
    inet_aton(BAND0_AP_IP, &ip_info.ip);
    inet_aton(BAND0_AP_GATEWAY, &ip_info.gw);
    inet_aton(BAND0_AP_NETMASK, &ip_info.netmask);

    ESP_ERROR_CHECK_WITHOUT_ABORT(esp_netif_dhcps_stop(s_ap_netif));
    ESP_ERROR_CHECK(esp_netif_set_ip_info(s_ap_netif, &ip_info));
    ESP_ERROR_CHECK_WITHOUT_ABORT(esp_netif_dhcps_start(s_ap_netif));
}

/* ── Event Handler ───────────────────────────────────────────── */
static void wifi_event_handler(void *arg, esp_event_base_t event_base,
                               int32_t event_id, void *event_data)
{
    if (event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_START) {
        /* Connection is started explicitly after STA config is installed.
           Auto-connecting here races esp_wifi_set_config() after set_mode(). */
    } else if (event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_DISCONNECTED) {
        if (s_retry_count < 3) {
            s_retry_count++;
            ESP_LOGW(TAG, "Wi-Fi disconnect, retry %d/3", s_retry_count);
            esp_wifi_connect();
        } else {
            xEventGroupSetBits(s_wifi_event_group, WIFI_FAIL_BIT);
        }
    } else if (event_base == IP_EVENT && event_id == IP_EVENT_STA_GOT_IP) {
        ip_event_got_ip_t *event = (ip_event_got_ip_t *)event_data;
        ESP_LOGI(TAG, "Got IP: " IPSTR, IP2STR(&event->ip_info.ip));
        s_retry_count = 0;
        xEventGroupSetBits(s_wifi_event_group, WIFI_CONNECTED_BIT);
    }
}

/* ── Init Wi-Fi ──────────────────────────────────────────────── */
void wifi_init(void)
{
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    s_sta_netif = esp_netif_create_default_wifi_sta();
    s_ap_netif = esp_netif_create_default_wifi_ap();
    configure_softap_ip();

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK(esp_wifi_init(&cfg));
    ESP_ERROR_CHECK(esp_wifi_set_storage(WIFI_STORAGE_RAM));

    ESP_ERROR_CHECK(esp_event_handler_instance_register(
        WIFI_EVENT, ESP_EVENT_ANY_ID, &wifi_event_handler, NULL, NULL));
    ESP_ERROR_CHECK(esp_event_handler_instance_register(
        IP_EVENT, IP_EVENT_STA_GOT_IP, &wifi_event_handler, NULL, NULL));

    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_NULL));
    s_wifi_event_group = xEventGroupCreate();
    ESP_ERROR_CHECK(esp_wifi_start());
    LOGI("Wi-Fi initialized");
}

/* ── Connect to Saved Network ────────────────────────────────── */
int wifi_connect_or_portal(void)
{
    /* Read saved credentials from NVS */
    nvs_handle_t nvs;
    char ssid[33] = {0}, pwd[65] = {0};

    esp_err_t err = nvs_open(NVS_OTA_NS, NVS_READONLY, &nvs);
    if (err == ESP_OK) {
        size_t len = sizeof(ssid);
        nvs_get_str(nvs, KEY_STA_SSID, ssid, &len);
        len = sizeof(pwd);
        nvs_get_str(nvs, KEY_STA_PWD, pwd, &len);
        nvs_close(nvs);
    }

    if (ssid[0] != '\0') {
        LOGI("Connecting to saved SSID: %s", ssid);
        wifi_config_t wifi_cfg = {
            .sta = {
                .threshold.authmode = WIFI_AUTH_OPEN,
            },
        };
        strlcpy((char *)wifi_cfg.sta.ssid, ssid, sizeof(wifi_cfg.sta.ssid));
        if (pwd[0]) {
            strlcpy((char *)wifi_cfg.sta.password, pwd, sizeof(wifi_cfg.sta.password));
        }
        s_retry_count = 0;
        xEventGroupClearBits(s_wifi_event_group, WIFI_CONNECTED_BIT | WIFI_FAIL_BIT);
        ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_STA));
        ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_STA, &wifi_cfg));
        ESP_ERROR_CHECK(esp_wifi_connect());

        EventBits_t bits = xEventGroupWaitBits(
            s_wifi_event_group,
            WIFI_CONNECTED_BIT | WIFI_FAIL_BIT,
            pdFALSE, pdFALSE,
            pdMS_TO_TICKS(15000));

        if (bits & WIFI_CONNECTED_BIT) {
            LOGI("Connected to Wi-Fi");
            return 0;
        }
        LOGW("Wi-Fi connect failed, starting SoftAP");
    }

    /* Fallback: start SoftAP portal */
    esp_wifi_disconnect();
    wifi_config_t ap_cfg = {
        .ap = {
            .ssid = BAND0_AP_SSID,
            .ssid_len = strlen(BAND0_AP_SSID),
            .channel = 6,
            .max_connection = 4,
            .authmode = WIFI_AUTH_OPEN,
        },
    };
    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_AP));
    ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_AP, &ap_cfg));
    LOGI("SoftAP started: '%s' at %s", BAND0_AP_SSID, BAND0_AP_IP);
    return 1;  /* portal mode */
}

/* ── Save OTA Request ────────────────────────────────────────── */
int wifi_save_ota_request(const ota_wifi_request_t *req)
{
    if (!req || !req->url || req->url[0] == '\0') return 0x102;

    nvs_handle_t nvs;
    int err = nvs_open(NVS_OTA_NS, NVS_READWRITE, &nvs);
    if (err != ESP_OK) return err;

    int32_t attempt_id = 0;
    nvs_get_i32(nvs, KEY_ATTEMPT, &attempt_id);
    attempt_id++;

    err = nvs_set_str(nvs, KEY_URL, req->url);
    if (err == 0 && req->password) {
        nvs_set_str(nvs, KEY_PASSWORD, req->password);
    }

    const char *ssid_keys[] = {KEY_SSID_1, KEY_SSID_2, KEY_STA_SSID};
    const char *pwd_keys[]  = {KEY_PWD_1,  KEY_PWD_2,  KEY_STA_PWD};

    for (int i = 0; err == 0 && i < 3; i++) {
        if (!req->ssid[i]) {
            continue;
        }
        if (req->ssid[i][0]) {
            nvs_set_str(nvs, ssid_keys[i], req->ssid[i]);
            if (req->pwd[i] && req->pwd[i][0]) {
                nvs_set_str(nvs, pwd_keys[i], req->pwd[i]);
            } else {
                nvs_erase_key(nvs, pwd_keys[i]);
            }
        } else {
            nvs_erase_key(nvs, ssid_keys[i]);
            nvs_erase_key(nvs, pwd_keys[i]);
        }
    }

    if (err == 0) {
        nvs_set_i32(nvs, KEY_ATTEMPT, attempt_id);
        nvs_erase_key(nvs, KEY_RESULT);
        nvs_erase_key(nvs, KEY_RESULT_FOR);
        nvs_erase_key(nvs, KEY_FAIL);
        nvs_erase_key(nvs, KEY_ARMED);
        nvs_commit(nvs);
    }
    nvs_close(nvs);
    return err;
}

int wifi_mark_ota_reboot_armed(void)
{
    nvs_handle_t nvs;
    int err = nvs_open(NVS_OTA_NS, NVS_READWRITE, &nvs);
    if (err != ESP_OK) return err;

    int32_t attempt_id = 0;
    nvs_get_i32(nvs, KEY_ATTEMPT, &attempt_id);
    err = nvs_set_i32(nvs, KEY_ARMED, attempt_id);
    if (err == ESP_OK) {
        nvs_commit(nvs);
    }
    nvs_close(nvs);
    return err;
}

int wifi_finalize_ota_request_on_main_boot(void)
{
    nvs_handle_t nvs;
    int err = nvs_open(NVS_OTA_NS, NVS_READWRITE, &nvs);
    if (err != ESP_OK) return 0;

    int32_t attempt_id = 0;
    int32_t armed_attempt = 0;
    char url[256] = {0};
    char fail_reason[96] = {0};
    size_t len = sizeof(url);
    bool has_url = (nvs_get_str(nvs, KEY_URL, url, &len) == ESP_OK && url[0]);
    len = sizeof(fail_reason);
    bool has_fail = (nvs_get_str(nvs, KEY_FAIL, fail_reason, &len) == ESP_OK && fail_reason[0]);
    bool has_armed = (nvs_get_i32(nvs, KEY_ARMED, &armed_attempt) == ESP_OK && armed_attempt > 0);

    if (!has_armed && !(has_url && has_fail)) {
        nvs_close(nvs);
        return 0;
    }

    if (has_armed) {
        attempt_id = armed_attempt;
    } else {
        nvs_get_i32(nvs, KEY_ATTEMPT, &attempt_id);
    }

    const char *keys[] = {
        KEY_URL, KEY_PASSWORD, KEY_SSID_1, KEY_PWD_1,
        KEY_SSID_2, KEY_PWD_2, KEY_FAIL, KEY_ARMED,
    };
    for (size_t i = 0; i < sizeof(keys) / sizeof(keys[0]); i++) {
        nvs_erase_key(nvs, keys[i]);
    }
    nvs_set_i32(nvs, KEY_RESULT, 0);
    nvs_set_i32(nvs, KEY_RESULT_FOR, attempt_id);
    nvs_commit(nvs);
    nvs_close(nvs);
    ESP_LOGI(TAG, "cleared completed OTA request (attempt=%ld)", (long)attempt_id);
    return 1;
}

int wifi_clear_ota_request(void)
{
    nvs_handle_t nvs;
    int err = nvs_open(NVS_OTA_NS, NVS_READWRITE, &nvs);
    if (err != ESP_OK) return err;

    const char *keys[] = {
        KEY_URL, KEY_PASSWORD, KEY_SSID_1, KEY_PWD_1,
        KEY_SSID_2, KEY_PWD_2,
        KEY_RESULT, KEY_FAIL, KEY_RESULT_FOR, KEY_ARMED,
    };
    for (size_t i = 0; i < sizeof(keys) / sizeof(keys[0]); i++) {
        nvs_erase_key(nvs, keys[i]);
    }
    nvs_commit(nvs);
    nvs_close(nvs);
    return 0;
}
