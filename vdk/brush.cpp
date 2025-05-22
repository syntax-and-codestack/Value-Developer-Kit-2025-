#include "brush.h"
//brush.cpp
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

int g_nBrushId = 0;

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
 Brush_Side
============
*/
int Brush_Side(brush_t *b){
   for( b->sides; b; b++ ){
         b->brush_sidewindings()->Side_WindingsFace(SIDE_FRONT[b->sides][0]); b->brush_sidewindings()->Side_WindingsFace(SIDE_LEFT[b->sides][1]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_RIGHT[b->sides][2]); b->brush_sidewindings()->Side_WindingsFace(SIDE_BACK[b->sides][3]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_BOTTOM[b->sides][4]); b->brush_sidewindings()->Side_WindingsFace(SIDE_TOP[b->sides][5]);
   }
  return b->sides;
}
