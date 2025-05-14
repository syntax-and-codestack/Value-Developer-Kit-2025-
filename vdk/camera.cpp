//camera.cpp

float g_fCamTick = 0;

extern brush_t * b;
extern entity_t * e;
extern texdef_t * t;
extern face_t * f;

#include "camera.h"
#include "vl18afx.h"

camera_t::camera_t(camera_t * camera)
{
			g_fCamTick++;
			camera->bCameraFakeLighting;//default lighting bake
			camera->angles;
			camera->origin;
			camera->view;
			CamwndAdd( GUI->d_CameraWnd );
}

//camera buffer
void BufferCamera(camera_t* c, static char cBuff[1024])
{
				if (GUI->d_CameraWnd)
				{
									for ( c++ ) {
										sprintf(cBuff, "%f, %f, %f",
											c->m_projectPoint[0], c->m_projectPoint[1], c->m_projectPoint[2]);
									}
				}
}

