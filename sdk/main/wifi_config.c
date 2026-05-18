/**
 * Wi-Fi configuration and OTA request storage for Band-0.
 *
 * Manages Wi-Fi STA connections, SoftAP portal, and
 * persists OTA+Wi-Fi credentials to NVS for the updater.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
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

/* ── Wi-Fi Event Group Bits ──────────────────────────────────── */
#define WIFI_CONNECTED_BIT   BIT0
#define WIFI_FAIL_BIT        BIT1

static EventGroupHandle_t s_wifi_event_group = NULL;
static int s_retry_count = 0;

/* ── Event Handler ───────────────────────────────────────────── */
static void wifi_event_handler(void *arg, esp_event_base_t event_base,
                               int32_t event_id, void *event_data)
{
    if (event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_START) {
        esp_wifi_connect();
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

    esp_netif_create_default_wifi_sta();
    esp_netif_create_default_wifi_ap();

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK(esp_wifi_init(&cfg));

    ESP_ERROR_CHECK(esp_event_handler_instance_register(
        WIFI_EVENT, ESP_EVENT_ANY_ID, &wifi_event_handler, NULL, NULL));
    ESP_ERROR_CHECK(esp_event_handler_instance_register(
        IP_EVENT, IP_EVENT_STA_GOT_IP, &wifi_event_handler, NULL, NULL));

    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_NULL));
    ESP_ERROR_CHECK(esp_wifi_start());

    s_wifi_event_group = xEventGroupCreate();
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
                .threshold.authmode = WIFI_AUTH_WPA2_PSK,
            },
        };
        strlcpy((char *)wifi_cfg.sta.ssid, ssid, sizeof(wifi_cfg.sta.ssid));
        if (pwd[0]) {
            strlcpy((char *)wifi_cfg.sta.password, pwd, sizeof(wifi_cfg.sta.password));
        }
        ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_STA));
        ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_STA, &wifi_cfg));
        esp_wifi_connect();

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
    wifi_config_t ap_cfg = {
        .ap = {
            .ssid = "Band-0 Setup",
            .ssid_len = 11,
            .channel = 6,
            .max_connection = 4,
            .authmode = WIFI_AUTH_OPEN,
        },
    };
    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_APSTA));
    ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_AP, &ap_cfg));
    LOGI("SoftAP started: 'Band-0 Setup'");
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
        if (req->ssid[i] && req->ssid[i][0]) {
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
        nvs_commit(nvs);
    }
    nvs_close(nvs);
    return err;
}

int wifi_clear_ota_request(void)
{
    nvs_handle_t nvs;
    int err = nvs_open(NVS_OTA_NS, NVS_READWRITE, &nvs);
    if (err != ESP_OK) return err;

    const char *keys[] = {
        KEY_URL, KEY_PASSWORD, KEY_SSID_1, KEY_PWD_1,
        KEY_SSID_2, KEY_PWD_2, KEY_STA_SSID, KEY_STA_PWD,
        KEY_RESULT, "fail_reason", "result_for",
    };
    for (size_t i = 0; i < sizeof(keys) / sizeof(keys[0]); i++) {
        nvs_erase_key(nvs, keys[i]);
    }
    nvs_commit(nvs);
    nvs_close(nvs);
    return 0;
}
