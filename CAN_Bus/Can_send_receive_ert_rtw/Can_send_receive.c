/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive.c
 *
 * Code generated for Simulink model 'Can_send_receive'.
 *
 * Model version                  : 1.61
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Aug 28 10:28:40 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Can_send_receive.h"
#include "Can_send_receive_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"

/* Block signals (default storage) */
B_Can_send_receive_T Can_send_receive_B;

/* Block states (default storage) */
DW_Can_send_receive_T Can_send_receive_DW;

/* Real-time model */
static RT_MODEL_Can_send_receive_T Can_send_receive_M_;
RT_MODEL_Can_send_receive_T *const Can_send_receive_M = &Can_send_receive_M_;

/* Model step function */
void Can_send_receive_step(void)
{
  real_T rtb_TmpRTBAtFunctionCallSubsyst;
  int32_T tmp;
  uint32_T fifoLevel;
  uint8_T rtb_VectorConcatenate[3];
  uint8_T rtb_FixPtSum1;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Can_send_receive_B.TmpRTBAtFunctionCallSubsystemOu =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_e;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_l =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_a;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_c =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_g;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_m =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_k;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_i =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_m;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_e =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_h;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  rtb_TmpRTBAtFunctionCallSubsyst =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystemOu;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
  Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_o =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_i;

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem1'
   */
  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal' */

  /* ReverseEndian: <S5>/Byte Reversal */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.TmpRTBAtFunctionCallSubsystemOu)[0]);

  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal1' */

  /* ReverseEndian: <S5>/Byte Reversal1 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal1)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_l)[0]);

  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal2' */

  /* ReverseEndian: <S5>/Byte Reversal2 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal2)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_c)[0]);

  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal3' */

  /* ReverseEndian: <S5>/Byte Reversal3 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal3)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_m)[0]);

  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal4' */

  /* ReverseEndian: <S5>/Byte Reversal4 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal4)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_i)[0]);

  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal5' */

  /* ReverseEndian: <S5>/Byte Reversal5 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal5)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_e)[0]);

  /* DataTypeConversion: '<S5>/Data Type Conversion6' */
  rtb_TmpRTBAtFunctionCallSubsyst = floor(rtb_TmpRTBAtFunctionCallSubsyst);
  if (rtIsNaN(rtb_TmpRTBAtFunctionCallSubsyst) || rtIsInf
      (rtb_TmpRTBAtFunctionCallSubsyst)) {
    rtb_TmpRTBAtFunctionCallSubsyst = 0.0;
  } else {
    rtb_TmpRTBAtFunctionCallSubsyst = fmod(rtb_TmpRTBAtFunctionCallSubsyst,
      65536.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion6' */
  Can_send_receive_B.DataTypeConversion6 = (uint16_T)
    (rtb_TmpRTBAtFunctionCallSubsyst < 0.0 ? (int32_T)(uint16_T)-(int16_T)
     (uint16_T)-rtb_TmpRTBAtFunctionCallSubsyst : (int32_T)(uint16_T)
     rtb_TmpRTBAtFunctionCallSubsyst);

  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal6' */

  /* ReverseEndian: <S5>/Byte Reversal6 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal6)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.DataTypeConversion6)[0]);

  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal7' */

  /* ReverseEndian: <S5>/Byte Reversal7 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal7)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_o)[0]);

  /* S-Function (any2byte_svd): '<S5>/Byte Pack' */

  /* Pack: <S5>/Byte Pack */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Can_send_receive_B.VectorConcatenate[0];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Can_send_receive_B.ByteReversal, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S5>/Byte Pack1' */

  /* Pack: <S5>/Byte Pack1 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Can_send_receive_B.VectorConcatenate[2];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Can_send_receive_B.ByteReversal1, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S5>/Byte Pack2' */

  /* Pack: <S5>/Byte Pack2 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Can_send_receive_B.VectorConcatenate[4];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Can_send_receive_B.ByteReversal2, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S5>/Byte Pack3' */

  /* Pack: <S5>/Byte Pack3 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Can_send_receive_B.VectorConcatenate[6];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Can_send_receive_B.ByteReversal3, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S5>/Byte Pack4' */

  /* Pack: <S5>/Byte Pack4 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Can_send_receive_B.VectorConcatenate1[0];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Can_send_receive_B.ByteReversal4, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S5>/Byte Pack5' */

  /* Pack: <S5>/Byte Pack5 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Can_send_receive_B.VectorConcatenate1[2];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Can_send_receive_B.ByteReversal5, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S5>/Byte Pack6' */

  /* Pack: <S5>/Byte Pack6 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Can_send_receive_B.VectorConcatenate1[4];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Can_send_receive_B.ByteReversal6, MW_inputPortWidth);
    }
  }

  /* S-Function (any2byte_svd): '<S5>/Byte Pack7' */

  /* Pack: <S5>/Byte Pack7 */
  {
    uint32_T MW_outputPortOffset = 0U;
    uint16_T MW_inputPortWidth = 0U;

    /* Packed output data type - uint8_T */
    void* packData = &Can_send_receive_B.VectorConcatenate1[6];

    /* Packing the values of Input 1 */
    /* Input data type - uint16_T, size - 1 */
    {
      MW_inputPortWidth = sizeof(uint16_T);
      memcpy((void *)&(((uint8_T *)packData)[MW_outputPortOffset]), (void*)
             &Can_send_receive_B.ByteReversal7, MW_inputPortWidth);
    }
  }

  /* MATLABSystem: '<S5>/FDCAN Write1' incorporates:
   *  Concatenate: '<S5>/Vector Concatenate1'
   * */
  MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_l.MW_FDCAN_HANDLE,
    &Can_send_receive_B.VectorConcatenate1[0], 404U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* MATLABSystem: '<S5>/FDCAN Write3' incorporates:
   *  Concatenate: '<S5>/Vector Concatenate'
   * */
  MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_h.MW_FDCAN_HANDLE,
    &Can_send_receive_B.VectorConcatenate[0], 403U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/Constant'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  Can_send_receive_DW.UnitDelay_DSTATE++;

  /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant3'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (!(Can_send_receive_DW.UnitDelay_DSTATE > 12.0)) {
    /* SignalConversion generated from: '<S6>/Vector Concatenate' */
    rtb_VectorConcatenate[0] = Can_send_receive_ConstB.DataTypeConversion3;

    /* UnitDelay: '<S7>/Output' */
    rtb_FixPtSum1 = Can_send_receive_DW.Output_DSTATE;

    /* Switch: '<S10>/FixPt Switch' incorporates:
     *  Constant: '<S10>/Constant'
     *  Constant: '<S9>/FixPt Constant'
     *  Sum: '<S9>/FixPt Sum1'
     *  UnitDelay: '<S7>/Output'
     */
    if ((uint8_T)(Can_send_receive_DW.Output_DSTATE + 1U) > 5) {
      Can_send_receive_DW.Output_DSTATE = 0U;
    } else {
      Can_send_receive_DW.Output_DSTATE++;
    }

    /* End of Switch: '<S10>/FixPt Switch' */

    /* LookupNDDirect: '<S6>/Direct Lookup Table (n-D)' incorporates:
     *  DataTypeConversion: '<S6>/Data Type Conversion16'
     *
     * About '<S6>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (rtb_FixPtSum1 > 5) {
      tmp = 5;
    } else {
      tmp = rtb_FixPtSum1;
    }

    /* DataTypeConversion: '<S6>/Data Type Conversion2' incorporates:
     *  LookupNDDirect: '<S6>/Direct Lookup Table (n-D)'
     *
     * About '<S6>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    rtb_TmpRTBAtFunctionCallSubsyst = floor(Can_send_receive_ConstP.pooled1[tmp]);
    if (rtIsNaN(rtb_TmpRTBAtFunctionCallSubsyst) || rtIsInf
        (rtb_TmpRTBAtFunctionCallSubsyst)) {
      rtb_TmpRTBAtFunctionCallSubsyst = 0.0;
    } else {
      rtb_TmpRTBAtFunctionCallSubsyst = fmod(rtb_TmpRTBAtFunctionCallSubsyst,
        256.0);
    }

    rtb_VectorConcatenate[1] = (uint8_T)(rtb_TmpRTBAtFunctionCallSubsyst < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-rtb_TmpRTBAtFunctionCallSubsyst :
      (int32_T)(uint8_T)rtb_TmpRTBAtFunctionCallSubsyst);

    /* End of DataTypeConversion: '<S6>/Data Type Conversion2' */

    /* UnitDelay: '<S8>/Output' */
    rtb_FixPtSum1 = Can_send_receive_DW.Output_DSTATE_c;

    /* Switch: '<S12>/FixPt Switch' incorporates:
     *  Constant: '<S11>/FixPt Constant'
     *  Constant: '<S12>/Constant'
     *  Sum: '<S11>/FixPt Sum1'
     *  UnitDelay: '<S8>/Output'
     */
    if ((uint8_T)(Can_send_receive_DW.Output_DSTATE_c + 1U) > 5) {
      Can_send_receive_DW.Output_DSTATE_c = 0U;
    } else {
      Can_send_receive_DW.Output_DSTATE_c++;
    }

    /* End of Switch: '<S12>/FixPt Switch' */

    /* LookupNDDirect: '<S6>/Direct Lookup Table (n-D)1' incorporates:
     *  DataTypeConversion: '<S6>/Data Type Conversion1'
     *
     * About '<S6>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (rtb_FixPtSum1 > 5) {
      tmp = 5;
    } else {
      tmp = rtb_FixPtSum1;
    }

    /* DataTypeConversion: '<S6>/Data Type Conversion4' incorporates:
     *  LookupNDDirect: '<S6>/Direct Lookup Table (n-D)1'
     *
     * About '<S6>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    rtb_TmpRTBAtFunctionCallSubsyst = floor(Can_send_receive_ConstP.pooled1[tmp]);
    if (rtIsNaN(rtb_TmpRTBAtFunctionCallSubsyst) || rtIsInf
        (rtb_TmpRTBAtFunctionCallSubsyst)) {
      rtb_TmpRTBAtFunctionCallSubsyst = 0.0;
    } else {
      rtb_TmpRTBAtFunctionCallSubsyst = fmod(rtb_TmpRTBAtFunctionCallSubsyst,
        256.0);
    }

    rtb_VectorConcatenate[2] = (uint8_T)(rtb_TmpRTBAtFunctionCallSubsyst < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-rtb_TmpRTBAtFunctionCallSubsyst :
      (int32_T)(uint8_T)rtb_TmpRTBAtFunctionCallSubsyst);

    /* End of DataTypeConversion: '<S6>/Data Type Conversion4' */

    /* MATLABSystem: '<S6>/FDCAN Write2' */
    MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_g.MW_FDCAN_HANDLE,
      &rtb_VectorConcatenate[0], 529U, 0, 0, 3U, 1000U, 0, 0, &fifoLevel);

    /* MATLABSystem: '<S6>/FDCAN Write3' */
    MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj.MW_FDCAN_HANDLE,
      &rtb_VectorConcatenate[0], 528U, 0, 0, 3U, 1000U, 0, 0, &fifoLevel);
  }

  /* End of RelationalOperator: '<S1>/GreaterThan' */
  /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator4' */
}

/* Model initialize function */
void Can_send_receive_initialize(void)
{
  /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S26>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* System initialize for function-call system: '<Root>/Function-Call Subsystem' */

  /* Start for S-Function (scanfdunpack): '<S2>/CAN FD Unpack2' */

  /*-----------S-Function Block: <S2>/CAN FD Unpack2 -----------------*/

  /* Start for S-Function (scanfdunpack): '<S2>/CAN FD Unpack1' */

  /*-----------S-Function Block: <S2>/CAN FD Unpack1 -----------------*/

  /* Start for MATLABSystem: '<S2>/FDCAN Read1' */
  Can_send_receive_DW.obj_d.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_d.isInitialized = 1;
  Can_send_receive_DW.obj_d.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Can_send_receive_DW.obj_d.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_d.isSetupComplete = true;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem1'
   */
  /* Start for MATLABSystem: '<S5>/FDCAN Write1' */
  Can_send_receive_DW.obj_l.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_l.isInitialized = 1;
  Can_send_receive_DW.obj_l.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Can_send_receive_DW.obj_l.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_l.isSetupComplete = true;

  /* Start for MATLABSystem: '<S5>/FDCAN Write3' */
  Can_send_receive_DW.obj_h.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_h.isInitialized = 1;
  Can_send_receive_DW.obj_h.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Can_send_receive_DW.obj_h.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_h.isSetupComplete = true;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S6>/FDCAN Write2' */
  Can_send_receive_DW.obj_g.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_g.isInitialized = 1;
  Can_send_receive_DW.obj_g.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Can_send_receive_DW.obj_g.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<S6>/FDCAN Write3' */
  Can_send_receive_DW.obj.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj.isInitialized = 1;
  Can_send_receive_DW.obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Can_send_receive_DW.obj.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj.isSetupComplete = true;

  /* End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' */
}

/* Model terminate function */
void Can_send_receive_terminate(void)
{
  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S26>/Hardware Interrupt' */

  /* Terminate for S-Function (HardwareInterrupt_sfun): '<S26>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* Termination for function-call system: '<Root>/Function-Call Subsystem' */

  /* Terminate for MATLABSystem: '<S2>/FDCAN Read1' */
  if (!Can_send_receive_DW.obj_d.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_d.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_d.isInitialized == 1) &&
        Can_send_receive_DW.obj_d.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_d.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/FDCAN Read1' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S26>/Hardware Interrupt' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem1'
   */
  /* Terminate for MATLABSystem: '<S5>/FDCAN Write1' */
  if (!Can_send_receive_DW.obj_l.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_l.isInitialized == 1) &&
        Can_send_receive_DW.obj_l.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_l.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S5>/FDCAN Write1' */

  /* Terminate for MATLABSystem: '<S5>/FDCAN Write3' */
  if (!Can_send_receive_DW.obj_h.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_h.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_h.isInitialized == 1) &&
        Can_send_receive_DW.obj_h.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_h.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S5>/FDCAN Write3' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* Terminate for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  /* Terminate for MATLABSystem: '<S6>/FDCAN Write2' */
  if (!Can_send_receive_DW.obj_g.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_g.isInitialized == 1) &&
        Can_send_receive_DW.obj_g.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_g.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S6>/FDCAN Write2' */

  /* Terminate for MATLABSystem: '<S6>/FDCAN Write3' */
  if (!Can_send_receive_DW.obj.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj.isInitialized == 1) &&
        Can_send_receive_DW.obj.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S6>/FDCAN Write3' */
  /* End of Terminate for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' */
}

void Can_send_receive_configure_interrupts(void)
{
  /* Register interrupt service routine */
  MW_NVIC_ConfigureIRQ(35,&FDCAN2_IT0_IRQHandler,3);
  MW_NVIC_EnableIRQ(35);
}

/* Hardware Interrupt Block: '<S26>/Hardware Interrupt' */
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
        /* S-Function (HardwareInterrupt_sfun): '<S26>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/Function-Call Subsystem' */
        {
          real_T tmp;
          uint32_T fifoLevel;

          /* MATLABSystem: '<S2>/FDCAN Read1' */
          MW_FDCAN_ReceiveMessage(Can_send_receive_DW.obj_d.MW_FDCAN_HANDLE,
            (uint8_T)FDCAN_RX_FIFO0, &Can_send_receive_B.FDCANRead1.Data[0],
            &Can_send_receive_B.FDCANRead1.ID,
            &Can_send_receive_B.FDCANRead1.Extended,
            &Can_send_receive_B.FDCANRead1.Remote,
            &Can_send_receive_B.FDCANRead1.Length,
            &Can_send_receive_B.FDCANRead1.DLC,
            &Can_send_receive_B.FDCANRead1.BRS,
            &Can_send_receive_B.FDCANRead1.ProtocolMode, 1U, &fifoLevel);
          Can_send_receive_B.FDCANRead1.Error = 0U;
          Can_send_receive_B.FDCANRead1.ESI = 0U;
          Can_send_receive_B.FDCANRead1.Reserved = 0U;
          Can_send_receive_B.FDCANRead1.Timestamp = 0.0;

          /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack2' */
          {
            /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack2' */
            if ((3 == Can_send_receive_B.FDCANRead1.Length) &&
                (Can_send_receive_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((4 == Can_send_receive_B.FDCANRead1.ID) && (0U ==
                   Can_send_receive_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Can_send_receive_B.CANFDUnpack2[0],
                              Can_send_receive_B.FDCANRead1.Data,
                              3 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S2>/Byte Unpack' */

          /* Unpack: <S2>/Byte Unpack */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Can_send_receive_B.CANFDUnpack2[1];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Can_send_receive_B.ByteUnpack, (void *)&(((uint8_T *)
                       unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
            }
          }

          /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack1' */
          {
            /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack1' */
            if ((3 == Can_send_receive_B.FDCANRead1.Length) &&
                (Can_send_receive_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((401 == Can_send_receive_B.FDCANRead1.ID) && (0U ==
                   Can_send_receive_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Can_send_receive_B.CANFDUnpack1[0],
                              Can_send_receive_B.FDCANRead1.Data,
                              3 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S2>/Byte Unpack1' */

          /* Unpack: <S2>/Byte Unpack1 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Can_send_receive_B.CANFDUnpack1[1];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Can_send_receive_B.ByteUnpack1, (void *)&(((uint8_T
                        *)unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
            }
          }

          /* DataTypeConversion: '<S2>/Data Type Conversion' */
          Can_send_receive_B.DataTypeConversion = Can_send_receive_B.ByteUnpack;

          /* DataTypeConversion: '<S2>/Data Type Conversion3' */
          Can_send_receive_B.BrakesPercentage = Can_send_receive_B.CANFDUnpack2
            [0];

          /* SwitchCase: '<S2>/Switch Case' */
          tmp = trunc(Can_send_receive_B.BrakesPercentage);
          if (rtIsNaN(tmp) || rtIsInf(tmp)) {
            tmp = 0.0;
          } else {
            tmp = fmod(tmp, 4.294967296E+9);
          }

          switch (tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)tmp)
          {
           case 235:
            /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S21>/Action Port'
             */
            /* SignalConversion generated from: '<S21>/In1' */
            Can_send_receive_B.In1_g20as = Can_send_receive_B.DataTypeConversion;

            /* End of Outputs for SubSystem: '<S2>/If Action Subsystem6' */
            break;

           case 74:
           case 73:
            break;

           case 168:
            /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S19>/Action Port'
             */
            /* SignalConversion generated from: '<S19>/In1' */
            Can_send_receive_B.In1_g20a = Can_send_receive_B.DataTypeConversion;

            /* End of Outputs for SubSystem: '<S2>/If Action Subsystem4' */
            break;

           case 95:
            /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S17>/Action Port'
             */
            /* SignalConversion generated from: '<S17>/In1' */
            Can_send_receive_B.In1_g20 = Can_send_receive_B.DataTypeConversion;

            /* End of Outputs for SubSystem: '<S2>/If Action Subsystem2' */
            break;

           case 138:
            /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S13>/Action Port'
             */
            /* SignalConversion generated from: '<S13>/In1' */
            Can_send_receive_B.In1_g2 = Can_send_receive_B.DataTypeConversion;

            /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
            break;
          }

          /* End of SwitchCase: '<S2>/Switch Case' */

          /* SwitchCase: '<S2>/Switch Case1' incorporates:
           *  DataTypeConversion: '<S2>/Data Type Conversion1'
           */
          switch (Can_send_receive_B.CANFDUnpack1[0]) {
           case 235:
            /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem12' incorporates:
             *  ActionPort: '<S16>/Action Port'
             */
            /* SignalConversion generated from: '<S16>/In1' */
            Can_send_receive_B.In1_g = Can_send_receive_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S2>/If Action Subsystem12' */
            break;

           case 74:
           case 73:
           case 95:
           case 138:
            break;

           case 168:
            /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem10' incorporates:
             *  ActionPort: '<S14>/Action Port'
             */
            /* SignalConversion generated from: '<S14>/In1' */
            Can_send_receive_B.In1 = Can_send_receive_B.ByteUnpack1;

            /* End of Outputs for SubSystem: '<S2>/If Action Subsystem10' */
            break;
          }

          /* End of SwitchCase: '<S2>/Switch Case1' */
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S26>/Hardware Interrupt' */

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_e =
          Can_send_receive_B.In1_g20as;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystemOu =
          Can_send_receive_B.BrakesPercentage;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_i =
          Can_send_receive_B.DataTypeConversion;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_a =
          Can_send_receive_B.In1_g20a;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_g =
          Can_send_receive_B.In1_g20;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_k =
          Can_send_receive_B.In1_g2;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_m =
          Can_send_receive_B.In1_g;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_h =
          Can_send_receive_B.In1;
      }
    }
  }

  __ISB();
  __DSB();
}

void Can_send_receive_unconfigure_interrupts (void)
{
  MW_NVIC_DisableIRQ(35);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
