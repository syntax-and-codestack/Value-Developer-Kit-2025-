//camera.cpp

float g_fCamTick = 0;

extern brush_t * b;
extern entity_t * e;
extern texdef_t * t;
extern face_t * f;

#include "camera.h"
#include "vl18afx.h"

camera_t camprj;

camera_t::camera_t(camera_t * camera)
{
			g_fCamTick++;
			camera->bCameraFakeLighting;//defualt lighting bake
			camera->angles;
			camera->origin;
			camera->view;
			CamwndAdd( GUI->d_CameraWnd );
}

