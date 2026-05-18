/**
 * Band-0 Updater / Recovery Application
 *
 * Reads OTA URL from NVS, connects to Wi-Fi, downloads firmware,
 * writes to the main partition, and reboots.
 *
 * Based on decompiled updater.bin (true address 0x420062da).
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_partition.h"
#include "nvs_flash.h"
#include "esp_https_ota.h"
#include "esp_timer.h"
#include "driver/gpio.h"

static const char *TAG = "updater";

/* ── NVS Keys ────────────────────────────────────────────────── */
#define NVS_OTA_NS   "ota"
#define KEY_URL      "url"
#define KEY_PASSWORD "password"
#define KEY_SSID_1   "ssid_1"
#define KEY_PWD_1    "pwd_1"
#define KEY_SSID_2   "ssid_2"
#define KEY_PWD_2    "pwd_2"
#define KEY_STA_SSID "sta.ssid"
#define KEY_STA_PWD  "sta.pswd"
#define KEY_ATTEMPT  "attempt_id"
#define KEY_RESULT   "result"

/* ── Updater Request ─────────────────────────────────────────── */
typedef struct {
    char url[256];
    char password[32];
    int  attempt_id;
    bool has_url;
    int  wifi_count;
    struct {
        char ssid[33];
        char pwd[65];
        bool has_ssid;
        bool has_pwd;
    } wifi[3];
} updater_request_t;

/* ── Forward Declarations ────────────────────────────────────── */
static int  load_updater_request(updater_request_t *req);
static int  wifi_connect_for_ota(const char *ssid, const char *pwd, int timeout_ms);
static void wifi_disconnect_for_ota(void);
static int  ota_download_to_main(const char *url);
static void record_update_result(int attempt_id, int result, const char *reason);
static void set_boot_partition_main(void);
static void fail_and_reboot(const char *reason);

/* ── Load Request from NVS ───────────────────────────────────── */
static int load_updater_request(updater_request_t *req)
{
    if (!req) return -1;
    memset(req, 0, sizeof(*req));

    nvs_handle_t nvs;
    esp_err_t err = nvs_open(NVS_OTA_NS, NVS_READONLY, &nvs);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "no ota namespace: %s", esp_err_to_name(err));
        return 0x1102;
    }

    size_t len = sizeof(req->url);
    err = nvs_get_str(nvs, KEY_URL, req->url, &len);
    req->has_url = (err == ESP_OK && req->url[0]);

    len = sizeof(req->password);
    if (nvs_get_str(nvs, KEY_PASSWORD, req->password, &len) != ESP_OK) {
        req->password[0] = '\0';
    }

    int32_t aid = 0;
    nvs_get_i32(nvs, KEY_ATTEMPT, &aid);
    req->attempt_id = (int)aid;

    /* Load up to 3 Wi-Fi profiles */
    const char *ssid_keys[] = {KEY_SSID_1, KEY_SSID_2, KEY_STA_SSID};
    const char *pwd_keys[]  = {KEY_PWD_1,  KEY_PWD_2,  KEY_STA_PWD};
    for (int i = 0; i < 3; i++) {
        len = sizeof(req->wifi[i].ssid);
        if (nvs_get_str(nvs, ssid_keys[i], req->wifi[i].ssid, &len) == ESP_OK) {
            req->wifi[i].has_ssid = true;
            len = sizeof(req->wifi[i].pwd);
            if (nvs_get_str(nvs, pwd_keys[i], req->wifi[i].pwd, &len) == ESP_OK) {
                req->wifi[i].has_pwd = true;
            }
            req->wifi_count = i + 1;
        }
    }

    nvs_close(nvs);
    ESP_LOGI(TAG, "request loaded: url=%s, wifi=%d, attempt=%d",
             req->url, req->wifi_count, req->attempt_id);
    return 0;
}

/* ── Wi-Fi Connect (blocking, for OTA) ───────────────────────── */
static EventGroupHandle_t s_wifi_event_group = NULL;
#define WIFI_CONNECTED_BIT  BIT0
#define WIFI_FAIL_BIT       BIT1

static void wifi_event_handler(void *arg, esp_event_base_t base,
                                int32_t id, void *data)
{
    if (base == WIFI_EVENT && id == WIFI_EVENT_STA_START) {
        esp_wifi_connect();
    } else if (base == WIFI_EVENT && id == WIFI_EVENT_STA_DISCONNECTED) {
        ESP_LOGW(TAG, "Wi-Fi disconnected");
        xEventGroupSetBits(s_wifi_event_group, WIFI_FAIL_BIT);
    } else if (base == IP_EVENT && id == IP_EVENT_STA_GOT_IP) {
        ip_event_got_ip_t *event = (ip_event_got_ip_t *)data;
        ESP_LOGI(TAG, "Got IP: " IPSTR, IP2STR(&event->ip_info.ip));
        xEventGroupSetBits(s_wifi_event_group, WIFI_CONNECTED_BIT);
    }
}

static void wifi_init_for_ota(void)
{
    esp_netif_init();
    esp_event_loop_create_default();
    esp_netif_create_default_wifi_sta();

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    esp_wifi_init(&cfg);

    esp_event_handler_instance_register(WIFI_EVENT, ESP_EVENT_ANY_ID,
                                         wifi_event_handler, NULL, NULL);
    esp_event_handler_instance_register(IP_EVENT, IP_EVENT_STA_GOT_IP,
                                         wifi_event_handler, NULL, NULL);

    esp_wifi_set_mode(WIFI_MODE_STA);
    esp_wifi_start();

    s_wifi_event_group = xEventGroupCreate();
}

static int wifi_connect_for_ota(const char *ssid, const char *pwd, int timeout_ms)
{
    if (!ssid || !*ssid) return -1;

    ESP_LOGI(TAG, "connecting to Wi-Fi: %s", ssid);

    wifi_config_t cfg = {
        .sta = {
            .threshold.authmode = WIFI_AUTH_WPA2_PSK,
        },
    };
    strlcpy((char *)cfg.sta.ssid, ssid, sizeof(cfg.sta.ssid));
    if (pwd && *pwd) {
        strlcpy((char *)cfg.sta.password, pwd, sizeof(cfg.sta.password));
    }
    esp_wifi_set_config(WIFI_IF_STA, &cfg);
    esp_wifi_connect();

    EventBits_t bits = xEventGroupWaitBits(
        s_wifi_event_group,
        WIFI_CONNECTED_BIT | WIFI_FAIL_BIT,
        pdTRUE, pdFALSE,
        pdMS_TO_TICKS(timeout_ms));

    if (bits & WIFI_CONNECTED_BIT) {
        ESP_LOGI(TAG, "Wi-Fi connected");
        return 0;
    }
    ESP_LOGW(TAG, "Wi-Fi connect failed (timeout=%dms)", timeout_ms);
    return -1;
}

static void wifi_disconnect_for_ota(void)
{
    esp_wifi_disconnect();
    vTaskDelay(pdMS_TO_TICKS(500));
}

/* ── OTA Download ────────────────────────────────────────────── */
static int ota_download_to_main(const char *url)
{
    if (!url || !*url) return -1;

    ESP_LOGI(TAG, "OTA from: %s", url);

    const esp_partition_t *main = esp_partition_find_first(
        ESP_PARTITION_TYPE_APP, ESP_PARTITION_SUBTYPE_APP_OTA_0, "main");
    if (!main) {
        ESP_LOGE(TAG, "main partition not found");
        return 0x105;
    }

    esp_https_ota_config_t cfg = {
        .http_config = &(esp_http_client_config_t){
            .url = url,
            .timeout_ms = 15000,
            .keep_alive_enable = true,
            .skip_cert_common_name_check = true,
        },
        .bulk_flash_erase = true,
    };

    esp_https_ota_handle_t ota = NULL;
    esp_err_t err = esp_https_ota_begin(&cfg, &ota);
    if (err != ESP_OK || !ota) {
        ESP_LOGE(TAG, "esp_https_ota_begin: %s", esp_err_to_name(err));
        return err;
    }

    int total = esp_https_ota_get_image_size(ota);
    ESP_LOGI(TAG, "image size: %d bytes", total);

    int last_pct = -1;
    while ((err = esp_https_ota_perform(ota)) == ESP_ERR_HTTPS_OTA_IN_PROGRESS) {
        int written = esp_https_ota_get_image_len_read(ota);
        if (total > 0) {
            int pct = written * 100 / total;
            if (pct != last_pct && pct % 10 == 0) {
                ESP_LOGI(TAG, "downloaded %d/%d (%d%%)", written, total, pct);
                last_pct = pct;
            }
        }
        vTaskDelay(pdMS_TO_TICKS(50));
    }

    if (err != ESP_OK) {
        ESP_LOGE(TAG, "OTA perform: %s", esp_err_to_name(err));
        esp_https_ota_abort(ota);
        return err;
    }

    err = esp_https_ota_finish(ota);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "OTA finish: %s", esp_err_to_name(err));
        return err;
    }

    int written = esp_https_ota_get_image_len_read(ota);
    ESP_LOGI(TAG, "OTA OK: %d bytes written", written);
    return 0;
}

/* ── NVS Result Recording ────────────────────────────────────── */
static void record_update_result(int attempt_id, int result, const char *reason)
{
    nvs_handle_t nvs;
    if (nvs_open(NVS_OTA_NS, NVS_READWRITE, &nvs) != ESP_OK) return;
    nvs_set_i32(nvs, "result", result);
    nvs_set_i32(nvs, "result_for", attempt_id);
    if (reason) {
        nvs_set_str(nvs, "fail_reason", reason);
    } else {
        nvs_erase_key(nvs, "fail_reason");
    }
    nvs_commit(nvs);
    nvs_close(nvs);
}

/* ── Set Boot Partition ──────────────────────────────────────── */
static void set_boot_partition_main(void)
{
    const esp_partition_t *main = esp_partition_find_first(
        ESP_PARTITION_TYPE_APP, ESP_PARTITION_SUBTYPE_APP_OTA_0, "main");
    if (main) {
        esp_ota_set_boot_partition(main);
        ESP_LOGI(TAG, "boot partition set to main");
    }
}

/* ── Fail and Reboot ─────────────────────────────────────────── */
static void fail_and_reboot(const char *reason)
{
    ESP_LOGE(TAG, "FAIL: %s — rebooting to main", reason);
    record_update_result(0, -1, reason);
    set_boot_partition_main();
    vTaskDelay(pdMS_TO_TICKS(1500));
    esp_restart();
}

/* ── Entry Point ─────────────────────────────────────────────── */
void app_main(void)
{
    ESP_LOGI(TAG, "Band-0 Updater v1.2.5");

    /* Initialize NVS */
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        nvs_flash_erase();
        nvs_flash_init();
    }

    /* Initialize Wi-Fi */
    wifi_init_for_ota();

    /* Load OTA request */
    updater_request_t req;
    int load_err = load_updater_request(&req);
    if (load_err != 0 || !req.has_url) {
        fail_and_reboot("no OTA URL");
    }

    /* Try up to 3 attempts */
    for (int attempt = 1; attempt <= 3; attempt++) {
        ESP_LOGI(TAG, "attempt %d/3", attempt);

        for (int i = 0; i < (req.wifi_count > 0 ? req.wifi_count : 1); i++) {
            /* If no Wi-Fi profiles, try with empty (open network) */
            const char *ssid = req.wifi[i].has_ssid ? req.wifi[i].ssid : NULL;
            const char *pwd  = req.wifi[i].has_pwd  ? req.wifi[i].pwd  : NULL;

            if (!ssid) continue;

            int w_err = wifi_connect_for_ota(ssid, pwd, 12000);
            if (w_err != 0) {
                wifi_disconnect_for_ota();
                continue;
            }

            int ota_err = ota_download_to_main(req.url);
            wifi_disconnect_for_ota();

            if (ota_err == 0) {
                record_update_result(req.attempt_id, 0, NULL);
                set_boot_partition_main();
                vTaskDelay(pdMS_TO_TICKS(1500));
                ESP_LOGI(TAG, "OTA success, restarting...");
                esp_restart();
            } else {
                ESP_LOGW(TAG, "OTA attempt %d failed: %d", attempt, ota_err);
            }
        }

        if (attempt < 3) {
            vTaskDelay(pdMS_TO_TICKS(3000));
        }
    }

    fail_and_reboot("main_corrupt; reflash via USB");
}
