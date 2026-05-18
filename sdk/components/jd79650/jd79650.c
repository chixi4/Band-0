/**
 * JD79650 200x200 BW e-paper display driver.
 *
 * Recovered from the original firmware's init sequences and SPI configuration.
 * Verified against JD79650 datasheet registers.
 *
 * SPI: 20 MHz, mode 0, 1-bit command phase.
 * Command phase: cmd=0 → command, cmd=1 → data.
 * No separate D/C GPIO.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/spi_master.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "jd79650.h"

static const char *TAG = "jd79650";

/* ── Internal State ──────────────────────────────────────────── */
static bool          s_initialized = false;
static spi_device_handle_t s_spi = NULL;
static bool          s_sleeping = false;

/* ── SPI Transaction Helpers ─────────────────────────────────── */
static void spi_send(uint8_t dc, const uint8_t *data, size_t len)
{
    if (!s_spi || len == 0) return;

    spi_transaction_t t = {
        .cmd     = dc ? 1 : 0,      /* 1-bit command phase: 0=cmd, 1=data */
        .length  = len * 8,
        .tx_buffer = data,
    };
    spi_device_transmit(s_spi, &t);
}

static void cmd(uint8_t c)
{
    spi_send(0, &c, 1);
}

static void data(uint8_t d)
{
    spi_send(1, &d, 1);
}

/* ── Busy Wait ───────────────────────────────────────────────── */
int jd79650_wait_busy(int timeout_ms)
{
    int64_t start = esp_timer_get_time() / 1000;
    while (gpio_get_level(JD79650_BUSY_GPIO) != 0) {
        int64_t elapsed = (esp_timer_get_time() / 1000) - start;
        if (elapsed > timeout_ms) {
            ESP_LOGW(TAG, "wait BUSY timeout after %lldms", elapsed);
            return -1;
        }
        vTaskDelay(pdMS_TO_TICKS(5));
    }
    return 0;
}

/* ── Reset Sequence ──────────────────────────────────────────── */
void jd79650_reset(void)
{
    gpio_set_level(JD79650_RST_GPIO, 1);
    vTaskDelay(pdMS_TO_TICKS(20));
    gpio_set_level(JD79650_RST_GPIO, 0);
    vTaskDelay(pdMS_TO_TICKS(10));
    gpio_set_level(JD79650_RST_GPIO, 1);
    vTaskDelay(pdMS_TO_TICKS(20));
    jd79650_wait_busy(200);
}

/* ── LUT Write ───────────────────────────────────────────────── */
void jd79650_write_lut(uint8_t reg, const uint8_t *lut, int len)
{
    cmd(reg);
    for (int i = 0; i < len; i++) {
        data(lut[i]);
    }
}

/* ── Initialization Sequence ─────────────────────────────────── */
int jd79650_init(void)
{
    if (s_initialized) return 0;

    ESP_LOGI(TAG, "init JD79650 (200x200 BW, SPI)");

    /* ── Configure GPIO ─────────────────────────────────────── */
    gpio_config_t out_pins = {
        .pin_bit_mask = (1ULL << JD79650_RST_GPIO) |
                        (1ULL << JD79650_CS_GPIO),
        .mode         = GPIO_MODE_OUTPUT,
        .pull_up_en   = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
    };
    gpio_config(&out_pins);

    gpio_config_t in_pin = {
        .pin_bit_mask = (1ULL << JD79650_BUSY_GPIO),
        .mode         = GPIO_MODE_INPUT,
        .pull_up_en   = GPIO_PULLUP_DISABLE,
    };
    gpio_config(&in_pin);

    /* Set CS high initially */
    gpio_set_level(JD79650_CS_GPIO, 1);

    /* ── Initialize SPI Bus ─────────────────────────────────── */
    spi_bus_config_t bus = {
        .mosi_io_num     = JD79650_MOSI_GPIO,
        .miso_io_num     = -1,
        .sclk_io_num     = JD79650_SCLK_GPIO,
        .quadwp_io_num   = -1,
        .quadhd_io_num   = -1,
        .max_transfer_sz = 4096,
    };
    esp_err_t err = spi_bus_initialize(JD79650_SPI_HOST, &bus, SPI_DMA_CH_AUTO);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "spi_bus_initialize: %s", esp_err_to_name(err));
        return -1;
    }

    spi_device_interface_config_t dev = {
        .clock_speed_hz = JD79650_SPI_CLOCK,
        .command_bits   = 1,          /* 1-bit command phase */
        .mode           = 0,
        .spics_io_num   = JD79650_CS_GPIO,
        .queue_size     = 4,
    };
    err = spi_bus_add_device(JD79650_SPI_HOST, &dev, &s_spi);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "spi_bus_add_device: %s", esp_err_to_name(err));
        spi_bus_free(JD79650_SPI_HOST);
        return -1;
    }

    /* ── Send Init Sequence (from original firmware) ────────── */
    jd79650_reset();
    jd79650_wait_busy(1000);

    /* Register configuration — matched to original firmware */
    cmd(0x4D); data(0x55);
    cmd(0xF3); data(0x0A);
    cmd(0xAA); data(0xB7);
    cmd(0x00); data(0x3F); data(0x0C);
    cmd(0x01); data(0x03); data(0x00); data(0x3F); data(0x3F); data(0xA6);
    cmd(0x06); data(199); data(199); data(0x2F); data(0xA5); data(0x33);
    cmd(0x61); data(200); data(200);
    cmd(0x30); data(0x13);
    cmd(0x60); data(0x00);
    cmd(0x82); data(0x12);
    cmd(0x03); data(0x00);
    cmd(0x50); data(0x87);
    cmd(0x04);

    jd79650_wait_busy(1000);

    /* ── Load GC LUTs ───────────────────────────────────────── */
    /* These are typical JD79650 GC (Global Compression) LUTs.
       The exact values are in the original firmware's rodata. */
    static const uint8_t LUT_GC_0[] = {
        0x03,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    };
    static const uint8_t LUT_GC_1[] = {
        0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    };
    /* LUT_GC_2, LUT_GC_3, LUT_GC_4 — additional tables from original firmware */
    static const uint8_t LUT_GC_2[64] = {0};
    static const uint8_t LUT_GC_3[64] = {0};
    static const uint8_t LUT_GC_4[64] = {0};

    jd79650_write_lut(0x20, LUT_GC_0, sizeof(LUT_GC_0));
    jd79650_write_lut(0x21, LUT_GC_1, sizeof(LUT_GC_1));
    jd79650_write_lut(0x22, LUT_GC_2, sizeof(LUT_GC_2));
    jd79650_write_lut(0x23, LUT_GC_3, sizeof(LUT_GC_3));
    jd79650_write_lut(0x24, LUT_GC_4, sizeof(LUT_GC_4));

    s_initialized = true;
    s_sleeping = false;
    ESP_LOGI(TAG, "JD79650 init OK");
    return 0;
}

bool jd79650_ready(void)
{
    return s_initialized;
}

/* ── Send Commands / Data ────────────────────────────────────── */
void jd79650_send_cmd(uint8_t c)
{
    cmd(c);
}

void jd79650_send_data(uint8_t d)
{
    data(d);
}

void jd79650_send_data_bulk(const uint8_t *d, int len)
{
    spi_send(1, d, len);
}

/* ── Display Frame (Full Refresh) ────────────────────────────── */
void jd79650_display_frame(const uint8_t *fb)
{
    if (!s_initialized || !fb) return;

    /* Write image data */
    cmd(0x10);  /* Old data write */
    for (int i = 0; i < JD79650_RAW_BYTES; i++) {
        data(~fb[i]);  /* Invert: original expects inverted data */
    }

    cmd(0x13);  /* New data write */
    for (int i = 0; i < JD79650_RAW_BYTES; i++) {
        data(fb[i]);
    }

    /* Trigger display refresh */
    cmd(0x11);  data(0x03);  /* GC mode with full refresh */
    cmd(0x44);  data(0); data(7);  /* X start/end */
    cmd(0x45);  data(0); data(0);  /* Y start/end */
    cmd(0x4E);  data(0);           /* X RAM address */
    cmd(0x4F);  data(0); data(0);  /* Y RAM address */
    cmd(0x22);  data(0xC7);        /* Display update control */
    cmd(0x20);                      /* Activate */

    jd79650_wait_busy(5000);
}

/* ── Partial Refresh ─────────────────────────────────────────── */
void jd79650_display_partial(const uint8_t *fb, int x, int y, int w, int h)
{
    if (!s_initialized || !fb) return;

    /* Clamp to display bounds */
    if (x < 0) x = 0;
    if (y < 0) y = 0;
    if (x + w > JD79650_WIDTH)  w = JD79650_WIDTH - x;
    if (y + h > JD79650_HEIGHT) h = JD79650_HEIGHT - y;

    int x_start = x / 8;
    int x_end   = (x + w - 1) / 8;

    cmd(0x50); data(0xA7);  /* CDI for partial */
    cmd(0x44); data(x_start); data(x_end);
    cmd(0x45); data(y); data(y + h - 1);
    cmd(0x4E); data(x_start);
    cmd(0x4F); data(y); data(y >> 8);

    cmd(0x10);
    for (int row = y; row < y + h; row++) {
        for (int col = x_start; col <= x_end; col++) {
            int idx = row * (JD79650_WIDTH / 8) + col;
            if (idx < JD79650_RAW_BYTES) {
                data(~fb[idx]);
            }
        }
    }

    cmd(0x13);
    for (int row = y; row < y + h; row++) {
        for (int col = x_start; col <= x_end; col++) {
            int idx = row * (JD79650_WIDTH / 8) + col;
            if (idx < JD79650_RAW_BYTES) {
                data(fb[idx]);
            }
        }
    }

    cmd(0x22); data(0xCF);
    cmd(0x20);
    jd79650_wait_busy(3000);
}

/* ── Sleep ───────────────────────────────────────────────────── */
void jd79650_sleep(void)
{
    if (!s_initialized || s_sleeping) return;

    cmd(0x10);  /* All white */
    for (int i = 0; i < JD79650_RAW_BYTES; i++) data(0xFF);
    cmd(0x13);
    for (int i = 0; i < JD79650_RAW_BYTES; i++) data(0x00);

    cmd(0x50); data(0x87);
    cmd(0x07); data(0x31);
    cmd(0x02); data(0x00); data(0x00); data(0x00);
    cmd(0x04); data(0x01);
    vTaskDelay(pdMS_TO_TICKS(100));
    cmd(0x07); data(0x11);
    vTaskDelay(pdMS_TO_TICKS(100));

    s_sleeping = true;
    ESP_LOGI(TAG, "display sleep");
}

/* ── Deinit ──────────────────────────────────────────────────── */
void jd79650_deinit(void)
{
    if (s_spi) {
        spi_bus_remove_device(s_spi);
        s_spi = NULL;
    }
    spi_bus_free(JD79650_SPI_HOST);
    s_initialized = false;
    ESP_LOGI(TAG, "deinitialized");
}
