/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Communication_Testing_data.c
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

#include "Communication_Testing.h"

/* Invariant block signals (default storage) */
const ConstB_Communication_Testing_T Communication_Testing_ConstB = {
  65435.0,                             /* '<Root>/Add1' */
  0.0,                                 /* '<S2>/Byte Reversal' */
  1.0,                                 /* '<S11>/Abs' */
  11.0,                                /* '<S11>/Add' */
  11.0,                                /* '<S11>/Divide' */
  10.0,                                /* '<S11>/Switch' */
  85.0,                                /* '<S11>/Add1' */
  99.449999999999989,                  /* '<S11>/Product' */
  388.8495,                            /* '<S11>/Product1' */
  6.4808249999999994,                  /* '<S11>/Gain' */
  10.0,                                /* '<S11>/Switch1' */
  10.0,                                /* '<S11>/Switch2' */
  10.0,                                /* '<S11>/Saturation' */
  3276.7000000000003,                  /* '<S11>/Gain1' */
  -90.0,                               /* '<S37>/Subtract' */
  20.0,                                /* '<S37>/Subtract1' */
  -4.5,                                /* '<S37>/Divide1' */
  -90.0,                               /* '<S38>/Subtract' */
  20.0,                                /* '<S38>/Subtract1' */
  -4.5,                                /* '<S38>/Divide1' */
  3276,                                /* '<S11>/Data Type Conversion' */
  144U,                                /* '<S2>/Data Type Conversion1' */
  144U,                                /* '<S2>/Data Type Conversion3' */
  61U,                                 /* '<S12>/Data Type Conversion3' */

  { 204U, 12U },                       /* '<S11>/Byte Pack' */
  52U,                                 /* '<S11>/Data Type Conversion1' */
  14U,                                 /* '<S11>/Data Type Conversion2' */
  3U,                                  /* '<S11>/Data Type Conversion3' */

  { 52U, 204U, 12U, 14U, 3U },         /* '<S11>/Vector Concatenate' */
  false,                               /* '<S11>/GreaterThan1' */
  true,                                /* '<S11>/Less Than1' */
  false,                               /* '<S11>/AND' */
  true,                                /* '<S11>/GreaterThan' */
  false                                /* '<S11>/Less Than' */
};

/* Constant parameters (default storage) */
const ConstP_Communication_Testing_T Communication_Testing_ConstP = {
  /* Pooled Parameter (Expression: [235 74 168 73 95 138])
   * Referenced by:
   *   '<S12>/Direct Lookup Table (n-D)'
   *   '<S12>/Direct Lookup Table (n-D)1'
   */
  { 235.0, 74.0, 168.0, 73.0, 95.0, 138.0 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
