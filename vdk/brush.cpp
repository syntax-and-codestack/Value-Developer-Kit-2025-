
//brush.cpp
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#include "brush.h"

//brush global variables...
int g_nPlaneId = 0;//plane number
int g_nFaceId = 0;//face number
int g_nBrushId = 0;//brush number

//brush plane name
const char* BrushPlane_Name(plane_t* p){
		static char planeBuff[1024];
		p->pnumId = g_nPlaneId++;
		if (p = new plane_t){
			sprintf(planeBuff, "VDK : Brush Plane %5.2i", p->pnumId);
		}

	return planeBuff;

}

//brush face name
const char* BrushFace_Name(face_t* f) {
		static char faceBuff[1024];
		f->fnumId = g_nFaceId++;
		if (f = new face_t) {
			sprintf(faceBuff, "VDK : Brush Face %5.2i");
		}

	return faceBuff;

}

//brush name
const char* Brush_Name(brush_t* b) {
		static char brushBuff[2048];
		b->bnumId = g_nBrushId++;
		if (b = new brush_t(*b)){

			sprintf(brushBuff, "VDK : Brush %5.2i");
			Brush_LockEpair( b, b->bKey, b->bValue );

		}

	return brushBuff;
}

plane_t* Plane_SetCount(brush_t* b, plane_t * p) {
		if( BrushPlane_Name( p ) ) {

			b->brushpln->pnumId++;

		}

	return p;
}

face_t* Face_SetCount(brush_t* b, face_t* f) {
		if( BrushFace_Name( f ) ) {
			b->brushface[0 * 6]->fnumId++;
		}

	return f;

}

brush_t* Brush_SetCount(brush_t* b) {
		if( Brush_Name( b ) ){

			b->bnumId++;

		}
}

//memeory allocate brush
brush_t* Alloc_Brush(){
	brush_t* b = (brush_t*)malloc(sizeof(brush_t));
	return b;
}

//free the brush
void Free_Brush(brush_t* b) {
	free(b);
}

//check if brush is dummy
brush_t* Brush_Dummy(brush_t* b) {
		if (b == NULL) {
			return NULL;
		}
	return b;
}

//brush size
std::size_t BrushSize() {
	return (sizeof(brush_t));
}

//memory allocate face
face_t* Alloc_Face() {
	face_t* f = (face_t*)malloc(sizeof(face_t));
	return f;
}

//check if face dummy
face_t* Face_Dummy(brush_t * b, face_t* f) {
	if (b && f == NULL) {
		return NULL;
	}
 return f;
}

//free the face
void Face_Free(face_t* f) {
	free(f);
}

//alloc the plane
plane_t* Alloc_Plane() {
	plane_t* p = (plane_t*)malloc(sizeof(plane_t));
	return p;
}

//plane dummy check
plane_t* Plane_Dummy(brush_t * b, plane_t* p) {
	if (b && p == NULL) {
		return NULL;
	}
  return p;
}

//free the plane
void Plane_Free(plane_t* p) {
	free(p);
}

void Brush_PrintPlane(plane_t* p, brush_t* b) {
		for(int i = 0; p->points; i++) {
			printf("%f, %f, %f,, %i, %i, %i, %i, %d", p->points[i][0], ) 
		}
}



