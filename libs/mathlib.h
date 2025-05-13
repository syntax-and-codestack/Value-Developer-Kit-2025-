//mathlib.h
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

//vector stuff _t
typedef float vec_t;
typedef vec_t vec3_t[3];//for axis and mins and maxs
typedef vec_t vec4_t[4];//maybe for some colors *complex shaders*
typedef vec_t vec6_t[6];//misc...

//snap
vec3_t snap( int point );

//use for brushprimit.cpp
vec_t SarrusDet( vec3_t a, vec3_t b, vec3_t c );

//some vector functions
void vRelease(float f){
    delete []f;
};
