/*
 * HTTPS OTA downloader recovered from updater.bin.
 *
 * True address: 0x4200706c.
 * Raw Ghidra file:
 *   reverse/decompiled/updater/functions/ram:4201706c_FUN_ram_4201706c.c
 *
 * Key log evidence:
 *   "OTA OK: %d bytes written to %s"
 *   ESP_HTTPS_OTA_EVENT
 */

#include <stdint.h>

typedef void (*ota_progress_cb_t)(int written, int total, void *ctx);

int ota_download_to_main_recovered(const char *url, ota_progress_cb_t cb, void *ctx)
{
    const esp_partition_t *main = esp_partition_find_first(
        ESP_PARTITION_TYPE_APP, ESP_PARTITION_SUBTYPE_APP_OTA_0, "main");
    if (main == NULL) {
        updater_log_error("no main partition");
        return 0x105;
    }

    if (strcmp(main->label, "main") != 0) {
        updater_log_error("partition label mismatch");
        return 0x103;
    }

    esp_https_ota_config_t cfg = {0};
    cfg.url = url;
    cfg.timeout_ms = 15000;
    cfg.keep_alive_enable = true;
    cfg.skip_cert_common_name_check = true;

    esp_https_ota_handle_t ota = NULL;
    int err = esp_https_ota_begin(&cfg, &ota);
    if (err != 0 || ota == NULL) {
        updater_log_error("esp_https_ota_begin failed");
        return err;
    }

    int total = esp_https_ota_get_image_size(ota);
    int last_percent = -1;
    while ((err = esp_https_ota_perform(ota)) == ESP_ERR_HTTPS_OTA_IN_PROGRESS) {
        int written = esp_https_ota_get_image_len_read(ota);
        if (cb != NULL) {
            cb(written, total > 0 ? total : written, ctx);
        }
        if (total > 0) {
            int percent = written * 100 / total;
            if (percent != last_percent && percent % 10 == 0) {
                updater_log("downloaded %d / %d (%d%%)", written, total, percent);
                last_percent = percent;
            }
        }
    }

    if (err != 0) {
        esp_https_ota_abort(ota);
        return err;
    }
    err = esp_https_ota_finish(ota);
    if (err != 0) {
        updater_log_error("esp_https_ota_finish failed");
        return err;
    }

    int written = esp_https_ota_get_image_len_read(ota);
    updater_log("OTA OK: %d bytes written to %s", written, main->label);
    if (cb != NULL) {
        cb(written, total > 0 ? total : written, ctx);
    }
    return 0;
}

