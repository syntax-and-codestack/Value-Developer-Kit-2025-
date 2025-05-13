//itypes.h
//programmed by mangoz 
//this file is part of @Value-Developer-Kit-2025

#ifndef ITYPES_H
#define ITYPES_H

typedef bool vboolean;//some code uses bool directly...

//hashtable type struct
typedef struct itypes_hashtable_s{
   const char* ITYPE_TABLE_NAME[1024];
}itypes_hashtable_t;

//call hashtable type
typedef void ( *PFN_HASHTABLE_NAME )( itypes_hashtable_t * i, const char* name );

#endif
