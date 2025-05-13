#include "entitylib/entity.h"
#include "primitivetoollib/primittypes.h"
#include "textoollib/textool.h"

#include "cmdlib.h"
#include "mathlib.h"

#include <string>
#include <Windows.h>
#include <GL.h>

class CWndGuiTable{
public:
  CWndGuiTable();

  HWND * d_MainWnd;//main window
  HWND * d_CameraWnd;//camera window
  HWND * d_GridWnd;//grid window holders
  HWND * d_XYWnd;//xy grid window
  HWND * d_XZWnd;//xz grid window
  HWND * d_YZWnd;//yz grid window
  HWND * d_TextureWnd;//texture window

  //dialogs...
  HWND * d_FilterDlg;
  HWND * d_BPDlg;
  HWND * d_CapDlg;
  HWND * d_NodeDlg;

  //toolbar
  HWND * d_Toolbar;

  //menu
  HMENU * d_Menu;
};

CWndGuiTable * AddWidget();
