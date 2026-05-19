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

typedef struct {
    bool sta_connected;
    bool portal_active;
    int  state;
    int  retry_count;
    char ip[16];
} wifi_runtime_status_t;

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
 * @brief Mark the current OTA request as armed for an updater reboot.
 *
 * The marker is cleared on the next main-app boot so stale OTA URLs do not
 * remain visible after the updater has returned to main.
 */
int wifi_mark_ota_reboot_armed(void);

/**
 * @brief Clear an armed or legacy-completed OTA request after main boots.
 *
 * @return 1 when a stale/completed request was cleared, 0 when no cleanup was
 *         needed, or a negative ESP error code on failure.
 */
int wifi_finalize_ota_request_on_main_boot(void);

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

/**
 * @brief Snapshot Wi-Fi runtime state for health/status endpoints.
 */
void wifi_get_runtime_status(wifi_runtime_status_t *out);

#ifdef __cplusplus
}
#endif
