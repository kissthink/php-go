#ifndef _GOAPI_H_
#define _GOAPI_H_

#include <stdlib.h>


enum GoType {
   GT_Invalid    ,
   GT_Bool       ,
   GT_Int        ,
   GT_Int8       ,
   GT_Int16      ,
   GT_Int32      ,
   GT_Int64      ,
   GT_Uint       ,
   GT_Uint8      ,
   GT_Uint16     ,
   GT_Uint32     ,
   GT_Uint64     ,
   GT_Uintptr    ,
   GT_Float32    ,
   GT_Float64    ,
   GT_Complex64  ,
   GT_Complex128 ,
   GT_Array      ,
   GT_Chan       ,
   GT_Func       ,
   GT_Interface  ,
   GT_Map        ,
   GT_Ptr        ,
   GT_Slice      ,
   GT_String     ,
   GT_Struct     ,
   GT_UnsafePointer,
};


/* Start of boilerplate cgo prologue.  */

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef __complex float GoComplex64;
typedef __complex double GoComplex128;

// static assertion to make sure the file is being used on architecture
// at least with matching size of GoInt.
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

typedef struct { char *p; GoInt n; } GoString;
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#endif

