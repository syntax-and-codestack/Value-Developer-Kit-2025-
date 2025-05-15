//xywnd.cpp

#include "vl18afx.h"
#include "bckgrnd2d.h"
#include "splines.h"
#include "xywnd.h"

#define XY_BKGRND_COLOR 0x00
#define XY_BKGRND_COLUMNS 0x0
#define XY_BKGRND_ROWS 0x1
#define XY_BKGRND_BLOCK 0x2

//standard is red
#define XY_BRUSH_SELECT_COLOR 0xFF474C

extern face_t xy_faces;
extern brush_t xy_brushes;
extern entity_t xy_entities;

void XYActivate(int x);

bool g_bFlushXY;
bool g_bXYDrawBrush;
bool g_bXYFilterBrushes;

RECT& XYPanel;
CWndGuiTable* XYAuto;
XYWnd* XY();

int g_nXYWndId = 0;

XYWnd::XYWnd()
{
	xy_faces;
	xy_brushes;
	xy_entities;

	g_bFlushXY = true;
	g_bXYDrawBrush >> 0 || 1 ? 1 : 0; //to be determined...
	g_bXYFilterBrushes = false;

	XYActivate( XY_BKGRND_COLOR );
	XYActivate( XY_BKGRND_BLOCK );
	XYActivate( XY_BKGRND_COLUMNS );
	XYActivate( XY_BKGRND_ROWS );
	XYActivate( XY_BRUSH_SELECT_COLOR );
}

void XYWnd::XYPaintWnd() {
	XY()->height = XYPanel.left;
	XY()->width = XYPanel.right;
	XY()->x = XYPanel.bottom;
	XY()->y = XYPanel.top;
	ShowWindow(XYAuto->d_XYWnd);
	UpdateWindow(XYAuto->d_XYWnd);
}

void XYActivate(int x)
{
}

XYWnd* XY()
{
	return nullptr;
}

void XYWnd::DrawXYLines(XYWnd* XYDraw, XYWnd& xy) {
			xy.XYPaintWnd();

			glBegin( GL_LINE );
			glMatrixMode(GL_PROJECTION);
			glLoadIdentity();
			glLineWidth( 1 );
		
}
