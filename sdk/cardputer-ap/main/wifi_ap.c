/**
 * Wi-Fi AP mode for Cardputer MITM AP.
 *
 * Creates a 2.4GHz access point with DHCP server.
 * Both Band-0 device and Mac connect to this AP.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "nvs.h"
#include "config.h"

static const char *TAG = "wifi_ap";

/* NVS keys */
#define NVS_NS      "ap_config"
#define KEY_SSID    "ssid"
#define KEY_PWD     "password"
#define KEY_CHANNEL "channel"
#define KEY_MAC_IP  "mac_ip"

static char s_current_ssid[32] = AP_SSID_DEFAULT;
static char s_current_pwd[64]  = AP_PASSWORD_DEFAULT;
static uint8_t s_current_channel = AP_CHANNEL_DEFAULT;
static char s_mac_ip[16] = MAC_IP_DEFAULT;
static int s_sta_count = 0;

/* Event group for AP start */
static EventGroupHandle_t s_ap_event_group = NULL;
#define AP_STARTED_BIT BIT0

/* ── Event Handler ──────────────────────────────────────────── */
static void wifi_event_handler(void *arg, esp_event_base_t base,
                                int32_t id, void *data)
{
    if (base == WIFI_EVENT && id == WIFI_EVENT_AP_STACONNECTED) {
        wifi_event_ap_staconnected_t *ev = (wifi_event_ap_staconnected_t *)data;
        s_sta_count++;
        ESP_LOGI(TAG, "station connected: " MACSTR " (total=%d)",
                 MAC2STR(ev->mac), s_sta_count);
    } else if (base == WIFI_EVENT && id == WIFI_EVENT_AP_STADISCONNECTED) {
        wifi_event_ap_stadisconnected_t *ev = (wifi_event_ap_stadisconnected_t *)data;
        if (s_sta_count > 0) s_sta_count--;
        ESP_LOGI(TAG, "station disconnected: " MACSTR " (total=%d)",
                 MAC2STR(ev->mac), s_sta_count);
    } else if (base == WIFI_EVENT && id == WIFI_EVENT_AP_START) {
        ESP_LOGI(TAG, "AP started");
        xEventGroupSetBits(s_ap_event_group, AP_STARTED_BIT);
    } else if (base == WIFI_EVENT && id == WIFI_EVENT_AP_STOP) {
        ESP_LOGI(TAG, "AP stopped");
    }
}

/* ── Load/Save Config ───────────────────────────────────────── */
void wifi_ap_load_config(void)
{
    nvs_handle_t nvs;
    if (nvs_open(NVS_NS, NVS_READONLY, &nvs) != ESP_OK) return;

    size_t len = sizeof(s_current_ssid);
    nvs_get_str(nvs, KEY_SSID, s_current_ssid, &len);

    len = sizeof(s_current_pwd);
    if (nvs_get_str(nvs, KEY_PWD, s_current_pwd, &len) != ESP_OK) {
        strlcpy(s_current_pwd, AP_PASSWORD_DEFAULT, sizeof(s_current_pwd));
    }

    int32_t ch = 0;
    if (nvs_get_i32(nvs, KEY_CHANNEL, &ch) == ESP_OK) {
        s_current_channel = (uint8_t)ch;
    }

    len = sizeof(s_mac_ip);
    if (nvs_get_str(nvs, KEY_MAC_IP, s_mac_ip, &len) != ESP_OK) {
        strlcpy(s_mac_ip, MAC_IP_DEFAULT, sizeof(s_mac_ip));
    }

    nvs_close(nvs);
}

void wifi_ap_save_config(void)
{
    nvs_handle_t nvs;
    if (nvs_open(NVS_NS, NVS_READWRITE, &nvs) != ESP_OK) return;

    nvs_set_str(nvs, KEY_SSID, s_current_ssid);
    nvs_set_str(nvs, KEY_PWD, s_current_pwd);
    nvs_set_i32(nvs, KEY_CHANNEL, s_current_channel);
    nvs_set_str(nvs, KEY_MAC_IP, s_mac_ip);
    nvs_commit(nvs);
    nvs_close(nvs);
}

const char *wifi_ap_get_ssid(void) { return s_current_ssid; }
const char *wifi_ap_get_pwd(void)  { return s_current_pwd; }
int wifi_ap_get_sta_count(void)    { return s_sta_count; }
const char *wifi_ap_get_mac_ip(void) { return s_mac_ip; }

void wifi_ap_set_mac_ip(const char *ip)
{
    strlcpy(s_mac_ip, ip, sizeof(s_mac_ip));
    wifi_ap_save_config();
}

/* ── Init AP ─────────────────────────────────────────────────── */
void wifi_ap_init(void)
{
    wifi_ap_load_config();

    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    /* Create AP netif */
    esp_netif_t *ap_netif = esp_netif_create_default_wifi_ap();
    assert(ap_netif);

    /* Set AP IP info */
    esp_netif_ip_info_t ip_info = {
        .ip = { .addr = esp_ip4_addr_get_byte(0) },
        .gw = { .addr = esp_ip4_addr_get_byte(0) },
        .netmask = { .addr = esp_ip4_addr_get_byte(0) },
    };
    inet_aton(AP_NETWORK_IP, &ip_info.ip);
    inet_aton(AP_GATEWAY, &ip_info.gw);
    inet_aton(AP_NETMASK, &ip_info.netmask);
    esp_netif_set_ip_info(ap_netif, &ip_info);

    /* DHCP server range */
    esp_netif_dhcps_stop(ap_netif);
    esp_netif_dhcps_option_t opt = {0};
    dhcps_lease_t lease = {
        .start_ip = { .addr = esp_ip4_addr_get_byte(0) },
        .end_ip   = { .addr = esp_ip4_addr_get_byte(0) },
    };
    inet_aton(AP_DHCP_START, &lease.start_ip);
    inet_aton(AP_DHCP_END, &lease.end_ip);
    esp_netif_dhcps_option(ap_netif, ESP_NETIF_OP_SET, ESP_NETIF_DOMAIN_NAME_SERVER, &opt, sizeof(opt));
    esp_netif_dhcps_option(ap_netif, ESP_NETIF_OP_SET, ESP_NETIF_SUBNET_MASK, &opt, sizeof(opt));
    esp_netif_dhcps_start(ap_netif);

    /* Init Wi-Fi */
    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK(esp_wifi_init(&cfg));

    ESP_ERROR_CHECK(esp_event_handler_instance_register(
        WIFI_EVENT, ESP_EVENT_ANY_ID, &wifi_event_handler, NULL, NULL));

    s_ap_event_group = xEventGroupCreate();

    /* Configure AP */
    wifi_config_t ap_cfg = {
        .ap = {
            .ssid_len = 0,
            .channel = s_current_channel,
            .max_connection = AP_MAX_CONN,
            .authmode = (s_current_pwd[0]) ? WIFI_AUTH_WPA2_PSK : WIFI_AUTH_OPEN,
        },
    };
    strlcpy((char *)ap_cfg.ap.ssid, s_current_ssid, sizeof(ap_cfg.ap.ssid));
    if (s_current_pwd[0]) {
        strlcpy((char *)ap_cfg.ap.password, s_current_pwd, sizeof(ap_cfg.ap.password));
    }

    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_AP));
    ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_AP, &ap_cfg));
    ESP_ERROR_CHECK(esp_wifi_start());

    xEventGroupWaitBits(s_ap_event_group, AP_STARTED_BIT, pdFALSE, pdFALSE, portMAX_DELAY);

    ESP_LOGI(TAG, "AP ready: SSID='%s' CH=%d IP=%s",
             s_current_ssid, s_current_channel, AP_NETWORK_IP);
    ESP_LOGI(TAG, "Mac MITM host: %s", s_mac_ip);
}
