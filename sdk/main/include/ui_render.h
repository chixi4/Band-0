#pragma once

#include "app_config.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Render the current mode's screen to the display.
 *
 * This is the main UI render entry, called from the app loop
 * when a redraw is requested.
 */
void ui_render_current_screen(void);

/**
 * @brief Draw the "OTA/Wi-Fi setup pending" overlay.
 */
void ui_draw_pending_request(const pending_request_t *req);

/**
 * @brief Draw the setup/settings menu.
 */
void ui_draw_setup_menu(bool english);

/**
 * @brief Draw the clock/lock screen with battery.
 */
void ui_draw_clock_screen(bool english);

/**
 * @brief Draw the fortune/answer card.
 */
void ui_draw_answer_or_fortune(bool english);

/**
 * @brief Draw the merit (功德) counter.
 */
void ui_draw_merit_counter(bool english);

/**
 * @brief Draw the MBTI guide page.
 */
void ui_draw_mbti_guide(bool english);

/**
 * @brief Draw the BT pager screen.
 */
void ui_draw_bt_pager(bool english);

/**
 * @brief Draw the Claude usage quota monitor app.
 */
void ui_draw_claude_usage(bool english);

/**
 * @brief Draw a safe diagnostic status page for recovery.
 */
void ui_draw_safe_status(bool english);

/**
 * @brief Handle a key event in the context of the current mode.
 * @return true if the event was consumed.
 */
bool ui_handle_key_event(key_event_t ev);

/**
 * @brief Request a full screen redraw on the next iteration.
 */
void ui_request_redraw(void);

/**
 * @brief Clear the redraw flag.
 */
void ui_clear_redraw_request(void);

/**
 * @brief Check if a redraw was requested.
 */
bool ui_redraw_requested(void);

/**
 * @brief Push the current framebuffer to the EPD and refresh.
 */
void ui_flush_display(void);

#ifdef __cplusplus
}
#endif
