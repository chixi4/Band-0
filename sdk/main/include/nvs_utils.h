#pragma once

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize NVS flash storage.
 * Must be called early in app_main.
 */
void nvs_utils_init(void);

/**
 * @brief Load the application configuration from NVS.
 *
 * Reads from the "config" namespace. Falls back to defaults.
 */
app_config_t nvs_load_config(void);

/**
 * @brief Save the application configuration to NVS.
 */
void nvs_save_config(const app_config_t *cfg);

/**
 * @brief Reset config to factory defaults.
 */
void nvs_reset_config(void);

/**
 * @brief Load the BLE pager state from NVS.
 */
void nvs_load_bt_state(bt_pager_state_t *state);

/**
 * @brief Save the BLE pager state to NVS.
 */
void nvs_save_bt_state(const bt_pager_state_t *state);

/* ── "wp" partition helpers (raw data partition for wallpaper) ──── */

/**
 * @brief Initialize the wp data partition.
 * Must be called before any wallpaper read/write.
 */
void nvs_wp_partition_init(void);

/**
 * @brief Check if the wp partition has a custom payload.
 */
bool nvs_wp_has_payload(void);

/**
 * @brief Get the length of stored wallpaper payload.
 */
int nvs_wp_payload_length(void);

/**
 * @brief Read the wallpaper payload from the wp partition.
 * @return Number of bytes read, or negative on error.
 */
int nvs_wp_read(uint8_t *buf, size_t max_len);

/**
 * @brief Write wallpaper payload to the wp partition.
 * @return 0 on success.
 */
int nvs_wp_write(const uint8_t *data, size_t len);

/**
 * @brief Erase the wp partition (clear wallpaper).
 * @return 0 on success.
 */
int nvs_wp_erase(void);

#ifdef __cplusplus
}
#endif
