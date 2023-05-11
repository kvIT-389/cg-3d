#include <GL/gl.h>
#include <GL/glut.h>

#include "callback.h"
#include "mainwindow.h"
#include "draw.h"


void initCallbacks(void)
{
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutPassiveMotionFunc(passiveMotion);

    glutKeyboardFunc(keyboard);
    glutKeyboardUpFunc(keyboardUp);

    glutSpecialFunc(specialKeyboard);
    glutSpecialUpFunc(specialKeyboardUp);
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glFrustum(
        0, main_window.size.width,
        main_window.size.height, 0,
        2, 10
    );
    glTranslated(0.0, 0.0, -2.0);

    draw();

    if (glutGet(GLUT_WINDOW_DOUBLEBUFFER)) {
        glutSwapBuffers();
    }
    else {
        glFlush();
    }
}

void reshape(
    _size_component_t width,
    _size_component_t height
)
{
    main_window.size = (_size_t){width, height};

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}


void mouse(
    _mouse_button_t button,
    _mouse_button_state_t state,
    _vector_component_t x,
    _vector_component_t y
)
{
    /* Code of mouse callback */
}

void motion(
    _vector_component_t x,
    _vector_component_t y
)
{
    /* Code of mouse motion callback */
}

void passiveMotion(
    _vector_component_t x,
    _vector_component_t y
)
{
    /* Code of passive mouse motion callback */
}


void keyboard(
    _key_t key,
    _vector_component_t x,
    _vector_component_t y
)
{
    switch (key) {
        case 'q':
            destroyWindow(&main_window);
            break;
    }
}

void keyboardUp(
    _key_t key,
    _vector_component_t x,
    _vector_component_t y
)
{
    /* Code of keyboard up callback */
}


void specialKeyboard(
    _special_key_t key,
    _vector_component_t x,
    _vector_component_t y
)
{
    /* Code of special keyboard callback */
}

void specialKeyboardUp(
    _special_key_t key,
    _vector_component_t x,
    _vector_component_t y
)
{
    /* Code of special keyboard up callback */
}
