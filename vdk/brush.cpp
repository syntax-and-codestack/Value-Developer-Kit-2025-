
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
         b->brush_sidewindings()->Side_WindingsFace(SIDE_FRONT[sides][0]); 
         b->brush_sidewindings()->Side_WindingsFace(SIDE_LEFT[sides][1]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_RIGHT[sides][2]); 
         b->brush_sidewindings()->Side_WindingsFace(SIDE_BACK[sides][3]);
         b->brush_sidewindings()->Side_WindingsFace(SIDE_BOTTOM[sides][4]); 
         b->brush_sidewindings()->Side_WindingsFace(SIDE_TOP[sides][5]);
      }
  return b->sides;
}



