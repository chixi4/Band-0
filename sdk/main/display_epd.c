/**
 * EPD display abstraction layer for Band-0.
 *
 * Manages a 10000-byte framebuffer (200x200, 2bpp) and
 * delegates hardware communication to the jd79650 component.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "jd79650.h"
#include "display_epd.h"

static const char *TAG = "display";

/* ── Framebuffer ─────────────────────────────────────────────── */
/* 200x200 @ 2bpp = 10000 bytes */
/* 2 bits per pixel: 00=white, 11=black */
static uint8_t s_fb[JD79650_RAW_BYTES];
static bool    s_ready = false;
static bool    s_redraw_pending = false;

/* ── Init ────────────────────────────────────────────────────── */
int display_init(void)
{
    if (s_ready) return 0;

    int ret = jd79650_init();
    if (ret != 0) {
        ESP_LOGE(TAG, "jd79650 init failed: %d", ret);
        return ret;
    }

    /* Clear framebuffer to white */
    memset(s_fb, 0x00, sizeof(s_fb));
    s_ready = true;
    ESP_LOGI(TAG, "display ready: %dx%d 2bpp", EPD_WIDTH, EPD_HEIGHT);
    return 0;
}

bool display_is_ready(void)
{
    return s_ready && jd79650_ready();
}

/* ── Clear ───────────────────────────────────────────────────── */
void display_clear(void)
{
    memset(s_fb, 0x00, sizeof(s_fb));
    s_redraw_pending = true;
}

/* ── Refresh ─────────────────────────────────────────────────── */
void display_refresh(void)
{
    if (!display_is_ready()) return;
    jd79650_display_frame(s_fb);
    s_redraw_pending = false;
}

void display_begin_frame(void)
{
    if (!display_is_ready()) return;
    memset(s_fb, 0x00, sizeof(s_fb));
}

void display_end_frame(void)
{
    display_refresh();
}

/* ── Get Framebuffer ─────────────────────────────────────────── */
const uint8_t *display_get_framebuffer(void)
{
    return s_fb;
}

/* ── Draw Bitmap ────────────────────────────────────────────── */
void display_draw_bitmap(const uint8_t *data, int len)
{
    if (!data || !display_is_ready()) return;
    int copy = (len < (int)sizeof(s_fb)) ? len : (int)sizeof(s_fb);
    memcpy(s_fb, data, copy);
    s_redraw_pending = true;
}

/* ── Text Drawing (Simple 8x12 Font) ─────────────────────────── */
/*
 * This is a minimal replacement for the original firmware's font renderer.
 * The original used a proportional font; this uses a simple 8x12 monospace
 * bitmap for demo purposes. A real implementation would include the original
 * font data extracted from the firmware.
 */

/* Simple 8x12 ASCII font (space through ~) */
#include "font_8x12.h"

static void draw_char(int x, int y, char c, bool invert)
{
    if (c < 0x20 || c > 0x7E) c = 0x20;
    c -= 0x20;
    for (int row = 0; row < 12; row++) {
        uint8_t bits = font_8x12_data[(uint8_t)c * 12 + row];
        for (int col = 0; col < 8; col++) {
            bool on = (bits >> (7 - col)) & 1;
            if (invert) on = !on;
            if (on) {
                int px = x + col;
                int py = y + row;
                if (px >= 0 && px < EPD_WIDTH && py >= 0 && py < EPD_HEIGHT) {
                    /* Set pixel to black (11) */
                    int idx = py * (EPD_WIDTH / 4) + (px / 4);
                    int shift = 6 - 2 * (px % 4);
                    s_fb[idx] |= (0x03 << shift);
                }
            }
        }
    }
}

static int draw_string(int x, int y, const char *str, bool invert)
{
    int ox = x;
    while (str && *str) {
        if (*str == '\n') {
            x = ox;
            y += 14;
        } else {
            draw_char(x, y, *str, invert);
            x += 9;  /* 8 + 1 spacing */
        }
        str++;
    }
    return y + 14;
}

/* ── Public Text API ─────────────────────────────────────────── */
void display_text(int y, const char *text, int style)
{
    if (!text || !display_is_ready()) return;

    bool invert = (style == TEXT_STYLE_INVERTED);
    int x = 10;  /* left margin */

    if (style == TEXT_STYLE_TITLE) {
        /* Center the title */
        int len = strlen(text);
        x = (EPD_WIDTH - len * 9) / 2;
        if (x < 0) x = 0;
    }

    draw_string(x, y, text, invert);
    s_redraw_pending = true;
}

void display_text_at(int x, int y, const char *text, int style)
{
    if (!text || !display_is_ready()) return;
    bool invert = (style == TEXT_STYLE_INVERTED);
    draw_string(x, y, text, invert);
    s_redraw_pending = true;
}

/* ── Shape Drawing ───────────────────────────────────────────── */
void display_fill_rounded_rect(int x, int y, int w, int h, int r)
{
    if (!display_is_ready()) return;

    for (int row = y; row < y + h && row < EPD_HEIGHT; row++) {
        for (int col = x; col < x + w && col < EPD_WIDTH; col++) {
            /* Simple rounded corner check */
            bool in_corner = false;
            if (row < y + r && col < x + r) {
                in_corner = ((row - y - r) * (row - y - r) +
                             (col - x - r) * (col - x - r) > r * r);
            } else if (row < y + r && col >= x + w - r) {
                in_corner = ((row - y - r) * (row - y - r) +
                             (col - x - w + r) * (col - x - w + r) > r * r);
            } else if (row >= y + h - r && col < x + r) {
                in_corner = ((row - y - h + r) * (row - y - h + r) +
                             (col - x - r) * (col - x - r) > r * r);
            } else if (row >= y + h - r && col >= x + w - r) {
                in_corner = ((row - y - h + r) * (row - y - h + r) +
                             (col - x - w + r) * (col - x - w + r) > r * r);
            }

            if (!in_corner) {
                int idx = row * (EPD_WIDTH / 4) + (col / 4);
                int shift = 6 - 2 * (col % 4);
                s_fb[idx] |= (0x03 << shift);
            }
        }
    }
    s_redraw_pending = true;
}

void display_outline_rect(int x, int y, int w, int h)
{
    if (!display_is_ready()) return;

    /* Draw four edges */
    for (int col = x; col < x + w && col < EPD_WIDTH; col++) {
        for (int row = y; row <= y + h - 1; row += (h - 1 > 0) ? h - 1 : 1) {
            int idx = row * (EPD_WIDTH / 4) + (col / 4);
            int shift = 6 - 2 * (col % 4);
            s_fb[idx] |= (0x03 << shift);
        }
    }
    for (int row = y + 1; row < y + h - 1 && row < EPD_HEIGHT - 1; row++) {
        for (int col = x; col <= x + w - 1; col += (w - 1 > 0) ? w - 1 : 1) {
            int idx = row * (EPD_WIDTH / 4) + (col / 4);
            int shift = 6 - 2 * (col % 4);
            s_fb[idx] |= (0x03 << shift);
        }
    }
    s_redraw_pending = true;
}

/* ── Battery ─────────────────────────────────────────────────── */
void display_draw_battery(int percentage, bool charging)
{
    char text[24];
    if (percentage < 0) {
        snprintf(text, sizeof(text), "BAT: --");
    } else if (charging) {
        snprintf(text, sizeof(text), "BAT: CHG");
    } else {
        snprintf(text, sizeof(text), "BAT: %d%%", percentage);
    }
    display_text(0, text, TEXT_STYLE_NORMAL);
}

/* ── Periodic Tick ───────────────────────────────────────────── */
void display_tick_200ms(void)
{
    /* In a full implementation, this can do partial updates or
       handle display timeout/sleep transitions. */
}

void display_flush(void)
{
    if (s_redraw_pending && display_is_ready()) {
        display_refresh();
    }
}
