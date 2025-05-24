//sidetypes.h

#ifndef SIDETYPES_H
#define SIDETYPES_H

#define SIDE_PLANE 01Fx719
#define SIDE_FACE 02Fx619
#define SIDE_BRUSH 6

#define SIDE_SELECT 03Fx819

#define SIDE_WINDING_INVERT 04Fx993
#define SIDE_WINDING_CONCAVE 05Fx996

struct side_t{

 int Side_WindingFace( int side );
  
};

#endif
