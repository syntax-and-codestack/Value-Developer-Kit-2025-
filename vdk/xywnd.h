#pragma once

#ifndef XYWND_H
#define XYWND_H

#include "vl18afx.h"

class XYWnd {
public:
	XYWnd();
	~XYWnd();

	int width, height;
	int x, y;

	bool bXYClicked;
	virtual void XYPaintWnd() = 0;
	//will be an array 
	int nXYMouseClicks_Store;

	void DrawXYLines(XYWnd * xy_ptr, XYWnd& xy);

};


#endif