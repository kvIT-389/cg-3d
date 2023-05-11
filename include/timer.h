#ifndef TIMER_H_INCLUDED_
#define TIMER_H_INCLUDED_


#include "types.h"


typedef void (*_timer_callback_fn)();


typedef enum {
    TimerDisabled,
    TimerEnabled
} _timer_state_t;


/**
 * Structure which defines callback function
 * called with some time interval.
 * 
 * Timer can be enabled or disabled with functions
 * \a timerEnable(...) and \a timerDisable(...)
 * respectively giving as their argument id of timer.
 */
typedef struct
{
    _timer_id_t id;

    _timer_callback_fn callback;
    _time_t interval;

    _timer_state_t state;
} _timer_t;


/**
 * Creates new timer and returns its id.
 * 
 * \param[in] callback callback of new timer.
 * \param[in] interval time interval of new timer.
 * 
 * \return id of new timer.
 */
_timer_id_t timerCreate(
    _timer_callback_fn callback,
    _time_t interval
);


/**
 * Returns pointer to timer with the given id if exist.
 * Otherwise returns \c NULL.
 * 
 * \param[in] timer_id id of returned timer.
 */
_timer_t *timerGet(_timer_id_t timer_id);


/**
 * Disables timer with the given id if exist.
 * Otherwise does nothing.
 * 
 * \param[in] timer_id id of timer to disable.
 */
void timerDisable(_timer_id_t timer_id);

/**
 * Enables timer with the given id if exist.
 * Otherwise does nothing.
 * 
 * \param[in] timer_id id of timer to enable.
 */
void timerEnable(_timer_id_t timer_id);


#endif  /* TIMER_H_INCLUDED_ */
