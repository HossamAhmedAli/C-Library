#ifndef _STD_TYPES_H
#define _STD_TYPES_H
#include <stdio.h>
#include <stdlib.h>
#define ZERO_INIT 0
#define ZERO      0

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;
typedef signed char  int8;
typedef signed char  int8;
typedef signed short int16;
typedef signed int   int32;

typedef enum ret_status
{
    R_NOK, //0
    R_OK  //1
}return_status;
#endif // _STD_TYPES_H

