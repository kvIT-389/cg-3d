#include <GL/glut.h>

#include "update.h"
#include "types.h"
#include "timer.h"


_timer_id_t update_timer_id;


void initUpdate(void)
{
    update_timer_id = timerCreate(update, 10);

    timerEnable(update_timer_id);
}

void update(void)
{
    if (glutGetWindow() > 0) {
        glutPostRedisplay();
    }
}
