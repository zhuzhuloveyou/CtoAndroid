//
// Created by PBrain on 2021/3/16.
//
#include "fibonacci_data.h"
#include "fibonacci.h"
#include "fibonacci_initialize.h"
#include "fibonacci_terminate.h"
#include "fibonacci_emxAPI.h"
#include "fibonacci_emxutil.h"
#include "fibonacci_types.h"
#include <android/log.h>
#import <jni.h>
JNIEXPORT jstring JNICALL Java_dsp_com_MainActivity_getString(JNIEnv *env, jobject thiz) {

    // Inputs to the MATLAB Function
    float n = 10;
    float t1 = 0;
    float t2 = 1;
// MATLAB array data type definition
    emxArray_real32_T *fib_sequence;
// Allocating memory to the MATLAB array
// 2 represents the number of dimensions
    emxInitArray_real32_T(&fib_sequence, 2);
// MATLAB function call
// Inputs are entered first in order, followed by the outputs
    fibonacci(n, t1, t2, fib_sequence);
// Printing the elements from the Fibonacci Sequence
    int i;
    for (i = 0; i < n; i++) {
        __android_log_print(ANDROID_LOG_DEBUG, "Fibonacci Output", "Fibonacci Sequence %d - %0.0f\n",i +
                                                                                                     1, fib_sequence->data[i]);
    }
// Deallocate the MATLAB data array
    emxDestroyArray_real32_T(fib_sequence);

    return (*env)->NewStringUTF(env, "Hello World from C!");
}