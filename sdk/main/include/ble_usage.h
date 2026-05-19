#pragma once

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    bool ready;
    bool advertising;
    bool connected;
    uint16_t conn_handle;
    uint32_t rx_count;
    uint32_t notify_count;
    char last_error[40];
} ble_usage_status_t;

int ble_usage_init(void);
void ble_usage_get_status(ble_usage_status_t *out);
void ble_usage_notify_status(void);

#ifdef __cplusplus
}
#endif
