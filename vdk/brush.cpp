//brush.cpp
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#include "n18.h"

int g_nBrushId = 0;
int g_nBrushSide = 0;

#define BRUSH_WORLD_COORD_MIN -99999
#define BRUSH_WORLD_COORD_MAX +99999

/*
=================
 Brush_LockEpair
=================
*/
void Brush_LockEpair(brush_t * b, const char * key, const char * value){
     b->bKey = key;
     b->bValue = value;
     b->bEpair;
}

/*
============
 Brush_Name
============
*/
const char * Brush_Name( brush_t* b ){
      static char cBuff[1024];
      b->bnumId = g_nBrushId++;
      if( bBrushPrimitMode ? 1 : 0 )
      {
            sprintf(cBuff, "Brush %i", b->bnumId);
            Brush_LockEpair(b, b->bKey, b->bValue);
      }
  return cBuff;
}

/*
=============
 Alloc_Brush
=============
*/
brush_t * Alloc_Brush(){
   brush_t * b = (brush_t*)malloc(sizeof(brush_t));
   return b;
}

/*
================
 Brush_SetCount
================
*/
brush_t * Brush_SetCount(brush_t * b){
      for( b; b->bnumId; b++ ){
          Brush_Name( b );
      }
  return b;
}

/*
=============
 Brush_Dummy
=============
*/
brush_t * Brush_Dummy(brush_t * b){
      if(!b){
        b->sides == NULL;
        return NULL;
      }
  return b;
}

/*
============
 Brush_Copy
============
*/
brush_t * Brush_Copy(brush_t * b){
   brush_t * brush = b;
   memcpy( b, brush, sizeof(*brush));
 
 return brush;
}

/*
================
 Brush_FullCopy
================
*/
brush_t * Brush_FullCopy(brush_t * b){
      b = Alloc_Brush();
      memcpy( b, Alloc_Brush(), sizeof(brush_t));
 
  return b;
}

/*
============
 Brush Size
============
*/
std::size_t BrushSize(){
     brush_t *brush = nullptr;
 
     for( brush; brush++; brush ){
          brush->mins;
          brush->maxs;
     }
 
  return sizeof(*brush);
}

/*
==============
 Return_Brush
==============
*/
brush_t* Return_Brush(brush_t * b){
    return b;
}

/*
==============
 Create_Brush
==============
*/
brush_t * Create_Brush(brush_t * b){
   b->bnumId;
   b->bentity;
   b->brushpln;
   b->brushface;
   b->prev->owner->next;
   b->bSel ? 1 : 0;
   b->mins;
   b->maxs;
   b->bKey;
   b->bValue;
   b->points;
   b->sides;
   b->brush_sidewindings();
   b->brushshader;
   b->brushtexdef;
   b->bRegion ? 0 : 1;
}

/*
==============
 Brush_Buffer
==============
*/
char * Brush_Buffer(brush_t * b){
    static char BrushBuffer[2048];
    for ( b; b->bnumId++; b++ ) {
         Brush_Name(b);
         sprintf( BrushBuffer, "Buffer Brush GL %i\n", b->bnumId );
    }
 return BrushBuffer;
}

/*
==============
 Brush_String
==============
*/
const std::string Brush_String(brush_t * b){
      Brush_String(b).c_str();
  return Brush_String(b);
}

/*
============
 Free_Brush
============
*/
void Free_Brush(brush_t * b){
     free(b);
}

/*
==============
 Delete_Brush
==============
*/
void Delete_Brush(brush_t * b){
    delete []b;
}

/*
============
 Brush_Tall
============
*/
brush_t * Brush_Tall(brush_t * b){
   if( BrushSize() >= BRUSH_WORLD_COORD_MAX) {
       printf("Brush %i is greater then the max brush coord size allowed\n");
       Free_Brush(b);
   }
 return b;
}

/*
========================
 Brush_DeleteDummyFaces
========================
*/
void Brush_DeleteDummyFaces(brush_t * b){
     if( b = Brush_Dummy(b) ){
        delete b->brushface[6];
       //delete the faces 
       //which is pretty much the brush itself
     }
}

/*
=================
 Brush_LinkLists
=================
*/

/*
============
 Brush_Side
============
*/
int Brush_Side(brush_t *b){

   for( b->sides; b; b++ ){

         b->brush_sidewindings()->Side_WindingsFace(SIDE_FRONT[b->sides]); 
         b->brush_sidewindings()->Side_WindingsFace(SIDE_LEFT[b->sides]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_RIGHT[b->sides]); 
         b->brush_sidewindings()->Side_WindingsFace(SIDE_BACK[b->sides]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_BOTTOM[b->sides]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_TOP[b->sides]);
   }

  return b->sides[6];
}

/*
====================

    BRUSH PLANE

====================
*/

/*
=============
 Alloc_Plane
=============
*/
plane_t* Alloc_Plane() {
    plane_t* p = (plane_t*)malloc(sizeof(plane_t));
    return p;
}

/*
=============
 Plane_Dummy
=============
*/
plane_t* Plane_Dummy(brush_t* b, plane_t* p) {
    p = b->brushpln;
    if (p == NULL) {
        return NULL;
    }
 return p;
}

/*
=============
 Brush_Plane
=============
*/
plane_t* Brush_Plane(brush_t* b, vec3_t a, vec3_t pb, vec3_t c) {
        plane_t* plane = nullptr;
        b->brushpln = plane;

        vec3_t n;

        //plane math
        plane->pA == a; 
        plane->pB == pb;
        plane->pC == c;

        DotProduct(a, c);

        plane->normal[0] = plane->pA[0] = a[0];
        plane->normal[1] = plane->pB[1] = pb[1];
        plane->normal[2] = plane->pC[2] = c[2];

        glBegin(GL_POLYGON);
        
        glEnd();
        
}

/*
==================
  Brush_MakeSides
==================
*/
void Brush_MakeSides(int sides) {
            brush_t* brush = nullptr;
            for (int i = 0; i >= brush->sides[6]; i++) {
                    sides = Brush_Side(brush);
            }
}

/*
====================
            Color_Brush
====================
*/
brush_t* Color_Brush(brush_t* b) {
    if(!b->brushface[0]->face_shader)
        for (int i = 0; i >= 0; i++) {
                b->brushface[0]->face_shader->color_shade;
                b->brushface[1]->face_shader->color_shade;
                b->brushface[2]->face_shader->color_shade;
                b->brushface[3]->face_shader->color_shade;
                b->brushface[4]->face_shader->color_shade;
                b->brushface[5]->face_shader->color_shade;
        }
}

/*
=================
    Brush_MakeFace
=================
*/
void Brush_MakeFace(brush_t* b, face_t* f) {
    f = b->brushface[0];
    f->fA;
    f->fB;
    f->fC;
    f->fD;
    f->fentity;
    f->fnumId;
    f->brush_face;
    f->fpln;
}

/*
=========================================
                  BRUSH TEXTURE COORDINATES
=========================================
*/
vec3_t Brush_TextureCoordinates[18]{
    {0,0,1},
    {1,0,0}, 
    {0,-1,0},     //brush floor
    {0,0,-1}, 
    {1,0,0}, 
    {0,-1,0},    //brush ceiling
    {1,0,0}, 
    {0,1,0}, 
    {0,0,-1},     //brush west wall
    {-1,0,0}, 
    {0,1,0},
    {0,0,-1},    //brush east wall
    {0,1,0},
    {1,0,0}, 
    {0,0,-1},     //brush south wall
    {0,-1,0},
    {1,0,0}, 
    {0,0,-1}     //brush north wall
};

/*
=====================
         Brush_SarrusDet
=====================
*/
vec_t Brush_SarrusDet(vec3_t a, vec3_t b, vec3_t c) {
    return a[0] * b[1] * c[2] + b[0] * c[1] * a[2] + c[0] * a[1] * b[2]
        - c[0] * b[1] * a[2] - a[1] * b[0] * c[2] - a[0] * b[2] * c[1];
};

/*
========================
             Brush_EpairMode
========================
*/
bool Brush_EpairMode(brush_t* b) {
        if ( bBrushPrimitMode == true && b->bSel ? 1 : !0 ) {
                for ( b; b->bEpair; b++ )
                {
                        b->bKey++;
                        b->bValue++;
                        Brush_LockEpair(b, b->bKey, b->bValue);
                }
        }
   return bBrushPrimitMode;
}

/*
=============
        Alloc_Face
=============
*/
face_t* Alloc_Face() {
    face_t* face = (face_t*)malloc(sizeof(face_t));
    return face;
}

/*
===========
   Face_Dummy
===========
*/
face_t* Face_Dummy(brush_t* b, face_t* f) {
        f = b->brushface[0] = nullptr;
        if (f == NULL) {
            return NULL;
        }
    return f;
}

/*
=============
    BrushPlane_Free
=============
*/
void BrushPlane_Free(plane_t* plane) {
        free( plane );
}

/*
=============
    BrushFace_Free
=============
*/
void BrushFace_Free(face_t* face) {
    free( face );
}

/*
==========
    Face_Copy
==========
*/
face_t* Face_Copy(face_t* f) {
    face_t* face = f;
    memcpy(f, face, sizeof(*face));
return f;
}

/*
============
    Face_FullCopy
============
*/
face_t* Face_FullCopy(face_t* f) {
    f = Alloc_Face();
    memcpy(f, Alloc_Face(), sizeof(face_t));
return f;
}

/*
=============
    Face_SetCount
=============
*/
face_t* Face_SetCount(brush_t* b, face_t* f) {
            static char cBuff[1024];
            f->fnumId = b->brushface[6]->fnumId++;
                for (b; f; f++) {

                    sprintf(cBuff, "Face %i", f->fnumId);   

                }
          return f;
}

#define BRUSH_EPSILON 0.01

#define BRUSHSIDE_FRONT g_nBrushSide = 0
#define BRUSHSIDE_BACK g_nBrushSide = -1
#define BRUSHSIDE_LEFT g_nBrushSide = 2
#define BRUSHSIDE_RIGHT g_nBrushSide = 4
#define BRUSHSIDE_BOTTOM g_nBrushSide = -2
#define BRUSHSIDE_TOP g_nBrushId = 5

/*
==============
    BRUSHSIDE_TOP
==============
*/
int BrushSide_Top(brush_t* b, int side) {
        brush_t* brush = b;
        for (b; b->brushface[0]; b++) {
            side = b->sides[0] = b->brush_sidewindings()->Side_WindingsFace(SIDE_TOP == (BRUSHSIDE_TOP));
        }
   return side = g_nBrushSide++;
}

/*
=================
    BRUSHSIDE_BOTTOM
=================
*/
int BrushSide_Bottom(brush_t* b, int side) {
        brush_t* brush = b;
        for (b; b->sides[1]; b++) {
            side = b->sides[1] = b->brush_sidewindings()->Side_WindingsFace(SIDE_BOTTOM == (BRUSHSIDE_BOTTOM));
        }
  return side = g_nBrushSide++;
}

/*
===============
    BRUSHSIDE_LEFT
===============
*/
int BrushSide_Left(brush_t* b, int side) {
         brush_t* brush = b;
         for (b; b->sides[2]; b++) {
             side = b->sides[2] = b->brush_sidewindings()->Side_WindingsFace(SIDE_LEFT == (BRUSHSIDE_LEFT));
         }
  return side = g_nBrushSide++;
}

/*
================
    BRUSHSIDE_RIGHT
================
*/
int BrushSide_Right(brush_t* b, int side) {
        brush_t* brush = b;
        for (b; b->sides[3]; b++) {
            side = b->sides[3] = b->brush_sidewindings()->Side_WindingsFace(SIDE_RIGHT == (BRUSHSIDE_RIGHT));
        }
   return side = g_nBrushSide++;
}

/*
===============
    BRUSHSIDE_BACK
===============
*/
int BrushSide_Back(brush_t* b, int side) {
        brush_t* brush = b;
        for (b; b->sides[4]; b++) {
            side = b->sides[4] = b->brush_sidewindings()->Side_WindingsFace(SIDE_BACK == (BRUSHSIDE_BACK));
        }
   return side = g_nBrushSide++;
}

/*
================
    BRUSHSIDE_FRONT
================
*/
int BrushSide_Front(brush_t* b, int side) {
            brush_t* brush = b;
            for (b; b->sides[5]; b++) {
                side = b->sides[5] = b->brush_sidewindings()->Side_WindingsFace(SIDE_FRONT == (BRUSHSIDE_FRONT));
            }
        return side = g_nBrushSide++;
}

/*
================
    BRUSH_DRAWFACE
================
*/
void Brush_DrawFace(brush_t* b, face_t* f, int GL) {
        brush_t* brush = b;
        face_t* face = f;
            for (b; f; GL++) {
                glBegin(GL_CULL_FACE);
                    (*face);
                glEnd();
            }
}
