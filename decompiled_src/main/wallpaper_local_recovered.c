/*
 * Wallpaper upload path recovered from main.bin and embedded web UI.
 *
 * Evidence strings:
 *   /wallpaper/info
 *   /wallpaper
 *   400 Bad Request
 *   413 Payload Too Large
 *   COMPRESS_ARRAY_V2 in embedded JavaScript
 *
 * The renderer itself has been reimplemented locally in tools/local_render.py.
 */

#include <stddef.h>
#include <stdint.h>

#define WALLPAPER_WIDTH 200
#define WALLPAPER_HEIGHT 200
#define WALLPAPER_RAW_BYTES 10000
#define WALLPAPER_PARTITION_CAPACITY 0x4000

typedef struct {
    bool has_custom;
    int length;
    int capacity;
    int max_upload;
} wallpaper_info_t;

wallpaper_info_t wallpaper_info_recovered(void)
{
    wallpaper_info_t info = {
        .has_custom = wp_partition_has_payload(),
        .length = wp_partition_payload_length(),
        .capacity = WALLPAPER_PARTITION_CAPACITY,
        .max_upload = WALLPAPER_PARTITION_CAPACITY,
    };
    return info;
}

int wallpaper_upload_recovered(const uint8_t *payload, size_t len)
{
    if (payload == NULL || len == 0) {
        return http_reply_text(400, "400 Bad Request");
    }
    if (len > WALLPAPER_PARTITION_CAPACITY) {
        return http_reply_text(413, "413 Payload Too Large");
    }

    /*
     * Web UI accepts COMPRESS_ARRAY_V2 from the cloud renderer, then sends it
     * directly to this endpoint. Recovered format:
     *   LZ4 block, decompresses to 10000 bytes.
     *   200x200 pixels, 2 bpp, four pixels per byte.
     *   00 = white, 11 = black.
     */
    return wp_partition_write_payload(payload, len);
}

int wallpaper_delete_recovered(void)
{
    return wp_partition_erase_payload();
}

