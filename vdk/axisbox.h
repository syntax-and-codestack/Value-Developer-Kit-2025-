//axisbox.h

#include "mathlib.h"

typedef struct aabb_s{
    vec3_t origin;
    vec3_t extents;
    vec3_t rad;
}aabb_t;
