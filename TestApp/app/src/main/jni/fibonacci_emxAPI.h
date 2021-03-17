/*
 * File: fibonacci_emxAPI.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 16-Mar-2021 19:08:00
 */

#ifndef FIBONACCI_EMXAPI_H
#define FIBONACCI_EMXAPI_H

/* Include Files */
#include "fibonacci_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  extern emxArray_real32_T *emxCreateND_real32_T(int numDimensions, const int
    *size);
  extern emxArray_real32_T *emxCreateWrapperND_real32_T(float *data, int
    numDimensions, const int *size);
  extern emxArray_real32_T *emxCreateWrapper_real32_T(float *data, int rows, int
    cols);
  extern emxArray_real32_T *emxCreate_real32_T(int rows, int cols);
  extern void emxDestroyArray_real32_T(emxArray_real32_T *emxArray);
  extern void emxInitArray_real32_T(emxArray_real32_T **pEmxArray, int
    numDimensions);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for fibonacci_emxAPI.h
 *
 * [EOF]
 */
