#pragma once

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BLE pager operating modes */
typedef enum {
    BT_MODE_YXT_PROTOCOL = 0,
    BT_MODE_PPT_REMOTE   = 1,
    BT_MODE_PHONE_PAGER  = 2,
    BT_MODE_CAMERA       = 3,
    BT_MODE_MEDIA        = 4,
    BT_MODE_READING      = 5,
    BT_MODE_VIBE_CODING  = 6,
} bt_pager_mode_t;

/**
 * @brief BLE pager state, shared between UI and HID worker.
 */
typedef struct {
    bt_pager_mode_t mode;
    uint8_t         down_key;
    uint8_t         up_key;
    uint8_t         template_id;
    bool            redraw_requested;
    bool            worker_running;
} bt_pager_state_t;

/**
 * @brief Initialize BLE and start the HID device.
 * Called once from the BT pager screen entry.
 */
void ble_pager_init(void);

/**
 * @brief Send a key press over BLE HID.
 *
 * @param key_id  Index into the current mode's key table.
 * @param is_down true for press, false for release.
 */
void ble_pager_send_key(uint8_t key_id, bool is_down);

/**
 * @brief Get the label for a key in the current mode.
 */
const char *ble_pager_key_label(uint8_t key_id, bool english);

/**
 * @brief Rebuild the BLE advertisements if the mode changed.
 */
void ble_pager_update_advertisement(bt_pager_mode_t mode);

/**
 * @brief Stop BLE and release resources.
 */
void ble_pager_deinit(void);

/**
 * @brief FreeRTOS task for BLE HID worker.
 * Stack: 5KB, priority: 5.
 */
void ble_hid_worker(void *arg);

#ifdef __cplusplus
}
#endif
