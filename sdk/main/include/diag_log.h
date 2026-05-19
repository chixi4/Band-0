#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DIAG_LOG_MSG_LEN 80

typedef struct {
    uint32_t seq;
    int64_t  ms;
    char     level[6];
    char     module[14];
    char     message[DIAG_LOG_MSG_LEN];
} diag_log_entry_t;

void diag_log_event(const char *level, const char *module, const char *fmt, ...);
size_t diag_log_snapshot(diag_log_entry_t *out, size_t max_entries);
uint32_t diag_log_count(void);

#ifdef __cplusplus
}
#endif
