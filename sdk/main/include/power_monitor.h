#pragma once

#include "app_config.h"

#ifdef __cplusplus
extern "C" {
#endif

void power_monitor_init(void);
battery_state_t power_monitor_get_battery(void);
int power_monitor_get_adc_mv(void);
int power_monitor_get_cell_mv(void);

#ifdef __cplusplus
}
#endif
