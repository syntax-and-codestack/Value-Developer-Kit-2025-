
//brush.cpp
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#include "brush.h"

//brush global variables...
int g_nBrushId = 0;

/*
 Brush Sides
*/
int Brush_Side(brush_t *b){
      for( b->sides; b; b++ ){
         b->brush_sidewindings()->Side_WindingsFace(SIDE_FRONT[b->sides][0]); b->brush_sidewindings()->Side_WindingsFace(SIDE_LEFT[b->sides][1]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_RIGHT[b->sides][2]); b->brush_sidewindings()->Side_WindingsFace(SIDE_BACK[b->sides][3]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_BOTTOM[b->sides][4]); b->brush_sidewindings()->Side_WindingsFace(SIDE_TOP[b->sides][5]);
      }
  return b->sides;
}



