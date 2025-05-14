#pragma once

#ifndef XYWND_H
#define XYWND_H

#include "vl18afx.h"

class XYWnd{
public:
  XYWnd(HWND pWnd);
  ~XYWnd(HWND pWnd);

int width, height;
int x, y;

bool bXYClicked;
virtual void XYPaintWnd() = 0;
//will be an array 
int nXYMouseClicks_Store;

};

#endif
