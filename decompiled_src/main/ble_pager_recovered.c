/*
 * BLE pager / HID UI recovery from main.bin.
 *
 * Important true addresses:
 *   0x4200a91c key-label lookup
 *   0x4200ab56 selectable row drawing
 *   0x4200b0a8 BT pager screen/task orchestration
 *
 * Evidence strings include:
 *   "Starting BLE", "BLE init failed", "BT_PAGER", "YXT Protocol",
 *   "PPT Remote", "Phone Pager", "Camera", "Media", "Reading",
 *   "Page Up", "Page Down", "F5 Present", "Escape", "AI Invoke".
 */

#include <stdbool.h>
#include <stdint.h>

typedef enum {
    BT_MODE_YXT_PROTOCOL = 0,
    BT_MODE_PPT_REMOTE = 1,
    BT_MODE_PHONE_PAGER = 2,
    BT_MODE_CAMERA = 3,
    BT_MODE_MEDIA = 4,
    BT_MODE_READING = 5,
    BT_MODE_VIBE_CODING = 6,
} bt_pager_mode_t;

typedef struct {
    uint8_t down_key;
    uint8_t up_key;
    uint8_t template_id;
    bt_pager_mode_t mode;
    bool redraw_requested;
    bool ble_worker_running;
} bt_pager_state_t;

static const char *bt_key_label_recovered(uint8_t key_id, bool english)
{
    /*
     * Raw function indexes a table of 16-byte records and returns one of two
     * string pointers, depending on the language flag.
     */
    const bt_key_label_t *table = bt_key_label_table();
    int count = bt_key_label_count();
    if (key_id >= count) {
        key_id = 0;
    }
    return english ? table[key_id].en : table[key_id].zh;
}

static void draw_selectable_row_recovered(int y, const char *text, bool selected)
{
    /*
     * The raw function draws a 0x10..0xb7 by 0x1a high row, then prints the
     * label at y + 5. Selected rows use foreground style 0, others use style 3.
     */
    if (selected) {
        epd_fill_rounded_rect(0x10, y, 0xa8, 0x1a, 4);
        epd_text(y + 5, text, TEXT_STYLE_INVERTED);
    } else {
        epd_outline_or_clear_row(0x10, y, 0xa8, 0x1a);
        epd_text(y + 5, text, TEXT_STYLE_NORMAL);
    }
}

void bt_pager_screen_recovered(bt_pager_state_t *state)
{
    if (!screen_is_ready() || state == NULL || !state->redraw_requested) {
        return;
    }

    epd_begin_frame();

    switch (state->mode) {
    case BT_MODE_CAMERA:
        epd_text(8, localized("Camera", "拍照"), TEXT_STYLE_TITLE);
        draw_key_rows_for_camera(state);
        break;
    case BT_MODE_MEDIA:
        epd_text(8, localized("Media", "媒体"), TEXT_STYLE_TITLE);
        draw_key_rows_for_media(state);
        break;
    case BT_MODE_YXT_PROTOCOL:
    case BT_MODE_PPT_REMOTE:
    case BT_MODE_PHONE_PAGER:
    case BT_MODE_READING:
    case BT_MODE_VIBE_CODING:
    default:
        draw_template_and_key_mapping(state);
        break;
    }

    if (!state->ble_worker_running) {
        state->ble_worker_running = true;
        int ok = xTaskCreate(ble_hid_worker, "ble_init", 0x1400, NULL, 5,
                             &g_ble_worker_handle);
        if (ok != pdTRUE) {
            state->mode = BT_MODE_VIBE_CODING;
            show_status(localized("BLE init failed", "蓝牙初始化失败"));
            state->ble_worker_running = false;
        }
    }

    state->redraw_requested = false;
    epd_end_frame_or_refresh();
}

