/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: testing_new_board.c
 *
 * Code generated for Simulink model 'testing_new_board'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Nov 19 13:34:19 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "testing_new_board.h"
#include "rtwtypes.h"

/* Block states (default storage) */
DW_testing_new_board_T testing_new_board_DW;

/* Real-time model */
static RT_MODEL_testing_new_board_T testing_new_board_M_;
RT_MODEL_testing_new_board_T *const testing_new_board_M = &testing_new_board_M_;

/* Model step function */
void testing_new_board_step(void)
{
  GPIO_TypeDef * portNameLoc;
  real_T rtb_PulseGenerator;
  int32_T c;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (testing_new_board_DW.clockTickCounter <
                        testing_new_board_P.PulseGenerator_Duty) &&
    (testing_new_board_DW.clockTickCounter >= 0) ?
    testing_new_board_P.PulseGenerator_Amp : 0.0;
  if (testing_new_board_DW.clockTickCounter >=
      testing_new_board_P.PulseGenerator_Period - 1.0) {
    testing_new_board_DW.clockTickCounter = 0;
  } else {
    testing_new_board_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<S3>/Digital Port Write' */
  portNameLoc = GPIOE;
  if (rtb_PulseGenerator != 0.0) {
    c = 16;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 16U);

  /* End of MATLABSystem: '<S3>/Digital Port Write' */
}

/* Model initialize function */
void testing_new_board_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void testing_new_board_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
