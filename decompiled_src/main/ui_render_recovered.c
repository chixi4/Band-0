/*
 * Main UI/status rendering recovery from main.bin.
 *
 * True address used for the major renderer: 0x4200e36e.
 * Ghidra raw file:
 *   reverse/decompiled/main_fresh/functions/ram:4201e36e_FUN_ram_4201e36e.c
 *
 * This function is large because it handles multiple screens. Strings prove
 * rendering for MBTI guide, setup, clock/lock, battery text and wallpaper.
 */

#include <stdbool.h>

typedef struct {
    int percentage;      /* -1 when unknown */
    bool charging;
} battery_state_t;

static void draw_battery_status_recovered(const battery_state_t *battery)
{
    char text[24];

    if (battery == NULL || battery->percentage < 0) {
        snprintf(text, sizeof(text), "BAT: --");
    } else if (battery->charging) {
        snprintf(text, sizeof(text), "BAT: CHG");
    } else {
        snprintf(text, sizeof(text), "BAT: %d%%", battery->percentage);
    }
    epd_text(0xb6, text, TEXT_STYLE_NORMAL);
}

void render_current_screen_recovered(void)
{
    if (!screen_is_ready()) {
        return;
    }
    if (!ui_redraw_requested()) {
        return;
    }

    app_mode_t mode = current_mode();
    bool english = language_is_english();

    switch (mode) {
    case MODE_MBTI_GUIDE:
        draw_mbti_guide_page(english);
        break;
    case MODE_BT_PAGER:
        draw_bt_pager_page(english);
        break;
    case MODE_CLOCK:
        draw_clock_or_lock_page(english);
        draw_battery_status_recovered(read_battery_state());
        break;
    case MODE_SETUP:
        draw_setup_menu(english);
        break;
    case MODE_MERIT:
        draw_merit_counter(english);
        break;
    case MODE_FORTUNE:
    case MODE_ANSWERS:
    default:
        draw_answer_or_fortune_card(english);
        break;
    }

    if (custom_wallpaper_enabled()) {
        draw_custom_wallpaper_from_wp_partition();
    }
    epd_refresh();
    clear_ui_redraw_request();
}

