#pragma once

//brush.h

#include "vl18afx.h"

brush_t* Alloc_Brush();
brush_t* Brush_SetCount(brush_t* b);
brush_t* Brush_Dummy(brush_t* b);
std::size_t BrushSize();

const char* Brush_Name(brush_t* b);

face_t* Alloc_Face(face_t* f);
plane_t* Alloc_Plane(plane_t* p);

void Construct_Brush(brush_t* b, vec3_t bMins, vec3_t bMaxs, bool bSel, texdef_t * texture);
brush_t* Create_Brush(brush_t* b);

bool BrushIsSelected(brush_t* b);
bool Brush_FaceSelected(face_t* f, brush_t* b);

bool bBrushPrimitMode;//single use not member

void Free_Brush(brush_t* b);

void SelectBrush(brush_t* b);
void SelectFace(face_t* f);

void Brush_SetTexdef(brush_t* b, texdef_t* t);

void Brush_DrawAABB(brush_t* b);

brush_t* Make_BrushAABB(brush_t* b, vec3_t bMins, vec3_t bMaxs);

void Brush_MakeFace(brush_t* b, face_t* f);

//drag the selected brush
void Drag_BrushSel(brush_t* b);

void Brush_LockEpair(brush_t* b, const char* key, const char* value);