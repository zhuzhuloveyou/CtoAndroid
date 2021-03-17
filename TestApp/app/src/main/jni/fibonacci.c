/*
 * File: fibonacci.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 16-Mar-2021 19:08:00
 */

/* Include Files */
#include "fibonacci.h"
#include "fibonacci_emxutil.h"
#include "fibonacci_types.h"

/* Function Definitions */
/*
 * Arguments    : float n
 *                float t1
 *                float t2
 *                emxArray_real32_T *fib_sequence
 * Return Type  : void
 */
void fibonacci(float n, float t1, float t2, emxArray_real32_T *fib_sequence)
{
  int i;
  int loop_ub;
  i = fib_sequence->size[0] * fib_sequence->size[1];
  fib_sequence->size[0] = 1;
  fib_sequence->size[1] = (int)n;
  emxEnsureCapacity_real32_T(fib_sequence, i);
  loop_ub = (int)n;
  for (i = 0; i < loop_ub; i++) {
    fib_sequence->data[i] = 0.0F;
  }

  fib_sequence->data[0] = t1;
  fib_sequence->data[1] = t2;
  i = (int)(n + -2.0F);
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    fib_sequence->data[(int)((float)loop_ub + 3.0F) - 1] = fib_sequence->data
      [(int)(((float)loop_ub + 3.0F) - 1.0F) - 1] + fib_sequence->data[(int)
      (((float)loop_ub + 3.0F) - 2.0F) - 1];
  }
}

/*
 * File trailer for fibonacci.c
 *
 * [EOF]
 */
