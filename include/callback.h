#ifndef CALLBACK_H_INCLUDED_
#define CALLBACK_H_INCLUDED_


#include "types.h"


/**
 * Sets defined callbacks.
 */
void initCallbacks(void);

/**
 * Current window display callback.
 */
void display(void);

/**
 * Current window reshape callback.
 * 
 * \param width New current window width.
 * \param height New current window height.
 */
void reshape(
    _size_component_t width,
    _size_component_t height
);

/**
 * Mouse callback.
 * 
 * \param button Pressed or released button.
 *               One of \c GLUT_LEFT_BUTTON,
 *                      \c GLUT_MIDDLE_BUTTON or
 *                      \c GLUT_RIGHT_BUTTON.
 * \param state Indicate whether button was pressed or released.
 *              One of \c GLUT_DOWN or \c GLUT_UP respectively.
 */
void mouse(
    _mouse_button_t button,
    _mouse_button_state_t state,
    _vector_component_t x,
    _vector_component_t y
);

/**
 * Mouse motion callback.
 */
void motion(
    _vector_component_t x,
    _vector_component_t y
);

/**
 * Mouse passive motion callback.
 */
void passiveMotion(
    _vector_component_t x,
    _vector_component_t y
);

/**
 * Keyboard callback.
 * 
 * \param key ASCII character generated by key pressing.
 */
void keyboard(
    _key_t key,
    _vector_component_t x,
    _vector_component_t y
);

/**
 * Keyboard up callback.
 * 
 * \param key ASCII character generated by key releasing.
 */
void keyboardUp(
    _key_t key,
    _vector_component_t x,
    _vector_component_t y
);

/**
 * Special keyboard callback.
 * Triggered by keyboard special key pressing.
 * 
 * \param key One of the predefined values representing
 *            special keyboard key
 *            such as function and directional keys.
 */
void specialKeyboard(
    _special_key_t key,
    _vector_component_t x,
    _vector_component_t y
);

/**
 * Special keyboard up callback.
 * Triggered by keyboard special key releasing.
 * 
 * \param key One of the predefined values representing
 *            special keyboard key
 *            such as function and directional keys.
 */
void specialKeyboardUp(
    _special_key_t key,
    _vector_component_t x,
    _vector_component_t y
);


#endif  /* CALLBACK_H_INCLUDED_ */
