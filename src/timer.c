#include <stdlib.h>

#include <GL/glut.h>

#include "timer.h"


_timer_t *timers;
_timer_id_t timers_count = 0;


_timer_id_t timerCreate(
    _timer_callback_fn callback,
    _time_t interval
)
{
    timers = realloc(
        timers, sizeof(_timer_t) * (++timers_count)
    );

    _timer_t timer = {
        timers_count - 1,
        callback,
        interval,
        TimerDisabled
    };
    timers[timer.id] = timer;

    return timer.id;
}


_timer_t *timerGet(_timer_id_t timer_id)
{
    if (timer_id >= timers_count) return NULL;

    return &timers[timer_id];
}


void timerWrapper(_timer_id_t timer_id)
{
    _timer_t *timer = timerGet(timer_id);
    if (!timer) return;

    if (timer->state == TimerDisabled) return;

    if (timer->callback) timer->callback();

    glutTimerFunc(timer->interval, timerWrapper, timer_id);
}


void timerDisable(_timer_id_t timer_id)
{
    _timer_t *timer = timerGet(timer_id);
    if (!timer) return;

    timer->state = TimerDisabled;
}

void timerEnable(_timer_id_t timer_id)
{
    _timer_t *timer = timerGet(timer_id);
    if (!timer) return;

    if (timer->state == TimerEnabled) return;

    timer->state = TimerEnabled;
    timerWrapper(timer_id);
}
