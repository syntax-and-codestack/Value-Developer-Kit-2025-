//menu.h

#include "libs/vl18afx.h"

#ifndef MENU_H
#define MENU_H

//probally exceed anyways...
#define MAX_MENU_ITEMS 12 

const char* FILE_MENU = "&File";
const char* FILE_EDIT = "&Edit";
const char* FILE_BSP = "&Bsp";
const char* FILE_TEXTURE = "&Texture";
const char* FILE_BRUSH = "&Brush";
const char* FILE_MISC = "&Misc";
const char* FILE_FILTER = "&Filter";
const char* FILE_PLUGIN = "&Plugin";
const char& FILE_HELP = "&Help";

void FillMenu( HMENU * menu, const char* file );

#endif
