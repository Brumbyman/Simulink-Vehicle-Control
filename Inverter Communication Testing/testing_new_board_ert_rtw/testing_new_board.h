/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: testing_new_board.h
 *
 * Code generated for Simulink model 'testing_new_board'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Nov 13 15:22:32 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef testing_new_board_h_
#define testing_new_board_h_
#ifndef testing_new_board_COMMON_INCLUDES_
#define testing_new_board_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "stm_fdcan_hal.h"
#endif                                 /* testing_new_board_COMMON_INCLUDES_ */

#include "testing_new_board_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_FDCANWrite_t_T obj; /* '<S1>/FDCAN Write1' */
} DW_testing_new_board_T;

/* Parameters (default storage) */
struct P_testing_new_board_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_testing_new_board_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_testing_new_board_T testing_new_board_P;

/* Block states (default storage) */
extern DW_testing_new_board_T testing_new_board_DW;

/* Model entry point functions */
extern void testing_new_board_initialize(void);
extern void testing_new_board_step(void);
extern void testing_new_board_terminate(void);

/* Real-time Model object */
extern RT_MODEL_testing_new_board_T *const testing_new_board_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'testing_new_board'
 * '<S1>'   : 'testing_new_board/Triggered Subsystem'
 */
#endif                                 /* testing_new_board_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
