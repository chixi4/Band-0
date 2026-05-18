/*
 * JD79650-compatible 200x200 BW e-paper init recovered from updater.bin.
 *
 * True addresses:
 *   0x42007936 wait_busy
 *   0x420079b0 init_jd79650
 *
 * Evidence strings:
 *   "wait BUSY timeout"
 *   "init JD79650 (200x200 BW, GC LUT)"
 *   "spi_bus_initialize: 0x%x"
 */

#include <stdint.h>

#define EPD_BUSY_GPIO  3
#define EPD_RST_GPIO   4
#define EPD_CS_GPIO    5
#define EPD_SCLK_GPIO  6
#define EPD_MOSI_GPIO  7

/*
 * There is no separate D/C GPIO in the recovered updater driver. Commands and
 * data are distinguished by the 1-bit SPI command phase:
 *
 *   0x420078b0 send_9bit_spi(dc, byte)
 *   0x420078fa epd_data(byte) -> dc=1
 *   0x42007900 epd_cmd(byte)  -> dc=0
 */

static int epd_wait_busy_recovered(int timeout_ms)
{
    int64_t start = millis();
    while (gpio_get_level(EPD_BUSY_GPIO) != 0) {
        if (millis() - start > timeout_ms) {
            updater_log_error("wait BUSY timeout");
            return -1;
        }
        delay_ms(10);
    }
    return 0;
}

int epd_jd79650_init_recovered(void)
{
    if (g_epd_ready) {
        return 0;
    }

    updater_log("init JD79650 (200x200 BW, GC LUT)");

    gpio_config_outputs((1ULL << EPD_RST_GPIO) | (1ULL << EPD_CS_GPIO));
    gpio_config_input(EPD_BUSY_GPIO);

    spi_bus_config_t bus = {0};
    bus.mosi_io_num = EPD_MOSI_GPIO;
    bus.sclk_io_num = EPD_SCLK_GPIO;
    bus.miso_io_num = -1;
    bus.quadwp_io_num = -1;
    bus.quadhd_io_num = -1;
    bus.max_transfer_sz = 0x1000;

    int err = spi_bus_initialize(EPD_SPI_HOST, &bus, SPI_DMA_CH_AUTO);
    if (err != 0) {
        updater_log_error("spi_bus_initialize: 0x%x", err);
        return err;
    }

    spi_device_interface_config_t dev = {0};
    dev.clock_speed_hz = 20000000;
    dev.command_bits = 1;
    dev.mode = 0;
    dev.spics_io_num = EPD_CS_GPIO;
    dev.queue_size = 4;

    err = spi_bus_add_device(EPD_SPI_HOST, &dev, &g_epd_spi);
    if (err != 0) {
        updater_log_error("spi_bus_add_device: 0x%x", err);
        return err;
    }

    epd_reset_sequence();
    epd_wait_busy_recovered(1000);

    epd_cmd(0x4d);
    epd_data(0x55);
    epd_cmd(0xf3);
    epd_data(0x0a);
    epd_cmd(0xaa);
    epd_data(0xb7);
    epd_cmd(0x00);
    epd_data(0x3f);
    epd_data(0x0c);
    epd_cmd(0x01);
    epd_data(0x03);
    epd_data(0x00);
    epd_data(0x3f);
    epd_data(0x3f);
    epd_data(0xa6);
    epd_cmd(0x06);
    epd_data(199);
    epd_data(199);
    epd_data(0x2f);
    epd_data(0xa5);
    epd_data(0x33);
    epd_cmd(0x61);
    epd_data(200);
    epd_data(200);
    epd_cmd(0x30);
    epd_data(0x13);
    epd_cmd(0x60);
    epd_data(0x00);
    epd_cmd(0x82);
    epd_data(0x12);
    epd_cmd(0x03);
    epd_data(0x00);
    epd_cmd(0x50);
    epd_data(0x87);
    epd_cmd(0x04);
    epd_wait_busy_recovered(1000);

    /* Five GC LUT tables are loaded from rodata after init. */
    epd_write_lut(0x20, LUT_GC_0);
    epd_write_lut(0x21, LUT_GC_1);
    epd_write_lut(0x22, LUT_GC_2);
    epd_write_lut(0x23, LUT_GC_3);
    epd_write_lut(0x24, LUT_GC_4);

    g_epd_ready = true;
    return 0;
}
