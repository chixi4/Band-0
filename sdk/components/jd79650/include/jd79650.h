#pragma once

/**
 * JD79650-compatible 200x200 BW e-paper display driver.
 *
 * This component reimplements the display driver recovered from
 * the original firmware's updater and main app.
 *
 * Hardware interface:
 *   SPI with 1-bit command phase (no separate D/C pin)
 *   GPIO: BUSY=3, RST=4, CS=5, SCLK=6, MOSI=7
 *
 * Pixel format:
 *   200x200, 2 bpp (0b00=white, 0b11=black), MSB-first.
 *   Raw buffer = 10000 bytes.
 */

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ── Configuration ────────────────────────────────────────── */
#define JD79650_WIDTH      200
#define JD79650_HEIGHT     200
#define JD79650_RAW_BYTES  10000   /* 200*200 / 4 */

#define JD79650_BUSY_GPIO  3
#define JD79650_RST_GPIO   4
#define JD79650_CS_GPIO    5
#define JD79650_SCLK_GPIO  6
#define JD79650_MOSI_GPIO  7

#define JD79650_SPI_HOST   SPI2_HOST
#define JD79650_SPI_CLOCK  20000000  /* 20 MHz */

/* ── API ──────────────────────────────────────────────────── */

/**
 * @brief Initialize the JD79650 display.
 *
 * Configures GPIO, SPI bus, sends init sequence, loads LUTs.
 *
 * @return 0 on success, negative on error.
 */
int jd79650_init(void);

/**
 * @brief Return true after successful init.
 */
bool jd79650_ready(void);

/**
 * @brief Send a command byte to the display.
 */
void jd79650_send_cmd(uint8_t cmd);

/**
 * @brief Send a data byte to the display.
 */
void jd79650_send_data(uint8_t data);

/**
 * @brief Send multiple data bytes.
 */
void jd79650_send_data_bulk(const uint8_t *data, int len);

/**
 * @brief Wait for BUSY pin to go low (idle).
 * @param timeout_ms  Maximum wait in ms.
 * @return 0 on success, -1 on timeout.
 */
int jd79650_wait_busy(int timeout_ms);

/**
 * @brief Perform hardware reset sequence.
 */
void jd79650_reset(void);

/**
 * @brief Write a LUT (look-up table) to a register.
 */
void jd79650_write_lut(uint8_t reg, const uint8_t *lut, int len);

/**
 * @brief Full refresh: write framebuffer and trigger display update.
 *
 * @param fb  Pointer to 10000-byte framebuffer (2bpp packed).
 */
void jd79650_display_frame(const uint8_t *fb);

/**
 * @brief Partial refresh (faster, less flash).
 *
 * @param fb      Pointer to 10000-byte framebuffer.
 * @param x, y    Top-left corner.
 * @param w, h    Region size (must be multiples of 8).
 */
void jd79650_display_partial(const uint8_t *fb, int x, int y, int w, int h);

/**
 * @brief Enter deep sleep mode.
 */
void jd79650_sleep(void);

/**
 * @brief Deinitialize and release SPI resources.
 */
void jd79650_deinit(void);

#ifdef __cplusplus
}
#endif
