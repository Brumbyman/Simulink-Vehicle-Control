/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive_types.h
 *
 * Code generated for Simulink model 'Can_send_receive'.
 *
 * Model version                  : 1.63
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Aug 28 15:08:56 2025
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
#ifndef DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_

typedef struct {
  uint8_T ProtocolMode;
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint8_T BRS;
  uint8_T ESI;
  uint8_T DLC;
  uint32_T ID;
  uint32_T Reserved;
  real_T Timestamp;
  uint8_T Data[64];
} CAN_FD_MESSAGE_BUS;

#endif

/* Custom Type definition for MATLABSystem: '<S2>/FDCAN Read1' */
#include "stm_fdcan_hal.h"
#ifndef struct_tag_teqMPwEGIK86lITAwcPFIE
#define struct_tag_teqMPwEGIK86lITAwcPFIE

struct tag_teqMPwEGIK86lITAwcPFIE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  FDCAN_Type_T * MW_FDCAN_HANDLE;
};

#endif                                 /* struct_tag_teqMPwEGIK86lITAwcPFIE */

#ifndef typedef_stm32cube_blocks_FDCANRead_Ca_T
#define typedef_stm32cube_blocks_FDCANRead_Ca_T

typedef struct tag_teqMPwEGIK86lITAwcPFIE stm32cube_blocks_FDCANRead_Ca_T;

#endif                             /* typedef_stm32cube_blocks_FDCANRead_Ca_T */

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
