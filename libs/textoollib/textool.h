//textool.h
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

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
