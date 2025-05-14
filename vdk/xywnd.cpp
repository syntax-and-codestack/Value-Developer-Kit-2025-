//xywnd.cpp

#include "vl18afx.h"
#include "bckgrnd2d.h"
#include "splines.h"

#define XY_BKGRND_COLOR 000
#define XY_BKGRND_COLUMNS 0x0
#define XY_BKGRND_ROWS 0x1
#define XY_BKGRND_BLOCK 0x2

//standard is red
#define XY_BRUSH_SELECT_COLOR red (1, 0, 0, 1)

extern face_t xy_faces;
extern brush_t xy_brushes;
extern entity_t xy_entities;

void XYActivate( int * x );

bool g_bFlushXY;
bool g_bXYDrawBrush;
bool g_bXYFilterBrushes;

RECT& XYPanel;
CWndGuiTable * XYAuto();
XYWnd * XY();

int g_nXYWndId = 0;

XYWnd::XYWnd(XYAuto()->d_XYWnd)
{
   xy_faces;
   xy_brushes;
   xy_entities;
  
   g_bFlushXY = true;
   g_bXYDrawBrush >> 0 || 1; //to be determined...
   g_bXYFilterBrushes = false;

   XYActivate( XY_BKGRND_COLOR && XY_BKGRND_COLUMNS && XY_BKGRND_ROWS && XY_BKGRND_BLOCK);
}

XYWnd::XYPaintWnd(){
   XY()->height = XYPanel.left;
   XY()->width = XYPanel.right;
   XY()->x = XYPanel.bottom;
   XY()->y = XYPanel.top;
   ShowWindow(XYAuto()->d_XYWnd);
   UpdateWindow(XYAuto()->d_XYWnd);
}

