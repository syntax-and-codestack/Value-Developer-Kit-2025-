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

    ShowWindow(Add->d_MainWnd, nCmd);
    if(!Add->d_MainWnd){
            MessageBox(Add->d_MainWnd, "VDK Main Window Failed", "Error", MB_OK | MB_ICONERROR | MB_APPLMODAL);
    };
    ShowWindow(Add->d_CameraWnd, nCmd);
    if(!Add->d_CameraWnd){
            MessageBox(Add->d_CameraWnd, "VDK Camera Window Failed", "Error", MB_OK | MB_ICONERROR | MB_APPLMODAL);
    };
    ShowWindow(Add->d_GridWnd, nCmd);
    if(!Add->d_GridWnd){
            MessageBox(Add->d_GridWnd, "VDK Grid Window Failed", "Error", MB_OK | MB_ICONERROR | MB_APPLMODAL);
    };
    ShowWindow(Add->d_XYWnd, nCmd);
    if(!Add->d_XYWnd){
            MessageBox(Add->d_XYWnd, "VDK XY Window Failed", "Error", MB_OK | MB_ICONERROR | MB_APPLMODAL);
    };
    ShowWindow(Add->d_XZWnd, nCmd);
    if(!Add->d_XZWnd){
            MessageBox(Add->d_XZWnd, "VDK XZ Window Failed", "Error", MB_OK | MB_ICONERROR | MB_APPLMODAL);
    };
    ShowWindow(Add->d_YZWnd, nCmd);
    if(!Add->d_YZWnd){
            MessageBox(Add->d_YZWnd, "VDK YZ Window Failed", "Error", MB_OK | MB_ICONERROR | MB_APPLMODAL);
    };
    ShowWindow(Add->d_ConsoleWnd, nCmd);
    if(!Add->d_ConsoleWnd){
            SysPrintf("%i", NULL);
    };
    ShowWindow(Add->d_TextureWnd, nCmd);
    if(!Add->d_TextureWnd){
            MessageBox(Add->d_TextureWnd, "VDK Texture Window Failed", "Error", MB_OK | MB_ICONERROR | MB_APPLMODAL);
    };
    ShowWindow(Add->d_Toolbar, nCmd);
    if(!Add->d_Toolbar){
            MessageBox(Add->d_Toolbar, "VDK Toolbar Consturction Failed", "Error", MB_OK | MB_ICONERROR | MB_APPLMODAL);
    };
}
