/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Communication_Testing_private.h
 *
 * Code generated for Simulink model 'Communication_Testing'.
 *
 * Model version                  : 1.76
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Sep 23 10:28:59 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Communication_Testing_private_h_
#define Communication_Testing_private_h_
#include "rtwtypes.h"
#include "Communication_Testing.h"
#include "Communication_Testing_types.h"

/* Used to reverse endianness */
#define SWAP16(x)                      (((x) >> 8) | (((x) & 0xff) << 8))
#define SWAP32(x)                      (SWAP16((x) >> 16) | (SWAP16((x) & 0xffff) << 16))

extern void Communic_MovingAverage_Init(DW_MovingAverage_Communicatio_T *localDW);
extern void Communication_MovingAverage(real_T rtu_0,
  B_MovingAverage_Communication_T *localB, DW_MovingAverage_Communicatio_T
  *localDW);
extern void Communicat_FDCANWrite2_Init(DW_FDCANWrite2_Communication__T *localDW);
extern void Communication_T_FDCANWrite2(const uint8_T rtu_0[3],
  DW_FDCANWrite2_Communication__T *localDW);
extern void Communicat_FDCANWrite3_Init(DW_FDCANWrite3_Communication__T *localDW);
extern void Communication_T_FDCANWrite3(const uint8_T rtu_0[3],
  DW_FDCANWrite3_Communication__T *localDW);
extern void Communic_MovingAverage_Term(DW_MovingAverage_Communicatio_T *localDW);
extern void Communicat_FDCANWrite2_Term(DW_FDCANWrite2_Communication__T *localDW);
extern void Communicat_FDCANWrite3_Term(DW_FDCANWrite3_Communication__T *localDW);

#endif                                 /* Communication_Testing_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
