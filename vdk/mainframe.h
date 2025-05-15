//mainframe.h

#ifndef WIN32
#include <Windows.h>
#define WIN32
#endif

#ifndef MAINFRAME_H
#define MAINFRAME_H

#define ID_TOOLBAR_SAVE_FILE
#define ID_TOOLBAR_OPEN_FILE
#define ID_TOOLBAR_SAVE_AS_FILE
#define ID_NODE_DLG
#define ID_FILTER_DLG
#define ID_BP_DLG
#define ID_CAMERA_WIREFRAME
#define ID_CAMERA_FILL
#define ID_HOLLOW_BRUSH
#define ID_CUBIC_CLIP
#define ID_LOCK_VIEWS
#define ID_LOCK_BRUSH_COORD
#define ID_TREE_PLANTER
#define ID_RESET_VIEWS
#define ID_LOCK_CAMERA
#define ID_FAKE_LIGHTING
#define ID_REAL_LIGHTING
#define ID_BRUSH_MAKE_PATCH
#define ID_BRUSH_MAKE_CYLINDER
#define ID_BRUSH_MAKE_PYRAMID
#define ID_BRUSH_MAKE_SPHERE
#define ID_CAULK_BRUSH
#define ID_FILTER_BRUSHES
#define ID_FILTER_MODELS
#define ID_FILTER_CLIP
#define ID_FILTER_VOLUME
#define ID_FILTER_TRIGGER
#define ID_FILTER_SKY
#define ID_FILTER_LIGHTGRID
#define ID_FILTER_ENTITIES
#define ID_EXIT_VDK
#define ID_REGION
#define ID_PREFERENCES
#define ID_BSP

class MainFrame{
public:
 MainFrame();
 ~MainFrame();

int width, height;
int x, y;
bool scaleable;
virtual void Paint() = 0;

};

#endif
