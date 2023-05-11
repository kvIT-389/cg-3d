#ifndef VECTOR_H_INCLUDED_
#define VECTOR_H_INCLUDED_


#include "types.h"


/**
 * Structure which stores 3-dimensional vector
 * as 3 its components i.e. x, y and z.
 * 
 * Each coordinate is stored in terms of window pixels.
 */
typedef struct vector
{
    _vector_component_t x;
    _vector_component_t y;
    _vector_component_t z;
} _vector_t;


#endif  /* VECTOR_H_INCLUDED_ */
