/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive_data.c
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

#include "Can_send_receive.h"

/* Invariant block signals (default storage) */
const ConstB_Can_send_receive_T Can_send_receive_ConstB = {
  1.0,                                 /* '<S4>/Abs' */
  11.0,                                /* '<S4>/Add' */
  11.0,                                /* '<S4>/Divide' */
  10.0,                                /* '<S4>/Switch' */
  85.0,                                /* '<S4>/Add1' */
  99.449999999999989,                  /* '<S4>/Product' */
  388.8495,                            /* '<S4>/Product1' */
  6.4808249999999994,                  /* '<S4>/Gain' */
  10.0,                                /* '<S4>/Switch1' */
  10.0,                                /* '<S4>/Switch2' */
  10.0,                                /* '<S4>/Saturation' */
  3276.7000000000003,                  /* '<S4>/Gain1' */
  25000U,                              /* '<S3>/Data Type Conversion' */
  43105U,                              /* '<S3>/Byte Reversal' */
  25000U,                              /* '<S3>/Data Type Conversion1' */
  43105U,                              /* '<S3>/Byte Reversal1' */
  25000U,                              /* '<S3>/Data Type Conversion2' */
  43105U,                              /* '<S3>/Byte Reversal2' */
  25000U,                              /* '<S3>/Data Type Conversion3' */
  43105U,                              /* '<S3>/Byte Reversal3' */
  25000U,                              /* '<S3>/Data Type Conversion4' */
  43105U,                              /* '<S3>/Byte Reversal4' */
  25000U,                              /* '<S3>/Data Type Conversion5' */
  43105U,                              /* '<S3>/Byte Reversal5' */
  25000U,                              /* '<S3>/Data Type Conversion6' */
  43105U,                              /* '<S3>/Byte Reversal6' */
  25000U,                              /* '<S3>/Data Type Conversion7' */
  43105U,                              /* '<S3>/Byte Reversal7' */
  3276,                                /* '<S4>/Data Type Conversion' */
  61U,                                 /* '<S5>/Data Type Conversion3' */

  { 204U, 12U },                       /* '<S4>/Byte Pack' */
  52U,                                 /* '<S4>/Data Type Conversion1' */
  14U,                                 /* '<S4>/Data Type Conversion2' */
  3U,                                  /* '<S4>/Data Type Conversion3' */

  { 52U, 204U, 12U, 14U, 3U },         /* '<S4>/Vector Concatenate' */

  { 97U, 168U },                       /* '<S3>/Byte Pack' */

  { 97U, 168U },                       /* '<S3>/Byte Pack1' */

  { 97U, 168U },                       /* '<S3>/Byte Pack2' */

  { 97U, 168U },                       /* '<S3>/Byte Pack3' */

  { 97U, 168U, 97U, 168U, 97U, 168U, 97U, 168U },/* '<S3>/Vector Concatenate' */

  { 97U, 168U },                       /* '<S3>/Byte Pack4' */

  { 97U, 168U },                       /* '<S3>/Byte Pack5' */

  { 97U, 168U },                       /* '<S3>/Byte Pack6' */

  { 97U, 168U },                       /* '<S3>/Byte Pack7' */

  { 97U, 168U, 97U, 168U, 97U, 168U, 97U, 168U },/* '<S3>/Vector Concatenate1' */
  false,                               /* '<S4>/GreaterThan1' */
  true,                                /* '<S4>/Less Than1' */
  false,                               /* '<S4>/AND' */
  true,                                /* '<S4>/GreaterThan' */
  false                                /* '<S4>/Less Than' */
};

/* Constant parameters (default storage) */
const ConstP_Can_send_receive_T Can_send_receive_ConstP = {
  /* Pooled Parameter (Expression: [235 74 168 73 95 138])
   * Referenced by:
   *   '<S5>/Direct Lookup Table (n-D)'
   *   '<S5>/Direct Lookup Table (n-D)1'
   */
  { 235.0, 74.0, 168.0, 73.0, 95.0, 138.0 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
