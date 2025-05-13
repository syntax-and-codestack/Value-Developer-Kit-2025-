//textool.h

#ifndef TEXTOOL_H
#define TEXTOOL_H

#include "libs/mathlib.h"

typedef struct texdef_s{
    const char * textureFilename;
    bool bLinear;
    bool bTransparent;
    vec3_t coords[2][3];
}texdef_t;


#endif
