/**
 * GPIO key scanner for Band-0.
 *
 * Two physical buttons:
 *   GPIO8  — upper button, long=back(2), short=prev(4)
 *   GPIO1  — lower button, long=confirm(1), short=next(3)
 *
 * Both are active-low with external pull-up.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "esp_timer.h"
#include "app_config.h"
#include "gpio_key.h"
#include "buzzer.h"
#include "diag_log.h"

static const char *TAG = "gpio_key";

/* ── Internal State ──────────────────────────────────────────── */
typedef struct {
    uint8_t  gpio;
    uint8_t  short_event;
    uint8_t  long_event;
    int      raw_level;
    int      stable_level;
    uint64_t raw_changed_at_us;
    uint64_t pressed_at_us;
    bool     pressed;
    bool     long_sent;
    bool     suppress_until_release;
} key_slot_t;

static key_slot_t s_slots[2] = {
    { .gpio = KEY_UP_GPIO,   .short_event = KEY_EVENT_PREV,    .long_event = KEY_EVENT_BACK },
    { .gpio = KEY_DOWN_GPIO, .short_event = KEY_EVENT_NEXT,    .long_event = KEY_EVENT_CONFIRM },
};

static QueueHandle_t s_event_queue = NULL;

/* ── Init ────────────────────────────────────────────────────── */
void gpio_key_init(void)
{
    /* Configure both GPIOs as input with pull-up */
    gpio_config_t cfg = {
        .pin_bit_mask = (1ULL << KEY_UP_GPIO) | (1ULL << KEY_DOWN_GPIO),
        .mode         = GPIO_MODE_INPUT,
        .pull_up_en   = GPIO_PULLUP_ENABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type    = GPIO_INTR_DISABLE,
    };
    gpio_config(&cfg);

    if (!s_event_queue) {
        s_event_queue = xQueueCreate(8, sizeof(key_event_t));
    }

    ESP_LOGI(TAG, "GPIO keys: UP=GPIO%d, DOWN=GPIO%d", KEY_UP_GPIO, KEY_DOWN_GPIO);
}

key_event_t gpio_key_get_event(void)
{
    key_event_t ev = {0};
    if (s_event_queue && xQueueReceive(s_event_queue, &ev, 0) == pdTRUE) {
        return ev;
    }
    return ev; /* all zeros → no event */
}

bool gpio_key_up_pressed(void)
{
    return gpio_get_level(KEY_UP_GPIO) == 0;
}

bool gpio_key_down_pressed(void)
{
    return gpio_get_level(KEY_DOWN_GPIO) == 0;
}

/* ── Key Scan Task ───────────────────────────────────────────── */
void key_task(void *arg)
{
    (void)arg;
    gpio_key_init();

    ESP_LOGI(TAG, "key_task started");

    TickType_t scan_delay = pdMS_TO_TICKS(20);
    if (scan_delay < 1) {
        scan_delay = 1;
    }

    uint64_t init_now = esp_timer_get_time();
    for (int i = 0; i < 2; i++) {
        int level = gpio_get_level(s_slots[i].gpio);
        s_slots[i].raw_level = level;
        s_slots[i].stable_level = level;
        s_slots[i].raw_changed_at_us = init_now;
        s_slots[i].pressed = (level == 0);
        s_slots[i].pressed_at_us = s_slots[i].pressed ? init_now : 0;
        s_slots[i].long_sent = false;
        s_slots[i].suppress_until_release = false;
    }

    for (;;) {
        uint64_t now = esp_timer_get_time();

        /* First pass: update debounced state for both keys. Do not emit events
         * here; simultaneous press chords must take priority over single-key
         * short/long events. */
        for (int i = 0; i < 2; i++) {
            key_slot_t *slot = &s_slots[i];
            int level = gpio_get_level(slot->gpio);
            if (level != slot->raw_level) {
                slot->raw_level = level;
                slot->raw_changed_at_us = now;
            }

            if (now - slot->raw_changed_at_us < KEY_DEBOUNCE_US) {
                continue;
            }

            if (level != slot->stable_level) {
                slot->stable_level = level;
                if (level == 0) {
                    /* Stable pressed (active-low). */
                    slot->pressed = true;
                    slot->pressed_at_us = now;
                    slot->long_sent = false;
                } else if (slot->pressed) {
                    /* Released; event emission is handled after chord checks. */
                }
            }
        }

        bool both_pressed = s_slots[0].stable_level == 0 && s_slots[1].stable_level == 0;
        if (both_pressed) {
            for (int i = 0; i < 2; i++) {
                if (!s_slots[i].suppress_until_release) {
                    diag_log_event("I", "key", "chord suppress gpio=%d", s_slots[i].gpio);
                }
                s_slots[i].suppress_until_release = true;
                s_slots[i].long_sent = true;
            }
        }

        /* Second pass: emit single-key events only when no recovery chord is
         * active or pending release. */
        for (int i = 0; i < 2; i++) {
            key_slot_t *slot = &s_slots[i];

            if (slot->stable_level != 0 && slot->pressed) {
                bool emit_short = !slot->suppress_until_release &&
                                  !slot->long_sent &&
                                  (now - slot->pressed_at_us) > KEY_SHORT_MIN_US;
                slot->pressed = false;
                slot->suppress_until_release = false;
                if (emit_short) {
                    buzzer_click();
                    keep_awake_on_key();

                    key_event_t ev = {
                        .type    = 1,
                        .event   = slot->short_event,
                        .is_long = 0,
                    };
                    diag_log_event("I", "key", "short gpio=%d ev=%d",
                                   slot->gpio, slot->short_event);
                    if (s_event_queue) {
                        xQueueSend(s_event_queue, &ev, 0);
                    }
                }
                continue;
            }

            if (slot->suppress_until_release) {
                continue;
            }

            if (slot->stable_level == 0 && slot->pressed && !slot->long_sent &&
                (now - slot->pressed_at_us) > KEY_LONG_MIN_US) {
                buzzer_click();
                keep_awake_on_key();

                key_event_t ev = {
                    .type    = 1,
                    .event   = slot->long_event,
                    .is_long = 1,
                };
                diag_log_event("I", "key", "long gpio=%d ev=%d",
                               slot->gpio, slot->long_event);
                if (s_event_queue) {
                    xQueueSend(s_event_queue, &ev, 0);
                }
                slot->long_sent = true;
            }
        }

        vTaskDelay(scan_delay);
    }
}
