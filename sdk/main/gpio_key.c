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

static const char *TAG = "gpio_key";

/* ── Internal State ──────────────────────────────────────────── */
typedef struct {
    uint8_t  gpio;
    uint8_t  short_event;
    uint8_t  long_event;
    uint64_t pressed_at_us;
    bool     pressed;
    bool     long_sent;
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

    for (;;) {
        uint64_t now = esp_timer_get_time();

        for (int i = 0; i < 2; i++) {
            key_slot_t *slot = &s_slots[i];
            int level = gpio_get_level(slot->gpio);

            if (level == 0) {
                /* Pressed (active-low) */
                if (!slot->pressed) {
                    slot->pressed = true;
                    slot->pressed_at_us = now;
                    slot->long_sent = false;
                } else if (!slot->long_sent &&
                           (now - slot->pressed_at_us) > KEY_LONG_MIN_US) {
                    /* Long press detected */
                    buzzer_click();
                    keep_awake_on_key();

                    key_event_t ev = {
                        .type    = 1,
                        .event   = slot->long_event,
                        .is_long = 1,
                    };
                    if (s_event_queue) {
                        xQueueSend(s_event_queue, &ev, 0);
                    }
                    slot->long_sent = true;
                }
                continue;
            }

            /* Released */
            if (slot->pressed) {
                slot->pressed = false;
                if (!slot->long_sent &&
                    (now - slot->pressed_at_us) > KEY_SHORT_MIN_US) {
                    /* Short press */
                    buzzer_click();
                    keep_awake_on_key();

                    key_event_t ev = {
                        .type    = 1,
                        .event   = slot->short_event,
                        .is_long = 0,
                    };
                    if (s_event_queue) {
                        xQueueSend(s_event_queue, &ev, 0);
                    }
                }
            }
        }

        vTaskDelay(scan_delay);
    }
}
