//ibrush.h
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#ifndef IBRUSH_H
#define IBRUSH_H

#include "libs/vl18afx.h"

//some brush stuff...
typedef bool ( *PFN_SELECT_BRUSH )( brush_t * b, vec3_t mins, vec3_t maxs );
typedef void ( *PFN_BRUSH_CREATE )( brush_t * b, vec3_t mins, vec3_t maxs, bool bsel );
typedef brush_t ( *PFN_ALLOC_BRUSH )( brush_t * b );

#endif
