/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Communication_Testing_types.h
 *
 * Code generated for Simulink model 'Communication_Testing'.
 *
 * Model version                  : 1.83
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Oct  4 15:40:52 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Communication_Testing_types_h_
#define Communication_Testing_types_h_
#include "rtwtypes.h"
#include "stm_fdcan_hal.h"
#include "stm_adc_ll.h"
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

#ifndef struct_tag_4B5c9t1JtSUztS9hrJrCFG
#define struct_tag_4B5c9t1JtSUztS9hrJrCFG

struct tag_4B5c9t1JtSUztS9hrJrCFG
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[9];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                                 /* struct_tag_4B5c9t1JtSUztS9hrJrCFG */

#ifndef typedef_h_dsp_internal_SlidingWindowA_T
#define typedef_h_dsp_internal_SlidingWindowA_T

typedef struct tag_4B5c9t1JtSUztS9hrJrCFG h_dsp_internal_SlidingWindowA_T;

#endif                             /* typedef_h_dsp_internal_SlidingWindowA_T */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap_Communication_Testi_T
#define typedef_cell_wrap_Communication_Testi_T

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap_Communication_Testi_T;

#endif                             /* typedef_cell_wrap_Communication_Testi_T */

#ifndef struct_tag_ps8Pv2DMyDxNpj6T0q1gJE
#define struct_tag_ps8Pv2DMyDxNpj6T0q1gJE

struct tag_ps8Pv2DMyDxNpj6T0q1gJE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_Communication_Testi_T inputVarSize;
  h_dsp_internal_SlidingWindowA_T *pStatistic;
  int32_T NumChannels;
  int32_T FrameLength;
  h_dsp_internal_SlidingWindowA_T _pobj0;
};

#endif                                 /* struct_tag_ps8Pv2DMyDxNpj6T0q1gJE */

#ifndef typedef_dsp_simulink_MovingAverage_Co_T
#define typedef_dsp_simulink_MovingAverage_Co_T

typedef struct tag_ps8Pv2DMyDxNpj6T0q1gJE dsp_simulink_MovingAverage_Co_T;

#endif                             /* typedef_dsp_simulink_MovingAverage_Co_T */

/* Custom Type definition for MATLABSystem: '<S12>/FDCAN Write2' */
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

#ifndef typedef_stm32cube_blocks_FDCANRead_Co_T
#define typedef_stm32cube_blocks_FDCANRead_Co_T

typedef struct tag_teqMPwEGIK86lITAwcPFIE stm32cube_blocks_FDCANRead_Co_T;

#endif                             /* typedef_stm32cube_blocks_FDCANRead_Co_T */

/* Custom Type definition for MATLABSystem: '<S20>/Analog to Digital Converter' */
#include "stm_adc_ll.h"
#include "stm_adc_ll.h"
#ifndef struct_tag_nJDWLJcITUG6sTG8JTIHYE
#define struct_tag_nJDWLJcITUG6sTG8JTIHYE

struct tag_nJDWLJcITUG6sTG8JTIHYE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  ADC_Type_T* ADCHandle;
};

#endif                                 /* struct_tag_nJDWLJcITUG6sTG8JTIHYE */

#ifndef typedef_stm32cube_blocks_AnalogInputF_T
#define typedef_stm32cube_blocks_AnalogInputF_T

typedef struct tag_nJDWLJcITUG6sTG8JTIHYE stm32cube_blocks_AnalogInputF_T;

#endif                             /* typedef_stm32cube_blocks_AnalogInputF_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_Communication_Testing_T RT_MODEL_Communication_Testin_T;

#endif                                 /* Communication_Testing_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
