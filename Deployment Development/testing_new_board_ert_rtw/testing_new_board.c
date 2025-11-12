/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: testing_new_board.c
 *
 * Code generated for Simulink model 'testing_new_board'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Nov 12 14:16:36 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "testing_new_board.h"
#include <math.h>
#include "rt_nonfinite.h"
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
  uint32_T fifoLevel;
  uint8_T rtb_DataTypeConversion;

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_PulseGenerator = floor(testing_new_board_P.Constant_Value);
  if (rtIsNaN(rtb_PulseGenerator) || rtIsInf(rtb_PulseGenerator)) {
    rtb_PulseGenerator = 0.0;
  } else {
    rtb_PulseGenerator = fmod(rtb_PulseGenerator, 256.0);
  }

  rtb_DataTypeConversion = (uint8_T)(rtb_PulseGenerator < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-rtb_PulseGenerator : (int32_T)(uint8_T)
    rtb_PulseGenerator);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* MATLABSystem: '<Root>/FDCAN Write1' */
  MW_FDCAN_TransmitMessage(testing_new_board_DW.obj.MW_FDCAN_HANDLE,
    &rtb_DataTypeConversion, 529U, 0, 0, 1U, 1000U, 0, 0, &fifoLevel);

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
    c = 8192;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 8192U);

  /* End of MATLABSystem: '<S3>/Digital Port Write' */
}

/* Model initialize function */
void testing_new_board_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/FDCAN Write1' */
  testing_new_board_DW.obj.matlabCodegenIsDeleted = false;
  testing_new_board_DW.obj.isInitialized = 1;
  testing_new_board_DW.obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(testing_new_board_DW.obj.MW_FDCAN_HANDLE);
  testing_new_board_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void testing_new_board_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/FDCAN Write1' */
  if (!testing_new_board_DW.obj.matlabCodegenIsDeleted) {
    testing_new_board_DW.obj.matlabCodegenIsDeleted = true;
    if ((testing_new_board_DW.obj.isInitialized == 1) &&
        testing_new_board_DW.obj.isSetupComplete) {
      MW_FDCAN_Close(testing_new_board_DW.obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/FDCAN Write1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
