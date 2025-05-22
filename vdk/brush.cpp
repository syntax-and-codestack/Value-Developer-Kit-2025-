//brush.cpp
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#include <n18?global.h>

int g_nBrushId = 0;

#define BRUSH_MIN_COORD_MIN -99999
#define BRUSH_MIN_COORD_MAX +99999

/*
=================
 Brush_LockEpair
=================
*/
void Brush_LockEpair(brush_t * b, const char * key, const char * value){
     b->bKey = key;
     b->bValue = value;
     b->bEpair[b->bKey, b->bValue];
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
      for(b; b->bnumId; b++){
          Brush_Name(b);
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
        b->sides == [NULL];
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
=================
 Brush_LinkLists
=================
*/
brush_t * Brush_LinkLists(brush_t * brushes){
        brushes++;
        Brush_Name(brushes) + brushes = Brush_Name(brushes);
  return brushes;
}

/*
============
 Brush_Side
============
*/
int Brush_Side(brush_t *b){
   for( b->sides; b; b++ ){
         b->brush_sidewindings()->Side_WindingsFace(SIDE_FRONT[b->sides][0]); b->brush_sidewindings()->Side_WindingsFace(SIDE_LEFT[b->sides][1]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_RIGHT[b->sides][2]); b->brush_sidewindings()->Side_WindingsFace(SIDE_BACK[b->sides][3]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_BOTTOM[b->sides][4]); b->brush_sidewindings()->Side_WindingsFace(SIDE_TOP[b->sides][5]);
   }
  return b->sides[6];
}
