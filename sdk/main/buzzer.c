/**
 * Buzzer / tone driver for Band-0.
 *
 * Uses the LEDC PWM peripheral on GPIO10 to produce tones.
 */

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "driver/ledc.h"
#include "esp_err.h"
#include "app_config.h"
#include "buzzer.h"

/* ── LEDC Configuration ──────────────────────────────────────── */
#define BUZZER_LEDC_SPEED   LEDC_LOW_SPEED_MODE
#define BUZZER_LEDC_CHANNEL LEDC_CHANNEL_0
#define BUZZER_LEDC_TIMER   LEDC_TIMER_0
#define BUZZER_LEDC_DUTY    0x2000  /* ~50% duty cycle */

/* ── Global State ────────────────────────────────────────────── */
static bool              s_ready = false;
static SemaphoreHandle_t s_lock  = NULL;
static TaskHandle_t      s_worker = NULL;

static const buzzer_seq_t *s_sequence      = NULL;
static int                 s_sequence_count = 0;
static uint16_t            s_tail_ms        = 0;
static uint16_t            s_volume         = 3;
static volatile bool       s_worker_busy    = false;

/* Simple single-tone state */
static volatile int s_single_freq = 0;
static volatile int s_single_on   = 0;
static volatile int s_single_off  = 0;
static volatile int s_single_repeat = 0;

/* ── Forward ─────────────────────────────────────────────────── */
static void buzzer_worker_task(void *arg);

/* ── Init ────────────────────────────────────────────────────── */
int buzzer_init(void)
{
    if (s_ready) return 0;

    if (!s_lock) {
        s_lock = xSemaphoreCreateMutex();
        if (!s_lock) return 0x101;
    }

    /* Configure LEDC timer for buzzer frequency range */
    ledc_timer_config_t timer = {
        .speed_mode      = BUZZER_LEDC_SPEED,
        .duty_resolution = LEDC_TIMER_13_BIT,
        .timer_num       = BUZZER_LEDC_TIMER,
        .freq_hz         = 2000,   /* default, changed dynamically */
        .clk_cfg         = LEDC_AUTO_CLK,
    };
    esp_err_t err = ledc_timer_config(&timer);
    if (err != ESP_OK) {
        LOGE("ledc_timer_config: %s", esp_err_to_name(err));
        return err;
    }

    ledc_channel_config_t chan = {
        .gpio_num   = BUZZER_GPIO,
        .speed_mode = BUZZER_LEDC_SPEED,
        .channel    = BUZZER_LEDC_CHANNEL,
        .intr_type  = LEDC_INTR_DISABLE,
        .timer_sel  = BUZZER_LEDC_TIMER,
        .duty       = 0,
        .hpoint     = 0,
    };
    err = ledc_channel_config(&chan);
    if (err != ESP_OK) {
        LOGE("ledc_channel_config: %s", esp_err_to_name(err));
        return err;
    }

    /* Set drive capability (from original firmware) */
    gpio_set_drive_capability(BUZZER_GPIO, GPIO_DRIVE_CAP_3);

    s_ready = true;
    LOGI("buzzer ready on GPIO%d", BUZZER_GPIO);
    return 0;
}

/* ── Internal: set frequency and turn on/off ─────────────────── */
static void buzzer_set_freq(int freq_hz)
{
    if (freq_hz > 0) {
        ledc_set_freq(BUZZER_LEDC_SPEED, BUZZER_LEDC_TIMER, freq_hz);
        ledc_set_duty(BUZZER_LEDC_SPEED, BUZZER_LEDC_CHANNEL, BUZZER_LEDC_DUTY);
        ledc_update_duty(BUZZER_LEDC_SPEED, BUZZER_LEDC_CHANNEL);
    } else {
        ledc_set_duty(BUZZER_LEDC_SPEED, BUZZER_LEDC_CHANNEL, 0);
        ledc_update_duty(BUZZER_LEDC_SPEED, BUZZER_LEDC_CHANNEL);
    }
}

/* ── Worker task ─────────────────────────────────────────────── */
static void buzzer_worker_task(void *arg)
{
    (void)arg;

    if (s_sequence && s_sequence_count > 0) {
        /* Play a sequence */
        for (int i = 0; i < s_sequence_count; i++) {
            const buzzer_seq_t *seg = &s_sequence[i];
            for (int r = 0; r < seg->repeat; r++) {
                if (seg->frequency_hz > 0) {
                    buzzer_set_freq(seg->frequency_hz);
                }
                vTaskDelay(pdMS_TO_TICKS(seg->on_ms));
                buzzer_set_freq(0);
                vTaskDelay(pdMS_TO_TICKS(seg->off_ms));
            }
        }
        if (s_tail_ms > 0) {
            vTaskDelay(pdMS_TO_TICKS(s_tail_ms));
        }
    } else if (s_single_repeat > 0) {
        /* Play a simple tone */
        for (int r = 0; r < s_single_repeat; r++) {
            if (s_single_freq > 0) {
                buzzer_set_freq(s_single_freq);
            }
            vTaskDelay(pdMS_TO_TICKS(s_single_on));
            buzzer_set_freq(0);
            vTaskDelay(pdMS_TO_TICKS(s_single_off));
        }
    }

    s_worker_busy = false;
    s_worker = NULL;
    vTaskDelete(NULL);
}

/* ── Public API ──────────────────────────────────────────────── */
void buzzer_play_seq(const buzzer_seq_t *seq, int count,
                     uint16_t tail_ms, uint16_t volume)
{
    if (!s_ready || !seq || count <= 0) return;

    buzzer_stop();

    if (xSemaphoreTake(s_lock, pdMS_TO_TICKS(10)) == pdTRUE) {
        s_sequence       = seq;
        s_sequence_count = count;
        s_tail_ms        = tail_ms;
        s_volume         = volume;
        s_worker_busy    = true;

        xTaskCreate(buzzer_worker_task, "buzzer_seq", 0x600, NULL, 5, &s_worker);
        xSemaphoreGive(s_lock);
    }
}

int buzzer_play_tone(int freq_hz, int on_ms, int off_ms, int repeat)
{
    if (!s_ready) return 0x103;
    if (freq_hz == 0 || (on_ms == 0 && off_ms == 0 && repeat == 0)) {
        return 0x102;
    }

    buzzer_stop();

    if (xSemaphoreTake(s_lock, pdMS_TO_TICKS(10)) != pdTRUE) {
        return 0x107;
    }

    s_single_freq   = freq_hz;
    s_single_on     = on_ms;
    s_single_off    = off_ms;
    s_single_repeat = repeat;
    s_sequence      = NULL;
    s_sequence_count = 0;
    s_worker_busy   = true;

    int ok = xTaskCreate(buzzer_worker_task, "buzzer_soft", 0x600, NULL, 5, &s_worker);
    xSemaphoreGive(s_lock);
    return (ok == pdTRUE) ? 0 : 0x101;
}

void buzzer_click(void)
{
    buzzer_play_tone(2000, 30, 10, 1);
}

void buzzer_stop(void)
{
    if (s_worker) {
        vTaskDelete(s_worker);
        s_worker = NULL;
    }
    buzzer_set_freq(0);
    s_worker_busy = false;
    s_sequence = NULL;
    s_sequence_count = 0;
}
