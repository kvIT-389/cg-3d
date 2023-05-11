#include <GL/glut.h>

#include "mainwindow.h"
#include "callback.h"
#include "update.h"
#include "vector.h"
#include "size.h"


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(
        GLUT_RGBA |
        GLUT_DOUBLE |
        GLUT_DEPTH |
        GLUT_MULTISAMPLE
    );

    glEnable(GL_DEPTH_TEST);

    initWindow(
        &main_window, "OpenGL 3D",
        (_size_t){480, 480},
        (_vector_t){200, 200}
    );

    initCallbacks();
    initUpdate();

    glutMainLoop();

    return 0;
}
