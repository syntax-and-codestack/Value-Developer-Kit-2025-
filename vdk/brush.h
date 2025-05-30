#pragma once

//brush.h

#include "Value-Developer-Kit-2025--main/Value-Developer-Kit-2025--main/libs/vl18afx.h"

brush_t* Alloc_Brush();//done
brush_t* Brush_SetCount(brush_t* b);//done
brush_t* Brush_Dummy(brush_t* b);//done
std::size_t BrushSize();//done
brush_t* Color_Brush(brush_t* b);
face_t* Face_SetCount(brush_t* b, face_t * f);
const char* Brush_Name(brush_t* b);//done
char* Brush_Buffer(brush_t* b);//done
face_t* Face_Dummy(brush_t* b, face_t * f);
plane_t* Plane_Dummy(brush_t* b, plane_t* p);
face_t* Alloc_Face();
plane_t* Alloc_Plane();
plane_t* Brush_Plane(brush_t* b, vec3_t pa, vec3_t pb, vec3_t pc);
void Construct_Brush(brush_t* b, vec3_t bMins, vec3_t bMaxs, bool bSel, texdef_t* texture);
brush_t* Create_Brush(brush_t* b);//done
bool BrushIsSelected(brush_t* b);
bool Brush_FaceSelected(face_t* f, brush_t* b);
bool bBrushPrimitMode;//single use not member
void Free_Brush(brush_t* b);//done
void Select_Brush(brush_t* b);
void Select_Face(face_t* f);
void Brush_SetTexdef(brush_t* b, texdef_t* t);
void Brush_DrawAABB(brush_t* b);
brush_t* Make_BrushAABB(brush_t* b, vec3_t bMins, vec3_t bMaxs);
void Brush_MakeFace(brush_t* b, face_t* f);
//drag the selected brush
void Drag_BrushSel(brush_t* b);
void Brush_AddToBspList(brush_t* b, brush_t* blst);
void Brush_BspBuild(brush_t* b);
brush_t* Brush_Copy(brush_t* b);//done
brush_t* Brush_FullCopy(brush_t* b);//done
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
void Brush_DeleteDummyFaces(brush_t* b);//done
void Brush_LockEpair(brush_t* b, const char* key, const char* value);//done
int MakePlanePoint(float* f);
void BrushPlane_Free(plane_t* p);
void BrushFace_Free(face_t* f);
face_t* Face_Copy(face_t* f);
face_t* Face_FullCopy(face_t* f);
void Face_SetTexture(face_t* f, const char * pName);
//get the brush name and string to list... maybe function might change
const std::string Brush_String( brush_t * b );//done
int Brush_Side( brush_t * b );//done
vec_t Brush_SarrusDet(vec3_t a, vec3_t b, vec3_t c);
void BP_BrushSet_MatTexdefCoords( brush_t * b, vec3_t MA[3], vec3_t MB[3] );
void Brush_Print( brush_t * b );
void Brush_PrintPlane( plane_t * p, brush_t * b );
void Brush_PrintFace( face_t * f, brush_t * b );
void Brush_PrintVectors( vec3_t v, brush_t * b );
brush_t * Brush_MakePyramid( brush_t * b );
brush_t * Brush_MakeSphere( brush_t * b );
brush_t * Brush_MakeCylinder( brush_t * b );
void Delete_Brush( brush_t * b );//done
bool Brush_EpairMode(brush_t* b);
brush_t * Brush_Tall(brush_t * b);//done
void Compute_BrushBaseAxis( brush_t * b );
brush_t * Brush_MakePatch( brush_t * b );
int Brush_SetSpawnflags( brush_t * b );
brush_t * pConvert_Mesh(brush_t * b);
void Brush_Bounds(brush_t * b, vec3_t MB[4], vec3_t MC[4]);
brush_t * Brush_CovertCSG(brush_t * b);
void Brush_SubtractCSG(brush_t * b);
void Brush_AddCSG(brush_t * b);
brush_t * Brush_AddToList(brush_t * b);
brush_t * Brush_WorldCoord(brush_t * b);
void Hook_BrushCoord(brush_t * b);
vec3_t * Brush_MidPoint( brush_t * b );
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
void Brush_DragTexFree(brush_t * b, texdef_t * t);
void Brush_FaceDragTexture(brush_t * b, face_t * f, texdef_t * t);
void Split_Brush(brush_t * b, int split);
void Brush_MakeHollow(brush_t * b);
bool Brush_Hollow(brush_t * b);
brush_t * Brush_MakeArch(brush_t * b, vec_t curve);
vec3_t Brush_Indices[12];
void Brush_MakeClip(brush_t * b, const char* tScript);
void Brush_MakeVolume(brush_t * b, const char* tScript);
void Brush_MakeTrigger(brush_t * b, const char* tScript );
void Shear_BrushEdge(brush_t * b);
const char* Brush_ShowDimensions(brush_t * b, const char * dimtxt);
void Brush_SnapToGrid(brush_t * b, vec3_t snap);
void Fit_BrushTexture(brush_t * b, texdef_t * t, float width, float height);
brush_t * Return_Brush(brush_t * b);//simply return b
void Brush_Faces(brush_t * b, face_t * f);
float BrushClamp(brush_t * b);
void Brush_Scale( brush_t * b );
brush_t* Brush_Merge( brush_t* b1, brush_t * b2, int polyhederon );
brush_t* Brush_LinkPairs(brush_t * blist, int poly, const char * key, const char * value );
brush_t* Brush_LinkLists(brush_t * blists);
void Brush_AddVariable( const char* pName, float f, const char * pInput = NULL );
int Brush_Vertpoint(brush_t * b);
void Brush_ToggleKey(brush_t * b);
void Brush_ToggleValue(brush_t * b);
typedef brush_t bspbrush_t;
bspbrush_t * BspChop_Brush(bspbrush_t * b);
void Bsp_FindBrush(bspbrush_t * b);
int brushSelect_MouseArray[];//store mouse clicks
brush_t* Brush_FilterClient(brush_t * b);
bool Brush_Preselect(brush_t* b);

int BrushSide_Top(brush_t* b, int side);
int BrushSide_Bottom(brush_t* b, int side);
int BrushSide_Left(brush_t* b, int side);
int BrushSide_Right(brush_t* b, int side);
int BrushSide_Back(brush_t* b, int side);
int BrushSide_Front(brush_t* b, int side);

void Brush_ConsoleCreation(brush_t* b, vec3_t mins, vec3_t maxs, bool bSelect, const char* pConsoleCmd);
bool Brush_CreatedFromConsole(brush_t* b);`