/**
 * Wallpaper management for Band-0.
 *
 * Handles upload, query, and deletion of custom wallpapers
 * stored in the "wp" data partition.
 *
 * Format: COMPRESS_ARRAY_V2 = LZ4 block → 10000 bytes → 200x200 2bpp
 */

#include <string.h>
#include "esp_log.h"
#include "lz4.h"
#include "app_config.h"
#include "wallpaper.h"
#include "nvs_utils.h"
#include "display_epd.h"

static const char *TAG = "wallpaper";

/* ── Init ────────────────────────────────────────────────────── */
void wallpaper_init(void)
{
    nvs_wp_partition_init();
    LOGI("wallpaper subsystem ready");
}

/* ── Get Info ────────────────────────────────────────────────── */
wallpaper_info_t wallpaper_get_info(void)
{
    wallpaper_info_t info = {
        .has_custom = nvs_wp_has_payload(),
        .length     = nvs_wp_payload_length(),
        .capacity   = WP_PARTITION_CAPACITY,
        .max_upload = WP_PARTITION_CAPACITY,
    };
    return info;
}

/* ── Upload ──────────────────────────────────────────────────── */
int wallpaper_upload(const uint8_t *payload, size_t len)
{
    if (!payload || len == 0) {
        LOGE("upload: empty payload");
        return -1;
    }
    if (len > WP_PARTITION_CAPACITY) {
        LOGE("upload: payload too large (%d > %d)", len, WP_PARTITION_CAPACITY);
        return -1;
    }

    /* Decompress LZ4 block to raw 2bpp framebuffer */
    uint8_t raw[WP_RAW_BYTES];
    int decrypted_len = LZ4_decompress_safe(
        (const char *)payload, (char *)raw,
        len, WP_RAW_BYTES);

    if (decrypted_len < 0) {
        LOGE("LZ4 decompress failed: %d", decrypted_len);
        return -1;
    }

    /* Store compressed payload in wp partition */
    int ret = nvs_wp_write(payload, len);
    if (ret != 0) {
        LOGE("wp partition write failed");
        return -1;
    }

    /* Draw to display */
    display_draw_bitmap(raw, WP_RAW_BYTES);

    LOGI("wallpaper uploaded: compressed=%d, raw=%d bytes", len, decrypted_len);
    return 0;
}

/* ── Delete ──────────────────────────────────────────────────── */
int wallpaper_delete(void)
{
    int ret = nvs_wp_erase();
    if (ret == 0) {
        LOGI("wallpaper deleted");
        display_clear();
    }
    return ret;
}

/* ── Draw If Present ─────────────────────────────────────────── */
bool wallpaper_draw_if_present(void)
{
    if (!nvs_wp_has_payload()) return false;

    /* Read compressed payload */
    uint8_t compressed[WP_PARTITION_CAPACITY];
    int compressed_len = nvs_wp_payload_length();
    if (compressed_len <= 0 || compressed_len > (int)sizeof(compressed)) {
        return false;
    }

    int read_len = nvs_wp_read(compressed, compressed_len);
    if (read_len != compressed_len) return false;

    /* Decompress */
    uint8_t raw[WP_RAW_BYTES];
    int dec = LZ4_decompress_safe((const char *)compressed, (char *)raw,
                                   compressed_len, WP_RAW_BYTES);
    if (dec < 0) {
        LOGE("wallpaper LZ4 decompress failed: %d", dec);
        return false;
    }

    display_draw_bitmap(raw, WP_RAW_BYTES);
    LOGI("custom wallpaper drawn (%d bytes decompressed)", dec);
    return true;
}
