/*
 * Buzzer/tone subsystem recovered from main.bin.
 *
 * Evidence strings:
 *   "buzzer"      -> true address 0x42004f3a
 *   "buzzer_seq"  -> true address 0x420050aa
 *   "buzzer_soft" -> true address 0x4200545e
 */

#include <stdint.h>

typedef struct {
    uint16_t frequency_hz;
    uint16_t on_ms;
    uint16_t off_ms;
    uint16_t repeat;
} buzzer_seq_t;

static void buzzer_worker(void *arg);     /* true entry 0x42005328 */

int buzzer_init_recovered(void)
{
    if (g_buzzer_ready) {
        return 0;
    }

    if (g_buzzer_lock == NULL) {
        g_buzzer_lock = xSemaphoreCreateMutex();
        if (g_buzzer_lock == NULL) {
            return 0x101;
        }
    }

    /*
     * The raw function opens/configures a peripheral named "buzzer", then
     * installs a small timing/output configuration. The exact peripheral API is
     * still unnamed, but the call shape is a typical ESP-IDF driver init path.
     */
    esp_err_t err = driver_open_by_name("buzzer", &g_buzzer_device);
    if (err != 0) {
        g_buzzer_device = NULL;
        return err;
    }

    err = buzzer_driver_configure(g_buzzer_device, 10, 0x4b0);
    if (err == 0) {
        buzzer_set_level_or_volume(10, 3);
        g_buzzer_ready = true;
    }
    return err;
}

void buzzer_seq_recovered(const buzzer_seq_t *seq, int count, uint16_t tail_ms, uint16_t volume)
{
    if (!g_buzzer_ready || seq == NULL) {
        return;
    }

    buzzer_stop_current_sequence();
    if (xSemaphoreTake(g_buzzer_lock, 10) == pdTRUE) {
        g_buzzer_sequence = seq;
        g_buzzer_sequence_count = count;
        g_buzzer_tail_ms = tail_ms;
        g_buzzer_volume = volume;
        g_buzzer_worker_busy = true;

        xTaskCreate(buzzer_worker, "buzzer_seq", 0x600, NULL, 5, &g_buzzer_worker_handle);
        xSemaphoreGive(g_buzzer_lock);
    }
}

int buzzer_soft_recovered(int frequency_hz, int on_ms, int off_ms, int repeat)
{
    if (!g_buzzer_ready) {
        return 0x103;
    }
    if (frequency_hz == 0 || (on_ms == 0 && off_ms == 0 && repeat == 0)) {
        return 0x102;
    }

    buzzer_stop_current_sequence();
    if (xSemaphoreTake(g_buzzer_lock, 10) != pdTRUE) {
        return 0x107;
    }

    g_soft_buzzer.frequency_hz = (uint16_t)frequency_hz;
    g_soft_buzzer.on_ms = (uint16_t)on_ms;
    g_soft_buzzer.off_ms = (uint16_t)off_ms;
    g_soft_buzzer.repeat = (uint16_t)repeat;
    g_buzzer_worker_busy = false;

    int ok = xTaskCreate(buzzer_worker, "buzzer_soft", 0x600, NULL, 5, &g_buzzer_worker_handle);
    xSemaphoreGive(g_buzzer_lock);
    return ok == pdTRUE ? 0 : 0x101;
}

