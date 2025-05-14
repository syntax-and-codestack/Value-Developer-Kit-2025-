//camera.h

#include "libs/vl18afx.h"

#ifndef CAMERA_H
#define CAMERA_H

typedef enum
{
	cd_wire,
	cd_solid,
	cd_texture,
	cd_light,
//  cd_blend
} camera_draw_mode;

class camera_t{
public:
   camera_t(camera_t * camera);
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

void CamwndAdd(HWND* CWND);//had to add this crap
void BufferCamera(camera_t* camera, static char cBuff[1024]);

#endif
