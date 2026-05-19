#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ── Default AP Configuration ────────────────────────────── */
#define AP_SSID_DEFAULT     "ADV 2.4G"
#define AP_PASSWORD_DEFAULT "mitm1234"
#define AP_CHANNEL_DEFAULT  6
#define AP_MAX_CONN         8

/* ── DNS Redirection ─────────────────────────────────────── */
/* Domains to redirect to Mac's IP (the MITM host) */
#define DNS_REDIRECT_COUNT 4
static const char *DNS_REDIRECT_DOMAINS[DNS_REDIRECT_COUNT] = {
    "dot.mindreset.tech",
    "os-cdn.mindreset.tech",
    "www.mindreset.tech",
    "mindreset.tech",
};

/* Default Mac IP on the AP subnet */
#define MAC_IP_DEFAULT  "192.168.4.2"

/* ── AP Subnet ────────────────────────────────────────────── */
#define AP_NETWORK_IP    "192.168.4.1"
#define AP_NETMASK       "255.255.255.0"
#define AP_GATEWAY       "192.168.4.1"
#define AP_DHCP_START    "192.168.4.10"
#define AP_DHCP_END      "192.168.4.50"

/* ── Cardputer ADV Pin Definitions (M5Cardputer ADV) ─────── */
/* ST7789 LCD via SPI */
#define LCD_HOST        SPI2_HOST
#define LCD_PIN_CS      5
#define LCD_PIN_DC      4
#define LCD_PIN_RST     3
#define LCD_PIN_MOSI    6
#define LCD_PIN_SCLK    7
#define LCD_PIN_BL      45
#define LCD_WIDTH       240
#define LCD_HEIGHT      135

/* I2C for keyboard (AW9523) */
#define I2C_SDA         8
#define I2C_SCL         9

/* LED */
#define LED_PIN         10

#ifdef __cplusplus
}
#endif
