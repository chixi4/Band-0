/*
 * Readable recovery from main.bin.
 *
 * True firmware address: 0x42004b52.
 * Ghidra raw file:
 *   reverse/decompiled/main_fresh/functions/ram:42014b52_FUN_ram_42014b52.c
 *
 * The names below are inferred from strings, NVS keys, FreeRTOS call shapes and
 * nearby UI text. This is pseudocode for review and teaching, not a recompilable
 * replacement for the original source.
 */

#include <stdbool.h>
#include <stdint.h>

typedef enum {
    MODE_ANSWERS = 0,
    MODE_FORTUNE = 1,
    MODE_MERIT = 2,
    MODE_BT_PAGER = 3,
    MODE_CLOCK = 4,
    MODE_MBTI_GUIDE = 5,
    MODE_SETUP = 6,
} app_mode_t;

typedef struct {
    int boot_mode;
    int language;
    int mbti_type;
    int sleep_time_seconds;
    int merit_count;
    int bt_key_down;
    int bt_key_up;
    int bt_template;
    bool clock_warning;
    bool mbti_knowledge_hidden;
    bool key_sound;
} app_config_t;

typedef struct {
    int request_type;
    int request_arg;
    char message[96];
} pending_request_t;

static void key_task(void *arg);                  /* true entry 0x42004a6c */
static void draw_active_mode(app_mode_t mode);
static void draw_pending_request(const pending_request_t *request);
static void clear_ota_wifi_request(void);         /* true entry 0x42007a70 */
static int start_buzzer(void);                    /* true entry 0x42004f3a */
static int wifi_connect_saved_or_portal(void);    /* inferred around 0x42007792/0x42007a70 */
static int render_or_refresh_screen(void);        /* inferred around 0x4200e36e */
static int get_idle_timeout_seconds(void);        /* true entry near 0x420062da */
static int key_scan_get_event(void);              /* true entry near 0x42008c98 */
static bool key_event_is_exit_or_setup(int key);

void app_main_recovered(void)
{
    pending_request_t pending = {0};

    /*
     * Early init:
     * - log tags and build strings are initialized;
     * - storage/config are loaded;
     * - screen state and time/Wi-Fi state are prepared.
     */
    firmware_log_info("Quote_0_ESP8684_IDF", "1.2.5");
    storage_init_nvs_and_wp_partition();
    app_config_t config = load_app_config_from_nvs();

    /*
     * The raw code calls xTaskCreate with:
     *   entry = 0x42004a6c
     *   name  = "key_task"
     *   stack = 0x800
     *   prio  = 10
     */
    xTaskCreate(key_task, "key_task", 0x800, NULL, 10, NULL);

    while (true) {
        poll_rtc_and_network_state();
        maybe_sync_time_from_ntp();

        if (load_pending_ota_or_setup_request(&pending)) {
            draw_pending_request(&pending);
            clear_ota_wifi_request();
        }

        if (factory_or_recovery_flow_requested()) {
            enter_recovery_or_factory_flow();
            return;
        }

        if (wifi_connect_saved_or_portal() != 0) {
            show_short_status("Wi-Fi Connect Failed");
        }

        start_buzzer();
        render_or_refresh_screen();

        int start_ms = millis();
        int timeout_s = get_idle_timeout_seconds();

        for (;;) {
            if (millis() - start_ms > 20) {
                screen_tick_200ms();
                start_ms = millis();
            }

            int key = key_scan_get_event();
            if (key_event_is_exit_or_setup(key)) {
                open_setup_or_sleep_screen();
            }

            if (timeout_s > 0 && idle_time_us() >= (uint64_t)timeout_s * 1000000ULL) {
                prepare_sleep_or_lock_screen();
                if (wake_requires_redraw()) {
                    render_or_refresh_screen();
                }
            }

            handle_mode_specific_key_event(key);
            delay_ms(2);
        }
    }
}

