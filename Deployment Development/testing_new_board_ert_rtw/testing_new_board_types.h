/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: testing_new_board_types.h
 *
 * Code generated for Simulink model 'testing_new_board'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Nov 12 15:28:47 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef testing_new_board_types_h_
#define testing_new_board_types_h_
#include "rtwtypes.h"
#include "stm_fdcan_hal.h"

/* Custom Type definition for MATLABSystem: '<Root>/FDCAN Write1' */
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

#ifndef typedef_stm32cube_blocks_FDCANWrite_t_T
#define typedef_stm32cube_blocks_FDCANWrite_t_T

typedef struct tag_KxSwzM11ifHE1iEOqd1VdG stm32cube_blocks_FDCANWrite_t_T;

#endif                             /* typedef_stm32cube_blocks_FDCANWrite_t_T */

/* Parameters (default storage) */
typedef struct P_testing_new_board_T_ P_testing_new_board_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_testing_new_board_T RT_MODEL_testing_new_board_T;

#endif                                 /* testing_new_board_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
