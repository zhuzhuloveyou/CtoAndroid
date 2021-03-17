/*
 * File: fibonacci_emxutil.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 16-Mar-2021 19:08:00
 */

#ifndef FIBONACCI_EMXUTIL_H
#define FIBONACCI_EMXUTIL_H

/* Include Files */
#include "fibonacci_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  extern void emxEnsureCapacity_real32_T(emxArray_real32_T *emxArray, int
    oldNumel);
  extern void emxFree_real32_T(emxArray_real32_T **pEmxArray);
  extern void emxInit_real32_T(emxArray_real32_T **pEmxArray, int numDimensions);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for fibonacci_emxutil.h
 *
 * [EOF]
 */
