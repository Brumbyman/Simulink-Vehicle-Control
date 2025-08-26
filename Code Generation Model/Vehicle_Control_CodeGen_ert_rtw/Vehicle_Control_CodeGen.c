/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Vehicle_Control_CodeGen.c
 *
 * Code generated for Simulink model 'Vehicle_Control_CodeGen'.
 *
 * Model version                  : 1.49
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Aug 26 16:53:42 2025
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

/* Forward declaration for local functions */
static void Vehicle_Cont_SystemCore_setup_g(dsp_simulink_MovingAverage_g_T *obj);
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
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[1])++;
  if ((Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[1]) > 4) {/* Sample time: [0.1s, 0.0s] */
    Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[1] = 0;
  }

  (Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[2])++;
  if ((Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.2s, 0.0s] */
    Vehicle_Control_CodeGen_M->Timing.TaskCounters.TID[2] = 0;
  }
}

static void Vehicle_Contro_SystemCore_setup(dsp_simulink_MovingAverage_Ve_T *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;

  /* Start for MATLABSystem: '<S104>/Moving Average' */
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
  /* Start for MATLABSystem: '<S104>/Moving Average' */
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  Vehicle_Contro_SystemCore_setup(&localDW->obj);

  /* InitializeConditions for MATLABSystem: '<S104>/Moving Average' */
  if (localDW->obj.pStatistic->isInitialized == 1) {
    localDW->obj.pStatistic->pCumSum = 0.0;
    memset(&localDW->obj.pStatistic->pCumSumRev[0], 0, 9U * sizeof(real_T));
    localDW->obj.pStatistic->pCumRevIndex = 1.0;
    localDW->obj.pStatistic->pModValueRev = 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<S104>/Moving Average' */
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

  /* MATLABSystem: '<S104>/Moving Average' */
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

  /* MATLABSystem: '<S104>/Moving Average' */
  localB->MovingAverage = 0.0;

  /* MATLABSystem: '<S104>/Moving Average' */
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
    /* MATLABSystem: '<S104>/Moving Average' */
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
  /* Terminate for MATLABSystem: '<S104>/Moving Average' */
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

  /* End of Terminate for MATLABSystem: '<S104>/Moving Average' */
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

static void Vehicle_Cont_SystemCore_setup_g(dsp_simulink_MovingAverage_g_T *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;

  /* Start for MATLABSystem: '<S103>/Moving Average1' */
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* Model step function for TID0 */
void Vehicle_Control_CodeGen_step0(void) /* Sample time: [0.02s, 0.0s] */
{
  real_T rtb_Integrator;
  real_T rtb_Integrator_p;
  real_T rtb_ProportionalGain_e;
  real_T rtb_TmpRTBAtFunctionCallSubsyst;
  real_T u0;
  uint32_T ThrottleRegenControl_ELAPS_T;

  {                                    /* Sample time: [0.02s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (fcgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/50 HZ Send Torque Requests to Inverters'
   */
  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Constant: '<S2>/Constant'
   */
  u0 = floor(Vehicle_Control_CodeGen_P.Constant_Value_e);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  Vehicle_Control_CodeGen_B.DataTypeConversion_m = (uint16_T)(u0 < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(uint16_T)u0);

  /* S-Function (reverseendian_svd): '<S2>/Byte Reversal' */

  /* ReverseEndian: <S2>/Byte Reversal */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal_p)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion_m)[0]);

  /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  u0 = floor(Vehicle_Control_CodeGen_P.Constant2_Value_k);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion2' */
  Vehicle_Control_CodeGen_B.DataTypeConversion2_k = (uint16_T)(u0 < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(uint16_T)u0);

  /* S-Function (reverseendian_svd): '<S2>/Byte Reversal1' */

  /* ReverseEndian: <S2>/Byte Reversal1 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal1_j)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion2_k)[0]);

  /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
   *  Concatenate: '<S2>/Vector Concatenate'
   *  Constant: '<S2>/Constant1'
   */
  u0 = floor(Vehicle_Control_CodeGen_P.Constant1_Value);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Vehicle_Control_CodeGen_B.VectorConcatenate_c[0] = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

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

  Vehicle_Control_FDCANWrite3(Vehicle_Control_CodeGen_B.VectorConcatenate_c,
    &Vehicle_Control_CodeGen_DW.FDCANWrite3);

  /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
   *  Concatenate: '<S2>/Vector Concatenate1'
   *  Constant: '<S2>/Constant3'
   */
  u0 = floor(Vehicle_Control_CodeGen_P.Constant3_Value);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Vehicle_Control_CodeGen_B.VectorConcatenate1_k[0] = (uint8_T)(u0 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

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
             &Vehicle_Control_CodeGen_B.ByteReversal1_j, MW_inputPortWidth);
    }
  }

  Vehicle_Control_FDCANWrite1(Vehicle_Control_CodeGen_B.VectorConcatenate1_k,
    &Vehicle_Control_CodeGen_DW.FDCANWrite1);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator2' */

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

  /* Relay: '<S104>/Relay' incorporates:
   *  DataStoreRead: '<S104>/Data Store Read1'
   */
  Vehicle_Control_CodeGen_DW.Relay_Mode =
    ((Vehicle_Control_CodeGen_P.Relay_OnVal <= 0.0) ||
     ((!(Vehicle_Control_CodeGen_P.Relay_OffVal >= 0.0)) &&
      Vehicle_Control_CodeGen_DW.Relay_Mode));

  /* DataStoreRead: '<S104>/Data Store Read' */
  Vehicle_Contr_MovingAverage(0.0, &Vehicle_Control_CodeGen_B.MovingAverage,
    &Vehicle_Control_CodeGen_DW.MovingAverage);

  /* InitialCondition: '<S104>/IC1' */
  if (Vehicle_Control_CodeGen_DW.IC1_FirstOutputTime) {
    Vehicle_Control_CodeGen_DW.IC1_FirstOutputTime = false;
    rtb_Integrator = Vehicle_Control_CodeGen_P.IC1_Value;
  } else {
    rtb_Integrator = Vehicle_Control_CodeGen_B.MovingAverage.MovingAverage;
  }

  /* End of InitialCondition: '<S104>/IC1' */

  /* Switch: '<S104>/Switch3' incorporates:
   *  Constant: '<S104>/Constant27'
   *  Constant: '<S104>/Constant28'
   *  RelationalOperator: '<S104>/GreaterThan3'
   */
  if (rtb_TmpRTBAtFunctionCallSubsyst >
      Vehicle_Control_CodeGen_P.Constant27_Value) {
    u0 = rtb_TmpRTBAtFunctionCallSubsyst;
  } else {
    u0 = Vehicle_Control_CodeGen_P.Constant28_Value;
  }

  /* Sum: '<S104>/Sum' incorporates:
   *  Constant: '<S104>/Constant23'
   *  Memory: '<S104>/Memory1'
   *  Product: '<S104>/Product6'
   *  Switch: '<S104>/Switch3'
   */
  u0 = Vehicle_Control_CodeGen_P.Constant23_Value * u0 -
    Vehicle_Control_CodeGen_DW.Memory1_PreviousInput;

  /* Saturate: '<S104>/Saturation5' */
  if (u0 > Vehicle_Control_CodeGen_P.Saturation5_UpperSat) {
    u0 = Vehicle_Control_CodeGen_P.Saturation5_UpperSat;
  } else if (u0 < Vehicle_Control_CodeGen_P.Saturation5_LowerSat) {
    u0 = Vehicle_Control_CodeGen_P.Saturation5_LowerSat;
  }

  /* Sum: '<S104>/Sum1' incorporates:
   *  Constant: '<S104>/Constant'
   *  DataStoreRead: '<S104>/Data Store Read2'
   *  Product: '<S104>/Divide3'
   *  Product: '<S104>/Product5'
   *  Saturate: '<S104>/Saturation5'
   */
  u0 = Vehicle_Control_CodeGen_B.MovingAverage.MovingAverage * u0 -
    Vehicle_Control_CodeGen_DW.Global_Power_Limit /
    Vehicle_Control_CodeGen_P.Constant_Value;

  /* Saturate: '<S104>/Saturation3' */
  if (u0 > Vehicle_Control_CodeGen_P.Saturation3_UpperSat) {
    u0 = Vehicle_Control_CodeGen_P.Saturation3_UpperSat;
  } else if (u0 < Vehicle_Control_CodeGen_P.Saturation3_LowerSat) {
    u0 = Vehicle_Control_CodeGen_P.Saturation3_LowerSat;
  }

  /* Product: '<S104>/Divide2' incorporates:
   *  Saturate: '<S104>/Saturation3'
   */
  rtb_Integrator_p = u0 / rtb_Integrator;

  /* DiscreteIntegrator: '<S136>/Filter' */
  if (Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE_j == 0) {
    /* DiscreteIntegrator: '<S136>/Filter' */
    Vehicle_Control_CodeGen_DW.Filter_DSTATE_l +=
      Vehicle_Control_CodeGen_P.Filter_gainval * (real_T)
      ThrottleRegenControl_ELAPS_T * Vehicle_Control_CodeGen_DW.Filter_PREV_U_p;
  }

  /* End of DiscreteIntegrator: '<S136>/Filter' */

  /* Gain: '<S138>/Integral Gain' */
  rtb_Integrator = Vehicle_Control_CodeGen_P.DiscretePIDController1_I *
    rtb_Integrator_p;

  /* Gain: '<S144>/Filter Coefficient' incorporates:
   *  Gain: '<S134>/Derivative Gain'
   *  Sum: '<S136>/SumD'
   */
  Vehicle_Control_CodeGen_DW.Filter_PREV_U_p =
    (Vehicle_Control_CodeGen_P.DiscretePIDController1_D * rtb_Integrator_p -
     Vehicle_Control_CodeGen_DW.Filter_DSTATE_l) *
    Vehicle_Control_CodeGen_P.DiscretePIDController1_N;

  /* Gain: '<S146>/Proportional Gain' */
  rtb_ProportionalGain_e = Vehicle_Control_CodeGen_P.DiscretePIDController1_P *
    rtb_Integrator_p;

  /* Relay: '<S105>/Relay' incorporates:
   *  DataStoreRead: '<S105>/Data Store Read1'
   */
  Vehicle_Control_CodeGen_DW.Relay_Mode_f =
    ((Vehicle_Control_CodeGen_P.Relay_OnVal_i <= 0.0) ||
     ((!(Vehicle_Control_CodeGen_P.Relay_OffVal_i >= 0.0)) &&
      Vehicle_Control_CodeGen_DW.Relay_Mode_f));

  /* DataStoreRead: '<S105>/Data Store Read' */
  Vehicle_Contr_MovingAverage(0.0, &Vehicle_Control_CodeGen_B.MovingAverage_p,
    &Vehicle_Control_CodeGen_DW.MovingAverage_p);

  /* InitialCondition: '<S105>/IC2' */
  if (Vehicle_Control_CodeGen_DW.IC2_FirstOutputTime) {
    Vehicle_Control_CodeGen_DW.IC2_FirstOutputTime = false;
    rtb_Integrator_p = Vehicle_Control_CodeGen_P.IC2_Value;
  } else {
    rtb_Integrator_p = Vehicle_Control_CodeGen_B.MovingAverage_p.MovingAverage;
  }

  /* End of InitialCondition: '<S105>/IC2' */

  /* Switch: '<S105>/Switch3' incorporates:
   *  Constant: '<S105>/Constant27'
   *  Constant: '<S105>/Constant28'
   *  RelationalOperator: '<S105>/GreaterThan3'
   */
  if (!(rtb_TmpRTBAtFunctionCallSubsyst >
        Vehicle_Control_CodeGen_P.Constant27_Value_o)) {
    rtb_TmpRTBAtFunctionCallSubsyst =
      Vehicle_Control_CodeGen_P.Constant28_Value_j;
  }

  /* Sum: '<S105>/Sum' incorporates:
   *  Constant: '<S105>/Constant23'
   *  Memory: '<S105>/Memory1'
   *  Product: '<S105>/Product6'
   *  Switch: '<S105>/Switch3'
   */
  u0 = Vehicle_Control_CodeGen_P.Constant23_Value_j *
    rtb_TmpRTBAtFunctionCallSubsyst -
    Vehicle_Control_CodeGen_DW.Memory1_PreviousInput_a;

  /* Saturate: '<S105>/Saturation5' */
  if (u0 > Vehicle_Control_CodeGen_P.Saturation5_UpperSat_p) {
    u0 = Vehicle_Control_CodeGen_P.Saturation5_UpperSat_p;
  } else if (u0 < Vehicle_Control_CodeGen_P.Saturation5_LowerSat_l) {
    u0 = Vehicle_Control_CodeGen_P.Saturation5_LowerSat_l;
  }

  /* Sum: '<S105>/Sum1' incorporates:
   *  Constant: '<S105>/Constant'
   *  DataStoreRead: '<S105>/Data Store Read2'
   *  Product: '<S105>/Divide3'
   *  Product: '<S105>/Product5'
   *  Saturate: '<S105>/Saturation5'
   */
  u0 = Vehicle_Control_CodeGen_B.MovingAverage_p.MovingAverage * u0 -
    Vehicle_Control_CodeGen_DW.Global_Power_Limit /
    Vehicle_Control_CodeGen_P.Constant_Value_n;

  /* Saturate: '<S105>/Saturation3' */
  if (u0 > Vehicle_Control_CodeGen_P.Saturation3_UpperSat_j) {
    u0 = Vehicle_Control_CodeGen_P.Saturation3_UpperSat_j;
  } else if (u0 < Vehicle_Control_CodeGen_P.Saturation3_LowerSat_b) {
    u0 = Vehicle_Control_CodeGen_P.Saturation3_LowerSat_b;
  }

  /* Product: '<S105>/Divide2' incorporates:
   *  Saturate: '<S105>/Saturation3'
   */
  rtb_TmpRTBAtFunctionCallSubsyst = u0 / rtb_Integrator_p;

  /* DiscreteIntegrator: '<S188>/Filter' */
  if (Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE_i == 0) {
    /* DiscreteIntegrator: '<S188>/Filter' */
    Vehicle_Control_CodeGen_DW.Filter_DSTATE_i +=
      Vehicle_Control_CodeGen_P.Filter_gainval_p * (real_T)
      ThrottleRegenControl_ELAPS_T * Vehicle_Control_CodeGen_DW.Filter_PREV_U_k;
  }

  /* End of DiscreteIntegrator: '<S188>/Filter' */

  /* Gain: '<S196>/Filter Coefficient' incorporates:
   *  Gain: '<S186>/Derivative Gain'
   *  Sum: '<S188>/SumD'
   */
  Vehicle_Control_CodeGen_DW.Filter_PREV_U_k =
    (Vehicle_Control_CodeGen_P.DiscretePIDController1_D_e *
     rtb_TmpRTBAtFunctionCallSubsyst -
     Vehicle_Control_CodeGen_DW.Filter_DSTATE_i) *
    Vehicle_Control_CodeGen_P.DiscretePIDController1_N_e;

  /* Update for Memory: '<S104>/Memory1' incorporates:
   *  DiscreteIntegrator: '<S141>/Integrator'
   *  Sum: '<S150>/Sum'
   */
  Vehicle_Control_CodeGen_DW.Memory1_PreviousInput = (rtb_ProportionalGain_e +
    Vehicle_Control_CodeGen_DW.Integrator_DSTATE_d) +
    Vehicle_Control_CodeGen_DW.Filter_PREV_U_p;

  /* Update for DiscreteIntegrator: '<S136>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE_j = 0U;

  /* Update for DiscreteIntegrator: '<S141>/Integrator' */
  Vehicle_Control_CodeGen_DW.Integrator_DSTATE_d +=
    Vehicle_Control_CodeGen_P.Integrator_gainval * rtb_Integrator;

  /* Update for Memory: '<S105>/Memory1' incorporates:
   *  DiscreteIntegrator: '<S193>/Integrator'
   *  Gain: '<S198>/Proportional Gain'
   *  Sum: '<S202>/Sum'
   */
  Vehicle_Control_CodeGen_DW.Memory1_PreviousInput_a =
    (Vehicle_Control_CodeGen_P.DiscretePIDController1_P_i *
     rtb_TmpRTBAtFunctionCallSubsyst +
     Vehicle_Control_CodeGen_DW.Integrator_DSTATE_o) +
    Vehicle_Control_CodeGen_DW.Filter_PREV_U_k;

  /* Update for DiscreteIntegrator: '<S188>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE_i = 0U;

  /* Update for DiscreteIntegrator: '<S193>/Integrator' incorporates:
   *  Gain: '<S190>/Integral Gain'
   */
  Vehicle_Control_CodeGen_DW.Integrator_DSTATE_o +=
    Vehicle_Control_CodeGen_P.DiscretePIDController1_I_o *
    rtb_TmpRTBAtFunctionCallSubsyst *
    Vehicle_Control_CodeGen_P.Integrator_gainval_f;

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.02, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  Vehicle_Control_CodeGen_M->Timing.clockTick0++;
}

/* Model step function for TID1 */
void Vehicle_Control_CodeGen_step1(void) /* Sample time: [0.1s, 0.0s] */
{
  real_T csum;
  real_T cumRevIndex;
  real_T modValueRev;
  real_T tmp;
  real_T z;
  int32_T k;
  uint32_T PowerForcasting_ELAPS_T;

  /* S-Function (fcgen): '<Root>/Function-Call Generator1' incorporates:
   *  SubSystem: '<Root>/Power Forcasting'
   */
  if (Vehicle_Control_CodeGen_DW.PowerForcasting_RESET_ELAPS_T) {
    PowerForcasting_ELAPS_T = 0U;
  } else {
    PowerForcasting_ELAPS_T = Vehicle_Control_CodeGen_M->Timing.clockTick1 -
      Vehicle_Control_CodeGen_DW.PowerForcasting_PREV_T;
  }

  Vehicle_Control_CodeGen_DW.PowerForcasting_PREV_T =
    Vehicle_Control_CodeGen_M->Timing.clockTick1;
  Vehicle_Control_CodeGen_DW.PowerForcasting_RESET_ELAPS_T = false;

  /* DiscreteIntegrator: '<S103>/Discrete-Time Integrator2' */
  if (Vehicle_Control_CodeGen_DW.DiscreteTimeIntegrator2_SYSTEM_ == 0) {
    /* DiscreteIntegrator: '<S103>/Discrete-Time Integrator2' */
    Vehicle_Control_CodeGen_DW.DiscreteTimeIntegrator2_DSTATE +=
      Vehicle_Control_CodeGen_P.DiscreteTimeIntegrator2_gainval * (real_T)
      PowerForcasting_ELAPS_T
      * Vehicle_Control_CodeGen_DW.DiscreteTimeIntegrator2_PREV_U;
  }

  /* End of DiscreteIntegrator: '<S103>/Discrete-Time Integrator2' */

  /* MATLABSystem: '<S103>/Moving Average1' */
  if (Vehicle_Control_CodeGen_DW.obj.TunablePropsChanged) {
    Vehicle_Control_CodeGen_DW.obj.TunablePropsChanged = false;
  }

  if (Vehicle_Control_CodeGen_DW.obj.pStatistic->isInitialized != 1) {
    Vehicle_Control_CodeGen_DW.obj.pStatistic->isSetupComplete = false;
    Vehicle_Control_CodeGen_DW.obj.pStatistic->isInitialized = 1;
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSum = 0.0;
    memset(&Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSumRev[0], 0, 999U *
           sizeof(real_T));
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumRevIndex = 1.0;
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pModValueRev = 0.0;
    Vehicle_Control_CodeGen_DW.obj.pStatistic->isSetupComplete = true;
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSum = 0.0;
    memset(&Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSumRev[0], 0, 999U *
           sizeof(real_T));
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumRevIndex = 1.0;
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pModValueRev = 0.0;
  }

  cumRevIndex = Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumRevIndex;
  csum = Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSum;
  for (k = 0; k < 999; k++) {
    Vehicle_Control_CodeGen_B.csumrev[k] =
      Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSumRev[k];
  }

  modValueRev = Vehicle_Control_CodeGen_DW.obj.pStatistic->pModValueRev;
  z = 0.0;
  tmp = 0.0;
  csum += Vehicle_Control_CodeGen_DW.DiscreteTimeIntegrator2_DSTATE;
  if (modValueRev == 0.0) {
    z = Vehicle_Control_CodeGen_B.csumrev[(int32_T)cumRevIndex - 1] + csum;
  }

  Vehicle_Control_CodeGen_B.csumrev[(int32_T)cumRevIndex - 1] =
    Vehicle_Control_CodeGen_DW.DiscreteTimeIntegrator2_DSTATE;
  if (cumRevIndex != 999.0) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (k = 997; k >= 0; k--) {
      Vehicle_Control_CodeGen_B.csumrev[k] +=
        Vehicle_Control_CodeGen_B.csumrev[k + 1];
    }
  }

  if (modValueRev == 0.0) {
    tmp = z / 1000.0;
  }

  Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSum = csum;
  memcpy(&Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSumRev[0],
         &Vehicle_Control_CodeGen_B.csumrev[0], 999U * sizeof(real_T));
  Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumRevIndex = cumRevIndex;
  if (modValueRev > 0.0) {
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pModValueRev = modValueRev - 1.0;
  } else {
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pModValueRev = 0.0;
  }

  /* Sum: '<S7>/Sum' incorporates:
   *  Constant: '<S7>/Constant4'
   *  Constant: '<S7>/Constant5'
   *  Constant: '<S7>/Constant6'
   *  Constant: '<S7>/Constant7'
   *  MATLABSystem: '<S103>/Moving Average1'
   *  Product: '<S7>/Divide1'
   *  Product: '<S7>/Product'
   *  Sum: '<S7>/Add3'
   *  Sum: '<S7>/Subtract'
   *  Sum: '<S7>/Subtract1'
   */
  cumRevIndex = (Vehicle_Control_CodeGen_P.Constant4_Value_f -
                 Vehicle_Control_CodeGen_P.Constant5_Value_a) /
    (Vehicle_Control_CodeGen_P.Constant6_Value_j -
     Vehicle_Control_CodeGen_P.Constant7_Value_m) * tmp +
    Vehicle_Control_CodeGen_P.Constant5_Value_a;

  /* DiscreteIntegrator: '<S80>/Filter' */
  if (Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE == 0) {
    /* DiscreteIntegrator: '<S80>/Filter' */
    Vehicle_Control_CodeGen_DW.Filter_DSTATE +=
      Vehicle_Control_CodeGen_P.Filter_gainval_e * (real_T)
      PowerForcasting_ELAPS_T * Vehicle_Control_CodeGen_DW.Filter_PREV_U;
  }

  /* End of DiscreteIntegrator: '<S80>/Filter' */

  /* DiscreteIntegrator: '<S85>/Integrator' */
  if (Vehicle_Control_CodeGen_DW.Integrator_SYSTEM_ENABLE == 0) {
    /* DiscreteIntegrator: '<S85>/Integrator' */
    Vehicle_Control_CodeGen_DW.Integrator_DSTATE +=
      Vehicle_Control_CodeGen_P.Integrator_gainval_k * (real_T)
      PowerForcasting_ELAPS_T * Vehicle_Control_CodeGen_DW.Integrator_PREV_U;
  }

  /* End of DiscreteIntegrator: '<S85>/Integrator' */

  /* Gain: '<S88>/Filter Coefficient' incorporates:
   *  Gain: '<S78>/Derivative Gain'
   *  Sum: '<S80>/SumD'
   */
  Vehicle_Control_CodeGen_DW.Filter_PREV_U =
    (Vehicle_Control_CodeGen_P.DiscretePIDController_D * cumRevIndex -
     Vehicle_Control_CodeGen_DW.Filter_DSTATE) *
    Vehicle_Control_CodeGen_P.DiscretePIDController_N;

  /* Update for DiscreteIntegrator: '<S103>/Discrete-Time Integrator2' incorporates:
   *  Constant: '<S103>/Constant2'
   *  Product: '<S103>/Divide'
   *  Sum: '<S103>/Add2'
   */
  Vehicle_Control_CodeGen_DW.DiscreteTimeIntegrator2_SYSTEM_ = 0U;
  Vehicle_Control_CodeGen_DW.DiscreteTimeIntegrator2_PREV_U = 0.0 /
    Vehicle_Control_CodeGen_P.Constant2_Value_o;

  /* Update for DiscreteIntegrator: '<S80>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE = 0U;

  /* Update for DiscreteIntegrator: '<S85>/Integrator' incorporates:
   *  Gain: '<S82>/Integral Gain'
   */
  Vehicle_Control_CodeGen_DW.Integrator_SYSTEM_ENABLE = 0U;
  Vehicle_Control_CodeGen_DW.Integrator_PREV_U =
    Vehicle_Control_CodeGen_P.DiscretePIDController_I * cumRevIndex;

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator1' */

  /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Constant: '<Root>/Constant6'
   */
  if (Vehicle_Control_CodeGen_P.ManualSwitch2_CurrentSetting == 1) {
    tmp = Vehicle_Control_CodeGen_P.Constant5_Value_f;
  } else {
    tmp = Vehicle_Control_CodeGen_P.Constant6_Value_c;
  }

  /* Switch: '<Root>/Switch3' incorporates:
   *  Constant: '<Root>/Power Limit'
   *  DataStoreWrite: '<Root>/Data Store Write1'
   *  Gain: '<S90>/Proportional Gain'
   *  ManualSwitch: '<Root>/Manual Switch2'
   *  Sum: '<S94>/Sum'
   */
  if (tmp > Vehicle_Control_CodeGen_P.Switch3_Threshold) {
    Vehicle_Control_CodeGen_DW.Global_Power_Limit =
      Vehicle_Control_CodeGen_P.PowerLimit_Value;
  } else {
    /* S-Function (fcgen): '<Root>/Function-Call Generator1' incorporates:
     *  SubSystem: '<Root>/Power Forcasting'
     */
    Vehicle_Control_CodeGen_DW.Global_Power_Limit =
      (Vehicle_Control_CodeGen_P.DiscretePIDController_P * cumRevIndex +
       Vehicle_Control_CodeGen_DW.Integrator_DSTATE) +
      Vehicle_Control_CodeGen_DW.Filter_PREV_U;

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator1' */
  }

  /* End of Switch: '<Root>/Switch3' */

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  Vehicle_Control_CodeGen_M->Timing.clockTick1++;
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
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystemOu;

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
  Vehicle_Control_CodeGen_B.DataTypeConversion1 =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_a;

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
  Vehicle_Control_CodeGen_B.DataTypeConversion5 =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_h;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_B.DataTypeConversion6 =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_b;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_B.DataTypeConversion7 =
    Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_e;

  /* Switch: '<Root>/Switch5' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch5_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant2_Value_j);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch5' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S9>/Byte Reversal' */

  /* ReverseEndian: <S9>/Byte Reversal */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch6' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch6_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S9>/Data Type Conversion1' incorporates:
     *  Constant: '<Root>/Constant8'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant8_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion1'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion1 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch6' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S9>/Byte Reversal1' */

  /* ReverseEndian: <S9>/Byte Reversal1 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal1)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion1)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch7' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch7_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S9>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/Constant7'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant7_Value_m4);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion2'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion2 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch7' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S9>/Byte Reversal2' */

  /* ReverseEndian: <S9>/Byte Reversal2 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal2)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion2)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch8' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch8_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S9>/Data Type Conversion3' incorporates:
     *  Constant: '<Root>/Constant12'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant12_Value_g);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion3'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion3 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch8' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S9>/Byte Reversal3' */

  /* ReverseEndian: <S9>/Byte Reversal3 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal3)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion3)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch9' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch9_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S9>/Data Type Conversion4' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant13_Value_i);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion4'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion4 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch9' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S9>/Byte Reversal4' */

  /* ReverseEndian: <S9>/Byte Reversal4 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal4)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion4)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch10' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch10_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S9>/Data Type Conversion5' incorporates:
     *  Constant: '<Root>/Constant9'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant9_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion5'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion5 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch10' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S9>/Byte Reversal5' */

  /* ReverseEndian: <S9>/Byte Reversal5 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal5)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion5)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch11' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch11_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S9>/Data Type Conversion6' incorporates:
     *  Constant: '<Root>/Constant10'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant10_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion6'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion6 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch11' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S9>/Byte Reversal6' */

  /* ReverseEndian: <S9>/Byte Reversal6 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal6)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion6)[0]);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* Switch: '<Root>/Switch12' */
  if (!(rtb_ManualSwitch1 > Vehicle_Control_CodeGen_P.Switch12_Threshold)) {
    /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* DataTypeConversion: '<S9>/Data Type Conversion7' incorporates:
     *  Constant: '<Root>/Constant11'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant11_Value_i);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* RateTransition generated from: '<Root>/Function-Call Subsystem' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion7'
     */
    Vehicle_Control_CodeGen_B.DataTypeConversion7 = (uint16_T)(tmp < 0.0 ?
      (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
  }

  /* End of Switch: '<Root>/Switch12' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* S-Function (reverseendian_svd): '<S9>/Byte Reversal7' */

  /* ReverseEndian: <S9>/Byte Reversal7 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Vehicle_Control_CodeGen_B.ByteReversal7)[0] =
    SWAP16(((uint16_T *)&Vehicle_Control_CodeGen_B.DataTypeConversion7)[0]);

  /* S-Function (any2byte_svd): '<S9>/Byte Pack' */

  /* Pack: <S9>/Byte Pack */
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

  /* S-Function (any2byte_svd): '<S9>/Byte Pack1' */

  /* Pack: <S9>/Byte Pack1 */
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
             &Vehicle_Control_CodeGen_B.ByteReversal1, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S9>/Byte Pack2' */

  /* Pack: <S9>/Byte Pack2 */
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

  /* S-Function (any2byte_svd): '<S9>/Byte Pack3' */

  /* Pack: <S9>/Byte Pack3 */
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

  /* MATLABSystem: '<S9>/FDCAN Write3' incorporates:
   *  Concatenate: '<S9>/Vector Concatenate'
   * */
  MW_FDCAN_TransmitMessage(Vehicle_Control_CodeGen_DW.obj_o.MW_FDCAN_HANDLE,
    &Vehicle_Control_CodeGen_B.VectorConcatenate[0], 8U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* S-Function (any2byte_svd): '<S9>/Byte Pack4' */

  /* Pack: <S9>/Byte Pack4 */
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

  /* S-Function (any2byte_svd): '<S9>/Byte Pack5' */

  /* Pack: <S9>/Byte Pack5 */
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
             &Vehicle_Control_CodeGen_B.ByteReversal5, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S9>/Byte Pack6' */

  /* Pack: <S9>/Byte Pack6 */
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

  /* S-Function (any2byte_svd): '<S9>/Byte Pack7' */

  /* Pack: <S9>/Byte Pack7 */
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

  /* MATLABSystem: '<S9>/FDCAN Write1' incorporates:
   *  Concatenate: '<S9>/Vector Concatenate1'
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
   *  EnablePort: '<S12>/Enable'
   */
  if (tmp > 0.0) {
    /* DataTypeConversion: '<S12>/Data Type Conversion3' incorporates:
     *  Constant: '<S12>/Constant4'
     */
    tmp = floor(Vehicle_Control_CodeGen_P.Constant4_Value_p);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[0] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S12>/Data Type Conversion3' */

    /* LookupNDDirect: '<S12>/Direct Lookup Table (n-D)' incorporates:
     *  UnitDelay: '<S13>/Output'
     *
     * About '<S12>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (Vehicle_Control_CodeGen_DW.Output_DSTATE > 5) {
      tmp_0 = 5;
    } else {
      tmp_0 = Vehicle_Control_CodeGen_DW.Output_DSTATE;
    }

    /* DataTypeConversion: '<S12>/Data Type Conversion2' incorporates:
     *  LookupNDDirect: '<S12>/Direct Lookup Table (n-D)'
     *
     * About '<S12>/Direct Lookup Table (n-D)':
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

    /* End of DataTypeConversion: '<S12>/Data Type Conversion2' */

    /* LookupNDDirect: '<S12>/Direct Lookup Table (n-D)1' incorporates:
     *  UnitDelay: '<S14>/Output'
     *
     * About '<S12>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (Vehicle_Control_CodeGen_DW.Output_DSTATE_a > 5) {
      tmp_0 = 5;
    } else {
      tmp_0 = Vehicle_Control_CodeGen_DW.Output_DSTATE_a;
    }

    /* DataTypeConversion: '<S12>/Data Type Conversion4' incorporates:
     *  LookupNDDirect: '<S12>/Direct Lookup Table (n-D)1'
     *
     * About '<S12>/Direct Lookup Table (n-D)1':
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

    /* End of DataTypeConversion: '<S12>/Data Type Conversion4' */
    Vehicle_Control_FDCANWrite1(rtb_VectorConcatenate,
      &Vehicle_Control_CodeGen_DW.FDCANWrite2);
    Vehicle_Control_FDCANWrite3(rtb_VectorConcatenate,
      &Vehicle_Control_CodeGen_DW.FDCANWrite3_pn);

    /* Sum: '<S15>/FixPt Sum1' incorporates:
     *  Constant: '<S15>/FixPt Constant'
     *  UnitDelay: '<S13>/Output'
     */
    Vehicle_Control_CodeGen_DW.Output_DSTATE = (uint8_T)((uint32_T)
      Vehicle_Control_CodeGen_DW.Output_DSTATE +
      Vehicle_Control_CodeGen_P.FixPtConstant_Value);

    /* Switch: '<S16>/FixPt Switch' */
    if (Vehicle_Control_CodeGen_DW.Output_DSTATE >
        Vehicle_Control_CodeGen_P.WrapToZero_Threshold) {
      /* Sum: '<S15>/FixPt Sum1' incorporates:
       *  Constant: '<S16>/Constant'
       */
      Vehicle_Control_CodeGen_DW.Output_DSTATE =
        Vehicle_Control_CodeGen_P.Constant_Value_h;
    }

    /* End of Switch: '<S16>/FixPt Switch' */

    /* Sum: '<S17>/FixPt Sum1' incorporates:
     *  Constant: '<S17>/FixPt Constant'
     *  UnitDelay: '<S14>/Output'
     */
    Vehicle_Control_CodeGen_DW.Output_DSTATE_a = (uint8_T)((uint32_T)
      Vehicle_Control_CodeGen_DW.Output_DSTATE_a +
      Vehicle_Control_CodeGen_P.FixPtConstant_Value_n);

    /* Switch: '<S18>/FixPt Switch' */
    if (Vehicle_Control_CodeGen_DW.Output_DSTATE_a >
        Vehicle_Control_CodeGen_P.WrapToZero_Threshold_e) {
      /* Sum: '<S17>/FixPt Sum1' incorporates:
       *  Constant: '<S18>/Constant'
       */
      Vehicle_Control_CodeGen_DW.Output_DSTATE_a =
        Vehicle_Control_CodeGen_P.Constant_Value_d;
    }

    /* End of Switch: '<S18>/FixPt Switch' */
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
  /* Start for DataStoreMemory: '<Root>/Data Store Memory5' */
  Vehicle_Control_CodeGen_DW.Global_Power_Limit =
    Vehicle_Control_CodeGen_P.DataStoreMemory5_InitialValue;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem1' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem1O =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsystem1O;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystemOu =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsystemOu;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_a =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsystem_j;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_g =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsyste_jx;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_k =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsyst_jxk;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_m =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsys_jxkx;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_h =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubsy_jxkxj;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_b =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSubs_jxkxj0;

  /* InitializeConditions for RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_e =
    Vehicle_Control_CodeGen_P.TmpRTBAtFunctionCallSub_jxkxj0l;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Start for MATLABSystem: '<S9>/FDCAN Write3' */
  Vehicle_Control_CodeGen_DW.obj_o.matlabCodegenIsDeleted = false;
  Vehicle_Control_CodeGen_DW.obj_o.isInitialized = 1;
  Vehicle_Control_CodeGen_DW.obj_o.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Vehicle_Control_CodeGen_DW.obj_o.MW_FDCAN_HANDLE);
  Vehicle_Control_CodeGen_DW.obj_o.isSetupComplete = true;

  /* Start for MATLABSystem: '<S9>/FDCAN Write1' */
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
  /* InitializeConditions for Sum: '<S15>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S13>/Output'
   */
  Vehicle_Control_CodeGen_DW.Output_DSTATE =
    Vehicle_Control_CodeGen_P.Output_InitialCondition;

  /* InitializeConditions for Sum: '<S17>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S14>/Output'
   */
  Vehicle_Control_CodeGen_DW.Output_DSTATE_a =
    Vehicle_Control_CodeGen_P.Output_InitialCondition_n;
  Vehicle_Co_FDCANWrite1_Init(&Vehicle_Control_CodeGen_DW.FDCANWrite2);
  Vehicle_Co_FDCANWrite3_Init(&Vehicle_Control_CodeGen_DW.FDCANWrite3_pn);

  /* End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' */

  /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S46>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* System initialize for function-call system: '<Root>/Function-Call Subsystem' */

  /* Start for S-Function (scanfdunpack): '<S3>/CAN FD Unpack2' */

  /*-----------S-Function Block: <S3>/CAN FD Unpack2 -----------------*/

  /* Start for S-Function (scanfdunpack): '<S3>/CAN FD Unpack1' */

  /*-----------S-Function Block: <S3>/CAN FD Unpack1 -----------------*/

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem1' */
  /* SystemInitialize for SignalConversion generated from: '<S19>/In1' incorporates:
   *  Outport: '<S19>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20a = Vehicle_Control_CodeGen_P.Out1_Y0_j;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem10' */
  /* SystemInitialize for SignalConversion generated from: '<S20>/In1' incorporates:
   *  Outport: '<S20>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g2 = Vehicle_Control_CodeGen_P.Out1_Y0_m;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem10' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem12' */
  /* SystemInitialize for SignalConversion generated from: '<S22>/In1' incorporates:
   *  Outport: '<S22>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20 = Vehicle_Control_CodeGen_P.Out1_Y0_n;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem12' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem2' */
  /* SystemInitialize for SignalConversion generated from: '<S23>/In1' incorporates:
   *  Outport: '<S23>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20as = Vehicle_Control_CodeGen_P.Out1_Y0_pe;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem4' */
  /* SystemInitialize for SignalConversion generated from: '<S25>/In1' incorporates:
   *  Outport: '<S25>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20asd = Vehicle_Control_CodeGen_P.Out1_Y0_g;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem4' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem6' */
  /* SystemInitialize for SignalConversion generated from: '<S27>/In1' incorporates:
   *  Outport: '<S27>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g20asdt = Vehicle_Control_CodeGen_P.Out1_Y0_a;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem6' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem7' */
  /* SystemInitialize for SignalConversion generated from: '<S28>/In1' incorporates:
   *  Outport: '<S28>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1 = Vehicle_Control_CodeGen_P.Out1_Y0_h;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem7' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem8' */
  /* SystemInitialize for SignalConversion generated from: '<S29>/In1' incorporates:
   *  Outport: '<S29>/Out1'
   */
  Vehicle_Control_CodeGen_B.In1_g = Vehicle_Control_CodeGen_P.Out1_Y0_i;

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem8' */

  /* Start for MATLABSystem: '<S3>/FDCAN Read1' */
  Vehicle_Control_CodeGen_DW.obj_j.matlabCodegenIsDeleted = false;
  Vehicle_Control_CodeGen_DW.obj_j.isInitialized = 1;
  Vehicle_Control_CodeGen_DW.obj_j.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Vehicle_Control_CodeGen_DW.obj_j.MW_FDCAN_HANDLE);
  Vehicle_Control_CodeGen_DW.obj_j.isSetupComplete = true;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/50 HZ Send Torque Requests to Inverters'
   */
  Vehicle_Co_FDCANWrite3_Init(&Vehicle_Control_CodeGen_DW.FDCANWrite3);
  Vehicle_Co_FDCANWrite1_Init(&Vehicle_Control_CodeGen_DW.FDCANWrite1);

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator2' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator1' incorporates:
   *  SubSystem: '<Root>/Power Forcasting'
   */
  /* InitializeConditions for DiscreteIntegrator: '<S103>/Discrete-Time Integrator2' */
  Vehicle_Control_CodeGen_DW.DiscreteTimeIntegrator2_DSTATE =
    Vehicle_Control_CodeGen_P.DiscreteTimeIntegrator2_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S80>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_DSTATE =
    Vehicle_Control_CodeGen_P.DiscretePIDController_InitialCo;

  /* InitializeConditions for DiscreteIntegrator: '<S85>/Integrator' */
  Vehicle_Control_CodeGen_DW.Integrator_DSTATE =
    Vehicle_Control_CodeGen_P.DiscretePIDController_Initial_o;

  /* Start for MATLABSystem: '<S103>/Moving Average1' */
  Vehicle_Control_CodeGen_DW.obj.isInitialized = 0;
  Vehicle_Control_CodeGen_DW.obj.NumChannels = -1;
  Vehicle_Control_CodeGen_DW.obj.FrameLength = -1;
  Vehicle_Control_CodeGen_DW.obj.matlabCodegenIsDeleted = false;
  Vehicle_Cont_SystemCore_setup_g(&Vehicle_Control_CodeGen_DW.obj);

  /* InitializeConditions for MATLABSystem: '<S103>/Moving Average1' */
  if (Vehicle_Control_CodeGen_DW.obj.pStatistic->isInitialized == 1) {
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSum = 0.0;
    memset(&Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumSumRev[0], 0, 999U *
           sizeof(real_T));
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pCumRevIndex = 1.0;
    Vehicle_Control_CodeGen_DW.obj.pStatistic->pModValueRev = 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<S103>/Moving Average1' */
  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator1' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  /* Start for InitialCondition: '<S104>/IC1' */
  Vehicle_Control_CodeGen_DW.IC1_FirstOutputTime = true;

  /* Start for InitialCondition: '<S105>/IC2' */
  Vehicle_Control_CodeGen_DW.IC2_FirstOutputTime = true;

  /* InitializeConditions for Memory: '<S104>/Memory1' */
  Vehicle_Control_CodeGen_DW.Memory1_PreviousInput =
    Vehicle_Control_CodeGen_P.Memory1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S136>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_DSTATE_l =
    Vehicle_Control_CodeGen_P.DiscretePIDController1_InitialC;

  /* InitializeConditions for DiscreteIntegrator: '<S141>/Integrator' */
  Vehicle_Control_CodeGen_DW.Integrator_DSTATE_d =
    Vehicle_Control_CodeGen_P.DiscretePIDController1_Initia_h;

  /* InitializeConditions for Memory: '<S105>/Memory1' */
  Vehicle_Control_CodeGen_DW.Memory1_PreviousInput_a =
    Vehicle_Control_CodeGen_P.Memory1_InitialCondition_b;

  /* InitializeConditions for DiscreteIntegrator: '<S188>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_DSTATE_i =
    Vehicle_Control_CodeGen_P.DiscretePIDController1_Initia_f;

  /* InitializeConditions for DiscreteIntegrator: '<S193>/Integrator' */
  Vehicle_Control_CodeGen_DW.Integrator_DSTATE_o =
    Vehicle_Control_CodeGen_P.DiscretePIDController1_Initia_j;
  Vehicle__MovingAverage_Init(&Vehicle_Control_CodeGen_DW.MovingAverage);
  Vehicle__MovingAverage_Init(&Vehicle_Control_CodeGen_DW.MovingAverage_p);

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S48>/Hardware Interrupt' incorporates:
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

  /* Enable for DiscreteIntegrator: '<S136>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE_j = 1U;

  /* Enable for DiscreteIntegrator: '<S188>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE_i = 1U;

  /* End of Enable for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* Enable for S-Function (fcgen): '<Root>/Function-Call Generator1' incorporates:
   *  SubSystem: '<Root>/Power Forcasting'
   */
  Vehicle_Control_CodeGen_DW.PowerForcasting_RESET_ELAPS_T = true;

  /* Enable for DiscreteIntegrator: '<S103>/Discrete-Time Integrator2' */
  Vehicle_Control_CodeGen_DW.DiscreteTimeIntegrator2_SYSTEM_ = 1U;

  /* Enable for DiscreteIntegrator: '<S80>/Filter' */
  Vehicle_Control_CodeGen_DW.Filter_SYSTEM_ENABLE = 1U;

  /* Enable for DiscreteIntegrator: '<S85>/Integrator' */
  Vehicle_Control_CodeGen_DW.Integrator_SYSTEM_ENABLE = 1U;

  /* End of Enable for S-Function (fcgen): '<Root>/Function-Call Generator1' */
}

/* Model terminate function */
void Vehicle_Control_CodeGen_terminate(void)
{
  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S46>/Hardware Interrupt' */

  /* Terminate for S-Function (HardwareInterrupt_sfun): '<S46>/Hardware Interrupt' incorporates:
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

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S46>/Hardware Interrupt' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator2' incorporates:
   *  SubSystem: '<Root>/50 HZ Send Torque Requests to Inverters'
   */
  Vehicle_Co_FDCANWrite3_Term(&Vehicle_Control_CodeGen_DW.FDCANWrite3);
  Vehicle_Co_FDCANWrite1_Term(&Vehicle_Control_CodeGen_DW.FDCANWrite1);

  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator2' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S48>/Hardware Interrupt' */

  /* Terminate for S-Function (HardwareInterrupt_sfun): '<S48>/Hardware Interrupt' incorporates:
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

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S48>/Hardware Interrupt' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Throttle//Regen Control'
   */
  Vehicle__MovingAverage_Term(&Vehicle_Control_CodeGen_DW.MovingAverage);
  Vehicle__MovingAverage_Term(&Vehicle_Control_CodeGen_DW.MovingAverage_p);

  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator1' incorporates:
   *  SubSystem: '<Root>/Power Forcasting'
   */
  /* Terminate for MATLABSystem: '<S103>/Moving Average1' */
  if (!Vehicle_Control_CodeGen_DW.obj.matlabCodegenIsDeleted) {
    Vehicle_Control_CodeGen_DW.obj.matlabCodegenIsDeleted = true;
    if ((Vehicle_Control_CodeGen_DW.obj.isInitialized == 1) &&
        Vehicle_Control_CodeGen_DW.obj.isSetupComplete) {
      if (Vehicle_Control_CodeGen_DW.obj.pStatistic->isInitialized == 1) {
        Vehicle_Control_CodeGen_DW.obj.pStatistic->isInitialized = 2;
      }

      Vehicle_Control_CodeGen_DW.obj.NumChannels = -1;
      Vehicle_Control_CodeGen_DW.obj.FrameLength = -1;
    }
  }

  /* End of Terminate for MATLABSystem: '<S103>/Moving Average1' */
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator1' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Terminate for MATLABSystem: '<S9>/FDCAN Write3' */
  if (!Vehicle_Control_CodeGen_DW.obj_o.matlabCodegenIsDeleted) {
    Vehicle_Control_CodeGen_DW.obj_o.matlabCodegenIsDeleted = true;
    if ((Vehicle_Control_CodeGen_DW.obj_o.isInitialized == 1) &&
        Vehicle_Control_CodeGen_DW.obj_o.isSetupComplete) {
      MW_FDCAN_Close(Vehicle_Control_CodeGen_DW.obj_o.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S9>/FDCAN Write3' */

  /* Terminate for MATLABSystem: '<S9>/FDCAN Write1' */
  if (!Vehicle_Control_CodeGen_DW.obj_b.matlabCodegenIsDeleted) {
    Vehicle_Control_CodeGen_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((Vehicle_Control_CodeGen_DW.obj_b.isInitialized == 1) &&
        Vehicle_Control_CodeGen_DW.obj_b.isSetupComplete) {
      MW_FDCAN_Close(Vehicle_Control_CodeGen_DW.obj_b.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S9>/FDCAN Write1' */

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

/* Hardware Interrupt Block: '<S46>/Hardware Interrupt' */
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
        /* S-Function (HardwareInterrupt_sfun): '<S46>/Hardware Interrupt' */

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
             *  ActionPort: '<S27>/Action Port'
             */
            /* SignalConversion generated from: '<S27>/In1' */
            Vehicle_Control_CodeGen_B.In1_g20asdt =
              Vehicle_Control_CodeGen_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem6' */
            break;

           case 74:
           case 73:
            break;

           case 168:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S25>/Action Port'
             */
            /* SignalConversion generated from: '<S25>/In1' */
            Vehicle_Control_CodeGen_B.In1_g20asd =
              Vehicle_Control_CodeGen_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem4' */
            break;

           case 95:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S23>/Action Port'
             */
            /* SignalConversion generated from: '<S23>/In1' */
            Vehicle_Control_CodeGen_B.In1_g20as =
              Vehicle_Control_CodeGen_B.ByteUnpack;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
            break;

           case 138:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S19>/Action Port'
             */
            /* SignalConversion generated from: '<S19>/In1' */
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
             *  ActionPort: '<S22>/Action Port'
             */
            /* SignalConversion generated from: '<S22>/In1' */
            Vehicle_Control_CodeGen_B.In1_g20 =
              Vehicle_Control_CodeGen_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem12' */
            break;

           case 74:
           case 73:
            break;

           case 168:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem10' incorporates:
             *  ActionPort: '<S20>/Action Port'
             */
            /* SignalConversion generated from: '<S20>/In1' */
            Vehicle_Control_CodeGen_B.In1_g2 =
              Vehicle_Control_CodeGen_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem10' */
            break;

           case 95:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem8' incorporates:
             *  ActionPort: '<S29>/Action Port'
             */
            /* SignalConversion generated from: '<S29>/In1' */
            Vehicle_Control_CodeGen_B.In1_g =
              Vehicle_Control_CodeGen_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem8' */
            break;

           case 138:
            /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S28>/Action Port'
             */
            /* SignalConversion generated from: '<S28>/In1' */
            Vehicle_Control_CodeGen_B.In1 =
              Vehicle_Control_CodeGen_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S3>/If Action Subsystem7' */
            break;
          }

          /* End of SwitchCase: '<S3>/Switch Case1' */
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S46>/Hardware Interrupt' */

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystemOu =
          Vehicle_Control_CodeGen_B.In1_g20asdt;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_b =
          Vehicle_Control_CodeGen_B.In1_g;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_e =
          Vehicle_Control_CodeGen_B.In1;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Vehicle_Control_CodeGen_DW.TmpRTBAtFunctionCallSubsystem_a =
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

/* Hardware Interrupt Block: '<S48>/Hardware Interrupt' */
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
        /* S-Function (HardwareInterrupt_sfun): '<S48>/Hardware Interrupt' */

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

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S48>/Hardware Interrupt' */

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
