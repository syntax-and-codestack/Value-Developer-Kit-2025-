//sysmsg.cpp
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#include "libs/vl18afx.h"

//globals

plane_t* p;
face_t* f;
brush_t* b;
entity_t* e;

void VDKGlobalMessageStream(static char msgBuff[1024]){
        if (p->pface->fSel == true)
        {
                Sysprintf("VDK: plane and face %p is selected\n");
        }

        if (b->bSel == true)
        {
            Sysprintf("VDK: brush %p is selected\n");
        }

};
