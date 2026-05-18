/*
 * GPIO key map and button scanner recovered from main.bin.
 *
 * True addresses:
 *   0x42004a6c key_task
 *   0x4200ad14 bt/page/settings key event handler
 *   0x4200c0f6 light-sleep wake check
 *
 * Ghidra files are +0x10000:
 *   ram:42014a6c_FUN_ram_42014a6c.c
 *   ram:4201ad14_FUN_ram_4201ad14.c
 *   ram:4201c0f6_FUN_ram_4201c0f6.c
 */

#include <stdint.h>
#include <stdbool.h>

#define KEY_UP_BACK_GPIO   8
#define KEY_DOWN_OK_GPIO   1

#define KEY_SHORT_MIN_US   50000
#define KEY_LONG_MIN_US    800000

typedef struct {
    uint32_t gpio;
    uint32_t short_event;
    uint32_t long_event;
    uint32_t reserved;
    uint64_t pressed_at_us;
    bool pressed;
    bool long_sent;
    uint8_t pad[6];
} key_slot_t;

/*
 * Raw table location:
 *   runtime 0x3fcb6f18, file offset 0x53f70.
 *
 * Entry 0: gpio=8, short_event=4, long_event=2.
 * Entry 1: gpio=1, short_event=3, long_event=1.
 *
 * The user confirmed the physical behavior:
 *   upper long press = exit/back
 *   lower long press = confirm/OK
 */
static key_slot_t g_key_slots_recovered[2] = {
    { KEY_UP_BACK_GPIO,   4, 2 },
    { KEY_DOWN_OK_GPIO,   3, 1 },
};

static void dispatch_key_event(uint32_t event, bool is_long)
{
    key_event_t msg = {
        .type = 1,
        .event = event,
        .is_long = is_long,
    };

    ui_key_event_queue_send(&msg);
}

void key_task_recovered(void *arg)
{
    (void)arg;

    for (;;) {
        uint64_t now = esp_timer_get_time();

        for (size_t i = 0; i < 2; ++i) {
            key_slot_t *slot = &g_key_slots_recovered[i];

            /*
             * Both buttons are active-low. Level 0 means pressed.
             */
            if (gpio_get_level(slot->gpio) == 0) {
                if (!slot->pressed) {
                    slot->pressed = true;
                    slot->pressed_at_us = now;
                    slot->long_sent = false;
                } else if (!slot->long_sent && now - slot->pressed_at_us > KEY_LONG_MIN_US) {
                    buzzer_click();
                    keep_awake_on_key();
                    dispatch_key_event(slot->long_event, true);
                    slot->long_sent = true;
                }
                continue;
            }

            if (slot->pressed) {
                slot->pressed = false;
                if (!slot->long_sent && now - slot->pressed_at_us > KEY_SHORT_MIN_US) {
                    buzzer_click();
                    keep_awake_on_key();
                    dispatch_key_event(slot->short_event, false);
                }
            }
        }

        vTaskDelay(pdMS_TO_TICKS(1));
    }
}

/*
 * Event semantics recovered from 0x4200ad14:
 *
 *   event 1 + long  -> confirm / enter / accept in menus.
 *   event 2 + long  -> back / exit / cancel.
 *   event 3 + short -> next / down in list-like UIs.
 *   event 4 + short -> previous / up in list-like UIs.
 */
