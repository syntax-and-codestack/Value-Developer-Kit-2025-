//mainframe.cpp

#include "vl18afx.h"
#include "mainframe.h"

int nCmd = 0;

CWndGuiTable * Add;

MainFrame::MainFrame(){
    #if main
     SysPrintf("VDK: Brushes : %i\n");
     SysPrintf("VDK: Entities : %i\n");
     SysPrintf("VDK: Map : %c\n");
     SysPrintf("VDK: Map Directory : %c");
    #endif

    ShowWindow(Add->d_MainWnd);
    ShowWindow(Add->d_CameraWnd);
    ShowWindow(Add->d_GridWnd)
    
}
