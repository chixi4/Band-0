/**
 * Minimal EPD screen for the updater.
 *
 * Shows OTA download progress using the JD79650 display.
 * Based on decompiled updater.bin (true address 0x420079b0).
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "jd79650.h"
#include "font_8x12.h"

static const char *TAG = "upd_screen";

/* Simple framebuffer for the updater */
#define RAW_BYTES 10000
static uint8_t s_fb[RAW_BYTES];
static bool s_ready = false;

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
    if (c < 0x20 || c > 0x7E) c = 0x20;
    c -= 0x20;
    for (int row = 0; row < 12; row++) {
        uint8_t bits = font_8x12_data[(uint8_t)c * 12 + row];
        for (int col = 0; col < 8; col++) {
            if ((bits >> (7 - col)) & 1) {
                set_pixel(x + col, y + row, true);
            }
        }
    }
}

static void draw_text(int x, int y, const char *text)
{
    while (text && *text) {
        draw_char(x, y, *text);
        x += 9;
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

    s_ready = true;
    draw_text(16, 42, "Band-0 updater");
    draw_text(16, 64, "waiting");
    jd79650_display_frame(s_fb);
    ESP_LOGI(TAG, "updater screen ready");
}

void updater_draw_progress(int written, int total, const char *status)
{
    if (!s_ready) return;
    memset(s_fb, 0, sizeof(s_fb));

    draw_text(10, 10, "OTA update");

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
    if (!s_ready) return;
    memset(s_fb, 0, sizeof(s_fb));
    draw_text(10, 82, "Band-0 updater");
    draw_text(10, 108, msg);
    jd79650_display_frame(s_fb);
}
