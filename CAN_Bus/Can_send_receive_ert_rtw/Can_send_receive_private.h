/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive_private.h
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

#ifndef Can_send_receive_private_h_
#define Can_send_receive_private_h_
#include "rtwtypes.h"
#include "Can_send_receive_types.h"

/* Used to reverse endianness */
#define SWAP16(x)                      (((x) >> 8) | (((x) & 0xff) << 8))
#define SWAP32(x)                      (SWAP16((x) >> 16) | (SWAP16((x) & 0xffff) << 16))
#endif                                 /* Can_send_receive_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
