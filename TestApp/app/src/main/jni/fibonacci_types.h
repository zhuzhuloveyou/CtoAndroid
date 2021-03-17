/*
 * File: fibonacci_types.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 16-Mar-2021 19:08:00
 */

#ifndef FIBONACCI_TYPES_H
#define FIBONACCI_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T

struct emxArray_real32_T
{
  float *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real32_T*/

#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T

typedef struct emxArray_real32_T emxArray_real32_T;

#endif                                 /*typedef_emxArray_real32_T*/
#endif

/*
 * File trailer for fibonacci_types.h
 *
 * [EOF]
 */
