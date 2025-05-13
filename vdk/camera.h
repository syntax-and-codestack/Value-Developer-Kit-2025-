//camera.h

#include "libs/vl18afx.h"

#ifndef CAMERA_H
#define CAMERA_H

class camera_t{
public:
 camera_t();
 ~camera_t();

   vec3_t origin;
   vec3_t angles;
   vec3_t view;

   vec_t m_projectPoint[3];

   bool bCameraFakeLighting;
   bool bCameraRealLighting;

   void ShowEntity( entity_t * e );
   void ShowBrushes( brush_t * b );
   void ShowTextures( texdef_t * t );
   void Camera_ProjectMatrix( vec3_t m4x4[16] );
   void ShowFaces( face_t * f );

   void UpdateCamera( camera_t * camera );

};

camera_t * cam();

#endif
