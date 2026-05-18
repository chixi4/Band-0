/**
 * Cloud OTA firmware query and update.
 *
 * Reimplements the original firmware's:
 *   POST /api/authV2/panel/device/firmware/query
 *
 * With local-first URLs (patchable via kconfig or build-time defines).
 */

#include <string.h>
#include "esp_log.h"
#include "esp_http_client.h"
#include "esp_https_ota.h"
#include "cJSON.h"
#include "app_config.h"
#include "cloud_ota.h"
#include "wifi_config.h"

static const char *TAG = "cloud_ota";

/*
 * Default firmware query endpoint.
 * These can be overridden at build time via -D flags or sdkconfig.
 * For local-only builds, change to http://192.168.4.2:8088/fwq
 */
#ifndef FIRMWARE_QUERY_URL
#define FIRMWARE_QUERY_URL "http://192.168.4.2:8088/fwq"
#endif

#ifndef FIRMWARE_AUTH_TOKEN
#define FIRMWARE_AUTH_TOKEN "Bearer 2782772a1b8f6fb3065c050631185738de5999729682b44095d38f24d405e0e2"
#endif

/* ── HTTP Client Helpers ─────────────────────────────────────── */
static esp_err_t http_read_response(esp_http_client_handle_t client,
                                     char *buf, size_t buf_size)
{
    int total = 0;
    int read = 0;
    do {
        read = esp_http_client_read(client, buf + total, buf_size - total - 1);
        if (read > 0) {
            total += read;
        }
    } while (read > 0 && total < buf_size - 1);
    buf[total] = '\0';
    return ESP_OK;
}

/* ── Firmware Query ──────────────────────────────────────────── */
int cloud_query_firmware_update(firmware_query_result_t *out)
{
    if (!out) return 0x102;
    memset(out, 0, sizeof(*out));

    /* Build JSON body */
    cJSON *body = cJSON_CreateObject();
    cJSON_AddStringToObject(body, "status", "RELEASED");
    cJSON_AddStringToObject(body, "series", "rand");
    cJSON_AddStringToObject(body, "model", "rand_0");
    cJSON_AddNumberToObject(body, "edition", 1);
    char *body_str = cJSON_PrintUnformatted(body);
    cJSON_Delete(body);

    if (!body_str) return 0x108;

    /* Configure HTTP POST */
    esp_http_client_config_t cfg = {
        .url = FIRMWARE_QUERY_URL,
        .method = HTTP_METHOD_POST,
        .timeout_ms = 10000,
        .keep_alive_enable = false,
        .skip_cert_common_name_check = true,
    };

    esp_http_client_handle_t client = esp_http_client_init(&cfg);
    if (!client) {
        free(body_str);
        return 0x101;
    }

    esp_http_client_set_header(client, "Content-Type", "application/json");
    esp_http_client_set_header(client, "Authorization", FIRMWARE_AUTH_TOKEN);
    esp_http_client_set_post_field(client, body_str, strlen(body_str));

    esp_err_t err = esp_http_client_perform(client);
    if (err != ESP_OK) {
        LOGE("firmware query HTTP failed: %s", esp_err_to_name(err));
        esp_http_client_cleanup(client);
        free(body_str);
        return -1;
    }

    int status_code = esp_http_client_get_status_code(client);
    if (status_code < 200 || status_code >= 300) {
        LOGE("firmware query returned %d", status_code);
        esp_http_client_cleanup(client);
        free(body_str);
        return -1;
    }

    /* Read response */
    char response[0x800];
    http_read_response(client, response, sizeof(response));
    esp_http_client_cleanup(client);
    free(body_str);

    /* Parse JSON */
    cJSON *json = cJSON_Parse(response);
    if (!json) {
        LOGE("firmware query: JSON parse failed");
        return 0x108;
    }

    cJSON *need = cJSON_GetObjectItem(json, "needUpdate");
    out->need_update = (need && cJSON_IsBool(need) && cJSON_IsTrue(need));

    cJSON *ver = cJSON_GetObjectItem(json, "version");
    if (ver && cJSON_IsString(ver)) {
        strlcpy(out->version, ver->valuestring, sizeof(out->version));
    }

    cJSON *host = cJSON_GetObjectItem(json, "host");
    cJSON *path = cJSON_GetObjectItem(json, "path");
    cJSON *query = cJSON_GetObjectItem(json, "query");

    const char *h = (host && cJSON_IsString(host)) ? host->valuestring : "";
    const char *p = (path && cJSON_IsString(path)) ? path->valuestring : "";
    const char *q = (query && cJSON_IsString(query)) ? query->valuestring : "";

    /* Build URL: http://<host><path><query> */
    snprintf(out->url, sizeof(out->url), "http://%s%s%s", h, p, q);

    cJSON *ed = cJSON_GetObjectItem(json, "edition");
    if (ed && cJSON_IsNumber(ed)) {
        out->edition = ed->valueint;
    }

    cJSON_Delete(json);

    LOGI("firmware query: needUpdate=%d, version=%s, url=%s",
         out->need_update, out->version, out->url);

    return 0;
}

/* ── Start OTA ───────────────────────────────────────────────── */
int cloud_start_ota(const char *url)
{
    if (!url || !*url) {
        LOGE("OTA: empty URL");
        return -1;
    }

    LOGI("Starting OTA from: %s", url);

    esp_https_ota_config_t ota_cfg = {
        .http_config = &(esp_http_client_config_t){
            .url = url,
            .timeout_ms = 15000,
            .keep_alive_enable = true,
            .skip_cert_common_name_check = true,
        },
        .http_client_init_cb = NULL,
        .bulk_flash_erase = true,
    };

    esp_https_ota_handle_t ota = NULL;
    esp_err_t err = esp_https_ota_begin(&ota_cfg, &ota);
    if (err != ESP_OK || !ota) {
        LOGE("esp_https_ota_begin failed: %s", esp_err_to_name(err));
        return err;
    }

    int total = esp_https_ota_get_image_size(ota);
    ESP_LOGI(TAG, "OTA image size: %d bytes", total);

    while ((err = esp_https_ota_perform(ota)) == ESP_ERR_HTTPS_OTA_IN_PROGRESS) {
        int written = esp_https_ota_get_image_len_read(ota);
        if (total > 0 && written % (64 * 1024) == 0) {
            LOGI("OTA progress: %d / %d", written, total);
        }
    }

    if (err != ESP_OK) {
        LOGE("OTA perform failed: %s", esp_err_to_name(err));
        esp_https_ota_abort(ota);
        return err;
    }

    err = esp_https_ota_finish(ota);
    if (err != ESP_OK) {
        LOGE("OTA finish failed: %s", esp_err_to_name(err));
        return err;
    }

    int written = esp_https_ota_get_image_len_read(ota);
    LOGI("OTA OK: %d bytes written, rebooting...", written);

    /* Clear OTA request and reboot */
    wifi_clear_ota_request();
    vTaskDelay(pdMS_TO_TICKS(500));
    esp_restart();

    return 0;  /* never reached */
}

/* ── Check for Pending OTA Setup Request in NVS ─────────────── */
bool cloud_load_pending_request(pending_request_t *out)
{
    if (!out) return false;

    nvs_handle_t nvs;
    if (nvs_open(NVS_OTA_NS, NVS_READONLY, &nvs) != ESP_OK) return false;

    char url[256] = {0};
    size_t len = sizeof(url);
    bool has_url = (nvs_get_str(nvs, "url", url, &len) == ESP_OK);

    nvs_close(nvs);

    if (!has_url) return false;

    out->request_type = 1;
    out->request_arg = 0;
    snprintf(out->message, sizeof(out->message),
             "OTA URL: %s", url);
    return true;
}
