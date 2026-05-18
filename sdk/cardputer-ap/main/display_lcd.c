/**
 * ST7789 display driver for Cardputer ADV.
 *
 * 240x135 RGB LCD, SPI interface.
 * Shows AP status, connected devices, MITM info.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_vendor.h"
#include "esp_lcd_panel_ops.h"
#include "driver/spi_master.h"
#include "driver/gpio.h"
#include "config.h"

static const char *TAG = "lcd";

static esp_lcd_panel_handle_t s_panel = NULL;
static esp_lcd_panel_io_handle_t s_io = NULL;

/* Status string (set by display_update_status) */
static char s_ap_ssid[32] = "---";
static int  s_sta_count = 0;
static char s_mac_ip[16] = "---";
static char s_band0_status[32] = "disconnected";
static char s_mac_status[32] = "disconnected";
static char s_info_line[64] = "ready";

/* ── Color definitions ─────────────────────────────────────── */
#define COLOR_BLACK   0x0000
#define COLOR_WHITE   0xFFFF
#define COLOR_BLUE    0x001F
#define COLOR_GREEN   0x07E0
#define COLOR_RED     0xF800
#define COLOR_ORANGE  0xFC00
#define COLOR_DARK    0x2104

static void lcd_write_color(int x, int y, int w, int h, uint16_t color);

/* ── Init ──────────────────────────────────────────────────── */
void display_init(void)
{
    ESP_LOGI(TAG, "init ST7789 (240x135)");

    /* Backlight on */
    gpio_set_direction(LCD_PIN_BL, GPIO_MODE_OUTPUT);
    gpio_set_level(LCD_PIN_BL, 1);

    /* SPI bus config */
    spi_bus_config_t bus = {
        .mosi_io_num = LCD_PIN_MOSI,
        .miso_io_num = -1,
        .sclk_io_num = LCD_PIN_SCLK,
        .quadwp_io_num = -1,
        .quadhd_io_num = -1,
        .max_transfer_sz = LCD_WIDTH * LCD_HEIGHT * 2 + 8,
    };
    ESP_ERROR_CHECK(spi_bus_initialize(LCD_HOST, &bus, SPI_DMA_CH_AUTO));

    /* LCD panel IO (SPI) */
    esp_lcd_panel_io_spi_config_t io_cfg = {
        .dc_gpio_num = LCD_PIN_DC,
        .cs_gpio_num = LCD_PIN_CS,
        .pclk_hz = 40 * 1000 * 1000,
        .spi_mode = 0,
        .trans_queue_depth = 10,
        .lcd_cmd_bits = 8,
        .lcd_param_bits = 8,
    };
    ESP_ERROR_CHECK(esp_lcd_new_panel_io_spi((esp_lcd_spi_bus_handle_t)LCD_HOST,
                                              &io_cfg, &s_io));

    /* ST7789 panel */
    esp_lcd_panel_dev_config_t panel_cfg = {
        .reset_gpio_num = LCD_PIN_RST,
        .color_space = ESP_LCD_COLOR_SPACE_RGB,
        .bits_per_pixel = 16,
    };
    ESP_ERROR_CHECK(esp_lcd_new_panel_st7789(s_io, &panel_cfg, &s_panel));

    esp_lcd_panel_reset(s_panel);
    esp_lcd_panel_init(s_panel);
    esp_lcd_panel_invert_color(s_panel, true);
    esp_lcd_panel_swap_xy(s_panel, true);       /* Cardputer is landscape */
    esp_lcd_panel_mirror(s_panel, false, true);
    esp_lcd_panel_set_gap(s_panel, 0, 0);
    esp_lcd_panel_disp_on_off(s_panel, true);

    /* Fill white */
    lcd_write_color(0, 0, LCD_WIDTH, LCD_HEIGHT, COLOR_WHITE);

    ESP_LOGI(TAG, "ST7789 ready");
}

/* ── Fill area with color ──────────────────────────────────── */
static void lcd_write_color(int x, int y, int w, int h, uint16_t color)
{
    if (!s_panel) return;
    int size = w * h;
    uint16_t *buf = heap_caps_malloc(size * 2, MALLOC_CAP_DMA);
    if (!buf) return;
    for (int i = 0; i < size; i++) buf[i] = color;
    esp_lcd_panel_draw_bitmap(s_panel, x, y, x + w, y + h, buf);
    free(buf);
}

/* ── Draw text at (x,y) using simple 8x12 font ─────────────── */
#include "font_8x12.h"  /* defines font_8x12_data[] */
#define FONT_CHAR_BYTES 12
#define FONT_CHAR_COUNT 95 /* 0x20-0x7E */

static void draw_char(int x, int y, char c, uint16_t fg, uint16_t bg)
{
    if (c < 0x20 || c > 0x7E) c = 0x20;
    c -= 0x20;
    int idx = (uint8_t)c * FONT_CHAR_BYTES;
    uint16_t buf[8 * 12];
    for (int row = 0; row < 12; row++) {
        uint8_t bits = font_8x12_data[idx + row];
        for (int col = 0; col < 8; col++) {
            buf[row * 8 + col] = (bits & (1 << (7 - col))) ? fg : bg;
        }
    }
    esp_lcd_panel_draw_bitmap(s_panel, x - 1, y, x + 7, y + 12, buf);
}

static void draw_str(int x, int y, const char *s, uint16_t fg, uint16_t bg)
{
    while (s && *s) {
        draw_char(x, y, *s, fg, bg);
        x += 9;
        if (*s == '\n') { /* not handled */ }
        s++;
    }
}

static void draw_str_clipped(int x, int y, const char *s, uint16_t fg, uint16_t bg, int max_w)
{
    int ox = x;
    while (s && *s) {
        if (x - ox + 9 > max_w) break;
        draw_char(x, y, *s, fg, bg);
        x += 9;
        s++;
    }
}

/* ── Draw the status dashboard ─────────────────────────────── */
void display_update_status(void)
{
    if (!s_panel) return;

    /* Clear */
    lcd_write_color(0, 0, LCD_WIDTH, LCD_HEIGHT, COLOR_WHITE);

    /* Header bar */
    lcd_write_color(0, 0, LCD_WIDTH, 16, COLOR_BLUE);
    draw_str(4, 2, "Band-0 MITM AP", COLOR_WHITE, COLOR_BLUE);

    /* AP Info */
    int y = 22;
    draw_str(4, y, "SSID:", COLOR_DARK, COLOR_WHITE);
    draw_str_clipped(52, y, s_ap_ssid, COLOR_BLACK, COLOR_WHITE, 180);
    y += 15;

    draw_str(4, y, "MAC:", COLOR_DARK, COLOR_WHITE);
    draw_str(52, y, s_mac_ip, COLOR_BLACK, COLOR_WHITE);
    y += 15;

    draw_str(4, y, "CH:", COLOR_DARK, COLOR_WHITE);
    char ch_str[8];
    snprintf(ch_str, sizeof(ch_str), "%d", 6);
    draw_str(52, y, ch_str, COLOR_BLACK, COLOR_WHITE);
    y += 20;

    /* Separator */
    lcd_write_color(4, y, 232, 1, COLOR_BLUE);
    y += 6;

    /* Device Status */
    draw_str(4, y, "Devices:", COLOR_DARK, COLOR_WHITE);
    char count_str[16];
    snprintf(count_str, sizeof(count_str), "%d", s_sta_count);
    draw_str(80, y, count_str, COLOR_BLACK, COLOR_WHITE);
    y += 15;

    draw_str(4, y, "Band-0:", COLOR_DARK, COLOR_WHITE);
    draw_str_clipped(80, y, s_band0_status, COLOR_BLACK, COLOR_WHITE, 150);
    y += 15;

    draw_str(4, y, "Mac:", COLOR_DARK, COLOR_WHITE);
    draw_str_clipped(80, y, s_mac_status, COLOR_BLACK, COLOR_WHITE, 150);
    y += 20;

    /* Info line */
    lcd_write_color(4, y, 232, 1, COLOR_BLUE);
    y += 6;
    draw_str_clipped(4, y, s_info_line, COLOR_ORANGE, COLOR_WHITE, 232);
    y += 15;

    /* Footer hint */
    draw_str(4, LCD_HEIGHT - 14, "Connect Mac to this AP", COLOR_DARK, COLOR_WHITE);
    draw_str(4, LCD_HEIGHT - 28, "Run: local_cloud.py", COLOR_DARK, COLOR_WHITE);
}

/* ── Setters (called from other modules) ───────────────────── */
void display_set_ap_ssid(const char *ssid) {
    strlcpy(s_ap_ssid, ssid ? ssid : "---", sizeof(s_ap_ssid));
}
void display_set_sta_count(int count) { s_sta_count = count; }
void display_set_mac_ip(const char *ip) {
    strlcpy(s_mac_ip, ip ? ip : "---", sizeof(s_mac_ip));
}
void display_set_band0_status(const char *status) {
    strlcpy(s_band0_status, status ? status : "---", sizeof(s_band0_status));
}
void display_set_mac_status(const char *status) {
    strlcpy(s_mac_status, status ? status : "---", sizeof(s_mac_status));
}
void display_set_info_line(const char *line) {
    strlcpy(s_info_line, line ? line : "", sizeof(s_info_line));
}
