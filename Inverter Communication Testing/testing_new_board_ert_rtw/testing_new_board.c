/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: testing_new_board.c
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
  real_T tmp;
  uint32_T fifoLevel;
  uint8_T rtb_DataTypeConversion;

  /* S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Constant: '<S1>/Constant'
   */
  tmp = floor(testing_new_board_P.Constant_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  rtb_DataTypeConversion = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* MATLABSystem: '<S1>/FDCAN Write1' */
  MW_FDCAN_TransmitMessage(testing_new_board_DW.obj.MW_FDCAN_HANDLE,
    &rtb_DataTypeConversion, 529U, 0, 0, 1U, 1000U, 0, 0, &fifoLevel);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */
}

/* Model initialize function */
void testing_new_board_initialize(void)
{
  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Start for MATLABSystem: '<S1>/FDCAN Write1' */
  testing_new_board_DW.obj.matlabCodegenIsDeleted = false;
  testing_new_board_DW.obj.isInitialized = 1;
  testing_new_board_DW.obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(testing_new_board_DW.obj.MW_FDCAN_HANDLE);
  testing_new_board_DW.obj.isSetupComplete = true;

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' */
}

/* Model terminate function */
void testing_new_board_terminate(void)
{
  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Terminate for MATLABSystem: '<S1>/FDCAN Write1' */
  if (!testing_new_board_DW.obj.matlabCodegenIsDeleted) {
    testing_new_board_DW.obj.matlabCodegenIsDeleted = true;
    if ((testing_new_board_DW.obj.isInitialized == 1) &&
        testing_new_board_DW.obj.isSetupComplete) {
      MW_FDCAN_Close(testing_new_board_DW.obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/FDCAN Write1' */
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
