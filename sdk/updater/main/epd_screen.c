/**
 * Minimal EPD screen for the updater.
 *
 * Shows OTA download progress using the JD79650 display.
 * Based on decompiled updater.bin (true address 0x420079b0).
 */

#include <string.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "jd79650.h"

static const char *TAG = "upd_screen";

/* Simple framebuffer for the updater */
#define RAW_BYTES 10000
static uint8_t s_fb[RAW_BYTES];

static void set_pixel(int x, int y, bool black)
{
    if (x < 0 || x >= 200 || y < 0 || y >= 200) return;
    int idx = y * 50 + (x / 4);
    int shift = 6 - 2 * (x % 4);
    if (black) {
        s_fb[idx] |= (0x03 << shift);
    } else {
        s_fb[idx] &= ~(0x03 << shift);
    }
}

static void draw_char(int x, int y, char c)
{
    /* Ultra-minimal 6x8 font for updater */
    static const uint8_t font[96][6] = {
        {0x00,0x00,0x00,0x00,0x00,0x00}, /* space */
        {0x00,0x00,0x5F,0x00,0x00,0x00}, /* ! */
        {0x00,0x07,0x00,0x07,0x00,0x00}, /* " */
        {0x14,0x7F,0x14,0x7F,0x14,0x00}, /* # */
        {0x24,0x2A,0x7F,0x2A,0x12,0x00}, /* $ */
        {0x23,0x13,0x08,0x64,0x62,0x00}, /* % */
        {0x36,0x49,0x55,0x22,0x50,0x00}, /* & */
        {0x00,0x05,0x03,0x00,0x00,0x00}, /* ' */
        {0x00,0x1C,0x22,0x41,0x00,0x00}, /* ( */
        {0x00,0x41,0x22,0x1C,0x00,0x00}, /* ) */
        {0x08,0x2A,0x1C,0x2A,0x08,0x00}, /* * */
        {0x08,0x08,0x3E,0x08,0x08,0x00}, /* + */
        {0x00,0x50,0x30,0x00,0x00,0x00}, /* , */
        {0x08,0x08,0x08,0x08,0x08,0x00}, /* - */
        {0x00,0x60,0x60,0x00,0x00,0x00}, /* . */
        {0x20,0x10,0x08,0x04,0x02,0x00}, /* / */
        {0x3E,0x51,0x49,0x45,0x3E,0x00}, /* 0 */
        {0x00,0x42,0x7F,0x40,0x00,0x00}, /* 1 */
        {0x42,0x61,0x51,0x49,0x46,0x00}, /* 2 */
        {0x21,0x41,0x45,0x4B,0x31,0x00}, /* 3 */
        {0x18,0x14,0x12,0x7F,0x10,0x00}, /* 4 */
        {0x27,0x45,0x45,0x45,0x39,0x00}, /* 5 */
        {0x3C,0x4A,0x49,0x49,0x30,0x00}, /* 6 */
        {0x01,0x71,0x09,0x05,0x03,0x00}, /* 7 */
        {0x36,0x49,0x49,0x49,0x36,0x00}, /* 8 */
        {0x06,0x49,0x49,0x29,0x1E,0x00}, /* 9 */
    };

    if (c < 0x20 || c > 0x7E) c = 0x20;
    c -= 0x20;
    for (int row = 0; row < 8; row++) {
        uint8_t bits = font[(uint8_t)c][row];
        for (int col = 0; col < 6; col++) {
            if (bits & (1 << (5 - col))) {
                set_pixel(x + col, y + row, true);
            }
        }
    }
}

static void draw_text(int x, int y, const char *text)
{
    while (text && *text) {
        draw_char(x, y, *text);
        x += 7;
        text++;
    }
}

/* ── Public API ──────────────────────────────────────────────── */

void updater_screen_init(void)
{
    memset(s_fb, 0, sizeof(s_fb));

    if (jd79650_init() != 0) {
        ESP_LOGE(TAG, "display init failed, continuing without screen");
        return;
    }

    draw_text(20, 40, "OTA");
    draw_text(20, 60, "Update");
    jd79650_display_frame(s_fb);
    ESP_LOGI(TAG, "updater screen ready");
}

void updater_draw_progress(int written, int total, const char *status)
{
    memset(s_fb, 0, sizeof(s_fb));

    draw_text(10, 10, "Updating...");

    char line[32];
    if (total > 0) {
        int pct = written * 100 / total;
        snprintf(line, sizeof(line), "%d / %d (%d%%)", written, total, pct);

        /* Draw progress bar */
        int bar_x = 10, bar_y = 60, bar_w = 180, bar_h = 16;
        int fill_w = (pct * bar_w) / 100;
        if (fill_w > bar_w) fill_w = bar_w;
        for (int row = 0; row < bar_h; row++) {
            for (int col = 0; col < bar_w; col++) {
                bool black = (col < fill_w);
                set_pixel(bar_x + col, bar_y + row, black);
            }
        }
    } else {
        snprintf(line, sizeof(line), "downloading...");
    }

    draw_text(10, 100, line);

    if (status) {
        draw_text(10, 130, status);
    }

    jd79650_display_frame(s_fb);
}

void updater_draw_message(const char *msg)
{
    memset(s_fb, 0, sizeof(s_fb));
    draw_text(10, 90, msg);
    jd79650_display_frame(s_fb);
}
