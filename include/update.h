#ifndef UPDATE_H_INCLUDED_
#define UPDATE_H_INCLUDED_


#include "types.h"


/**
 * Id of timer for \a update() function.
 */
extern _timer_id_t update_timer_id;


/**
 * Inits timer for \a update() function and enables it.
 */
void initUpdate(void);

/**
 * Callback function for timer with \a update_timer_id id.
 * 
 * Marks window to be redisplayed
 * in the next iteration of glut main loop.
 */
void update(void);


#endif  /* UPDATE_H_INCLUDED_ */
