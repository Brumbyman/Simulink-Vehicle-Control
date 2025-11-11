/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Communication_Testing.c
 *
 * Code generated for Simulink model 'Communication_Testing'.
 *
 * Model version                  : 1.83
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Oct  4 15:40:52 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Communication_Testing.h"
#include "rtwtypes.h"
#include "Communication_Testing_types.h"
#include "Communication_Testing_private.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"
#include "stm_adc_ll.h"
#include <stddef.h>

/* Block signals (default storage) */
B_Communication_Testing_T Communication_Testing_B;

/* Block states (default storage) */
DW_Communication_Testing_T Communication_Testing_DW;

/* Real-time model */
static RT_MODEL_Communication_Testin_T Communication_Testing_M_;
RT_MODEL_Communication_Testin_T *const Communication_Testing_M =
  &Communication_Testing_M_;

/* Forward declaration for local functions */
static void Communication__SystemCore_setup(dsp_simulink_MovingAverage_Co_T *obj);

/* Forward declaration for local functions */
static void Communicatio_SystemCore_setup_l(stm32cube_blocks_AnalogInputF_T *obj);
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Communication_Testing_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Communication_Testing_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(Communication_Testing_M, 2));
  eventFlags[3] = ((boolean_T)rtmStepTask(Communication_Testing_M, 3));
  eventFlags[4] = ((boolean_T)rtmStepTask(Communication_Testing_M, 4));
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
  Communication_Testing_M->Timing.RateInteraction.TID0_1 =
    (Communication_Testing_M->Timing.TaskCounters.TID[1] == 0);
  Communication_Testing_M->Timing.RateInteraction.TID0_2 =
    (Communication_Testing_M->Timing.TaskCounters.TID[2] == 0);

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Communication_Testing_M->Timing.TaskCounters.TID[1])++;
  if ((Communication_Testing_M->Timing.TaskCounters.TID[1]) > 4) {/* Sample time: [0.01s, 0.0s] */
    Communication_Testing_M->Timing.TaskCounters.TID[1] = 0;
  }

  (Communication_Testing_M->Timing.TaskCounters.TID[2])++;
  if ((Communication_Testing_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.02s, 0.0s] */
    Communication_Testing_M->Timing.TaskCounters.TID[2] = 0;
  }

  (Communication_Testing_M->Timing.TaskCounters.TID[3])++;
  if ((Communication_Testing_M->Timing.TaskCounters.TID[3]) > 99) {/* Sample time: [0.2s, 0.0s] */
    Communication_Testing_M->Timing.TaskCounters.TID[3] = 0;
  }

  (Communication_Testing_M->Timing.TaskCounters.TID[4])++;
  if ((Communication_Testing_M->Timing.TaskCounters.TID[4]) > 499) {/* Sample time: [1.0s, 0.0s] */
    Communication_Testing_M->Timing.TaskCounters.TID[4] = 0;
  }
}

static void Communication__SystemCore_setup(dsp_simulink_MovingAverage_Co_T *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;

  /* Start for MATLABSystem: '<S37>/Moving Average' */
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* System initialize for atomic system: */
void Communic_MovingAverage_Init(DW_MovingAverage_Communicatio_T *localDW)
{
  /* Start for MATLABSystem: '<S37>/Moving Average' */
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  Communication__SystemCore_setup(&localDW->obj);

  /* InitializeConditions for MATLABSystem: '<S37>/Moving Average' */
  if (localDW->obj.pStatistic->isInitialized == 1) {
    localDW->obj.pStatistic->pCumSum = 0.0;
    memset(&localDW->obj.pStatistic->pCumSumRev[0], 0, 9U * sizeof(real_T));
    localDW->obj.pStatistic->pCumRevIndex = 1.0;
    localDW->obj.pStatistic->pModValueRev = 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<S37>/Moving Average' */
}

/* Output and update for atomic system: */
void Communication_MovingAverage(real_T rtu_0, B_MovingAverage_Communication_T
  *localB, DW_MovingAverage_Communicatio_T *localDW)
{
  real_T csumrev[9];
  real_T csum;
  real_T cumRevIndex;
  real_T modValueRev;
  real_T z;
  int32_T k;

  /* MATLABSystem: '<S37>/Moving Average' */
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

  /* MATLABSystem: '<S37>/Moving Average' */
  localB->MovingAverage = 0.0;

  /* MATLABSystem: '<S37>/Moving Average' */
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
    /* MATLABSystem: '<S37>/Moving Average' */
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
void Communic_MovingAverage_Term(DW_MovingAverage_Communicatio_T *localDW)
{
  /* Terminate for MATLABSystem: '<S37>/Moving Average' */
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

  /* End of Terminate for MATLABSystem: '<S37>/Moving Average' */
}

/* System initialize for atomic system: */
void Communicat_FDCANWrite2_Init(DW_FDCANWrite2_Communication__T *localDW)
{
  /* Start for MATLABSystem: '<S12>/FDCAN Write2' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  localDW->obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(localDW->obj.MW_FDCAN_HANDLE);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void Communication_T_FDCANWrite2(const uint8_T rtu_0[3],
  DW_FDCANWrite2_Communication__T *localDW)
{
  uint32_T fifoLevel;

  /* MATLABSystem: '<S12>/FDCAN Write2' */
  MW_FDCAN_TransmitMessage(localDW->obj.MW_FDCAN_HANDLE, &rtu_0[0], 529U, 0, 0,
    3U, 1000U, 0, 0, &fifoLevel);
}

/* Termination for atomic system: */
void Communicat_FDCANWrite2_Term(DW_FDCANWrite2_Communication__T *localDW)
{
  /* Terminate for MATLABSystem: '<S12>/FDCAN Write2' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      MW_FDCAN_Close(localDW->obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S12>/FDCAN Write2' */
}

/* System initialize for atomic system: */
void Communicat_FDCANWrite3_Init(DW_FDCANWrite3_Communication__T *localDW)
{
  /* Start for MATLABSystem: '<S12>/FDCAN Write3' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  localDW->obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(localDW->obj.MW_FDCAN_HANDLE);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void Communication_T_FDCANWrite3(const uint8_T rtu_0[3],
  DW_FDCANWrite3_Communication__T *localDW)
{
  uint32_T fifoLevel;

  /* MATLABSystem: '<S12>/FDCAN Write3' */
  MW_FDCAN_TransmitMessage(localDW->obj.MW_FDCAN_HANDLE, &rtu_0[0], 528U, 0, 0,
    3U, 1000U, 0, 0, &fifoLevel);
}

/* Termination for atomic system: */
void Communicat_FDCANWrite3_Term(DW_FDCANWrite3_Communication__T *localDW)
{
  /* Terminate for MATLABSystem: '<S12>/FDCAN Write3' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      MW_FDCAN_Close(localDW->obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S12>/FDCAN Write3' */
}

static void Communicatio_SystemCore_setup_l(stm32cube_blocks_AnalogInputF_T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S20>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S20>/Analog to Digital Converter' */
  adcStructLoc.InjectedNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC1;
  adcStructLoc.dmaPeripheralPtr = NULL;
  adcStructLoc.dmastream = 0;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_LIMITED;
  adcStructLoc.InternalBufferSize = 1U;
  adcStructLoc.RegularNoOfConversion = 1U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_NORMAL_MODE, 1,
    ADC_TRIGGER_AND_READ, LL_ADC_REG_SEQ_SCAN_DISABLE);
  enableADCAutomaticCalibration(obj->ADCHandle, (uint32_T)LL_ADC_CALIB_OFFSET, 2);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 1);
  obj->isSetupComplete = true;
}

/* Model step function for TID0 */
void Communication_Testing_step0(void) /* Sample time: [0.002s, 0.0s] */
{
  real_T rtb_CurrentError;
  real_T rtb_IntegralGain;
  real_T rtb_Integrator;
  real_T rtb_Integrator_m;
  real_T rtb_ProportionalGain;
  real_T rtb_RequestedChargeCurrent;
  real_T rtb_RequestedChargeCurrent_l;
  real_T rtb_RequestedDischargePower;
  uint32_T data;

  {                                    /* Sample time: [0.002s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* MATLABSystem: '<S20>/Analog to Digital Converter' */
  regularReadADCNormal(Communication_Testing_DW.obj_mo.ADCHandle,
                       ADC_TRIGGER_AND_READ, &data);

  /* Product: '<Root>/Product' incorporates:
   *  Constant: '<Root>/Constant12'
   *  MATLABSystem: '<S20>/Analog to Digital Converter'
   *  Product: '<Root>/Divide'
   *  Sum: '<Root>/Add'
   */
  rtb_CurrentError = ((real_T)data - 100.0) / Communication_Testing_ConstB.Add1 *
    100.0;

  /* Saturate: '<Root>/Saturation' */
  if (rtb_CurrentError > 100.0) {
    rtb_CurrentError = 100.0;
  } else if (rtb_CurrentError < 0.0) {
    rtb_CurrentError = 0.0;
  }

  Communication_MovingAverage(rtb_CurrentError,
    &Communication_Testing_B.MovingAverage,
    &Communication_Testing_DW.MovingAverage);

  /* End of Saturate: '<Root>/Saturation' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  if (Communication_Testing_DW.ThrottleRegenControl_RESET_ELAP) {
    data = 0U;
  } else {
    data = Communication_Testing_M->Timing.clockTick0 -
      Communication_Testing_DW.ThrottleRegenControl_PREV_T;
  }

  Communication_Testing_DW.ThrottleRegenControl_PREV_T =
    Communication_Testing_M->Timing.clockTick0;
  Communication_Testing_DW.ThrottleRegenControl_RESET_ELAP = false;

  /* Relay: '<S37>/Relay' */
  Communication_Testing_DW.Relay_Mode = false;

  /* Switch: '<S37>/Switch2' incorporates:
   *  Constant: '<S37>/Constant21'
   *  DataStoreWrite: '<S37>/Data Store Write'
   *  Relay: '<S37>/Relay'
   */
  if ((!Communication_Testing_DW.Relay_Mode) > 0.5) {
    /* Sum: '<S37>/Add3' incorporates:
     *  Constant: '<S37>/Constant5'
     *  Product: '<S37>/Product2'
     *  Switch: '<S37>/Switch'
     */
    rtb_CurrentError = Communication_Testing_B.MovingAverage.MovingAverage *
      Communication_Testing_ConstB.Slope + 100.0;

    /* Saturate: '<S37>/Saturation' incorporates:
     *  Switch: '<S37>/Switch'
     */
    if (rtb_CurrentError > 100.0) {
      rtb_CurrentError = 100.0;
    } else if (rtb_CurrentError < 0.0) {
      rtb_CurrentError = 0.0;
    }

    /* Product: '<S37>/Product4' incorporates:
     *  Constant: '<S37>/Scale'
     *  Saturate: '<S37>/Saturation'
     *  Switch: '<S37>/Switch'
     */
    rtb_RequestedChargeCurrent_l = rtb_CurrentError * 0.65;

    /* Switch: '<S37>/Switch1' incorporates:
     *  DataStoreWrite: '<S37>/Data Store Write'
     *  RelationalOperator: '<S37>/GreaterThan2'
     */
    if (rtb_RequestedChargeCurrent_l > 0.0) {
      rtb_RequestedChargeCurrent_l = 0.0;
    }

    /* End of Switch: '<S37>/Switch1' */
  } else {
    rtb_RequestedChargeCurrent_l = 0.0;
  }

  /* End of Switch: '<S37>/Switch2' */

  /* Switch: '<S37>/Switch3' incorporates:
   *  Constant: '<S37>/Constant27'
   *  Constant: '<S37>/Constant28'
   *  RelationalOperator: '<S37>/GreaterThan3'
   */
  if (Communication_Testing_B.MovingAverage.MovingAverage > 22.0) {
    rtb_RequestedDischargePower =
      Communication_Testing_B.MovingAverage.MovingAverage;
  } else {
    rtb_RequestedDischargePower = 0.0;
  }

  /* Sum: '<S37>/Sum' incorporates:
   *  Constant: '<Root>/Constant13'
   *  Constant: '<Root>/Constant24'
   *  DataStoreWrite: '<Root>/Data Store Write1'
   *  DataStoreWrite: '<Root>/Data Store Write2'
   *  Gain: '<S37>/Gain2'
   *  Gain: '<S37>/Gain3'
   *  Memory: '<S37>/Memory1'
   *  Product: '<S37>/Divide5'
   *  Product: '<S37>/Product6'
   *  Switch: '<S37>/Switch3'
   */
  rtb_CurrentError = 0.01 * rtb_RequestedDischargePower * 18.965517241379313 -
    Communication_Testing_DW.Memory1_PreviousInput;

  /* DataStoreWrite: '<Root>/Data Store Write2' incorporates:
   *  Constant: '<Root>/Constant24'
   */
  Communication_MovingAverage(580.0, &Communication_Testing_B.MovingAverage_p,
    &Communication_Testing_DW.MovingAverage_p);

  /* Saturate: '<S37>/Saturation5' */
  if (rtb_CurrentError <= 0.0) {
    rtb_CurrentError = 0.0;
  }

  /* Product: '<S37>/Product5' incorporates:
   *  Saturate: '<S37>/Saturation5'
   */
  rtb_CurrentError *= Communication_Testing_B.MovingAverage_p.MovingAverage;

  /* Sum: '<S37>/Sum1' incorporates:
   *  Constant: '<Root>/Constant13'
   *  Constant: '<S37>/Constant'
   *  DataStoreWrite: '<Root>/Data Store Write1'
   *  Product: '<S37>/Divide3'
   */
  rtb_RequestedDischargePower = rtb_CurrentError - 5000.0;

  /* Saturate: '<S37>/Saturation3' incorporates:
   *  Constant: '<Root>/Constant13'
   *  Constant: '<S37>/Constant'
   *  DataStoreWrite: '<Root>/Data Store Write1'
   *  Product: '<S37>/Divide3'
   *  Sum: '<S37>/Sum1'
   */
  if (rtb_CurrentError - 5000.0 <= 0.0) {
    rtb_RequestedDischargePower = 0.0;
  }

  /* End of Saturate: '<S37>/Saturation3' */

  /* InitialCondition: '<S37>/IC1' */
  if (Communication_Testing_DW.IC1_FirstOutputTime) {
    Communication_Testing_DW.IC1_FirstOutputTime = false;
    rtb_Integrator = 600.0;
  } else {
    rtb_Integrator = Communication_Testing_B.MovingAverage_p.MovingAverage;
  }

  /* End of InitialCondition: '<S37>/IC1' */

  /* Product: '<S37>/Divide2' */
  rtb_RequestedDischargePower /= rtb_Integrator;

  /* DiscreteIntegrator: '<S69>/Filter' */
  if (Communication_Testing_DW.Filter_SYSTEM_ENABLE == 0) {
    /* DiscreteIntegrator: '<S69>/Filter' */
    Communication_Testing_DW.Filter_DSTATE += 0.002 * (real_T)data *
      Communication_Testing_DW.Filter_PREV_U;
  }

  /* End of DiscreteIntegrator: '<S69>/Filter' */

  /* Gain: '<S71>/Integral Gain' */
  rtb_IntegralGain = 0.544217300579932 * rtb_RequestedDischargePower;

  /* Gain: '<S77>/Filter Coefficient' incorporates:
   *  Gain: '<S67>/Derivative Gain'
   *  Sum: '<S69>/SumD'
   */
  Communication_Testing_DW.Filter_PREV_U = (0.0 * rtb_RequestedDischargePower -
    Communication_Testing_DW.Filter_DSTATE) * 100.0;

  /* Gain: '<S79>/Proportional Gain' */
  rtb_ProportionalGain = 0.000544217300579932 * rtb_RequestedDischargePower;

  /* Gain: '<S37>/Gain1' */
  rtb_Integrator = -rtb_CurrentError;

  /* DataStoreWrite: '<Root>/Data Store Write2' incorporates:
   *  Constant: '<Root>/Constant24'
   */
  Communication_MovingAverage(580.0, &Communication_Testing_B.MovingAverage_pn,
    &Communication_Testing_DW.MovingAverage_pn);

  /* Switch: '<S38>/Switch3' incorporates:
   *  Constant: '<S38>/Constant27'
   *  Constant: '<S38>/Constant28'
   *  RelationalOperator: '<S38>/GreaterThan3'
   */
  if (Communication_Testing_B.MovingAverage.MovingAverage > 22.0) {
    rtb_RequestedDischargePower =
      Communication_Testing_B.MovingAverage.MovingAverage;
  } else {
    rtb_RequestedDischargePower = 0.0;
  }

  /* Sum: '<S38>/Subtract2' incorporates:
   *  Constant: '<S38>/Constant3'
   *  Gain: '<S38>/Gain2'
   *  Gain: '<S38>/Gain4'
   *  Switch: '<S38>/Switch3'
   */
  rtb_CurrentError = 0.01 * rtb_RequestedDischargePower * 1.22 - 0.22;

  /* Saturate: '<S38>/Saturation1' */
  if (rtb_CurrentError > 1.0) {
    rtb_CurrentError = 1.0;
  } else if (rtb_CurrentError < 0.0) {
    rtb_CurrentError = 0.0;
  }

  /* Sum: '<S38>/Sum' incorporates:
   *  Constant: '<Root>/Constant13'
   *  Constant: '<S38>/Constant1'
   *  DataStoreWrite: '<Root>/Data Store Write1'
   *  Gain: '<S38>/Gain3'
   *  Memory: '<S38>/Memory1'
   *  Product: '<S38>/Divide5'
   *  Product: '<S38>/Divide6'
   *  Product: '<S38>/Product6'
   *  Saturate: '<S38>/Saturation1'
   */
  rtb_RequestedDischargePower = 5000.0 /
    Communication_Testing_B.MovingAverage_pn.MovingAverage * 1.1 *
    rtb_CurrentError - Communication_Testing_DW.Memory1_PreviousInput_g;

  /* Saturate: '<S38>/Saturation5' */
  if (rtb_RequestedDischargePower <= 0.0) {
    rtb_RequestedDischargePower = 0.0;
  }

  /* End of Saturate: '<S38>/Saturation5' */

  /* Relay: '<S38>/Relay' */
  Communication_Testing_DW.Relay_Mode_f = false;

  /* Switch: '<S38>/Switch2' incorporates:
   *  Constant: '<S38>/Constant21'
   *  DataStoreWrite: '<S38>/Data Store Write1'
   *  Relay: '<S38>/Relay'
   */
  if ((!Communication_Testing_DW.Relay_Mode_f) > 0.5) {
    /* Sum: '<S38>/Add3' incorporates:
     *  Constant: '<S38>/Constant5'
     *  Product: '<S38>/Product2'
     *  Switch: '<S38>/Switch'
     */
    rtb_CurrentError = Communication_Testing_B.MovingAverage.MovingAverage *
      Communication_Testing_ConstB.Slope_h + 100.0;

    /* Saturate: '<S38>/Saturation' incorporates:
     *  Switch: '<S38>/Switch'
     */
    if (rtb_CurrentError > 100.0) {
      rtb_CurrentError = 100.0;
    } else if (rtb_CurrentError < 0.0) {
      rtb_CurrentError = 0.0;
    }

    /* Product: '<S38>/Product4' incorporates:
     *  Constant: '<S38>/Scale'
     *  Saturate: '<S38>/Saturation'
     *  Switch: '<S38>/Switch'
     */
    rtb_RequestedChargeCurrent = rtb_CurrentError * 0.65;

    /* Switch: '<S38>/Switch1' incorporates:
     *  DataStoreWrite: '<S38>/Data Store Write1'
     *  RelationalOperator: '<S38>/GreaterThan2'
     */
    if (rtb_RequestedChargeCurrent > 0.0) {
      rtb_RequestedChargeCurrent = 0.0;
    }

    /* End of Switch: '<S38>/Switch1' */
  } else {
    rtb_RequestedChargeCurrent = 0.0;
  }

  /* End of Switch: '<S38>/Switch2' */

  /* Product: '<S38>/Product5' */
  rtb_RequestedDischargePower *=
    Communication_Testing_B.MovingAverage_pn.MovingAverage;

  /* Sum: '<S38>/Sum1' incorporates:
   *  Constant: '<Root>/Constant13'
   *  Constant: '<S38>/Constant'
   *  DataStoreWrite: '<Root>/Data Store Write1'
   *  Product: '<S38>/Divide3'
   */
  rtb_CurrentError = rtb_RequestedDischargePower - 5000.0;

  /* Saturate: '<S38>/Saturation3' incorporates:
   *  Constant: '<Root>/Constant13'
   *  Constant: '<S38>/Constant'
   *  DataStoreWrite: '<Root>/Data Store Write1'
   *  Product: '<S38>/Divide3'
   *  Sum: '<S38>/Sum1'
   */
  if (rtb_RequestedDischargePower - 5000.0 <= 0.0) {
    rtb_CurrentError = 0.0;
  }

  /* End of Saturate: '<S38>/Saturation3' */

  /* InitialCondition: '<S38>/IC2' */
  if (Communication_Testing_DW.IC2_FirstOutputTime) {
    Communication_Testing_DW.IC2_FirstOutputTime = false;
    rtb_Integrator_m = 600.0;
  } else {
    rtb_Integrator_m = Communication_Testing_B.MovingAverage_pn.MovingAverage;
  }

  /* End of InitialCondition: '<S38>/IC2' */

  /* Product: '<S38>/Divide2' */
  rtb_CurrentError /= rtb_Integrator_m;

  /* DiscreteIntegrator: '<S121>/Filter' */
  if (Communication_Testing_DW.Filter_SYSTEM_ENABLE_o == 0) {
    /* DiscreteIntegrator: '<S121>/Filter' */
    Communication_Testing_DW.Filter_DSTATE_i += 0.002 * (real_T)data *
      Communication_Testing_DW.Filter_PREV_U_e;
  }

  /* End of DiscreteIntegrator: '<S121>/Filter' */

  /* Gain: '<S129>/Filter Coefficient' incorporates:
   *  Gain: '<S119>/Derivative Gain'
   *  Sum: '<S121>/SumD'
   */
  Communication_Testing_DW.Filter_PREV_U_e = (0.0 * rtb_CurrentError -
    Communication_Testing_DW.Filter_DSTATE_i) * 100.0;

  /* Update for Memory: '<S37>/Memory1' incorporates:
   *  DiscreteIntegrator: '<S74>/Integrator'
   *  Sum: '<S83>/Sum'
   */
  Communication_Testing_DW.Memory1_PreviousInput = (rtb_ProportionalGain +
    Communication_Testing_DW.Integrator_DSTATE) +
    Communication_Testing_DW.Filter_PREV_U;

  /* Update for DiscreteIntegrator: '<S69>/Filter' */
  Communication_Testing_DW.Filter_SYSTEM_ENABLE = 0U;

  /* Update for DiscreteIntegrator: '<S74>/Integrator' */
  Communication_Testing_DW.Integrator_DSTATE += rtb_IntegralGain;

  /* Update for Memory: '<S38>/Memory1' incorporates:
   *  DiscreteIntegrator: '<S126>/Integrator'
   *  Gain: '<S131>/Proportional Gain'
   *  Sum: '<S135>/Sum'
   */
  Communication_Testing_DW.Memory1_PreviousInput_g = (0.000544217300579932 *
    rtb_CurrentError + Communication_Testing_DW.Integrator_DSTATE_l) +
    Communication_Testing_DW.Filter_PREV_U_e;

  /* Update for DiscreteIntegrator: '<S121>/Filter' */
  Communication_Testing_DW.Filter_SYSTEM_ENABLE_o = 0U;

  /* Update for DiscreteIntegrator: '<S126>/Integrator' incorporates:
   *  Gain: '<S123>/Integral Gain'
   */
  Communication_Testing_DW.Integrator_DSTATE_l += 0.544217300579932 *
    rtb_CurrentError;

  /* Product: '<S9>/Divide3' incorporates:
   *  Constant: '<Root>/Constant24'
   *  DataStoreWrite: '<Root>/Data Store Write2'
   *  DataStoreWrite: '<S38>/Data Store Write1'
   *  Gain: '<S38>/Gain1'
   *  Product: '<S38>/Product7'
   *  Sum: '<S38>/Sum3'
   */
  rtb_CurrentError = (-(580.0 * rtb_RequestedChargeCurrent) +
                      rtb_RequestedDischargePower) / 580.0;

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator3' */

  /* Saturate: '<S7>/Saturation' */
  if (rtb_CurrentError > 190.0) {
    rtb_CurrentError = 190.0;
  } else if (rtb_CurrentError < 0.0) {
    rtb_CurrentError = 0.0;
  }

  /* Gain: '<Root>/Gain1' incorporates:
   *  Constant: '<S7>/Constant3'
   *  Constant: '<S7>/Constant4'
   *  Constant: '<S7>/Constant5'
   *  Product: '<S7>/Divide3'
   *  Product: '<S7>/Product1'
   *  Product: '<S7>/Product2'
   *  Saturate: '<S7>/Saturation'
   */
  rtb_RequestedDischargePower = -(rtb_CurrentError * 32767.0 *
    1.4142135623730951 / 270.0);

  /* Saturate: '<Root>/Saturation1' */
  if (rtb_RequestedDischargePower >= 0.0) {
    rtb_RequestedDischargePower = 0.0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  /* Product: '<S8>/Divide4' incorporates:
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant24'
   *  Constant: '<S8>/Constant26'
   *  DataStoreWrite: '<Root>/Data Store Write2'
   *  DataStoreWrite: '<S37>/Data Store Write'
   *  Product: '<S37>/Product7'
   *  Product: '<S9>/Divide1'
   *  Sum: '<S37>/Sum3'
   *  Switch: '<Root>/Switch1'
   */
  rtb_RequestedChargeCurrent_l = (580.0 * rtb_RequestedChargeCurrent_l +
    rtb_Integrator) / 100.0 / 0.54;

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator3' */

  /* Switch: '<S8>/Switch4' incorporates:
   *  Constant: '<S8>/Constant30'
   *  Product: '<S8>/Divide5'
   *  Product: '<S8>/Product9'
   *  RelationalOperator: '<S8>/GreaterThan4'
   */
  if (rtb_RequestedChargeCurrent_l > 190.0) {
    rtb_RequestedChargeCurrent_l *= 190.0 / rtb_RequestedChargeCurrent_l;
  }

  /* End of Switch: '<S8>/Switch4' */

  /* RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters1' */
  if (Communication_Testing_M->Timing.RateInteraction.TID0_2) {
    Communication_Testing_DW.TmpRTBAt50HZSendTorqueRequestst =
      rtb_RequestedDischargePower;

    /* RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters1' incorporates:
     *  Constant: '<S8>/Constant31'
     *  Constant: '<S8>/Constant32'
     *  Constant: '<S8>/Constant33'
     *  Product: '<S8>/Divide6'
     *  Product: '<S8>/Product10'
     *  Product: '<S8>/Product11'
     */
    Communication_Testing_DW.TmpRTBAt50HZSendTorqueRequest_d =
      rtb_RequestedChargeCurrent_l * 32767.0 * 1.4142135623730951 / 270.0;
  }

  /* End of RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters1' */

  /* RateTransition generated from: '<Root>/Triggered Subsystem' */
  if (Communication_Testing_M->Timing.RateInteraction.TID0_1) {
    Communication_Testing_DW.TmpRTBAtTriggeredSubsystemInpor =
      Communication_Testing_B.MovingAverage.MovingAverage;
  }

  /* End of RateTransition generated from: '<Root>/Triggered Subsystem' */

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.002, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  Communication_Testing_M->Timing.clockTick0++;
}

/* Model step function for TID1 */
void Communication_Testing_step1(void) /* Sample time: [0.01s, 0.0s] */
{
  real_T tmp;
  uint32_T fifoLevel;

  /* RateTransition generated from: '<Root>/Triggered Subsystem' */
  Communication_Testing_B.TmpRTBAtTriggeredSubsystemInpor =
    Communication_Testing_DW.TmpRTBAtTriggeredSubsystemInp_l;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Communication_Testing_B.TmpRTBAtFunctionCallSubsystemOu =
    Communication_Testing_DW.TmpRTBAtFunctionCallSubsystemOu;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Communication_Testing_B.TmpRTBAtFunctionCallSubsystem_m =
    Communication_Testing_DW.TmpRTBAtFunctionCallSubsystem_k;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Communication_Testing_B.TmpRTBAtFunctionCallSubsystem_i =
    Communication_Testing_DW.TmpRTBAtFunctionCallSubsystem_m;

  /* RateTransition generated from: '<Root>/Triggered Subsystem' */
  Communication_Testing_B.TmpRTBAtTriggeredSubsystemInp_l =
    Communication_Testing_DW.TmpRTBAtTriggeredSubsystemInp_d;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Communication_Testing_B.TmpRTBAtFunctionCallSubsystem_j =
    Communication_Testing_DW.TmpRTBAtFunctionCallSubsystem_b;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Communication_Testing_B.TmpRTBAtFunctionCallSubsystem_o =
    Communication_Testing_DW.TmpRTBAtFunctionCallSubsystem_e;

  /* S-Function (fcgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  RateTransition generated from: '<Root>/Triggered Subsystem'
   */
  tmp = floor(Communication_Testing_DW.TmpRTBAtTriggeredSubsystemInpor);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  Communication_Testing_B.DataTypeConversion = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* S-Function (reverseendian_svd): '<S10>/Byte Reversal' */

  /* ReverseEndian: <S10>/Byte Reversal */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Communication_Testing_B.ByteReversal)[0] =
    SWAP16(((uint16_T *)&Communication_Testing_B.DataTypeConversion)[0]);

  /* S-Function (reverseendian_svd): '<S10>/Byte Reversal1' */

  /* ReverseEndian: <S10>/Byte Reversal1 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Communication_Testing_B.ByteReversal1)[0] =
    SWAP16(((uint16_T *)&Communication_Testing_B.TmpRTBAtTriggeredSubsystemInpor)
           [0]);

  /* S-Function (reverseendian_svd): '<S10>/Byte Reversal2' */

  /* ReverseEndian: <S10>/Byte Reversal2 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Communication_Testing_B.ByteReversal2)[0] =
    SWAP16(((uint16_T *)&Communication_Testing_B.TmpRTBAtFunctionCallSubsystemOu)
           [0]);

  /* S-Function (reverseendian_svd): '<S10>/Byte Reversal3' */

  /* ReverseEndian: <S10>/Byte Reversal3 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Communication_Testing_B.ByteReversal3)[0] =
    SWAP16(((uint16_T *)&Communication_Testing_B.TmpRTBAtFunctionCallSubsystem_m)
           [0]);

  /* S-Function (any2byte_svd): '<S10>/Byte Pack' */

  /* Pack: <S10>/Byte Pack */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate_j[0];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.ByteReversal, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S10>/Byte Pack1' */

  /* Pack: <S10>/Byte Pack1 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate_j[2];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.ByteReversal1, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S10>/Byte Pack2' */

  /* Pack: <S10>/Byte Pack2 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate_j[4];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.ByteReversal2, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S10>/Byte Pack3' */

  /* Pack: <S10>/Byte Pack3 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate_j[6];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.ByteReversal3, MW_inputPortWidth);
    }
  }

  /* MATLABSystem: '<S10>/FDCAN Write3' incorporates:
   *  Concatenate: '<S10>/Vector Concatenate'
   * */
  MW_FDCAN_TransmitMessage(Communication_Testing_DW.obj_c.MW_FDCAN_HANDLE,
    &Communication_Testing_B.VectorConcatenate_j[0], 8U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* S-Function (any2byte_svd): '<S10>/Byte Pack4' */

  /* Pack: <S10>/Byte Pack4 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate1_f[0];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.TmpRTBAtFunctionCallSubsystem_i,
             MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S10>/Byte Pack5' */

  /* Pack: <S10>/Byte Pack5 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate1_f[2];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.TmpRTBAtTriggeredSubsystemInp_l,
             MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S10>/Byte Pack6' */

  /* Pack: <S10>/Byte Pack6 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate1_f[4];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.TmpRTBAtFunctionCallSubsystem_j,
             MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S10>/Byte Pack7' */

  /* Pack: <S10>/Byte Pack7 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate1_f[6];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.TmpRTBAtFunctionCallSubsystem_o,
             MW_inputPortWidth);
    }
  }

  /* MATLABSystem: '<S10>/FDCAN Write1' incorporates:
   *  Concatenate: '<S10>/Vector Concatenate1'
   * */
  MW_FDCAN_TransmitMessage(Communication_Testing_DW.obj_m.MW_FDCAN_HANDLE,
    &Communication_Testing_B.VectorConcatenate1_f[0], 9U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator2' */
}

/* Model step function for TID2 */
void Communication_Testing_step2(void) /* Sample time: [0.02s, 0.0s] */
{
  real_T tmp;

  /* S-Function (fcgen): '<Root>/Function-Call Generator5' incorporates:
   *  SubSystem: '<Root>/50 HZ Send Torque Requests to Inverters1'
   */
  /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
   *  RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters1'
   */
  tmp = floor(Communication_Testing_DW.TmpRTBAt50HZSendTorqueRequest_d);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion2' */
  Communication_Testing_B.DataTypeConversion2 = (int16_T)(tmp < 0.0 ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* S-Function (reverseendian_svd): '<S2>/Byte Reversal1' */

  /* ReverseEndian: <S2>/Byte Reversal1 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Communication_Testing_B.ByteReversal1_f)[0] =
    SWAP16(((uint16_T *)&Communication_Testing_B.DataTypeConversion2)[0]);

  /* SignalConversion generated from: '<S2>/Vector Concatenate' incorporates:
   *  Concatenate: '<S2>/Vector Concatenate'
   */
  Communication_Testing_B.VectorConcatenate[0] =
    Communication_Testing_ConstB.DataTypeConversion1;

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  RateTransition generated from: '<Root>/50 HZ Send Torque Requests to Inverters1'
   */
  tmp = floor(Communication_Testing_DW.TmpRTBAt50HZSendTorqueRequestst);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  Communication_Testing_B.DataTypeConversion_e = (int16_T)(tmp < 0.0 ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* S-Function (any2byte_svd): '<S2>/Byte Pack' */

  /* Pack: <S2>/Byte Pack */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate[1];

    /* Packing the values of Input 1 */
    /* Input data type - int16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(int16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.DataTypeConversion_e, MW_inputPortWidth);
    }
  }

  Communication_T_FDCANWrite2(Communication_Testing_B.VectorConcatenate,
    &Communication_Testing_DW.FDCANWrite1_p);

  /* SignalConversion generated from: '<S2>/Vector Concatenate1' incorporates:
   *  Concatenate: '<S2>/Vector Concatenate1'
   */
  Communication_Testing_B.VectorConcatenate1[0] =
    Communication_Testing_ConstB.DataTypeConversion3;

  /* S-Function (any2byte_svd): '<S2>/Byte Pack1' */

  /* Pack: <S2>/Byte Pack1 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Communication_Testing_B.VectorConcatenate1[1];

    /* Packing the values of Input 1 */
    /* Input data type - int16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(int16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Communication_Testing_B.ByteReversal1_f, MW_inputPortWidth);
    }
  }

  Communication_T_FDCANWrite3(Communication_Testing_B.VectorConcatenate1,
    &Communication_Testing_DW.FDCANWrite3_pna);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator5' */
}

/* Model step function for TID3 */
void Communication_Testing_step3(void) /* Sample time: [0.2s, 0.0s] */
{
  real_T tmp;
  int32_T tmp_0;
  uint32_T fifoLevel;
  uint8_T rtb_VectorConcatenate[3];

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem3'
   */
  /* MATLABSystem: '<S11>/FDCAN Write3' incorporates:
   *  Concatenate: '<S11>/Vector Concatenate'
   * */
  MW_FDCAN_TransmitMessage(Communication_Testing_DW.obj.MW_FDCAN_HANDLE,
    &Communication_Testing_ConstB.VectorConcatenate[0], 210U, 0, 0, 5U, 1000U, 0,
    0, &fifoLevel);

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/Constant'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  Communication_Testing_DW.UnitDelay_DSTATE++;

  /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant3'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (!(Communication_Testing_DW.UnitDelay_DSTATE > 12.0)) {
    /* SignalConversion generated from: '<S12>/Vector Concatenate' */
    rtb_VectorConcatenate[0] =
      Communication_Testing_ConstB.DataTypeConversion3_e;

    /* LookupNDDirect: '<S12>/Direct Lookup Table (n-D)' incorporates:
     *  UnitDelay: '<S13>/Output'
     *
     * About '<S12>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (Communication_Testing_DW.Output_DSTATE > 5) {
      tmp_0 = 5;
    } else {
      tmp_0 = Communication_Testing_DW.Output_DSTATE;
    }

    /* DataTypeConversion: '<S12>/Data Type Conversion2' incorporates:
     *  LookupNDDirect: '<S12>/Direct Lookup Table (n-D)'
     *
     * About '<S12>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    tmp = floor(Communication_Testing_ConstP.pooled24[tmp_0]);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[1] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S12>/Data Type Conversion2' */

    /* LookupNDDirect: '<S12>/Direct Lookup Table (n-D)1' incorporates:
     *  UnitDelay: '<S14>/Output'
     *
     * About '<S12>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (Communication_Testing_DW.Output_DSTATE_c > 5) {
      tmp_0 = 5;
    } else {
      tmp_0 = Communication_Testing_DW.Output_DSTATE_c;
    }

    /* DataTypeConversion: '<S12>/Data Type Conversion4' incorporates:
     *  LookupNDDirect: '<S12>/Direct Lookup Table (n-D)1'
     *
     * About '<S12>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    tmp = floor(Communication_Testing_ConstP.pooled24[tmp_0]);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[2] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S12>/Data Type Conversion4' */
    Communication_T_FDCANWrite2(rtb_VectorConcatenate,
      &Communication_Testing_DW.FDCANWrite2);
    Communication_T_FDCANWrite3(rtb_VectorConcatenate,
      &Communication_Testing_DW.FDCANWrite3_pn);

    /* Switch: '<S16>/FixPt Switch' incorporates:
     *  Constant: '<S15>/FixPt Constant'
     *  Constant: '<S16>/Constant'
     *  Sum: '<S15>/FixPt Sum1'
     *  UnitDelay: '<S13>/Output'
     */
    if ((uint8_T)(Communication_Testing_DW.Output_DSTATE + 1U) > 5) {
      Communication_Testing_DW.Output_DSTATE = 0U;
    } else {
      Communication_Testing_DW.Output_DSTATE++;
    }

    /* End of Switch: '<S16>/FixPt Switch' */

    /* Switch: '<S18>/FixPt Switch' incorporates:
     *  Constant: '<S17>/FixPt Constant'
     *  Constant: '<S18>/Constant'
     *  Sum: '<S17>/FixPt Sum1'
     *  UnitDelay: '<S14>/Output'
     */
    if ((uint8_T)(Communication_Testing_DW.Output_DSTATE_c + 1U) > 5) {
      Communication_Testing_DW.Output_DSTATE_c = 0U;
    } else {
      Communication_Testing_DW.Output_DSTATE_c++;
    }

    /* End of Switch: '<S18>/FixPt Switch' */
  }

  /* End of RelationalOperator: '<S1>/GreaterThan' */
  /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
}

/* Model step function for TID4 */
void Communication_Testing_step4(void) /* Sample time: [1.0s, 0.0s] */
{
  /* (no output/update code required) */
}

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void Communication_Testing_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Communication_Testing_step0();
    break;

   case 1 :
    Communication_Testing_step1();
    break;

   case 2 :
    Communication_Testing_step2();
    break;

   case 3 :
    Communication_Testing_step3();
    break;

   case 4 :
    Communication_Testing_step4();
    break;

   default :
    /* do nothing */
    break;
  }
}

/* Model initialize function */
void Communication_Testing_initialize(void)
{
  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem3'
   */
  /* Start for MATLABSystem: '<S11>/FDCAN Write3' */
  Communication_Testing_DW.obj.matlabCodegenIsDeleted = false;
  Communication_Testing_DW.obj.isInitialized = 1;
  Communication_Testing_DW.obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Communication_Testing_DW.obj.MW_FDCAN_HANDLE);
  Communication_Testing_DW.obj.isSetupComplete = true;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  Communicat_FDCANWrite2_Init(&Communication_Testing_DW.FDCANWrite2);
  Communicat_FDCANWrite3_Init(&Communication_Testing_DW.FDCANWrite3_pn);

  /* End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator5' incorporates:
   *  SubSystem: '<Root>/50 HZ Send Torque Requests to Inverters1'
   */
  Communicat_FDCANWrite2_Init(&Communication_Testing_DW.FDCANWrite1_p);
  Communicat_FDCANWrite3_Init(&Communication_Testing_DW.FDCANWrite3_pna);

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator5' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Start for MATLABSystem: '<S10>/FDCAN Write3' */
  Communication_Testing_DW.obj_c.matlabCodegenIsDeleted = false;
  Communication_Testing_DW.obj_c.isInitialized = 1;
  Communication_Testing_DW.obj_c.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Communication_Testing_DW.obj_c.MW_FDCAN_HANDLE);
  Communication_Testing_DW.obj_c.isSetupComplete = true;

  /* Start for MATLABSystem: '<S10>/FDCAN Write1' */
  Communication_Testing_DW.obj_m.matlabCodegenIsDeleted = false;
  Communication_Testing_DW.obj_m.isInitialized = 1;
  Communication_Testing_DW.obj_m.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Communication_Testing_DW.obj_m.MW_FDCAN_HANDLE);
  Communication_Testing_DW.obj_m.isSetupComplete = true;

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator2' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  /* Start for InitialCondition: '<S37>/IC1' */
  Communication_Testing_DW.IC1_FirstOutputTime = true;

  /* Start for InitialCondition: '<S38>/IC2' */
  Communication_Testing_DW.IC2_FirstOutputTime = true;

  /* InitializeConditions for Memory: '<S37>/Memory1' */
  Communication_Testing_DW.Memory1_PreviousInput = 14.0;

  /* InitializeConditions for DiscreteIntegrator: '<S74>/Integrator' */
  Communication_Testing_DW.Integrator_DSTATE = 10.0;

  /* InitializeConditions for Memory: '<S38>/Memory1' */
  Communication_Testing_DW.Memory1_PreviousInput_g = 14.0;
  Communic_MovingAverage_Init(&Communication_Testing_DW.MovingAverage_p);
  Communic_MovingAverage_Init(&Communication_Testing_DW.MovingAverage_pn);

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator3' */

  /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S36>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* System initialize for function-call system: '<Root>/Function-Call Subsystem' */

  /* Start for S-Function (scanfdunpack): '<S5>/CAN FD Unpack2' */

  /*-----------S-Function Block: <S5>/CAN FD Unpack2 -----------------*/

  /* Start for S-Function (scanfdunpack): '<S5>/CAN FD Unpack1' */

  /*-----------S-Function Block: <S5>/CAN FD Unpack1 -----------------*/

  /* Start for MATLABSystem: '<S5>/FDCAN Read1' */
  Communication_Testing_DW.obj_d.matlabCodegenIsDeleted = false;
  Communication_Testing_DW.obj_d.isInitialized = 1;
  Communication_Testing_DW.obj_d.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Communication_Testing_DW.obj_d.MW_FDCAN_HANDLE);
  Communication_Testing_DW.obj_d.isSetupComplete = true;

  /* Start for MATLABSystem: '<S20>/Analog to Digital Converter' */
  Communication_Testing_DW.obj_mo.isInitialized = 0;
  Communication_Testing_DW.obj_mo.matlabCodegenIsDeleted = false;
  Communicatio_SystemCore_setup_l(&Communication_Testing_DW.obj_mo);
  Communic_MovingAverage_Init(&Communication_Testing_DW.MovingAverage);

  /* Enable for S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  Communication_Testing_DW.ThrottleRegenControl_RESET_ELAP = true;

  /* Enable for DiscreteIntegrator: '<S69>/Filter' */
  Communication_Testing_DW.Filter_SYSTEM_ENABLE = 1U;

  /* Enable for DiscreteIntegrator: '<S121>/Filter' */
  Communication_Testing_DW.Filter_SYSTEM_ENABLE_o = 1U;

  /* End of Enable for S-Function (fcgen): '<Root>/Function-Call Generator3' */
}

/* Model terminate function */
void Communication_Testing_terminate(void)
{
  /* Terminate for MATLABSystem: '<S20>/Analog to Digital Converter' */
  if (!Communication_Testing_DW.obj_mo.matlabCodegenIsDeleted) {
    Communication_Testing_DW.obj_mo.matlabCodegenIsDeleted = true;
    if ((Communication_Testing_DW.obj_mo.isInitialized == 1) &&
        Communication_Testing_DW.obj_mo.isSetupComplete) {
      ADC_Handle_Deinit(Communication_Testing_DW.obj_mo.ADCHandle,
                        ADC_NORMAL_MODE, 1);
    }
  }

  /* End of Terminate for MATLABSystem: '<S20>/Analog to Digital Converter' */
  Communic_MovingAverage_Term(&Communication_Testing_DW.MovingAverage);

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  Communic_MovingAverage_Term(&Communication_Testing_DW.MovingAverage_p);
  Communic_MovingAverage_Term(&Communication_Testing_DW.MovingAverage_pn);

  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator3' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S36>/Hardware Interrupt' */

  /* Terminate for S-Function (HardwareInterrupt_sfun): '<S36>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* Termination for function-call system: '<Root>/Function-Call Subsystem' */

  /* Terminate for MATLABSystem: '<S5>/FDCAN Read1' */
  if (!Communication_Testing_DW.obj_d.matlabCodegenIsDeleted) {
    Communication_Testing_DW.obj_d.matlabCodegenIsDeleted = true;
    if ((Communication_Testing_DW.obj_d.isInitialized == 1) &&
        Communication_Testing_DW.obj_d.isSetupComplete) {
      MW_FDCAN_Close(Communication_Testing_DW.obj_d.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S5>/FDCAN Read1' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S36>/Hardware Interrupt' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Terminate for MATLABSystem: '<S10>/FDCAN Write3' */
  if (!Communication_Testing_DW.obj_c.matlabCodegenIsDeleted) {
    Communication_Testing_DW.obj_c.matlabCodegenIsDeleted = true;
    if ((Communication_Testing_DW.obj_c.isInitialized == 1) &&
        Communication_Testing_DW.obj_c.isSetupComplete) {
      MW_FDCAN_Close(Communication_Testing_DW.obj_c.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S10>/FDCAN Write3' */

  /* Terminate for MATLABSystem: '<S10>/FDCAN Write1' */
  if (!Communication_Testing_DW.obj_m.matlabCodegenIsDeleted) {
    Communication_Testing_DW.obj_m.matlabCodegenIsDeleted = true;
    if ((Communication_Testing_DW.obj_m.isInitialized == 1) &&
        Communication_Testing_DW.obj_m.isSetupComplete) {
      MW_FDCAN_Close(Communication_Testing_DW.obj_m.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S10>/FDCAN Write1' */
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator2' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator5' incorporates:
   *  SubSystem: '<Root>/50 HZ Send Torque Requests to Inverters1'
   */
  Communicat_FDCANWrite2_Term(&Communication_Testing_DW.FDCANWrite1_p);
  Communicat_FDCANWrite3_Term(&Communication_Testing_DW.FDCANWrite3_pna);

  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator5' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem3'
   */
  /* Terminate for MATLABSystem: '<S11>/FDCAN Write3' */
  if (!Communication_Testing_DW.obj.matlabCodegenIsDeleted) {
    Communication_Testing_DW.obj.matlabCodegenIsDeleted = true;
    if ((Communication_Testing_DW.obj.isInitialized == 1) &&
        Communication_Testing_DW.obj.isSetupComplete) {
      MW_FDCAN_Close(Communication_Testing_DW.obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S11>/FDCAN Write3' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* Terminate for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  Communicat_FDCANWrite2_Term(&Communication_Testing_DW.FDCANWrite2);
  Communicat_FDCANWrite3_Term(&Communication_Testing_DW.FDCANWrite3_pn);

  /* End of Terminate for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' */
}

void Communication_Testing_configure_interrupts(void)
{
  /* Register interrupt service routine */
  MW_NVIC_ConfigureIRQ(35,&FDCAN2_IT0_IRQHandler,3);
  MW_NVIC_EnableIRQ(35);
}

/* Hardware Interrupt Block: '<S36>/Hardware Interrupt' */
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
        /* S-Function (HardwareInterrupt_sfun): '<S36>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/Function-Call Subsystem' */
        {
          uint32_T fifoLevel;

          /* MATLABSystem: '<S5>/FDCAN Read1' */
          MW_FDCAN_ReceiveMessage(Communication_Testing_DW.obj_d.MW_FDCAN_HANDLE,
            (uint8_T)FDCAN_RX_FIFO0, &Communication_Testing_B.FDCANRead1.Data[0],
            &Communication_Testing_B.FDCANRead1.ID,
            &Communication_Testing_B.FDCANRead1.Extended,
            &Communication_Testing_B.FDCANRead1.Remote,
            &Communication_Testing_B.FDCANRead1.Length,
            &Communication_Testing_B.FDCANRead1.DLC,
            &Communication_Testing_B.FDCANRead1.BRS,
            &Communication_Testing_B.FDCANRead1.ProtocolMode, 1U, &fifoLevel);
          Communication_Testing_B.FDCANRead1.Error = 0U;
          Communication_Testing_B.FDCANRead1.ESI = 0U;
          Communication_Testing_B.FDCANRead1.Reserved = 0U;
          Communication_Testing_B.FDCANRead1.Timestamp = 0.0;

          /* S-Function (scanfdunpack): '<S5>/CAN FD Unpack2' */
          {
            /* S-Function (scanfdunpack): '<S5>/CAN FD Unpack2' */
            if ((3 == Communication_Testing_B.FDCANRead1.Length) &&
                (Communication_Testing_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((400 == Communication_Testing_B.FDCANRead1.ID) && (0U ==
                   Communication_Testing_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Communication_Testing_B.CANFDUnpack2[0],
                              Communication_Testing_B.FDCANRead1.Data,
                              3 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S5>/Byte Unpack' */

          /* Unpack: <S5>/Byte Unpack */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Communication_Testing_B.CANFDUnpack2[1];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Communication_Testing_B.ByteUnpack, (void *)
                     &(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* S-Function (scanfdunpack): '<S5>/CAN FD Unpack1' */
          {
            /* S-Function (scanfdunpack): '<S5>/CAN FD Unpack1' */
            if ((6 == Communication_Testing_B.FDCANRead1.Length) &&
                (Communication_Testing_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((401 == Communication_Testing_B.FDCANRead1.ID) && (0U ==
                   Communication_Testing_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Communication_Testing_B.CANFDUnpack1[0],
                              Communication_Testing_B.FDCANRead1.Data,
                              6 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S5>/Byte Unpack1' */

          /* Unpack: <S5>/Byte Unpack1 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Communication_Testing_B.CANFDUnpack1[1];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Communication_Testing_B.ByteUnpack1, (void *)
                     &(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* SwitchCase: '<S5>/Switch Case' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          switch (Communication_Testing_B.CANFDUnpack2[0]) {
           case 235:
           case 74:
           case 73:
            break;

           case 168:
            /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S29>/Action Port'
             */
            /* SignalConversion generated from: '<S29>/In1' */
            Communication_Testing_B.In1_g20asd =
              Communication_Testing_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S5>/If Action Subsystem4' */
            break;

           case 95:
            /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S27>/Action Port'
             */
            /* SignalConversion generated from: '<S27>/In1' */
            Communication_Testing_B.In1_g20as =
              Communication_Testing_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S5>/If Action Subsystem2' */
            break;

           case 138:
            /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S23>/Action Port'
             */
            /* SignalConversion generated from: '<S23>/In1' */
            Communication_Testing_B.In1_g20a =
              Communication_Testing_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
            break;
          }

          /* End of SwitchCase: '<S5>/Switch Case' */

          /* SwitchCase: '<S5>/Switch Case1' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion1'
           */
          switch (Communication_Testing_B.CANFDUnpack1[0]) {
           case 235:
            /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem12' incorporates:
             *  ActionPort: '<S26>/Action Port'
             */
            /* SignalConversion generated from: '<S26>/In1' */
            Communication_Testing_B.In1_g20 =
              Communication_Testing_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S5>/If Action Subsystem12' */
            break;

           case 74:
           case 73:
            break;

           case 168:
            /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem10' incorporates:
             *  ActionPort: '<S24>/Action Port'
             */
            /* SignalConversion generated from: '<S24>/In1' */
            Communication_Testing_B.In1_g2 = Communication_Testing_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S5>/If Action Subsystem10' */
            break;

           case 95:
            /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem8' incorporates:
             *  ActionPort: '<S33>/Action Port'
             */
            /* SignalConversion generated from: '<S33>/In1' */
            Communication_Testing_B.In1_g = Communication_Testing_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S5>/If Action Subsystem8' */
            break;

           case 138:
            /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* SignalConversion generated from: '<S32>/In1' */
            Communication_Testing_B.In1 = Communication_Testing_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S5>/If Action Subsystem7' */
            break;
          }

          /* End of SwitchCase: '<S5>/Switch Case1' */
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S36>/Hardware Interrupt' */

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Communication_Testing_DW.TmpRTBAtFunctionCallSubsystem_b =
          Communication_Testing_B.In1_g;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Communication_Testing_DW.TmpRTBAtFunctionCallSubsystem_e =
          Communication_Testing_B.In1;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Communication_Testing_DW.TmpRTBAtFunctionCallSubsystemOu =
          Communication_Testing_B.In1_g20as;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Communication_Testing_DW.TmpRTBAtFunctionCallSubsystem_k =
          Communication_Testing_B.In1_g20a;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Communication_Testing_DW.TmpRTBAtFunctionCallSubsystem_m =
          Communication_Testing_B.In1_g20;

        /* RateTransition generated from: '<Root>/Triggered Subsystem' */
        Communication_Testing_DW.TmpRTBAtTriggeredSubsystemInp_l =
          Communication_Testing_B.In1_g20asd;

        /* RateTransition generated from: '<Root>/Triggered Subsystem' */
        Communication_Testing_DW.TmpRTBAtTriggeredSubsystemInp_d =
          Communication_Testing_B.In1_g2;
      }
    }
  }

  __ISB();
  __DSB();
}

void Communication_Testing_unconfigure_interrupts (void)
{
  MW_NVIC_DisableIRQ(35);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
