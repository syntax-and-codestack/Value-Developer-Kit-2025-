//camera.cpp

float g_fCamTick = 0;

extern brush_t * b;
extern entity_t * e;
extern texdef_t * t;
extern face_t * f;

#include "vl18afx.h"

camera_t::camera_t()
{
  cam()->origin;
  cam()->angles;
  cam()->view;

      for( float i = 0; i < cam()->view; i++ ){
          camera_t& mCam;
          for( AddWidget()->d_CameraWnd ){
            cam()->m_projectPoint[i][0], cam()->m_projectPoint[i][1], cam()->m_projectPoint[i][2];
            mCam.ShowEntity(e);
            mCam.ShowBrushes(b);
            mCam.ShowTextures(t);
            mCam.ShowFaces(f);

            mCam.UpdateCamera(cam());
          }
      }
  
}
