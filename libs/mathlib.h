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

#define DotProduct( x,y ) ( ( x )[0] * ( y )[0] + ( x )[1] * ( y )[1] + ( x )[2] * ( y )[2] )
#define VectorSubtract( a,b,c ) ( ( c )[0] = ( a )[0] - ( b )[0],( c )[1] = ( a )[1] - ( b )[1],( c )[2] = ( a )[2] - ( b )[2] )
#define VectorAdd( a,b,c ) ( ( c )[0] = ( a )[0] + ( b )[0],( c )[1] = ( a )[1] + ( b )[1],( c )[2] = ( a )[2] + ( b )[2] )
#define VectorIncrement( a,b ) ( ( b )[0] += ( a )[0],( b )[1] += ( a )[1],( b )[2] += ( a )[2] )
#define VectorCopy( a,b ) ( ( b )[0] = ( a )[0],( b )[1] = ( a )[1],( b )[2] = ( a )[2] )
#define VectorSet( v, a, b, c ) ( ( v )[0] = ( a ),( v )[1] = ( b ),( v )[2] = ( c ) )
#define VectorScale( a,b,c ) ( ( c )[0] = ( b ) * ( a )[0],( c )[1] = ( b ) * ( a )[1],( c )[2] = ( b ) * ( a )[2] )
#define VectorMid( a,b,c ) ( ( c )[0] = ( ( a )[0] + ( b )[0] ) * 0.5f,( c )[1] = ( ( a )[1] + ( b )[1] ) * 0.5f,( c )[2] = ( ( a )[2] + ( b )[2] ) * 0.5f )
#define VectorNegative( a,b ) ( ( b )[0] = -( a )[0],( b )[1] = -( a )[1],( b )[2] = -( a )[2] )
#define CrossProduct( a,b,c ) ( ( c )[0] = ( a )[1] * ( b )[2] - ( a )[2] * ( b )[1],( c )[1] = ( a )[2] * ( b )[0] - ( a )[0] * ( b )[2],( c )[2] = ( a )[0] * ( b )[1] - ( a )[1] * ( b )[0] )
#define VectorClear( x ) ( ( x )[0] = ( x )[1] = ( x )[2] = 0 )
