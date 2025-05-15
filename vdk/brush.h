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
void Construct_Brush(brush_t* b, vec3_t bMins, vec3_t bMaxs, bool bSel, texdef_t* texture);
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
void Brush_AddToBspList(brush_t* b, brush_t* blst);
void Brush_BspBuild(brush_t* b);
brush_t* Brush_Copy(brush_t* b);
brush_t* Brush_FullCopy(brush_t* b);
void Brush_Resize(brush_t* b, vec3_t bMin, vec3_t bMax);
void Brush_DrawFace(brush_t* b, face_t* f, int GL);
void Brush_DrawXY(brush_t* b, int view_t);
void Brush_DrawXZ(brush_t* b, int view_t);
void Brush_DrawYZ(brush_t* b, int view_t);
int Brush_MemoryInfo(brush_t* b);
void Brush_MakeSides(int sides);
void Brush_ConstructCuboid(brush_t* b, int sides[6], vec3_t bMins, vec3_t bMaxs);
void Brush_MoveSel(brush_t* b, const vec3_t movesel);
bool Brush_bCaulked(brush_t* b, texdef_t* t);
void Brush_Rotate(brush_t* b, vec3_t bAngle, vec3_t bOrigin);
void Brush_DeleteDummyFaces(brush_t* b);
void Brush_LockEpair(brush_t* b, const char* key, const char* value);
int MakePlanePoint(float* f);
void Face_Free(face_t* f);
face_t* Face_Copy(face_t* f);
face_t* Face_FullCopy(face_t* f);
void Face_SetTexture(face_t* f, const char pName);
//get the brush name and string to list... maybe function might change
const std::string Brush_String( brush_t * b );
int Brush_Side( brush_t * b );
vec_t Brush_SarrusDet(vec3_t a, vec3_t b, vec3_t c);
void BP_BrushSet_MatTexdefCoords( brush_t * b, vec3_t MA[3], vec3_t MB[3] );
void Brush_Print( brush_t * b );
void Brush_PrintPlane( plane_t * p, brush_t * b );
void Brush_PrintFace( face_t * f, brush_t * b );
void Brush_PrintVectors( vec3_t v, brush_t * b );
brush_t * Brush_MakePyramid( brush_t * b );
brush_t * Brush_MakeSphere( brush_t * b );
brush_t * Brush_MakeCylinder( brush_t * b );
void Delete_Brush( brush_t * b );
brush_t * Brush_Tall(brush_t * b);
void Compute_BrushBaseAxis( brush_t * b );
brush_t * Brush_MakePatch( brush_t * b );
int Brush_SetSpawnflags( brush_t * b );
static char * Brush_Buffer(brush_t * b);
brush_t * pConvert_Mesh(brush_t * b);
void Brush_Bounds(brush_t * b, vec3_t MB[4], vec3_t MB[4]);
brush_t * Brush_CovertCSG(brush_t * b);
void Brush_SubtractCSG(brush_t * b);
void Brush_AddCSG(brush_t * b);
brush_t * Brush_AddToList(brush_t * b);
brush_t * Brush_WorldCoord(brush_t * b);
void Hook_BrushCoord(brush_t * b);
vec3_t Brush_MidPoint( brush_t * b );
bool Highlight_SelBrush(brush_t * b);//highlight selected brush
void Brush_Highlight(brush_t * b, vec3_t d_color);
bool Brush_DisableBrushSel(brush_t * b);
bool Brush_DisableBrushSelFace(brush_t* b, face_t * f);
void Brush_LockCoord(brush_t * b, vec3_t coord);//brush cannot be moved or scaled
bool Clip_Brush(brush_t * b, int point);
void Brush_ClipPoint(brush_t * b, vec3_t pnt, int point);
void Brush_SaveBPInfo(brush_t * b, const char * pFilename);
brush_t * Unchain_BrushFromList(brush_t * b);
brush_t * Brush_PreviousList(brush_t * b);
brush_t * Brush_OwnerList(brush_t * b);
brush_t * Brush_NextList(brush_t * b);
vec3_t Brush_TextureCoordinates[18];
brush_t * Brush_ConstructMenu(brush_t* b);
const char * Brush_MenuStrings[8];
void Select_BrushVertice(brush_t * b, float v);
