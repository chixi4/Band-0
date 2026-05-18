#pragma once

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ── Application Modes ─────────────────────────────────────── */
typedef enum {
    APP_MODE_ANSWERS = 0,
    APP_MODE_FORTUNE = 1,
    APP_MODE_MERIT   = 2,
    APP_MODE_BT_PAGER = 3,
    APP_MODE_CLOCK   = 4,
    APP_MODE_MBTI_GUIDE = 5,
    APP_MODE_SETUP   = 6,
} app_mode_t;

/* ── Application Configuration (stored in NVS) ─────────────── */
typedef struct {
    int  boot_mode;
    int  language;              /* 0=Chinese, 1=English */
    int  mbti_type;
    int  sleep_time_seconds;
    int  merit_count;
    int  bt_key_down;
    int  bt_key_up;
    int  bt_template;
    bool clock_warning;
    bool mbti_knowledge_hidden;
    bool key_sound;
} app_config_t;

/* ── Pending OTA / Wi-Fi Setup Request ─────────────────────── */
typedef struct {
    int  request_type;
    int  request_arg;
    char message[96];
} pending_request_t;

/* ── Key Event (from key_task → UI) ────────────────────────── */
typedef struct {
    uint8_t type;       /* always 1 */
    uint8_t event;      /* 1=confirm, 2=back, 3=next, 4=prev */
    uint8_t is_long;
    uint8_t pad;
} key_event_t;

/* ── Battery State ─────────────────────────────────────────── */
typedef struct {
    int  percentage;    /* -1 when unknown */
    bool charging;
} battery_state_t;

/* ── Global Declarations ───────────────────────────────────── */
extern app_config_t   g_config;
extern app_mode_t     g_current_mode;
extern volatile bool  g_ui_redraw_requested;
extern volatile bool  g_screen_sleeping;

void          app_mode_init(void);
app_mode_t    current_mode(void);
void          set_current_mode(app_mode_t mode);

bool          language_is_english(void);
const char   *localized(const char *en, const char *zh);

void          show_short_status(const char *msg);
void          show_status(const char *msg);

uint64_t      idle_time_us(void);
int           get_idle_timeout_seconds(void);
void          keep_awake_on_key(void);

int           millis(void);
void          delay_ms(uint32_t ms);

/* Debug logging helper (wraps ESP_LOG) */
#define TAG "rand0"
#define LOGI(...) ESP_LOGI(TAG, ##__VA_ARGS__)
#define LOGW(...) ESP_LOGW(TAG, ##__VA_ARGS__)
#define LOGE(...) ESP_LOGE(TAG, ##__VA_ARGS__)

#ifdef __cplusplus
}
#endif
