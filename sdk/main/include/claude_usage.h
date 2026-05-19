#pragma once

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int current_used;
    int current_remaining;
    char current_resets_in[20];

    int weekly_used;
    int weekly_remaining;
    char weekly_resets_in[20];

    char model[18];
    char status[14];
    char source[22];
    char error[48];
    int age_seconds;
    bool stale;
    bool is_demo;
    bool has_data;
    uint32_t footer_seed;
    int64_t last_update_ms;
    char last_transport[12];
} claude_usage_state_t;

void claude_usage_init(void);
void claude_usage_reset(const char *hint);
bool claude_usage_receive_json(const char *line, const char *transport);
void claude_usage_get_state(claude_usage_state_t *out);

#ifdef __cplusplus
}
#endif
