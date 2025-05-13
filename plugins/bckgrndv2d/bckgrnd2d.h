//bckgrnd2d.h
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#include "libs/cmdlib.h"
#include "libs/mathlib.h"

#ifndef BCKGRND2D_H
#define BCKGRND2D_H

vec3_t gridView_vectors[16];

class BckGrnd2DTool{
public:
   BckGrnd2DTool();
   ~BckGrnd2DTool();

   int m2DCols;
   int m2DRows;

   bool ZoomIn();
   bool ZoomOut();

   enum{
     XY,
     XZ,
     YZ
   }

   void * m2DGridRelease(){
      delete []m2DCols;
      delete []mwDRows;
   };
};

BckGrnd2DTool * 2DView();

#endif
