/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive_types.h
 *
 * Code generated for Simulink model 'Can_send_receive'.
 *
 * Model version                  : 1.64
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Sep  4 11:10:08 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Can_send_receive_types_h_
#define Can_send_receive_types_h_
#include "rtwtypes.h"
#include "stm_fdcan_hal.h"

/* Custom Type definition for MATLABSystem: '<S5>/FDCAN Write3' */
#include "stm_fdcan_hal.h"
#ifndef struct_tag_KxSwzM11ifHE1iEOqd1VdG
#define struct_tag_KxSwzM11ifHE1iEOqd1VdG

struct tag_KxSwzM11ifHE1iEOqd1VdG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  FDCAN_Type_T * MW_FDCAN_HANDLE;
};

#endif                                 /* struct_tag_KxSwzM11ifHE1iEOqd1VdG */

#ifndef typedef_stm32cube_blocks_FDCANWrite_C_T
#define typedef_stm32cube_blocks_FDCANWrite_C_T

typedef struct tag_KxSwzM11ifHE1iEOqd1VdG stm32cube_blocks_FDCANWrite_C_T;

#endif                             /* typedef_stm32cube_blocks_FDCANWrite_C_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_Can_send_receive_T RT_MODEL_Can_send_receive_T;

#endif                                 /* Can_send_receive_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
