#pragma once

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-Ink display: JD79650 compatible, 200x200 BW */
#define EPD_WIDTH       200
#define EPD_HEIGHT      200
#define EPD_RAW_BYTES   10000   /* 200*200 / 4 (2bpp) */

/* Text style constants */
#define TEXT_STYLE_NORMAL    0
#define TEXT_STYLE_INVERTED  1
#define TEXT_STYLE_TITLE     2

/**
 * @brief Initialize the EPD display and SPI bus.
 * @return 0 on success.
 */
int display_init(void);

/**
 * @brief Return true once the display is initialized.
 */
bool display_is_ready(void);

/**
 * @brief Clear the display to white.
 */
void display_clear(void);

/**
 * @brief Refresh (update) the display from the internal framebuffer.
 */
void display_refresh(void);

/**
 * @brief Begin a new frame (clears the draw buffer).
 */
void display_begin_frame(void);

/**
 * @brief End the current frame and trigger a refresh.
 */
void display_end_frame(void);

/**
 * @brief Draw text at a given y-position using the built-in font.
 *
 * @param y      Y coordinate (row, 0-199).
 * @param text   Null-terminated string.
 * @param style  0=normal, 1=inverted, 2=title/bold.
 */
void display_text(int y, const char *text, int style);

/**
 * @brief Draw text at an explicit x/y position.
 *
 * Used by dense square-screen app UIs where centered rows waste space.
 */
void display_text_at(int x, int y, const char *text, int style);

/**
 * @brief Set or clear one framebuffer pixel.
 *
 * @param black true sets black, false clears to white.
 */
void display_draw_pixel(int x, int y, bool black);

/**
 * @brief Fill a rounded rectangle.
 *
 * @param x, y, w, h  Bounding box.
 * @param r           Corner radius.
 */
void display_fill_rounded_rect(int x, int y, int w, int h, int r);

/**
 * @brief Draw a rectangular outline (or clear a row).
 */
void display_outline_rect(int x, int y, int w, int h);

/**
 * @brief Push a raw 10000-byte 2bpp bitmap to the framebuffer.
 *
 * Used for wallpaper display.
 */
void display_draw_bitmap(const uint8_t *data, int len);

/**
 * @brief Render the battery indicator in the status bar area.
 */
void display_draw_battery(int percentage, bool charging);

/**
 * @brief Called periodically (every 200ms) for partial updates.
 */
void display_tick_200ms(void);

/**
 * @brief Read the 2bpp raw pixel buffer.
 *        Used by wallpaper save/upload logic.
 */
const uint8_t *display_get_framebuffer(void);

#ifdef __cplusplus
}
#endif
