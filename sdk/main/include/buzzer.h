#pragma once

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GPIO used for buzzer (PWM / tone output) */
#define BUZZER_GPIO         10
#define BUZZER_DRIVE_CAP    3

/**
 * @brief A single tone segment in a buzzer sequence.
 */
typedef struct {
    uint16_t frequency_hz;
    uint16_t on_ms;
    uint16_t off_ms;
    uint16_t repeat;
} buzzer_seq_t;

/**
 * @brief Initialize the buzzer peripheral and GPIO.
 * @return 0 on success, ESP error code otherwise.
 */
int buzzer_init(void);

/**
 * @brief Play a sequenced tone pattern in a background task.
 *
 * @param seq     Array of tone segments.
 * @param count   Number of segments.
 * @param tail_ms Silence after the sequence ends.
 * @param volume  Volume level (0-3).
 */
void buzzer_play_seq(const buzzer_seq_t *seq, int count, uint16_t tail_ms, uint16_t volume);

/**
 * @brief Play a simple tone.
 *
 * @param freq_hz  Frequency in Hz (0 = silence).
 * @param on_ms    Tone duration in ms.
 * @param off_ms   Pause after tone in ms.
 * @param repeat   Repeat count.
 * @return 0 on success.
 */
int buzzer_play_tone(int freq_hz, int on_ms, int off_ms, int repeat);

/**
 * @brief Short "click" sound (used by key feedback).
 */
void buzzer_click(void);

/**
 * @brief Stop any ongoing buzzer sequence.
 */
void buzzer_stop(void);

#ifdef __cplusplus
}
#endif
