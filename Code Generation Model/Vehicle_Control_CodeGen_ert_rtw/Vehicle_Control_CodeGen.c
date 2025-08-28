/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Vehicle_Control_CodeGen.c
 *
 * Code generated for Simulink model 'Vehicle_Control_CodeGen'.
 *
 * Model version                  : 1.56
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Aug 28 13:46:48 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Vehicle_Control_CodeGen.h"
#include "rtwtypes.h"
#include "Vehicle_Control_CodeGen_types.h"
#include "Vehicle_Control_CodeGen_private.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"

/* Block signals (default storage) */
B_Vehicle_Control_CodeGen_T Vehicle_Control_CodeGen_B;

/* Block states (default storage) */
DW_Vehicle_Control_CodeGen_T Vehicle_Control_CodeGen_DW;

/* Real-time model */
static RT_MODEL_Vehicle_Control_Code_T Vehicle_Control_CodeGen_M_;
RT_MODEL_Vehicle_Control_Code_T *const Vehicle_Control_CodeGen_M =
  &Vehicle_Control_CodeGen_M_;

/* Forward declaration for local functions */
static void Vehicle_Contro_SystemCore_setup(dsp_simulink_MovingAverage_Ve_T *obj);
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Vehicle_Control_CodeGen_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Vehicle_Control_CodeGen_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(Vehicle_Control_CodeGen_M, 2));
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
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rates: 1, 2 */
  Vehicle_Control_CodeGen_M->Timing.RateInteraction.TID0_1 =
    (Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[1] == 0);
  Vehicle_Control_CodeGen_M->Timing.RateInteraction.TID0_2 =
    (Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[2] == 0);

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[1])++;
  if ((Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.02s, 0.0s] */
    Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[1] = 0;
  }

  (Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[2])++;
  if ((Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[2]) > 99) {/* Sample time: [0.2s, 0.0s] */
    Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[2] = 0;
  }
}

static void Vehicle_Contro_SystemCore_setup(dsp_simulink_MovingAverage_Ve_T *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;

  /* Start for MATLABSystem: '<S48>/Moving Average' */
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* System initialize for atomic system: */
void Vehicle__MovingAverage_Init(DW_MovingAverage_Vehicle_Cont_T *localDW)
{
  /* Start for MATLABSystem: '<S48>/Moving Average' */
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  Vehicle_Contro_SystemCore_setup(&localDW->obj);

  /* InitializeConditions for MATLABSystem: '<S48>/Moving Average' */
  if (localDW->obj.pStatistic->isInitialized == 1) {
    localDW->obj.pStatistic->pCumSum = 0.0;
    memset(&localDW->obj.pStatistic->pCumSumRev[0], 0, 9U * sizeof(real_T));
    localDW->obj.pStatistic->pCumRevIndex = 1.0;
    localDW->obj.pStatistic->pModValueRev = 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<S48>/Moving Average' */
}

/* Output and update for atomic system: */
void Vehicle_Contr_MovingAverage(real_T rtu_0, B_MovingAverage_Vehicle_Contr_T
  *localB, DW_MovingAverage_Vehicle_Cont_T *localDW)
{
  real_T csumrev[9];
  real_T csum;
  real_T cumRevIndex;
  real_T modValueRev;
  real_T z;
  int32_T k;

  /* MATLABSystem: '<S48>/Moving Average' */
  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
  }

  if (localDW->obj.pStatistic->isInitialized != 1) {
    localDW->obj.pStatistic->isSetupComplete = false;
    localDW->obj.pStatistic->isInitialized = 1;
    localDW->obj.pStatistic->pCumSum = 0.0;
    memset(&localDW->obj.pStatistic->pCumSumRev[0], 0, 9U * sizeof(real_T));
    localDW->obj.pStatistic->pCumRevIndex = 1.0;
    localDW->obj.pStatistic->pModValueRev = 0.0;
    localDW->obj.pStatistic->isSetupComplete = true;
    localDW->obj.pStatistic->pCumSum = 0.0;
    memset(&localDW->obj.pStatistic->pCumSumRev[0], 0, 9U * sizeof(real_T));
    localDW->obj.pStatistic->pCumRevIndex = 1.0;
    localDW->obj.pStatistic->pModValueRev = 0.0;
  }

  cumRevIndex = localDW->obj.pStatistic->pCumRevIndex;
  csum = localDW->obj.pStatistic->pCumSum;
  for (k = 0; k < 9; k++) {
    csumrev[k] = localDW->obj.pStatistic->pCumSumRev[k];
  }

  modValueRev = localDW->obj.pStatistic->pModValueRev;
  z = 0.0;

  /* MATLABSystem: '<S48>/Moving Average' */
  localB->MovingAverage = 0.0;

  /* MATLABSystem: '<S48>/Moving Average' */
  csum += rtu_0;
  if (modValueRev == 0.0) {
    z = csumrev[(int32_T)cumRevIndex - 1] + csum;
  }

  csumrev[(int32_T)cumRevIndex - 1] = rtu_0;
  if (cumRevIndex != 9.0) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (k = 7; k >= 0; k--) {
      csumrev[k] += csumrev[k + 1];
    }
  }

  if (modValueRev == 0.0) {
    /* MATLABSystem: '<S48>/Moving Average' */
    localB->MovingAverage = z / 10.0;
  }

  localDW->obj.pStatistic->pCumSum = csum;
  memcpy(&localDW->obj.pStatistic->pCumSumRev[0], &csumrev[0], 9U * sizeof
         (real_T));
  localDW->obj.pStatistic->pCumRevIndex = cumRevIndex;
  if (modValueRev > 0.0) {
    localDW->obj.pStatistic->pModValueRev = modValueRev - 1.0;
  } else {
    localDW->obj.pStatistic->pModValueRev = 0.0;
  }
}

/* Termination for atomic system: */
void Vehicle__MovingAverage_Term(DW_MovingAverage_Vehicle_Cont_T *localDW)
{
  /* Terminate for MATLABSystem: '<S48>/Moving Average' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      if (localDW->obj.pStatistic->isInitialized == 1) {
        localDW->obj.pStatistic->isInitialized = 2;
      }

      localDW->obj.NumChannels = -1;
      localDW->obj.FrameLength = -1;
    }
  }

  /* End of Terminate for MATLABSystem: '<S48>/Moving Average' */
}

/* System initialize for atomic system: */
void Vehicle_Co_FDCANWrite1_Init(DW_FDCANWrite1_Vehicle_Contro_T *localDW)
{
  /* Start for MATLABSystem: '<S2>/FDCAN Write1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  localDW->obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(localDW->obj.MW_FDCAN_HANDLE);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void Vehicle_Control_FDCANWrite1(const uint8_T rtu_0[3],
  DW_FDCANWrite1_Vehicle_Contro_T *localDW)
{
  uint32_T fifoLevel;

  /* MATLABSystem: '<S2>/FDCAN Write1' */
  MW_FDCAN_TransmitMessage(localDW->obj.MW_FDCAN_HANDLE, &rtu_0[0], 529U, 0, 0,
    3U, 1000U, 0, 0, &fifoLevel);
}

/* Termination for atomic system: */
void Vehicle_Co_FDCANWrite1_Term(DW_FDCANWrite1_Vehicle_Contro_T *localDW)
{
  /* Terminate for MATLABSystem: '<S2>/FDCAN Write1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      MW_FDCAN_Close(localDW->obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/FDCAN Write1' */
}

/* System initialize for atomic system: */
void Vehicle_Co_FDCANWrite3_Init(DW_FDCANWrite3_Vehicle_Contro_T *localDW)
{
  /* Start for MATLABSystem: '<S2>/FDCAN Write3' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  localDW->obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(localDW->obj.MW_FDCAN_HANDLE);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void Vehicle_Control_FDCANWrite3(const uint8_T rtu_0[3],
  DW_FDCANWrite3_Vehicle_Contro_T *localDW)
{
  uint32_T fifoLevel;

  /* MATLABSystem: '<S2>/FDCAN Write3' */
  MW_FDCAN_TransmitMessage(localDW->obj.MW_FDCAN_HANDLE, &rtu_0[0], 528U, 0, 0,
    3U, 1000U, 0, 0, &fifoLevel);
}

/* Termination for atomic system: */
void Vehicle_Co_FDCANWrite3_Term(DW_FDCANWrite3_Vehicle_Contro_T *localDW)
{
  /* Terminate for MATLABSystem: '<S2>/FDCAN Write3' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      MW_FDCAN_Close(localDW->obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/FDCAN Write3' */
}

/* Model step function for TID0 */
void Vehicle_Control_CodeGen_step0(void) /* Sample time: [0.002s, 0.0s] */
{
  real_T Global_Power_Limit;
  real_T rtb_CurrentError;
  real_T rtb_ManualSwitch;
  real_T rtb_MaximumPermissableChargeC_o;
  real_T rtb_MaximumPermissableChargeCur;
  real_T rtb_ProportionalGain;
  real_T rtb_RequestedChargeCurrent;
  real_T rtb_RequestedChargeCurrent_n;
  real_T rtb_RequestedDischargePower;
  real_T rtb_Switch1;
  real_T rtb_TmpRTBAtFunctionCallSubsyst;
  uint32_T ThrottleRegenControl_ELAPS_T;
  uint16_T rtb_TmpRTBAtFunctionCallSubs_dl;

  {                                    /* Sample time: [0.002s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Constant: '<Root>/Constant6'
   */
  if (Vehicle_Control_CodeGen_P.ManualSwitch2_CurrentSetting == 1) {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Constant5_Value_f;
  } else {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Constant6_Value_c;
  }

  /* Switch: '<Root>/Switch3' incorporates:
   *  Constant: '<Root>/Power Limit'
   *  DataStoreWrite: '<Root>/Data Store Write1'
   *  ManualSwitch: '<Root>/Manual Switch2'
   */
  if (rtb_MaximumPermissableChargeCur >
      Vehicle_Control_CodeGen_P.Switch3_Threshold) {
    Global_Power_Limit = Vehicle_Control_CodeGen_P.PowerLimit_Value;
  } else {
    Global_Power_Limit = 0.0;
  }

  /* End of Switch: '<Root>/Switch3' */
  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  rtb_TmpRTBAtFunctionCallSubs_dl =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystemOu;

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  if (Vehicle_Control_CodeGen_P.ManualSwitch_CurrentSetting == 1) {
    rtb_ManualSwitch = Vehicle_Control_CodeGen_P.Constant_Value_d;
  } else {
    rtb_ManualSwitch = Vehicle_Control_CodeGen_P.Constant1_Value_f;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Constant16'
   *  Constant: '<Root>/Constant3'
   *  Product: '<Root>/Product'
   */
  if (rtb_ManualSwitch > Vehicle_Control_CodeGen_P.Switch1_Threshold) {
    rtb_Switch1 = (real_T)rtb_TmpRTBAtFunctionCallSubs_dl *
      Vehicle_Control_CodeGen_P.Constant16_Value_m;
  } else {
    rtb_Switch1 = Vehicle_Control_CodeGen_P.Constant3_Value_n;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  rtb_TmpRTBAtFunctionCallSubs_dl =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_h;

  /* Switch: '<Root>/Switch2' incorporates:
   *  Constant: '<Root>/Constant17'
   *  Constant: '<Root>/Constant4'
   *  Product: '<Root>/Product1'
   */
  if (rtb_ManualSwitch > Vehicle_Control_CodeGen_P.Switch2_Threshold_g) {
    rtb_ManualSwitch = (real_T)rtb_TmpRTBAtFunctionCallSubs_dl *
      Vehicle_Control_CodeGen_P.Constant17_Value_k;
  } else {
    rtb_ManualSwitch = Vehicle_Control_CodeGen_P.Constant4_Value_i;
  }

  /* End of Switch: '<Root>/Switch2' */
  /* RateTransition generated from: '<Root>/Function-Call Subsystem1' */
  rtb_TmpRTBAtFunctionCallSubsyst =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem1O;

  /* S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  if (Vehicle_Control_CodeGen_DW.ThrottleRegenControl_RESET_ELAP) {
    ThrottleRegenControl_ELAPS_T = 0U;
  } else {
    ThrottleRegenControl_ELAPS_T = Vehicle_Control_CodeGen_M->Timing.clockTick0
      - Vehicle_Control_CodeGen_DW.ThrottleRegenControl_PREV_T;
  }

  Vehicle_Control_CodeGen_DW.ThrottleRegenControl_PREV_T =
    Vehicle_Control_CodeGen_M->Timing.clockTick0;
  Vehicle_Control_CodeGen_DW.ThrottleRegenControl_RESET_ELAP = false;

  /* Relay: '<S48>/Relay' incorporates:
   *  DataStoreRead: '<S48>/Data Store Read1'
   */
  Vehicle_Control_CodeGen_DW.Relay_Mode =
    ((Vehicle_Control_CodeGen_P.Relay_OnVal <= 0.0) ||
     ((!(Vehicle_Control_CodeGen_P.Relay_OffVal >= 0.0)) &&
      Vehicle_Control_CodeGen_DW.Relay_Mode));
  if (Vehicle_Control_CodeGen_DW.Relay_Mode) {
    rtb_MaximumPermissableChargeCur = Vehicle_Control_CodeGen_P.Relay_YOn;
  } else {
    rtb_MaximumPermissableChargeCur = Vehicle_Control_CodeGen_P.Relay_YOff;
  }

  /* Switch: '<S48>/Switch2' incorporates:
   *  Constant: '<S48>/Constant21'
   *  DataStoreWrite: '<S48>/Data Store Write'
   *  Relay: '<S48>/Relay'
   */
  if (rtb_MaximumPermissableChargeCur >
      Vehicle_Control_CodeGen_P.Switch2_Threshold) {
    /* ManualSwitch: '<S48>/Manual Switch1' incorporates:
     *  Constant: '<S48>/Constant12'
     *  Constant: '<S48>/Constant2'
     *  Product: '<S48>/Product1'
     *  Sin: '<S48>/Sine Wave1'
     */
    if (Vehicle_Control_CodeGen_P.ManualSwitch1_CurrentSetting == 1) {
      rtb_RequestedChargeCurrent_n = (sin
        (Vehicle_Control_CodeGen_P.SineWave1_Freq *
         ((Vehicle_Control_CodeGen_M->Timing.clockTick0) * 0.002) +
         Vehicle_Control_CodeGen_P.SineWave1_Phase) *
        Vehicle_Control_CodeGen_P.SineWave1_Amp +
        Vehicle_Control_CodeGen_P.SineWave1_Bias) *
        Vehicle_Control_CodeGen_P.Constant2_Value;
    } else {
      rtb_RequestedChargeCurrent_n = Vehicle_Control_CodeGen_P.Constant12_Value;
    }

    /* End of ManualSwitch: '<S48>/Manual Switch1' */

    /* Switch: '<S48>/Switch' incorporates:
     *  Constant: '<S48>/Constant11'
     *  Constant: '<S48>/Constant13'
     *  Constant: '<S48>/Constant14'
     *  Constant: '<S48>/Constant16'
     *  Constant: '<S48>/Constant17'
     *  Constant: '<S48>/Constant18'
     *  Constant: '<S48>/Constant19'
     *  Constant: '<S50>/Constant'
     *  Logic: '<S48>/AND'
     *  Logic: '<S48>/AND1'
     *  Logic: '<S48>/AND2'
     *  Logic: '<S48>/AND3'
     *  RelationalOperator: '<S48>/GreaterThan'
     *  RelationalOperator: '<S48>/GreaterThan1'
     *  RelationalOperator: '<S48>/Less Than'
     *  RelationalOperator: '<S48>/Less Than1'
     *  RelationalOperator: '<S50>/Compare'
     */
    if ((rtb_RequestedChargeCurrent_n >
         Vehicle_Control_CodeGen_P.CompareToConstant_const) &&
        ((Vehicle_Control_CodeGen_P.Constant13_Value >
          Vehicle_Control_CodeGen_P.Constant17_Value) &&
         (Vehicle_Control_CodeGen_P.Constant13_Value <
          Vehicle_Control_CodeGen_P.Constant16_Value) &&
         ((Vehicle_Control_CodeGen_P.Constant14_Value >
           Vehicle_Control_CodeGen_P.Constant19_Value) &&
          (Vehicle_Control_CodeGen_P.Constant14_Value <
           Vehicle_Control_CodeGen_P.Constant18_Value)))) {
      /* Sum: '<S48>/Add3' incorporates:
       *  Constant: '<S48>/Constant4'
       *  Constant: '<S48>/Constant5'
       *  Constant: '<S48>/Constant6'
       *  Constant: '<S48>/Constant7'
       *  Product: '<S48>/Divide1'
       *  Product: '<S48>/Product2'
       *  Sum: '<S48>/Subtract'
       *  Sum: '<S48>/Subtract1'
       */
      rtb_RequestedChargeCurrent_n = (Vehicle_Control_CodeGen_P.Constant4_Value
        - Vehicle_Control_CodeGen_P.Constant5_Value) /
        (Vehicle_Control_CodeGen_P.Constant6_Value -
         Vehicle_Control_CodeGen_P.Constant7_Value) *
        rtb_TmpRTBAtFunctionCallSubsyst +
        Vehicle_Control_CodeGen_P.Constant5_Value;

      /* Saturate: '<S48>/Saturation' */
      if (rtb_RequestedChargeCurrent_n >
          Vehicle_Control_CodeGen_P.Saturation_UpperSat) {
        rtb_RequestedChargeCurrent_n =
          Vehicle_Control_CodeGen_P.Saturation_UpperSat;
      } else if (rtb_RequestedChargeCurrent_n <
                 Vehicle_Control_CodeGen_P.Saturation_LowerSat) {
        rtb_RequestedChargeCurrent_n =
          Vehicle_Control_CodeGen_P.Saturation_LowerSat;
      }

      /* End of Saturate: '<S48>/Saturation' */
    } else {
      rtb_RequestedChargeCurrent_n = Vehicle_Control_CodeGen_P.Constant11_Value;
    }

    /* End of Switch: '<S48>/Switch' */

    /* Product: '<S48>/Product4' incorporates:
     *  Constant: '<S48>/Scale'
     */
    rtb_RequestedChargeCurrent_n *= Vehicle_Control_CodeGen_P.Scale_Value;

    /* Product: '<S48>/Divide4' incorporates:
     *  Constant: '<S48>/Constant15'
     *  Constant: '<S48>/Constant20'
     *  Constant: '<S48>/Constant26'
     *  Product: '<S48>/Divide'
     */
    rtb_MaximumPermissableChargeC_o = Vehicle_Control_CodeGen_P.Constant20_Value
      / Vehicle_Control_CodeGen_P.Constant15_Value /
      Vehicle_Control_CodeGen_P.Constant26_Value;

    /* Switch: '<S48>/Switch1' incorporates:
     *  DataStoreWrite: '<S48>/Data Store Write'
     *  RelationalOperator: '<S48>/GreaterThan2'
     */
    if (rtb_RequestedChargeCurrent_n > rtb_MaximumPermissableChargeC_o) {
      rtb_RequestedChargeCurrent_n = rtb_MaximumPermissableChargeC_o;
    }

    /* End of Switch: '<S48>/Switch1' */
  } else {
    rtb_RequestedChargeCurrent_n = Vehicle_Control_CodeGen_P.Constant21_Value;
  }

  /* End of Switch: '<S48>/Switch2' */

  /* DataStoreRead: '<S48>/Data Store Read' */
  Vehicle_Contr_MovingAverage(0.0, &Vehicle_Control_CodeGen_B.MovingAverage,
    &Vehicle_Control_CodeGen_DW.MovingAverage);

  /* Switch: '<S48>/Switch3' incorporates:
   *  Constant: '<S48>/Constant27'
   *  Constant: '<S48>/Constant28'
   *  RelationalOperator: '<S48>/GreaterThan3'
   */
  if (rtb_TmpRTBAtFunctionCallSubsyst >
      Vehicle_Control_CodeGen_P.Constant27_Value) {
    rtb_MaximumPermissableChargeCur = rtb_TmpRTBAtFunctionCallSubsyst;
  } else {
    rtb_MaximumPermissableChargeCur = Vehicle_Control_CodeGen_P.Constant28_Value;
  }

  /* Sum: '<S48>/Sum' incorporates:
   *  Constant: '<S48>/Constant23'
   *  Memory: '<S48>/Memory1'
   *  Product: '<S48>/Product6'
   *  Switch: '<S48>/Switch3'
   */
  rtb_MaximumPermissableChargeCur = Vehicle_Control_CodeGen_P.Constant23_Value *
    rtb_MaximumPermissableChargeCur -
    Vehicle_Control_CodeGen_DW.Memory1_PreviousInput;

  /* Saturate: '<S48>/Saturation5' */
  if (rtb_MaximumPermissableChargeCur >
      Vehicle_Control_CodeGen_P.Saturation5_UpperSat) {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Saturation5_UpperSat;
  } else if (rtb_MaximumPermissableChargeCur <
             Vehicle_Control_CodeGen_P.Saturation5_LowerSat) {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Saturation5_LowerSat;
  }

  /* Product: '<S48>/Product5' incorporates:
   *  Saturate: '<S48>/Saturation5'
   */
  rtb_CurrentError = Vehicle_Control_CodeGen_B.MovingAverage.MovingAverage *
    rtb_MaximumPermissableChargeCur;

  /* InitialCondition: '<S48>/IC1' */
  if (Vehicle_Control_CodeGen_DW.IC1_FirstOutputTime) {
    Vehicle_Control_CodeGen_DW.IC1_FirstOutputTime = false;
    rtb_MaximumPermissableChargeC_o = Vehicle_Control_CodeGen_P.IC1_Value;
  } else {
    rtb_MaximumPermissableChargeC_o =
      Vehicle_Control_CodeGen_B.MovingAverage.MovingAverage;
  }

  /* End of InitialCondition: '<S48>/IC1' */

  /* Sum: '<S48>/Sum1' incorporates:
   *  Constant: '<S48>/Constant'
   *  DataStoreRead: '<S48>/Data Store Read2'
   *  Product: '<S48>/Divide3'
   */
  rtb_MaximumPermissableChargeCur = rtb_CurrentError - Global_Power_Limit /
    Vehicle_Control_CodeGen_P.Constant_Value;

  /* Saturate: '<S48>/Saturation3' */
  if (rtb_MaximumPermissableChargeCur >
      Vehicle_Control_CodeGen_P.Saturation3_UpperSat) {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Saturation3_UpperSat;
  } else if (rtb_MaximumPermissableChargeCur <
             Vehicle_Control_CodeGen_P.Saturation3_LowerSat) {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Saturation3_LowerSat;
  }

  /* Product: '<S48>/Divide2' incorporates:
   *  Saturate: '<S48>/Saturation3'
   */
  rtb_RequestedDischargePower = rtb_MaximumPermissableChargeCur /
    rtb_MaximumPermissableChargeC_o;

  /* DiscreteIntegrator: '<S80>/Filter' */
  if (Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE == 0) {
    /* DiscreteIntegrator: '<S80>/Filter' */
    Vehicle_Control_CodeGen_DW.Filter_DSTATE +=
      Vehicle_Control_CodeGen_P.Filter_gainval * (real_T)
      ThrottleRegenControl_ELAPS_T * Vehicle_Control_CodeGen_DW.Filter_PREV_U;
  }

  /* End of DiscreteIntegrator: '<S80>/Filter' */

  /* Gain: '<S82>/Integral Gain' */
  rtb_MaximumPermissableChargeC_o =
    Vehicle_Control_CodeGen_P.DiscretePIDController1_I *
    rtb_RequestedDischargePower;

  /* Gain: '<S88>/Filter Coefficient' incorporates:
   *  Gain: '<S78>/Derivative Gain'
   *  Sum: '<S80>/SumD'
   */
  Vehicle_Control_CodeGen_DW.Filter_PREV_U =
    (Vehicle_Control_CodeGen_P.DiscretePIDController1_D *
     rtb_RequestedDischargePower - Vehicle_Control_CodeGen_DW.Filter_DSTATE) *
    Vehicle_Control_CodeGen_P.DiscretePIDController1_N;

  /* Gain: '<S90>/Proportional Gain' */
  rtb_ProportionalGain = Vehicle_Control_CodeGen_P.DiscretePIDController1_P *
    rtb_RequestedDischargePower;

  /* Sum: '<S48>/Sum3' incorporates:
   *  DataStoreRead: '<S48>/Data Store Read1'
   *  DataStoreWrite: '<S48>/Data Store Write'
   *  Gain: '<S48>/Gain1'
   *  Product: '<S48>/Product7'
   */
  rtb_RequestedChargeCurrent_n = 0.0 * rtb_RequestedChargeCurrent_n +
    Vehicle_Control_CodeGen_P.Gain1_Gain * rtb_CurrentError;

  /* Relay: '<S49>/Relay' incorporates:
   *  DataStoreRead: '<S49>/Data Store Read1'
   */
  Vehicle_Control_CodeGen_DW.Relay_Mode_f =
    ((Vehicle_Control_CodeGen_P.Relay_OnVal_i <= 0.0) ||
     ((!(Vehicle_Control_CodeGen_P.Relay_OffVal_i >= 0.0)) &&
      Vehicle_Control_CodeGen_DW.Relay_Mode_f));
  if (Vehicle_Control_CodeGen_DW.Relay_Mode_f) {
    rtb_MaximumPermissableChargeCur = Vehicle_Control_CodeGen_P.Relay_YOn_l;
  } else {
    rtb_MaximumPermissableChargeCur = Vehicle_Control_CodeGen_P.Relay_YOff_o;
  }

  /* Switch: '<S49>/Switch2' incorporates:
   *  Constant: '<S49>/Constant21'
   *  DataStoreWrite: '<S49>/Data Store Write1'
   *  Relay: '<S49>/Relay'
   */
  if (rtb_MaximumPermissableChargeCur >
      Vehicle_Control_CodeGen_P.Switch2_Threshold_c) {
    /* ManualSwitch: '<S49>/Manual Switch1' incorporates:
     *  Constant: '<S49>/Constant12'
     *  Constant: '<S49>/Constant2'
     *  Product: '<S49>/Product1'
     *  Sin: '<S49>/Sine Wave1'
     */
    if (Vehicle_Control_CodeGen_P.ManualSwitch1_CurrentSetting_n == 1) {
      rtb_RequestedChargeCurrent = (sin
        (Vehicle_Control_CodeGen_P.SineWave1_Freq_n *
         ((Vehicle_Control_CodeGen_M->Timing.clockTick0) * 0.002) +
         Vehicle_Control_CodeGen_P.SineWave1_Phase_i) *
        Vehicle_Control_CodeGen_P.SineWave1_Amp_k +
        Vehicle_Control_CodeGen_P.SineWave1_Bias_k) *
        Vehicle_Control_CodeGen_P.Constant2_Value_m;
    } else {
      rtb_RequestedChargeCurrent = Vehicle_Control_CodeGen_P.Constant12_Value_i;
    }

    /* End of ManualSwitch: '<S49>/Manual Switch1' */

    /* Switch: '<S49>/Switch' incorporates:
     *  Constant: '<S102>/Constant'
     *  Constant: '<S49>/Constant11'
     *  Constant: '<S49>/Constant13'
     *  Constant: '<S49>/Constant14'
     *  Constant: '<S49>/Constant16'
     *  Constant: '<S49>/Constant17'
     *  Constant: '<S49>/Constant18'
     *  Constant: '<S49>/Constant19'
     *  Logic: '<S49>/AND'
     *  Logic: '<S49>/AND1'
     *  Logic: '<S49>/AND2'
     *  Logic: '<S49>/AND3'
     *  RelationalOperator: '<S102>/Compare'
     *  RelationalOperator: '<S49>/GreaterThan'
     *  RelationalOperator: '<S49>/GreaterThan1'
     *  RelationalOperator: '<S49>/Less Than'
     *  RelationalOperator: '<S49>/Less Than1'
     */
    if ((rtb_RequestedChargeCurrent >
         Vehicle_Control_CodeGen_P.CompareToConstant_const_d) &&
        ((Vehicle_Control_CodeGen_P.Constant13_Value_e >
          Vehicle_Control_CodeGen_P.Constant17_Value_o) &&
         (Vehicle_Control_CodeGen_P.Constant13_Value_e <
          Vehicle_Control_CodeGen_P.Constant16_Value_l) &&
         ((Vehicle_Control_CodeGen_P.Constant14_Value_g >
           Vehicle_Control_CodeGen_P.Constant19_Value_f) &&
          (Vehicle_Control_CodeGen_P.Constant14_Value_g <
           Vehicle_Control_CodeGen_P.Constant18_Value_a)))) {
      /* Sum: '<S49>/Add3' incorporates:
       *  Constant: '<S49>/Constant4'
       *  Constant: '<S49>/Constant5'
       *  Constant: '<S49>/Constant6'
       *  Constant: '<S49>/Constant7'
       *  Product: '<S49>/Divide1'
       *  Product: '<S49>/Product2'
       *  Sum: '<S49>/Subtract'
       *  Sum: '<S49>/Subtract1'
       */
      rtb_RequestedChargeCurrent = (Vehicle_Control_CodeGen_P.Constant4_Value_j
        - Vehicle_Control_CodeGen_P.Constant5_Value_h) /
        (Vehicle_Control_CodeGen_P.Constant6_Value_k -
         Vehicle_Control_CodeGen_P.Constant7_Value_g) *
        rtb_TmpRTBAtFunctionCallSubsyst +
        Vehicle_Control_CodeGen_P.Constant5_Value_h;

      /* Saturate: '<S49>/Saturation' */
      if (rtb_RequestedChargeCurrent >
          Vehicle_Control_CodeGen_P.Saturation_UpperSat_h) {
        rtb_RequestedChargeCurrent =
          Vehicle_Control_CodeGen_P.Saturation_UpperSat_h;
      } else if (rtb_RequestedChargeCurrent <
                 Vehicle_Control_CodeGen_P.Saturation_LowerSat_g) {
        rtb_RequestedChargeCurrent =
          Vehicle_Control_CodeGen_P.Saturation_LowerSat_g;
      }

      /* End of Saturate: '<S49>/Saturation' */
    } else {
      rtb_RequestedChargeCurrent = Vehicle_Control_CodeGen_P.Constant11_Value_n;
    }

    /* End of Switch: '<S49>/Switch' */

    /* Product: '<S49>/Product4' incorporates:
     *  Constant: '<S49>/Scale'
     */
    rtb_RequestedChargeCurrent *= Vehicle_Control_CodeGen_P.Scale_Value_p;

    /* Product: '<S49>/Divide4' incorporates:
     *  Constant: '<S49>/Constant15'
     *  Constant: '<S49>/Constant20'
     *  Constant: '<S49>/Constant26'
     *  Product: '<S49>/Divide'
     */
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Constant20_Value_f /
      Vehicle_Control_CodeGen_P.Constant15_Value_c /
      Vehicle_Control_CodeGen_P.Constant26_Value_h;

    /* Switch: '<S49>/Switch1' incorporates:
     *  DataStoreWrite: '<S49>/Data Store Write1'
     *  RelationalOperator: '<S49>/GreaterThan2'
     */
    if (rtb_RequestedChargeCurrent > rtb_MaximumPermissableChargeCur) {
      rtb_RequestedChargeCurrent = rtb_MaximumPermissableChargeCur;
    }

    /* End of Switch: '<S49>/Switch1' */
  } else {
    rtb_RequestedChargeCurrent = Vehicle_Control_CodeGen_P.Constant21_Value_h;
  }

  /* End of Switch: '<S49>/Switch2' */

  /* DataStoreRead: '<S49>/Data Store Read' */
  Vehicle_Contr_MovingAverage(0.0, &Vehicle_Control_CodeGen_B.MovingAverage_p,
    &Vehicle_Control_CodeGen_DW.MovingAverage_p);

  /* Switch: '<S49>/Switch3' incorporates:
   *  Constant: '<S49>/Constant27'
   *  Constant: '<S49>/Constant28'
   *  RelationalOperator: '<S49>/GreaterThan3'
   */
  if (!(rtb_TmpRTBAtFunctionCallSubsyst >
        Vehicle_Control_CodeGen_P.Constant27_Value_o)) {
    rtb_TmpRTBAtFunctionCallSubsyst =
      Vehicle_Control_CodeGen_P.Constant28_Value_j;
  }

  /* Sum: '<S49>/Sum' incorporates:
   *  Constant: '<S49>/Constant23'
   *  Memory: '<S49>/Memory1'
   *  Product: '<S49>/Product6'
   *  Switch: '<S49>/Switch3'
   */
  rtb_MaximumPermissableChargeCur = Vehicle_Control_CodeGen_P.Constant23_Value_j
    * rtb_TmpRTBAtFunctionCallSubsyst -
    Vehicle_Control_CodeGen_DW.Memory1_PreviousInput_a;

  /* Saturate: '<S49>/Saturation5' */
  if (rtb_MaximumPermissableChargeCur >
      Vehicle_Control_CodeGen_P.Saturation5_UpperSat_p) {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Saturation5_UpperSat_p;
  } else if (rtb_MaximumPermissableChargeCur <
             Vehicle_Control_CodeGen_P.Saturation5_LowerSat_l) {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Saturation5_LowerSat_l;
  }

  /* Product: '<S49>/Product5' incorporates:
   *  Saturate: '<S49>/Saturation5'
   */
  rtb_RequestedDischargePower =
    Vehicle_Control_CodeGen_B.MovingAverage_p.MovingAverage *
    rtb_MaximumPermissableChargeCur;

  /* InitialCondition: '<S49>/IC2' */
  if (Vehicle_Control_CodeGen_DW.IC2_FirstOutputTime) {
    Vehicle_Control_CodeGen_DW.IC2_FirstOutputTime = false;
    rtb_TmpRTBAtFunctionCallSubsyst = Vehicle_Control_CodeGen_P.IC2_Value;
  } else {
    rtb_TmpRTBAtFunctionCallSubsyst =
      Vehicle_Control_CodeGen_B.MovingAverage_p.MovingAverage;
  }

  /* End of InitialCondition: '<S49>/IC2' */

  /* Sum: '<S49>/Sum1' incorporates:
   *  Constant: '<S49>/Constant'
   *  DataStoreRead: '<S49>/Data Store Read2'
   *  Product: '<S49>/Divide3'
   */
  rtb_MaximumPermissableChargeCur = rtb_RequestedDischargePower -
    Global_Power_Limit / Vehicle_Control_CodeGen_P.Constant_Value_n;

  /* Saturate: '<S49>/Saturation3' */
  if (rtb_MaximumPermissableChargeCur >
      Vehicle_Control_CodeGen_P.Saturation3_UpperSat_j) {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Saturation3_UpperSat_j;
  } else if (rtb_MaximumPermissableChargeCur <
             Vehicle_Control_CodeGen_P.Saturation3_LowerSat_b) {
    rtb_MaximumPermissableChargeCur =
      Vehicle_Control_CodeGen_P.Saturation3_LowerSat_b;
  }

  /* Product: '<S49>/Divide2' incorporates:
   *  Saturate: '<S49>/Saturation3'
   */
  rtb_CurrentError = rtb_MaximumPermissableChargeCur /
    rtb_TmpRTBAtFunctionCallSubsyst;

  /* DiscreteIntegrator: '<S132>/Filter' */
  if (Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE_i == 0) {
    /* DiscreteIntegrator: '<S132>/Filter' */
    Vehicle_Control_CodeGen_DW.Filter_DSTATE_i +=
      Vehicle_Control_CodeGen_P.Filter_gainval_p * (real_T)
      ThrottleRegenControl_ELAPS_T * Vehicle_Control_CodeGen_DW.Filter_PREV_U_k;
  }

  /* End of DiscreteIntegrator: '<S132>/Filter' */

  /* Gain: '<S140>/Filter Coefficient' incorporates:
   *  Gain: '<S130>/Derivative Gain'
   *  Sum: '<S132>/SumD'
   */
  Vehicle_Control_CodeGen_DW.Filter_PREV_U_k =
    (Vehicle_Control_CodeGen_P.DiscretePIDController1_D_e * rtb_CurrentError -
     Vehicle_Control_CodeGen_DW.Filter_DSTATE_i) *
    Vehicle_Control_CodeGen_P.DiscretePIDController1_N_e;

  /* Update for Memory: '<S48>/Memory1' incorporates:
   *  DiscreteIntegrator: '<S85>/Integrator'
   *  Sum: '<S94>/Sum'
   */
  Vehicle_Control_CodeGen_DW.Memory1_PreviousInput = (rtb_ProportionalGain +
    Vehicle_Control_CodeGen_DW.Integrator_DSTATE) +
    Vehicle_Control_CodeGen_DW.Filter_PREV_U;

  /* Update for DiscreteIntegrator: '<S80>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE = 0U;

  /* Update for DiscreteIntegrator: '<S85>/Integrator' */
  Vehicle_Control_CodeGen_DW.Integrator_DSTATE +=
    Vehicle_Control_CodeGen_P.Integrator_gainval *
    rtb_MaximumPermissableChargeC_o;

  /* Update for Memory: '<S49>/Memory1' incorporates:
   *  DiscreteIntegrator: '<S137>/Integrator'
   *  Gain: '<S142>/Proportional Gain'
   *  Sum: '<S146>/Sum'
   */
  Vehicle_Control_CodeGen_DW.Memory1_PreviousInput_a =
    (Vehicle_Control_CodeGen_P.DiscretePIDController1_P_i * rtb_CurrentError +
     Vehicle_Control_CodeGen_DW.Integrator_DSTATE_o) +
    Vehicle_Control_CodeGen_DW.Filter_PREV_U_k;

  /* Update for DiscreteIntegrator: '<S132>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE_i = 0U;

  /* Update for DiscreteIntegrator: '<S137>/Integrator' incorporates:
   *  Gain: '<S134>/Integral Gain'
   */
  Vehicle_Control_CodeGen_DW.Integrator_DSTATE_o +=
    Vehicle_Control_CodeGen_P.DiscretePIDController1_I_o * rtb_CurrentError *
    Vehicle_Control_CodeGen_P.Integrator_gainval_f;

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters' incorporates:
   *  DataStoreRead: '<S49>/Data Store Read1'
   *  DataStoreWrite: '<S49>/Data Store Write1'
   *  Gain: '<S49>/Gain1'
   *  Product: '<S49>/Product7'
   *  Product: '<S7>/Divide'
   *  Sum: '<S49>/Sum3'
   */
  if (Vehicle_Control_CodeGen_M->Timing.RateInteraction.TID0_1) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
     *  SubSystem: '<Root>/Throttle//Regen Control'
     */
    Vehicle_Control_CodeGen_DW.TmpRTBAt50HZSendTorqueRequestst = (0.0 *
      rtb_RequestedChargeCurrent + Vehicle_Control_CodeGen_P.Gain1_Gain_h *
      rtb_RequestedDischargePower) / rtb_ManualSwitch;

    /* RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters' incorporates:
     *  DataStoreRead: '<S49>/Data Store Read1'
     *  DataStoreWrite: '<S49>/Data Store Write1'
     *  Gain: '<S49>/Gain1'
     *  Product: '<S49>/Product7'
     *  Product: '<S7>/Divide'
     *  Product: '<S7>/Divide1'
     *  Sum: '<S49>/Sum3'
     */
    Vehicle_Control_CodeGen_DW.TmpRTBAt50HZSendTorqueRequest_c =
      rtb_RequestedChargeCurrent_n / rtb_Switch1;

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */
  }

  /* End of RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters' */

  /* RateTransition generated from: '<Root>/Triggered Subsystem' */
  if (Vehicle_Control_CodeGen_M->Timing.RateInteraction.TID0_2) {
    Vehicle_Control_CodeGen_DW.TmpRTBAtTriggeredSubsystemInpor = rtb_Switch1;

    /* RateTransition generated from: '<Root>/Triggered Subsystem' */
    Vehicle_Control_CodeGen_DW.TmpRTBAtTriggeredSubsystemInp_b =
      rtb_ManualSwitch;
  }

  /* End of RateTransition generated from: '<Root>/Triggered Subsystem' */

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.002, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  Vehicle_Control_CodeGen_M->Timing.clockTick0++;
}

/* Model step function for TID1 */
void Vehicle_Control_CodeGen_step1(void) /* Sample time: [0.02s, 0.0s] */
{
  real_T tmp;

  /* S-Function (fcgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/50 HZ Send Torque Requests to Inverters'
   */
  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters'
   */
  tmp = floor(Vehicle_Control_CodeGen_DW.TmpRTBAt50HZSendTorqueRequestst);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  Vehicle_Control_CodeGen_B.DataTypeConversion_m = (uint16_T)(tmp < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* S-Function (reverseendian_svd): '<S2>/Byte Reversal' */

  /* ReverseEndian: <S2>/Byte Reversal */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal_p)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion_m)[0]);

  /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
   *  RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters'
   */
  tmp = floor(Vehicle_Control_CodeGen_DW.TmpRTBAt50HZSendTorqueRequest_c);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion2' */
  Vehicle_Control_CodeGen_B.DataTypeConversion2_k = (uint16_T)(tmp < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* S-Function (reverseendian_svd): '<S2>/Byte Reversal1' */

  /* ReverseEndian: <S2>/Byte Reversal1 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal1)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion2_k)[0]);

  /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
   *  Concatenate: '<S2>/Vector Concatenate'
   *  Constant: '<S2>/Constant1'
   */
  tmp = floor(Vehicle_Control_CodeGen_P.Constant1_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  Vehicle_Control_CodeGen_B.VectorConcatenate_c[0] = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S2>/Data Type Conversion1' */

  /* S-Function (any2byte_svd): '<S2>/Byte Pack' */

  /* Pack: <S2>/Byte Pack */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate_c[1];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.ByteReversal_p, MW_inputPortWidth);
    }
  }

  Vehicle_Control_FDCANWrite1(Vehicle_Control_CodeGen_B.VectorConcatenate_c,
    &Vehicle_Control_CodeGen_DW.FDCANWrite1);

  /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
   *  Concatenate: '<S2>/Vector Concatenate1'
   *  Constant: '<S2>/Constant3'
   */
  tmp = floor(Vehicle_Control_CodeGen_P.Constant3_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  Vehicle_Control_CodeGen_B.VectorConcatenate1_k[0] = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S2>/Data Type Conversion3' */

  /* S-Function (any2byte_svd): '<S2>/Byte Pack1' */

  /* Pack: <S2>/Byte Pack1 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate1_k[1];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.ByteReversal1, MW_inputPortWidth);
    }
  }

  Vehicle_Control_FDCANWrite3(Vehicle_Control_CodeGen_B.VectorConcatenate1_k,
    &Vehicle_Control_CodeGen_DW.FDCANWrite3);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator2' */
}

/* Model step function for TID2 */
void Vehicle_Control_CodeGen_step2(void) /* Sample time: [0.2s, 0.0s] */
{
  real_T rtb_ManualSwitch1;
  real_T tmp;
  int32_T tmp_0;
  uint32_T fifoLevel;
  uint8_T rtb_VectorConcatenate[3];

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_B.DataTypeConversion =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_e;

  /* ManualSwitch: '<Root>/Manual Switch1' incorporates:
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant15'
   */
  if (Vehicle_Control_CodeGen_P.ManualSwitch1_CurrentSetting_h == 1) {
    rtb_ManualSwitch1 = Vehicle_Control_CodeGen_P.Constant14_Value_k;
  } else {
    rtb_ManualSwitch1 = Vehicle_Control_CodeGen_P.Constant15_Value_l;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch1' */

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_B.DataTypeConversion2 =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_g;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_B.DataTypeConversion3 =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_k;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_B.DataTypeConversion4 =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_m;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_B.DataTypeConversion6 =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_b;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_B.DataTypeConversion7 =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsyste_e2;

  /* Switch: '<Root>/Switch5' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch5_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant2_Value_j);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch5' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S8>/Byte Reversal' */

  /* ReverseEndian: <S8>/Byte Reversal */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch7' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch7_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S8>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/Constant7'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant7_Value_m);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion2'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion2 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch7' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S8>/Byte Reversal2' */

  /* ReverseEndian: <S8>/Byte Reversal2 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal2)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion2)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch8' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch8_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S8>/Data Type Conversion3' incorporates:
     *  Constant: '<Root>/Constant12'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant12_Value_g);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion3'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion3 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch8' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S8>/Byte Reversal3' */

  /* ReverseEndian: <S8>/Byte Reversal3 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal3)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion3)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch9' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch9_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S8>/Data Type Conversion4' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant13_Value_i);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion4'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion4 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch9' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S8>/Byte Reversal4' */

  /* ReverseEndian: <S8>/Byte Reversal4 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal4)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion4)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch11' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch11_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S8>/Data Type Conversion6' incorporates:
     *  Constant: '<Root>/Constant10'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant10_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion6'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion6 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch11' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S8>/Byte Reversal6' */

  /* ReverseEndian: <S8>/Byte Reversal6 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal6)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion6)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch12' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch12_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S8>/Data Type Conversion7' incorporates:
     *  Constant: '<Root>/Constant11'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant11_Value_i);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion7'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion7 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch12' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S8>/Byte Reversal7' */

  /* ReverseEndian: <S8>/Byte Reversal7 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal7)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion7)[0]);

  /* S-Function (any2byte_svd): '<S8>/Byte Pack' */

  /* Pack: <S8>/Byte Pack */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate[0];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.ByteReversal, MW_inputPortWidth);
    }
  }

  /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
   *  RateTransition generated from: '<Root>/Triggered Subsystem'
   */
  tmp = floor(Vehicle_Control_CodeGen_DW.TmpRTBAtTriggeredSubsystemInpor);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  /* DataTypeConversion: '<S8>/Data Type Conversion1' */
  Vehicle_Control_CodeGen_B.DataTypeConversion1 = (uint16_T)(tmp < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* S-Function (any2byte_svd): '<S8>/Byte Pack1' */

  /* Pack: <S8>/Byte Pack1 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate[2];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.DataTypeConversion1, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S8>/Byte Pack2' */

  /* Pack: <S8>/Byte Pack2 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate[4];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.ByteReversal2, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S8>/Byte Pack3' */

  /* Pack: <S8>/Byte Pack3 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate[6];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.ByteReversal3, MW_inputPortWidth);
    }
  }

  /* MATLABSystem: '<S8>/FDCAN Write3' incorporates:
   *  Concatenate: '<S8>/Vector Concatenate'
   * */
  MW_FDCAN_TransmitMessage(Vehicle_Control_CodeGen_DW.obj.MW_FDCAN_HANDLE,
    &Vehicle_Control_CodeGen_B.VectorConcatenate[0], 8U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* S-Function (any2byte_svd): '<S8>/Byte Pack4' */

  /* Pack: <S8>/Byte Pack4 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate1[0];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.ByteReversal4, MW_inputPortWidth);
    }
  }

  /* DataTypeConversion: '<S8>/Data Type Conversion5' incorporates:
   *  RateTransition generated from: '<Root>/Triggered Subsystem'
   */
  tmp = floor(Vehicle_Control_CodeGen_DW.TmpRTBAtTriggeredSubsystemInp_b);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  /* DataTypeConversion: '<S8>/Data Type Conversion5' */
  Vehicle_Control_CodeGen_B.DataTypeConversion5 = (uint16_T)(tmp < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* S-Function (any2byte_svd): '<S8>/Byte Pack5' */

  /* Pack: <S8>/Byte Pack5 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate1[2];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.DataTypeConversion5, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S8>/Byte Pack6' */

  /* Pack: <S8>/Byte Pack6 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate1[4];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.ByteReversal6, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S8>/Byte Pack7' */

  /* Pack: <S8>/Byte Pack7 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Vehicle_Control_CodeGen_B.VectorConcatenate1[6];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Vehicle_Control_CodeGen_B.ByteReversal7, MW_inputPortWidth);
    }
  }

  /* MATLABSystem: '<S8>/FDCAN Write1' incorporates:
   *  Concatenate: '<S8>/Vector Concatenate1'
   * */
  MW_FDCAN_TransmitMessage(Vehicle_Control_CodeGen_DW.obj_b.MW_FDCAN_HANDLE,
    &Vehicle_Control_CodeGen_B.VectorConcatenate1[0], 9U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/Constant'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  Vehicle_Control_CodeGen_DW.UnitDelay_DSTATE +=
    Vehicle_Control_CodeGen_P.Constant_Value_b;

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  RelationalOperator: '<S1>/GreaterThan'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (Vehicle_Control_CodeGen_DW.UnitDelay_DSTATE >
      Vehicle_Control_CodeGen_P.Constant3_Value_o) {
    tmp = Vehicle_Control_CodeGen_P.Constant1_Value_n;
  } else {
    tmp = Vehicle_Control_CodeGen_P.Constant2_Value_l;
  }

  /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  if (tmp > 0.0) {
    /* DataTypeConversion: '<S11>/Data Type Conversion3' incorporates:
     *  Constant: '<S11>/Constant4'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant4_Value_p);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[0] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S11>/Data Type Conversion3' */

    /* LookupNDDirect: '<S11>/Direct Lookup Table (n-D)' incorporates:
     *  UnitDelay: '<S12>/Output'
     *
     * About '<S11>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (Vehicle_Control_CodeGen_DW.Output_DSTATE > 5) {
      tmp_0 = 5;
    } else {
      tmp_0 = Vehicle_Control_CodeGen_DW.Output_DSTATE;
    }

    /* DataTypeConversion: '<S11>/Data Type Conversion2' incorporates:
     *  LookupNDDirect: '<S11>/Direct Lookup Table (n-D)'
     *
     * About '<S11>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    tmp = floor(Vehicle_Control_CodeGen_P.DirectLookupTablenD_table[tmp_0]);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[1] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S11>/Data Type Conversion2' */

    /* LookupNDDirect: '<S11>/Direct Lookup Table (n-D)1' incorporates:
     *  UnitDelay: '<S13>/Output'
     *
     * About '<S11>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (Vehicle_Control_CodeGen_DW.Output_DSTATE_a > 5) {
      tmp_0 = 5;
    } else {
      tmp_0 = Vehicle_Control_CodeGen_DW.Output_DSTATE_a;
    }

    /* DataTypeConversion: '<S11>/Data Type Conversion4' incorporates:
     *  LookupNDDirect: '<S11>/Direct Lookup Table (n-D)1'
     *
     * About '<S11>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    tmp = floor(Vehicle_Control_CodeGen_P.DirectLookupTablenD1_table[tmp_0]);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[2] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S11>/Data Type Conversion4' */
    Vehicle_Control_FDCANWrite1(rtb_VectorConcatenate,
      &Vehicle_Control_CodeGen_DW.FDCANWrite2);
    Vehicle_Control_FDCANWrite3(rtb_VectorConcatenate,
      &Vehicle_Control_CodeGen_DW.FDCANWrite3_pn);

    /* Sum: '<S14>/FixPt Sum1' incorporates:
     *  Constant: '<S14>/FixPt Constant'
     *  UnitDelay: '<S12>/Output'
     */
    Vehicle_Control_CodeGen_DW.Output_DSTATE = (uint8_T)((uint32_T)
      Vehicle_Control_CodeGen_DW.Output_DSTATE +
      Vehicle_Control_CodeGen_P.FixPtConstant_Value);

    /* Switch: '<S15>/FixPt Switch' */
    if (Vehicle_Control_CodeGen_DW.Output_DSTATE >
        Vehicle_Control_CodeGen_P.WrapToZero_Threshold) {
      /* Sum: '<S14>/FixPt Sum1' incorporates:
       *  Constant: '<S15>/Constant'
       */
      Vehicle_Control_CodeGen_DW.Output_DSTATE =
        Vehicle_Control_CodeGen_P.Constant_Value_h;
    }

    /* End of Switch: '<S15>/FixPt Switch' */

    /* Sum: '<S16>/FixPt Sum1' incorporates:
     *  Constant: '<S16>/FixPt Constant'
     *  UnitDelay: '<S13>/Output'
     */
    Vehicle_Control_CodeGen_DW.Output_DSTATE_a = (uint8_T)((uint32_T)
      Vehicle_Control_CodeGen_DW.Output_DSTATE_a +
      Vehicle_Control_CodeGen_P.FixPtConstant_Value_n);

    /* Switch: '<S17>/FixPt Switch' */
    if (Vehicle_Control_CodeGen_DW.Output_DSTATE_a >
        Vehicle_Control_CodeGen_P.WrapToZero_Threshold_e) {
      /* Sum: '<S16>/FixPt Sum1' incorporates:
       *  Constant: '<S17>/Constant'
       */
      Vehicle_Control_CodeGen_DW.Output_DSTATE_a =
        Vehicle_Control_CodeGen_P.Constant_Value_dp;
    }

    /* End of Switch: '<S17>/FixPt Switch' */
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void Vehicle_Control_CodeGen_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Vehicle_Control_CodeGen_step0();
    break;

   case 1 :
    Vehicle_Control_CodeGen_step1();
    break;

   case 2 :
    Vehicle_Control_CodeGen_step2();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Model initialize function */
void Vehicle_Control_CodeGen_initialize(void)
{
  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystemOu =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsystemOu;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_h =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsystem_j;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem1' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem1O =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsystem1O;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_e =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsyste_jx;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_g =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsyst_jxk;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_k =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsys_jxkx;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_m =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsy_jxkxj;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_b =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubs_jxkxj0;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsyste_e2 =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSub_jxkxj0l;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Start for MATLABSystem: '<S8>/FDCAN Write3' */
  Vehicle_Control_CodeGen_DW.obj.matlabCodegenIsDeleted = false;
  Vehicle_Control_CodeGen_DW.obj.isInitialized = 1;
  Vehicle_Control_CodeGen_DW.obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Vehicle_Control_CodeGen_DW.obj.MW_FDCAN_HANDLE);
  Vehicle_Control_CodeGen_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S8>/FDCAN Write1' */
  Vehicle_Control_CodeGen_DW.obj_b.matlabCodegenIsDeleted = false;
  Vehicle_Control_CodeGen_DW.obj_b.isInitialized = 1;
  Vehicle_Control_CodeGen_DW.obj_b.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Vehicle_Control_CodeGen_DW.obj_b.MW_FDCAN_HANDLE);
  Vehicle_Control_CodeGen_DW.obj_b.isSetupComplete = true;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Vehicle_Control_CodeGen_DW.UnitDelay_DSTATE =
    Vehicle_Control_CodeGen_P.UnitDelay_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  /* InitializeConditions for Sum: '<S14>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S12>/Output'
   */
  Vehicle_Control_CodeGen_DW.Output_DSTATE =
    Vehicle_Control_CodeGen_P.Output_InitialCondition;

  /* InitializeConditions for Sum: '<S16>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S13>/Output'
   */
  Vehicle_Control_CodeGen_DW.Output_DSTATE_a =
    Vehicle_Control_CodeGen_P.Output_InitialCondition_n;
  Vehicle_Co_FDCANWrite1_Init(&Vehicle_Control_CodeGen_DW.FDCANWrite2);
  Vehicle_Co_FDCANWrite3_Init(&Vehicle_Control_CodeGen_DW.FDCANWrite3_pn);

  /* End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/50 HZ Send Torque Requests to Inverters'
   */
  Vehicle_Co_FDCANWrite1_Init(&Vehicle_Control_CodeGen_DW.FDCANWrite1);
  Vehicle_Co_FDCANWrite3_Init(&Vehicle_Control_CodeGen_DW.FDCANWrite3);

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator2' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  /* Start for InitialCondition: '<S48>/IC1' */
  Vehicle_Control_CodeGen_DW.IC1_FirstOutputTime = true;

  /* Start for InitialCondition: '<S49>/IC2' */
  Vehicle_Control_CodeGen_DW.IC2_FirstOutputTime = true;

  /* InitializeConditions for Memory: '<S48>/Memory1' */
  Vehicle_Control_CodeGen_DW.Memory1_PreviousInput =
    Vehicle_Control_CodeGen_P.Memory1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S80>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_DSTATE =
    Vehicle_Control_CodeGen_P.DiscretePIDController1_InitialC;

  /* InitializeConditions for DiscreteIntegrator: '<S85>/Integrator' */
  Vehicle_Control_CodeGen_DW.Integrator_DSTATE =
    Vehicle_Control_CodeGen_P.DiscretePIDController1_Initia_h;

  /* InitializeConditions for Memory: '<S49>/Memory1' */
  Vehicle_Control_CodeGen_DW.Memory1_PreviousInput_a =
    Vehicle_Control_CodeGen_P.Memory1_InitialCondition_b;

  /* InitializeConditions for DiscreteIntegrator: '<S132>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_DSTATE_i =
    Vehicle_Control_CodeGen_P.DiscretePIDController1_Initia_f;

  /* InitializeConditions for DiscreteIntegrator: '<S137>/Integrator' */
  Vehicle_Control_CodeGen_DW.Integrator_DSTATE_o =
    Vehicle_Control_CodeGen_P.DiscretePIDController1_Initia_j;
  Vehicle__MovingAverage_Init(&Vehicle_Control_CodeGen_DW.MovingAverage);
  Vehicle__MovingAverage_Init(&Vehicle_Control_CodeGen_DW.MovingAverage_p);

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S45>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* System initialize for function-call system: '<Root>/Function-Call Subsystem' */

  /* Start for S-Function (scanfdunpack): '<S3>/CAN FD Unpack2' */

  /*-----------S-Function Block: <S3>/CAN FD Unpack2 -----------------*/

  /* Start for S-Function (scanfdunpack): '<S3>/CAN FD Unpack1' */

  /*-----------S-Function Block: <S3>/CAN FD Unpack1 -----------------*/

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem1' */
  /* SystemInitialize for SignalConversion generated from: '<S18>/In1' incorporates:
   *  Outport: '<S18>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20a = Vehicle_Control_CodeGen_P.Out1_Y0_j;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem10' */
  /* SystemInitialize for SignalConversion generated from: '<S19>/In1' incorporates:
   *  Outport: '<S19>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g2 = Vehicle_Control_CodeGen_P.Out1_Y0_m;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem10' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem12' */
  /* SystemInitialize for SignalConversion generated from: '<S21>/In1' incorporates:
   *  Outport: '<S21>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20 = Vehicle_Control_CodeGen_P.Out1_Y0_n;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem12' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem2' */
  /* SystemInitialize for SignalConversion generated from: '<S22>/In1' incorporates:
   *  Outport: '<S22>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20as = Vehicle_Control_CodeGen_P.Out1_Y0_pe;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem4' */
  /* SystemInitialize for SignalConversion generated from: '<S24>/In1' incorporates:
   *  Outport: '<S24>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20asd = Vehicle_Control_CodeGen_P.Out1_Y0_g;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem4' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem6' */
  /* SystemInitialize for SignalConversion generated from: '<S26>/In1' incorporates:
   *  Outport: '<S26>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20asdt = Vehicle_Control_CodeGen_P.Out1_Y0_a;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem6' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem7' */
  /* SystemInitialize for SignalConversion generated from: '<S27>/In1' incorporates:
   *  Outport: '<S27>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1 = Vehicle_Control_CodeGen_P.Out1_Y0_h;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem7' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem8' */
  /* SystemInitialize for SignalConversion generated from: '<S28>/In1' incorporates:
   *  Outport: '<S28>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g = Vehicle_Control_CodeGen_P.Out1_Y0_i;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem8' */

  /* Start for MATLABSystem: '<S3>/FDCAN Read1' */
  Vehicle_Control_CodeGen_DW.obj_j.matlabCodegenIsDeleted = false;
  Vehicle_Control_CodeGen_DW.obj_j.isInitialized = 1;
  Vehicle_Control_CodeGen_DW.obj_j.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Vehicle_Control_CodeGen_DW.obj_j.MW_FDCAN_HANDLE);
  Vehicle_Control_CodeGen_DW.obj_j.isSetupComplete = true;

  /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S47>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem1'
   */
  /* System initialize for function-call system: '<Root>/Function-Call Subsystem1' */

  /* Start for S-Function (scanfdunpack): '<S4>/CAN FD Unpack1' */

  /*-----------S-Function Block: <S4>/CAN FD Unpack1 -----------------*/

  /* Start for S-Function (scanfdunpack): '<S4>/CAN FD Unpack3' */

  /*-----------S-Function Block: <S4>/CAN FD Unpack3 -----------------*/

  /* Start for S-Function (scanfdunpack): '<S4>/CAN FD Unpack4' */

  /*-----------S-Function Block: <S4>/CAN FD Unpack4 -----------------*/

  /* Start for MATLABSystem: '<S4>/FDCAN Read1' */
  Vehicle_Control_CodeGen_DW.obj_n.matlabCodegenIsDeleted = false;
  Vehicle_Control_CodeGen_DW.obj_n.isInitialized = 1;
  Vehicle_Control_CodeGen_DW.obj_n.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(Vehicle_Control_CodeGen_DW.obj_n.MW_FDCAN_HANDLE);
  Vehicle_Control_CodeGen_DW.obj_n.isSetupComplete = true;

  /* SystemInitialize for DataTypeConversion: '<S4>/Data Type Conversion15' incorporates:
   *  Outport: '<S4>/Out14'
   */
  Vehicle_Control_CodeGen_B.APPSPercentage = Vehicle_Control_CodeGen_P.Out14_Y0;

  /* SystemInitialize for S-Function (byte2any_svd): '<S4>/Byte Unpack' incorporates:
   *  Outport: '<S4>/Out17'
   */
  Vehicle_Control_CodeGen_B.WheelSpeedFrontLeft =
    Vehicle_Control_CodeGen_P.Out17_Y0;

  /* SystemInitialize for S-Function (byte2any_svd): '<S4>/Byte Unpack1' incorporates:
   *  Outport: '<S4>/Out18'
   */
  Vehicle_Control_CodeGen_B.WheelSpeedFrontRight =
    Vehicle_Control_CodeGen_P.Out18_Y0;

  /* SystemInitialize for S-Function (byte2any_svd): '<S4>/Byte Unpack2' incorporates:
   *  Outport: '<S4>/Out19'
   */
  Vehicle_Control_CodeGen_B.BMSCurrentSensor =
    Vehicle_Control_CodeGen_P.Out19_Y0;

  /* SystemInitialize for S-Function (byte2any_svd): '<S4>/Byte Unpack3' incorporates:
   *  Outport: '<S4>/Out20'
   */
  Vehicle_Control_CodeGen_B.BMSVoltage = Vehicle_Control_CodeGen_P.Out20_Y0;

  /* Enable for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  Vehicle_Control_CodeGen_DW.ThrottleRegenControl_RESET_ELAP = true;

  /* Enable for DiscreteIntegrator: '<S80>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE = 1U;

  /* Enable for DiscreteIntegrator: '<S132>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE_i = 1U;

  /* End of Enable for S-Function (fcgen): '<Root>/Function-Call Generator' */
}

/* Model terminate function */
void Vehicle_Control_CodeGen_terminate(void)
{
  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S45>/Hardware Interrupt' */

  /* Terminate for S-Function (HardwareInterrupt_sfun): '<S45>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* Termination for function-call system: '<Root>/Function-Call Subsystem' */

  /* Terminate for MATLABSystem: '<S3>/FDCAN Read1' */
  if (!Vehicle_Control_CodeGen_DW.obj_j.matlabCodegenIsDeleted) {
    Vehicle_Control_CodeGen_DW.obj_j.matlabCodegenIsDeleted = true;
    if ((Vehicle_Control_CodeGen_DW.obj_j.isInitialized == 1) &&
        Vehicle_Control_CodeGen_DW.obj_j.isSetupComplete) {
      MW_FDCAN_Close(Vehicle_Control_CodeGen_DW.obj_j.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/FDCAN Read1' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S45>/Hardware Interrupt' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S47>/Hardware Interrupt' */

  /* Terminate for S-Function (HardwareInterrupt_sfun): '<S47>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem1'
   */
  /* Termination for function-call system: '<Root>/Function-Call Subsystem1' */

  /* Terminate for MATLABSystem: '<S4>/FDCAN Read1' */
  if (!Vehicle_Control_CodeGen_DW.obj_n.matlabCodegenIsDeleted) {
    Vehicle_Control_CodeGen_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((Vehicle_Control_CodeGen_DW.obj_n.isInitialized == 1) &&
        Vehicle_Control_CodeGen_DW.obj_n.isSetupComplete) {
      MW_FDCAN_Close(Vehicle_Control_CodeGen_DW.obj_n.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/FDCAN Read1' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S47>/Hardware Interrupt' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  Vehicle__MovingAverage_Term(&Vehicle_Control_CodeGen_DW.MovingAverage);
  Vehicle__MovingAverage_Term(&Vehicle_Control_CodeGen_DW.MovingAverage_p);

  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/50 HZ Send Torque Requests to Inverters'
   */
  Vehicle_Co_FDCANWrite1_Term(&Vehicle_Control_CodeGen_DW.FDCANWrite1);
  Vehicle_Co_FDCANWrite3_Term(&Vehicle_Control_CodeGen_DW.FDCANWrite3);

  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator2' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Terminate for MATLABSystem: '<S8>/FDCAN Write3' */
  if (!Vehicle_Control_CodeGen_DW.obj.matlabCodegenIsDeleted) {
    Vehicle_Control_CodeGen_DW.obj.matlabCodegenIsDeleted = true;
    if ((Vehicle_Control_CodeGen_DW.obj.isInitialized == 1) &&
        Vehicle_Control_CodeGen_DW.obj.isSetupComplete) {
      MW_FDCAN_Close(Vehicle_Control_CodeGen_DW.obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S8>/FDCAN Write3' */

  /* Terminate for MATLABSystem: '<S8>/FDCAN Write1' */
  if (!Vehicle_Control_CodeGen_DW.obj_b.matlabCodegenIsDeleted) {
    Vehicle_Control_CodeGen_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((Vehicle_Control_CodeGen_DW.obj_b.isInitialized == 1) &&
        Vehicle_Control_CodeGen_DW.obj_b.isSetupComplete) {
      MW_FDCAN_Close(Vehicle_Control_CodeGen_DW.obj_b.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S8>/FDCAN Write1' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* Terminate for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  Vehicle_Co_FDCANWrite1_Term(&Vehicle_Control_CodeGen_DW.FDCANWrite2);
  Vehicle_Co_FDCANWrite3_Term(&Vehicle_Control_CodeGen_DW.FDCANWrite3_pn);

  /* End of Terminate for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' */
}

void Vehicle_Control_CodeGen_configure_interrupts(void)
{
  /* Register interrupt service routine */
  MW_NVIC_ConfigureIRQ(35,&FDCAN2_IT0_IRQHandler,4);
  MW_NVIC_EnableIRQ(35);

  /* Register interrupt service routine */
  MW_NVIC_ConfigureIRQ(34,&FDCAN1_IT0_IRQHandler,3);
  MW_NVIC_EnableIRQ(34);
}

/* Hardware Interrupt Block: '<S45>/Hardware Interrupt' */
void FDCAN2_IT0_IRQHandler(void)
{
  /* Event: FDCAN2 RF0NE */
  /* Check event FDCAN2 RF0NE occurred */
  if (0 != ((0U != (FDCAN2->IE & FDCAN_IE_RF0NE)) && (0U != (FDCAN2->IR &
         FDCAN_IR_RF0N)))) {
    /* Clear occurred FDCAN2 RF0NE event */
    WRITE_REG(FDCAN2->IR,FDCAN_IR_RF0N);
    if (1 == runModel) {
      {
        /* S-Function (HardwareInterrupt_sfun): '<S45>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/Function-Call Subsystem' */
        {
          uint32_T fifoLevel;

          /* MATLABSystem: '<S3>/FDCAN Read1' */
          MW_FDCAN_ReceiveMessage
            (Vehicle_Control_CodeGen_DW.obj_j.MW_FDCAN_HANDLE, (uint8_T)
             FDCAN_RX_FIFO0, &Vehicle_Control_CodeGen_B.FDCANRead1_l.Data[0],
             &Vehicle_Control_CodeGen_B.FDCANRead1_l.ID,
             &Vehicle_Control_CodeGen_B.FDCANRead1_l.Extended,
             &Vehicle_Control_CodeGen_B.FDCANRead1_l.Remote,
             &Vehicle_Control_CodeGen_B.FDCANRead1_l.Length,
             &Vehicle_Control_CodeGen_B.FDCANRead1_l.DLC,
             &Vehicle_Control_CodeGen_B.FDCANRead1_l.BRS,
             &Vehicle_Control_CodeGen_B.FDCANRead1_l.ProtocolMode, 1U,
             &fifoLevel);
          Vehicle_Control_CodeGen_B.FDCANRead1_l.Error = 0U;
          Vehicle_Control_CodeGen_B.FDCANRead1_l.ESI = 0U;
          Vehicle_Control_CodeGen_B.FDCANRead1_l.Reserved = 0U;
          Vehicle_Control_CodeGen_B.FDCANRead1_l.Timestamp = 0.0;

          /* S-Function (scanfdunpack): '<S3>/CAN FD Unpack2' */
          {
            /* S-Function (scanfdunpack): '<S3>/CAN FD Unpack2' */
            if ((3 == Vehicle_Control_CodeGen_B.FDCANRead1_l.Length) &&
                (Vehicle_Control_CodeGen_B.FDCANRead1_l.ID != INVALID_CAN_ID) )
            {
              if ((400 == Vehicle_Control_CodeGen_B.FDCANRead1_l.ID) && (0U ==
                   Vehicle_Control_CodeGen_B.FDCANRead1_l.Extended) ) {
                (void) memcpy(&Vehicle_Control_CodeGen_B.CANFDUnpack2[0],
                              Vehicle_Control_CodeGen_B.FDCANRead1_l.Data,
                              3 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S3>/Byte Unpack' */

          /* Unpack: <S3>/Byte Unpack */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Vehicle_Control_CodeGen_B.CANFDUnpack2[1];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Vehicle_Control_CodeGen_B.ByteUnpack, (void *)
                     &(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* S-Function (scanfdunpack): '<S3>/CAN FD Unpack1' */
          {
            /* S-Function (scanfdunpack): '<S3>/CAN FD Unpack1' */
            if ((3 == Vehicle_Control_CodeGen_B.FDCANRead1_l.Length) &&
                (Vehicle_Control_CodeGen_B.FDCANRead1_l.ID != INVALID_CAN_ID) )
            {
              if ((401 == Vehicle_Control_CodeGen_B.FDCANRead1_l.ID) && (0U ==
                   Vehicle_Control_CodeGen_B.FDCANRead1_l.Extended) ) {
                (void) memcpy(&Vehicle_Control_CodeGen_B.CANFDUnpack1[0],
                              Vehicle_Control_CodeGen_B.FDCANRead1_l.Data,
                              3 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S3>/Byte Unpack1' */

          /* Unpack: <S3>/Byte Unpack1 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Vehicle_Control_CodeGen_B.CANFDUnpack1[1];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Vehicle_Control_CodeGen_B.ByteUnpack1, (void *)
                     &(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* SwitchCase: '<S3>/Switch Case' incorporates:
           *  DataTypeConversion: '<S3>/Data Type Conversion3'
           */
          switch (Vehicle_Control_CodeGen_B.CANFDUnpack2[0]) {
           case 235:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S26>/Action Port'
             */
            /* SignalConversion generated from: '<S26>/In1' */
            Vehicle_Control_CodeGen_B.In1_g20asdt =
              Vehicle_Control_CodeGen_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem6' */
            break;

           case 74:
           case 73:
            break;

           case 168:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S24>/Action Port'
             */
            /* SignalConversion generated from: '<S24>/In1' */
            Vehicle_Control_CodeGen_B.In1_g20asd =
              Vehicle_Control_CodeGen_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem4' */
            break;

           case 95:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S22>/Action Port'
             */
            /* SignalConversion generated from: '<S22>/In1' */
            Vehicle_Control_CodeGen_B.In1_g20as =
              Vehicle_Control_CodeGen_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
            break;

           case 138:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S18>/Action Port'
             */
            /* SignalConversion generated from: '<S18>/In1' */
            Vehicle_Control_CodeGen_B.In1_g20a =
              Vehicle_Control_CodeGen_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
            break;
          }

          /* End of SwitchCase: '<S3>/Switch Case' */

          /* SwitchCase: '<S3>/Switch Case1' incorporates:
           *  DataTypeConversion: '<S3>/Data Type Conversion1'
           */
          switch (Vehicle_Control_CodeGen_B.CANFDUnpack1[0]) {
           case 235:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem12' incorporates:
             *  ActionPort: '<S21>/Action Port'
             */
            /* SignalConversion generated from: '<S21>/In1' */
            Vehicle_Control_CodeGen_B.In1_g20 =
              Vehicle_Control_CodeGen_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem12' */
            break;

           case 74:
           case 73:
            break;

           case 168:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem10' incorporates:
             *  ActionPort: '<S19>/Action Port'
             */
            /* SignalConversion generated from: '<S19>/In1' */
            Vehicle_Control_CodeGen_B.In1_g2 =
              Vehicle_Control_CodeGen_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem10' */
            break;

           case 95:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem8' incorporates:
             *  ActionPort: '<S28>/Action Port'
             */
            /* SignalConversion generated from: '<S28>/In1' */
            Vehicle_Control_CodeGen_B.In1_g =
              Vehicle_Control_CodeGen_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem8' */
            break;

           case 138:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S27>/Action Port'
             */
            /* SignalConversion generated from: '<S27>/In1' */
            Vehicle_Control_CodeGen_B.In1 =
              Vehicle_Control_CodeGen_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem7' */
            break;
          }

          /* End of SwitchCase: '<S3>/Switch Case1' */
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S45>/Hardware Interrupt' */

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_e =
          Vehicle_Control_CodeGen_B.In1_g20asdt;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_b =
          Vehicle_Control_CodeGen_B.In1_g;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsyste_e2 =
          Vehicle_Control_CodeGen_B.In1;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystemOu =
          Vehicle_Control_CodeGen_B.In1_g20asd;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_g =
          Vehicle_Control_CodeGen_B.In1_g20as;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_k =
          Vehicle_Control_CodeGen_B.In1_g20a;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_m =
          Vehicle_Control_CodeGen_B.In1_g20;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_h =
          Vehicle_Control_CodeGen_B.In1_g2;
      }
    }
  }

  __ISB();
  __DSB();
}

/* Hardware Interrupt Block: '<S47>/Hardware Interrupt' */
void FDCAN1_IT0_IRQHandler(void)
{
  /* Event: FDCAN1 RF0NE */
  /* Check event FDCAN1 RF0NE occurred */
  if (0 != ((0U != (FDCAN1->IE & FDCAN_IE_RF0NE)) && (0U != (FDCAN1->IR &
         FDCAN_IR_RF0N)))) {
    /* Clear occurred FDCAN1 RF0NE event */
    WRITE_REG(FDCAN1->IR,FDCAN_IR_RF0N);
    if (1 == runModel) {
      {
        /* S-Function (HardwareInterrupt_sfun): '<S47>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/Function-Call Subsystem1' */
        {
          uint32_T fifoLevel;

          /* MATLABSystem: '<S4>/FDCAN Read1' */
          MW_FDCAN_ReceiveMessage
            (Vehicle_Control_CodeGen_DW.obj_n.MW_FDCAN_HANDLE, (uint8_T)
             FDCAN_RX_FIFO0, &Vehicle_Control_CodeGen_B.FDCANRead1.Data[0],
             &Vehicle_Control_CodeGen_B.FDCANRead1.ID,
             &Vehicle_Control_CodeGen_B.FDCANRead1.Extended,
             &Vehicle_Control_CodeGen_B.FDCANRead1.Remote,
             &Vehicle_Control_CodeGen_B.FDCANRead1.Length,
             &Vehicle_Control_CodeGen_B.FDCANRead1.DLC,
             &Vehicle_Control_CodeGen_B.FDCANRead1.BRS,
             &Vehicle_Control_CodeGen_B.FDCANRead1.ProtocolMode, 1U, &fifoLevel);
          Vehicle_Control_CodeGen_B.FDCANRead1.Error = 0U;
          Vehicle_Control_CodeGen_B.FDCANRead1.ESI = 0U;
          Vehicle_Control_CodeGen_B.FDCANRead1.Reserved = 0U;
          Vehicle_Control_CodeGen_B.FDCANRead1.Timestamp = 0.0;

          /* S-Function (scanfdunpack): '<S4>/CAN FD Unpack1' */
          {
            /* S-Function (scanfdunpack): '<S4>/CAN FD Unpack1' */
            if ((8 == Vehicle_Control_CodeGen_B.FDCANRead1.Length) &&
                (Vehicle_Control_CodeGen_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((1 == Vehicle_Control_CodeGen_B.FDCANRead1.ID) && (0U ==
                   Vehicle_Control_CodeGen_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Vehicle_Control_CodeGen_B.FromPedalBoxtoVCU[0],
                              Vehicle_Control_CodeGen_B.FDCANRead1.Data,
                              8 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S4>/Byte Unpack' */

          /* Unpack: <S4>/Byte Unpack */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Vehicle_Control_CodeGen_B.FromPedalBoxtoVCU[4];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Vehicle_Control_CodeGen_B.WheelSpeedFrontLeft,
                     (void *)&(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* S-Function (byte2any_svd): '<S4>/Byte Unpack1' */

          /* Unpack: <S4>/Byte Unpack1 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Vehicle_Control_CodeGen_B.FromPedalBoxtoVCU[6];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Vehicle_Control_CodeGen_B.WheelSpeedFrontRight,
                     (void *)&(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* S-Function (scanfdunpack): '<S4>/CAN FD Unpack3' */
          {
            /* S-Function (scanfdunpack): '<S4>/CAN FD Unpack3' */
            if ((8 == Vehicle_Control_CodeGen_B.FDCANRead1.Length) &&
                (Vehicle_Control_CodeGen_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((4 == Vehicle_Control_CodeGen_B.FDCANRead1.ID) && (0U ==
                   Vehicle_Control_CodeGen_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Vehicle_Control_CodeGen_B.BMS1[0],
                              Vehicle_Control_CodeGen_B.FDCANRead1.Data,
                              8 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S4>/Byte Unpack2' */

          /* Unpack: <S4>/Byte Unpack2 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Vehicle_Control_CodeGen_B.BMS1[0];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Vehicle_Control_CodeGen_B.BMSCurrentSensor, (void *)
                     &(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* S-Function (byte2any_svd): '<S4>/Byte Unpack3' */

          /* Unpack: <S4>/Byte Unpack3 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Vehicle_Control_CodeGen_B.BMS1[2];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Vehicle_Control_CodeGen_B.BMSVoltage, (void *)
                     &(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* S-Function (scanfdunpack): '<S4>/CAN FD Unpack4' */
          {
            /* S-Function (scanfdunpack): '<S4>/CAN FD Unpack4' */
            if ((8 == Vehicle_Control_CodeGen_B.FDCANRead1.Length) &&
                (Vehicle_Control_CodeGen_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((5 == Vehicle_Control_CodeGen_B.FDCANRead1.ID) && (0U ==
                   Vehicle_Control_CodeGen_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Vehicle_Control_CodeGen_B.BMS2[0],
                              Vehicle_Control_CodeGen_B.FDCANRead1.Data,
                              8 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S4>/Byte Unpack4' */

          /* Unpack: <S4>/Byte Unpack4 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Vehicle_Control_CodeGen_B.BMS2[0];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Vehicle_Control_CodeGen_B.DCL, (void *)&(((uint8_T *)
                       unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
            }
          }

          /* S-Function (byte2any_svd): '<S4>/Byte Unpack5' */

          /* Unpack: <S4>/Byte Unpack5 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Vehicle_Control_CodeGen_B.BMS2[2];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Vehicle_Control_CodeGen_B.CCL, (void *)&(((uint8_T *)
                       unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
            }
          }

          /* DataTypeConversion: '<S4>/Data Type Conversion15' */
          Vehicle_Control_CodeGen_B.APPSPercentage =
            Vehicle_Control_CodeGen_B.FromPedalBoxtoVCU[1];
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S47>/Hardware Interrupt' */

        /* RateTransition generated from: '<Root>/Function-Call Subsystem1' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem1O =
          Vehicle_Control_CodeGen_B.APPSPercentage;
      }
    }
  }

  __ISB();
  __DSB();
}

void Vehicle_Control_CodeGen_unconfigure_interrupts (void)
{
  MW_NVIC_DisableIRQ(35);
  MW_NVIC_DisableIRQ(34);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
