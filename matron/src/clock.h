#pragma once

#include <lua.h>

typedef enum {
    CLOCK_SOURCE_TEMPO	= 0,
    CLOCK_SOURCE_MIDI = 1,
} clock_source_t;

void clock_init();
bool clock_schedule_resume_sleep(int thread_id, double seconds);
bool clock_schedule_resume_sync(int thread_id, double beats);
void clock_update_reference(int beats, double beat_duration);
void clock_update_reference_from(int beats, double beat_duration, clock_source_t source);
void clock_set_source(clock_source_t source);
void clock_cancel_all();

double clock_gettime_beats();
double clock_gettime_secondsf();

void clock_cancel(int);
void clock_cancel_coro(int);
