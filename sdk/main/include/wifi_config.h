#pragma once

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NVS namespace for OTA/Wi-Fi requests */
#define NVS_OTA_NS "ota"

/**
 * @brief Structure for storing OTA + Wi-Fi credentials
 *        before rebooting into the updater.
 */
typedef struct {
    const char *url;
    const char *password;   /* optional */
    const char *ssid[3];
    const char *pwd[3];
} ota_wifi_request_t;

/**
 * @brief Save an OTA+Wi-Fi request to NVS and trigger updater reboot.
 *
 * The main app writes this, then sets the boot partition to updater
 * and calls esp_restart().
 *
 * @param req  Request with OTA URL and up to 3 Wi-Fi profiles.
 * @return 0 on success.
 */
int wifi_save_ota_request(const ota_wifi_request_t *req);

/**
 * @brief Erase OTA/Wi-Fi request keys from NVS.
 * Called after the updater has finished (success or fail).
 */
int wifi_clear_ota_request(void);

/**
 * @brief Connect to the best saved Wi-Fi network (or start SoftAP).
 *
 * Tries saved credentials, falls back to SoftAP portal on failure.
 * Blocks until connected or timeout.
 *
 * @return 0 on success.
 */
int wifi_connect_or_portal(void);

/**
 * @brief Initialize Wi-Fi in STA+SoftAP mode.
 */
void wifi_init(void);

#ifdef __cplusplus
}
#endif
