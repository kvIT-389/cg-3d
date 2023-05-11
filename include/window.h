#ifndef WINDOW_H_INCLUDED_
#define WINDOW_H_INCLUDED_


#include "types.h"
#include "vector.h"
#include "size.h"


/**
 * Structure which stores data associated with one of
 * the application windows such as its id and current size.
 * 
 * if id is equals to zero window is not
 * associated with any application window.
 */
typedef struct window
{
    _window_id_t id;

    _size_t size;
} Window;


/**
 * Creates a new window and initializes window instance
 * with data associated with created window.
 * 
 * \param[out] window window instance to be initialized.
 * \param[in] title title of new window.
 * \param[in] size initial size of new window.
 * \param[in] position initial position of new window.
 */
void initWindow(
    Window *window, const char *title,
    _size_t size, _vector_t position
);

/**
 * Destroys the window and associated with it OpenGL context.
 * 
 * \param window window to be destroyed.
 */
void destroyWindow(Window *window);


#endif  /* WINDOW_H_INCLUDED_ */
