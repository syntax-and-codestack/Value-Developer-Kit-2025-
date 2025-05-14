//matrix.h

#include "mathlib.h"

#ifndef MATRIX_H
#define MATRIX_H

vec3_t origin;
typedef vec_t matrix4x4[16];

//plane axis type
#define PLANE_X 0
#define PLANE_Y 1
#define PLANE_Z 2

void SnapVector( vec3_t vector );
/*!NOTE
   m4x4 looks like this..

                x  y  z
   x axis        ( 0  1  2)
   y axis        ( 4  5  6)
   z axis        ( 8  9 10)
   translation   (12 13 14)
   scale         ( 0  5 10)
 */

typedef enum { Translate, Scale, Rotate }transformtype_t;

#endif
