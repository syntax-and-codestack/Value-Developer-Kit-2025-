//entity.h
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#ifndef ENTITY_H
#define ENTITY_H

#include "libs/mathlib.h"

class IEntity;
class IEntityStatic;
class IEntityTransformable;

typedef struct entity_s{
    const char* eKey;
    const char* eValue;
    vec3_t position;
    bool eDrawAABB;
    int enumberId;
    entity_t * prev, *owner, *next;
}entity_t;

#endif
