/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: testing_new_board.c
 *
 * Code generated for Simulink model 'testing_new_board'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Nov 18 16:10:03 2025
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
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void testing_new_board_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(testing_new_board_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (testing_new_board_M->Timing.TaskCounters.TID[1])++;
  if ((testing_new_board_M->Timing.TaskCounters.TID[1]) > 4) {/* Sample time: [0.5s, 0.0s] */
    testing_new_board_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void testing_new_board_step0(void)     /* Sample time: [0.1s, 0.0s] */
{
  real_T tmp;
  uint32_T fifoLevel;
  uint8_T rtb_DataTypeConversion;

  {                                    /* Sample time: [0.1s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/zeke send'
   */
  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Constant: '<S3>/Constant'
   */
  tmp = floor(testing_new_board_P.Constant_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  rtb_DataTypeConversion = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* MATLABSystem: '<S3>/FDCAN Write1' */
  MW_FDCAN_TransmitMessage(testing_new_board_DW.obj.MW_FDCAN_HANDLE,
    &rtb_DataTypeConversion, 529U, 0, 0, 1U, 1000U, 0, 0, &fifoLevel);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */
}

/* Model step function for TID1 */
void testing_new_board_step1(void)     /* Sample time: [0.5s, 0.0s] */
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

  /* MATLABSystem: '<S5>/Digital Port Write' */
  portNameLoc = GPIOE;
  if (rtb_PulseGenerator != 0.0) {
    c = 16;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 16U);

  /* End of MATLABSystem: '<S5>/Digital Port Write' */

  /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  rtb_PulseGenerator = (testing_new_board_DW.clockTickCounter_g <
                        testing_new_board_P.PulseGenerator1_Duty) &&
    (testing_new_board_DW.clockTickCounter_g >= 0) ?
    testing_new_board_P.PulseGenerator1_Amp : 0.0;
  if (testing_new_board_DW.clockTickCounter_g >=
      testing_new_board_P.PulseGenerator1_Period - 1.0) {
    testing_new_board_DW.clockTickCounter_g = 0;
  } else {
    testing_new_board_DW.clockTickCounter_g++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator1' */

  /* MATLABSystem: '<S7>/Digital Port Write' */
  portNameLoc = GPIOE;
  if (rtb_PulseGenerator != 0.0) {
    c = 8;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 8U);

  /* End of MATLABSystem: '<S7>/Digital Port Write' */
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void testing_new_board_step(int_T tid)
{
  switch (tid) {
   case 0 :
    testing_new_board_step0();
    break;

   case 1 :
    testing_new_board_step1();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Model initialize function */
void testing_new_board_initialize(void)
{
  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/zeke send'
   */
  /* Start for MATLABSystem: '<S3>/FDCAN Write1' */
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
   *  SubSystem: '<Root>/zeke send'
   */
  /* Terminate for MATLABSystem: '<S3>/FDCAN Write1' */
  if (!testing_new_board_DW.obj.matlabCodegenIsDeleted) {
    testing_new_board_DW.obj.matlabCodegenIsDeleted = true;
    if ((testing_new_board_DW.obj.isInitialized == 1) &&
        testing_new_board_DW.obj.isSetupComplete) {
      MW_FDCAN_Close(testing_new_board_DW.obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/FDCAN Write1' */
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
