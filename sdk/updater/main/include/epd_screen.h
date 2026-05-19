#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void updater_screen_init(void);
void updater_draw_progress(int written, int total, const char *status);
void updater_draw_message(const char *msg);

#ifdef __cplusplus
}
#endif
