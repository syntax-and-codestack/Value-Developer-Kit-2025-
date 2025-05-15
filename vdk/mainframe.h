//mainframe.h

#ifndef WIN32
#include <Windows.h>
#define WIN32
#endif

#ifndef MAINFRAME_H
#define MAINFRAME_H

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
