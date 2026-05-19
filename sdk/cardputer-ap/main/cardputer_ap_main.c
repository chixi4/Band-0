/**
 * Cardputer ADV — Band-0 MITM AP
 *
 * ESP32-S3 firmware that creates a 2.4GHz Wi-Fi access point
 * with DNS redirection for Band-0 MITM OTA attacks.
 *
 * Architecture:
 *   Cardputer (AP 2.4GHz)
 *     ├── Band-0 device connects
 *     ├── Mac connects
 *     ├── DNS: dot.mindreset.tech → Mac IP
 *     └── LCD: status dashboard
 *
 * Usage:
 *   1. Flash to Cardputer ADV
 *   2. Connect Mac to "ADV 2.4G" AP
 *   3. Set Mac IP in the web config (http://192.168.4.1)
 *   4. On Mac: python3 tools/local_cloud.py
 *   5. Connect Band-0 to the AP
 *   6. Band-0's DNS queries for dot.mindreset.tech → Mac
 *   7. Mac's local_cloud.py intercepts firmware query/OTA
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_timer.h"
#include "config.h"
#include "wifi_ap.h"
#include "dns_server.h"
#include "display_lcd.h"
#include "web_config.h"

static const char *TAG = "mitm_ap";

/* ── Status Update Task ─────────────────────────────────────── */
static void status_task(void *arg)
{
    (void)arg;
    int last_sta = -1;

    while (1) {
        int sta = wifi_ap_get_sta_count();
        if (sta != last_sta) {
            display_set_sta_count(sta);
            last_sta = sta;
        }

        /* Guess which device is connected based on MAC (future: DHCP lease) */
        if (sta >= 2) {
            display_set_band0_status("connected");
            display_set_mac_status("connected");
            display_set_info_line("MITM ready! Check Mac for logs.");
        } else if (sta == 1) {
            display_set_band0_status("waiting...");
            display_set_mac_status("waiting...");
            display_set_info_line("Connect both devices to AP");
        } else {
            display_set_band0_status("disconnected");
            display_set_mac_status("disconnected");
            display_set_info_line("Waiting for devices...");
        }

        display_update_status();
        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}

/* ── Main ───────────────────────────────────────────────────── */
void app_main(void)
{
    ESP_LOGI(TAG, "========================================");
    ESP_LOGI(TAG, "  Band-0 MITM AP (Cardputer ADV)");
    ESP_LOGI(TAG, "  ESP32-S3 2.4GHz AP + DNS redirect");
    ESP_LOGI(TAG, "========================================");

    /* Init NVS */
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        nvs_flash_erase();
        nvs_flash_init();
    }

    /* Init display */
    display_init();
    display_set_ap_ssid(AP_SSID_DEFAULT);
    display_set_mac_ip(MAC_IP_DEFAULT);
    display_set_info_line("Starting AP...");
    display_update_status();

    /* Init Wi-Fi AP */
    wifi_ap_init();
    display_set_ap_ssid(wifi_ap_get_ssid());
    display_set_mac_ip(wifi_ap_get_mac_ip());
    display_set_info_line("AP started! Connect your Mac.");
    display_update_status();

    /* Start DNS server */
    dns_server_start();

    /* Start web config */
    web_config_start();

    /* Start status display task */
    xTaskCreate(status_task, "status", 3072, NULL, 3, NULL);

    ESP_LOGI(TAG, "AP running: http://192.168.4.1");
    ESP_LOGI(TAG, "Connect Mac and Band-0 to '%s'", wifi_ap_get_ssid());
    ESP_LOGI(TAG, "DNS redirects dot.mindreset.tech → %s", wifi_ap_get_mac_ip());
}
