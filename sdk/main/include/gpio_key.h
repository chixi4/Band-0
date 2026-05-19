#pragma once

#include "app_config.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GPIO assignments (confirmed from original firmware) */
#define KEY_UP_GPIO     8   /* upper button, active-low, long=back/exit */
#define KEY_DOWN_GPIO   1   /* lower button, active-low, long=confirm/ok */

/* Timing (microseconds) */
#define KEY_DEBOUNCE_US  5000
#define KEY_SHORT_MIN_US 50000
#define KEY_LONG_MIN_US  800000

/* Event codes */
#define KEY_EVENT_CONFIRM  1   /* long press on down button */
#define KEY_EVENT_BACK     2   /* long press on up button */
#define KEY_EVENT_NEXT     3   /* short press on down button */
#define KEY_EVENT_PREV     4   /* short press on up button */

/**
 * @brief Initialize GPIO for both buttons (input, pull-up).
 */
void gpio_key_init(void);

/**
 * @brief Return the pending key event, or 0 if none.
 *
 * Non-blocking: returns 0 immediately if no event is queued.
 */
key_event_t gpio_key_get_event(void);

/**
 * @brief Return true when a key is physically pressed (active-low).
 */
bool gpio_key_up_pressed(void);
bool gpio_key_down_pressed(void);

/**
 * @brief FreeRTOS task that scans the two buttons.
 *
 * Stack: ~2KB, priority: 10.
 */
void key_task(void *arg);

#ifdef __cplusplus
}
#endif
