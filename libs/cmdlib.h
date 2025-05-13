//cmdlib.h
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

typedef char cmdchar;

//vproj *may move to a new file eventually*
#define VALUE_PROJ_SDK_FILE "vpsdk.vprj"

const char* CMD;//command
const char* Filename;//file

//printf custom function
void WINAPI Sysprintf(const char * txt, ...);
