/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Vehicle_Control_CodeGen_private.h
 *
 * Code generated for Simulink model 'Vehicle_Control_CodeGen'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Aug 27 13:04:49 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Vehicle_Control_CodeGen_private_h_
#define Vehicle_Control_CodeGen_private_h_
#include "rtwtypes.h"
#include "Vehicle_Control_CodeGen.h"
#include "Vehicle_Control_CodeGen_types.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */

/* Used to reverse endianness */
#define SWAP16(x)                      (((x) >> 8) | (((x) & 0xff) << 8))
#define SWAP32(x)                      (SWAP16((x) >> 16) | (SWAP16((x) & 0xffff) << 16))

extern void Vehicle__MovingAverage_Init(DW_MovingAverage_Vehicle_Cont_T *localDW);
extern void Vehicle_Contr_MovingAverage(real_T rtu_0,
  B_MovingAverage_Vehicle_Contr_T *localB, DW_MovingAverage_Vehicle_Cont_T
  *localDW);
extern void Vehicle_Co_FDCANWrite1_Init(DW_FDCANWrite1_Vehicle_Contro_T *localDW);
extern void Vehicle_Control_FDCANWrite1(const uint8_T rtu_0[3],
  DW_FDCANWrite1_Vehicle_Contro_T *localDW);
extern void Vehicle_Co_FDCANWrite3_Init(DW_FDCANWrite3_Vehicle_Contro_T *localDW);
extern void Vehicle_Control_FDCANWrite3(const uint8_T rtu_0[3],
  DW_FDCANWrite3_Vehicle_Contro_T *localDW);
extern void Vehicle__MovingAverage_Term(DW_MovingAverage_Vehicle_Cont_T *localDW);
extern void Vehicle_Co_FDCANWrite1_Term(DW_FDCANWrite1_Vehicle_Contro_T *localDW);
extern void Vehicle_Co_FDCANWrite3_Term(DW_FDCANWrite3_Vehicle_Contro_T *localDW);

#endif                                 /* Vehicle_Control_CodeGen_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
