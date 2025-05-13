//primittypes.h
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#ifndef PRIMIT_TYPES_H
#define PRIMIT_TYPES_H

#include "entlib/entity.h"
#include "textoollib/textool.h"

class IPlane;
class IFace;
class IPatch;
class IBrush;
class ICylinder;
class IPrimitive;

typedef struct plane_s{
      int pnumId;
      entity_t * pent;
      plane_t * prev, * owner, * next;
      vec3_t pA, pB, pC;
      int points[3];
      face_t * pface;
}plane_t;

typedef struct face_s{
       int fnumId;
       entity_t * fentity;
       plane_t * fpln;
       face_t * prev, * owner, * next;
       bool fSel;//face selected
       vec3_t fA, fB, fC, fD;
       int points[4];
       brush_t * brush_face;
}face_t;

typedef struct brush_s{
      int bnumId;
      entity_t * bentity;
      plane_t * brushpln;
      face_t * brushface[6];//NOTE: standard brush has 6 faces
      brush_t * prev, *owner, *next;
      bool bSel;//select
      vec3_t mins;
      vec3_t maxs;
      const char * bKey;
      const char * bValue;
      const char * bEpair[2];// bKey, bValue
      int points[8];
      int sides[6];//again... [brushface]
      const char * brushshader;
      texdef_t * brushtexdef;
      bool bRegion;//is region brush
}brush_t;

#endif
