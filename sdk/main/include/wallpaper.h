#pragma once

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Wallpaper partition ("wp") capacity */
#define WP_PARTITION_CAPACITY  0x4000

/* Wallpaper dimensions (must match EPD) */
#define WP_WIDTH   200
#define WP_HEIGHT  200
#define WP_RAW_BYTES  10000

/**
 * @brief Information about the current custom wallpaper state.
 */
typedef struct {
    bool   has_custom;
    int    length;
    int    capacity;
    int    max_upload;
} wallpaper_info_t;

/**
 * @brief Query wallpaper partition info.
 */
wallpaper_info_t wallpaper_get_info(void);

/**
 * @brief Upload a custom wallpaper to the wp partition.
 *
 * Accepts COMPRESS_ARRAY_V2 format:
 *   LZ4 block → 10000 bytes → 200x200 2bpp bitmap
 *
 * @param payload  Compressed wallpaper data.
 * @param len      Length of payload.
 * @return 0 on success, negative on error.
 */
int wallpaper_upload(const uint8_t *payload, size_t len);

/**
 * @brief Delete the custom wallpaper (revert to default).
 * @return 0 on success.
 */
int wallpaper_delete(void);

/**
 * @brief Check if a custom wallpaper is stored, and draw it if so.
 * @return true if a custom wallpaper was drawn.
 */
bool wallpaper_draw_if_present(void);

/**
 * @brief Initialize the wp data partition.
 */
void wallpaper_init(void);

#ifdef __cplusplus
}
#endif
