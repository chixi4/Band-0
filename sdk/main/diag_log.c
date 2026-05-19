#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/portmacro.h"
#include "esp_timer.h"
#include "diag_log.h"

#define DIAG_LOG_CAPACITY 40

static diag_log_entry_t s_entries[DIAG_LOG_CAPACITY];
static uint32_t s_next_seq = 1;
static size_t s_write_index = 0;
static size_t s_count = 0;
static portMUX_TYPE s_lock = portMUX_INITIALIZER_UNLOCKED;

void diag_log_event(const char *level, const char *module, const char *fmt, ...)
{
    char msg[DIAG_LOG_MSG_LEN] = {0};
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(msg, sizeof(msg), fmt ? fmt : "", ap);
    va_end(ap);

    diag_log_entry_t entry = {
        .seq = 0,
        .ms = esp_timer_get_time() / 1000,
    };
    strlcpy(entry.level, level && level[0] ? level : "I", sizeof(entry.level));
    strlcpy(entry.module, module && module[0] ? module : "sys", sizeof(entry.module));
    strlcpy(entry.message, msg, sizeof(entry.message));

    taskENTER_CRITICAL(&s_lock);
    entry.seq = s_next_seq++;
    s_entries[s_write_index] = entry;
    s_write_index = (s_write_index + 1) % DIAG_LOG_CAPACITY;
    if (s_count < DIAG_LOG_CAPACITY) {
        s_count++;
    }
    taskEXIT_CRITICAL(&s_lock);
}

size_t diag_log_snapshot(diag_log_entry_t *out, size_t max_entries)
{
    if (!out || max_entries == 0) return 0;

    taskENTER_CRITICAL(&s_lock);
    size_t count = s_count;
    if (count > max_entries) {
        count = max_entries;
    }
    size_t start = (s_write_index + DIAG_LOG_CAPACITY - s_count) % DIAG_LOG_CAPACITY;
    if (s_count > count) {
        start = (start + (s_count - count)) % DIAG_LOG_CAPACITY;
    }
    for (size_t i = 0; i < count; i++) {
        out[i] = s_entries[(start + i) % DIAG_LOG_CAPACITY];
    }
    taskEXIT_CRITICAL(&s_lock);
    return count;
}

uint32_t diag_log_count(void)
{
    taskENTER_CRITICAL(&s_lock);
    uint32_t count = s_next_seq > 0 ? s_next_seq - 1 : 0;
    taskEXIT_CRITICAL(&s_lock);
    return count;
}
