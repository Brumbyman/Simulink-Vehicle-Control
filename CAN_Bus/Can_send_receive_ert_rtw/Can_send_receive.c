/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive.c
 *
 * Code generated for Simulink model 'Can_send_receive'.
 *
 * Model version                  : 1.58
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Aug 27 15:55:00 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Can_send_receive.h"
#include "Can_send_receive_private.h"
#include "rtwtypes.h"
#include <math.h>
#include "rt_nonfinite.h"

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
  real_T tmp;
  int32_T tmp_0;
  uint32_T fifoLevel;
  uint8_T rtb_VectorConcatenate[3];
  uint8_T rtb_FixPtSum1;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem1' */
  Can_send_receive_B.TmpRTBAtFunctionCallSubsystem1O =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem1O;

  /* RateTransition generated from: '<Root>/Function-Call Subsystem1' */
  Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_d =
    Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_l;

  /* S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem2'
   */
  /* SignalConversion generated from: '<S5>/Vector Concatenate1' incorporates:
   *  Concatenate: '<S5>/Vector Concatenate1'
   */
  Can_send_receive_B.VectorConcatenate1[0] = Can_send_receive_ConstB.BytePack4[0];

  /* SignalConversion generated from: '<S5>/Vector Concatenate1' incorporates:
   *  Concatenate: '<S5>/Vector Concatenate1'
   */
  Can_send_receive_B.VectorConcatenate1[2] = Can_send_receive_ConstB.BytePack5[0];

  /* SignalConversion generated from: '<S5>/Vector Concatenate1' incorporates:
   *  Concatenate: '<S5>/Vector Concatenate1'
   */
  Can_send_receive_B.VectorConcatenate1[1] = Can_send_receive_ConstB.BytePack4[1];

  /* SignalConversion generated from: '<S5>/Vector Concatenate1' incorporates:
   *  Concatenate: '<S5>/Vector Concatenate1'
   */
  Can_send_receive_B.VectorConcatenate1[3] = Can_send_receive_ConstB.BytePack5[1];

  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal6' */

  /* ReverseEndian: <S5>/Byte Reversal6 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal6)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.TmpRTBAtFunctionCallSubsystem1O)[0]);

  /* S-Function (reverseendian_svd): '<S5>/Byte Reversal7' */

  /* ReverseEndian: <S5>/Byte Reversal7 */

  /* 2 byte-wide input datatypes */
  ((uint16_T *)&Can_send_receive_B.ByteReversal7)[0] =
    SWAP16(((uint16_T *)&Can_send_receive_B.TmpRTBAtFunctionCallSubsystem_d)[0]);

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
  MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_a.MW_FDCAN_HANDLE,
    &Can_send_receive_B.VectorConcatenate1[0], 9U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* MATLABSystem: '<S5>/FDCAN Write3' incorporates:
   *  Concatenate: '<S5>/Vector Concatenate'
   * */
  MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_l.MW_FDCAN_HANDLE,
    &Can_send_receive_ConstB.VectorConcatenate[0], 8U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/10 HZ Send2'
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
    rtb_VectorConcatenate[0] = Can_send_receive_ConstB.DataTypeConversion3_k;

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
      tmp_0 = 5;
    } else {
      tmp_0 = rtb_FixPtSum1;
    }

    /* DataTypeConversion: '<S6>/Data Type Conversion2' incorporates:
     *  LookupNDDirect: '<S6>/Direct Lookup Table (n-D)'
     *
     * About '<S6>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    tmp = floor(Can_send_receive_ConstP.pooled1[tmp_0]);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[1] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S6>/Data Type Conversion2' */

    /* UnitDelay: '<S8>/Output' */
    rtb_FixPtSum1 = Can_send_receive_DW.Output_DSTATE_l;

    /* Switch: '<S12>/FixPt Switch' incorporates:
     *  Constant: '<S11>/FixPt Constant'
     *  Constant: '<S12>/Constant'
     *  Sum: '<S11>/FixPt Sum1'
     *  UnitDelay: '<S8>/Output'
     */
    if ((uint8_T)(Can_send_receive_DW.Output_DSTATE_l + 1U) > 5) {
      Can_send_receive_DW.Output_DSTATE_l = 0U;
    } else {
      Can_send_receive_DW.Output_DSTATE_l++;
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
      tmp_0 = 5;
    } else {
      tmp_0 = rtb_FixPtSum1;
    }

    /* DataTypeConversion: '<S6>/Data Type Conversion4' incorporates:
     *  LookupNDDirect: '<S6>/Direct Lookup Table (n-D)1'
     *
     * About '<S6>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    tmp = floor(Can_send_receive_ConstP.pooled1[tmp_0]);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[2] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S6>/Data Type Conversion4' */

    /* MATLABSystem: '<S6>/FDCAN Write2' */
    MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_c.MW_FDCAN_HANDLE,
      &rtb_VectorConcatenate[0], 529U, 0, 0, 3U, 1000U, 0, 0, &fifoLevel);

    /* MATLABSystem: '<S6>/FDCAN Write3' */
    MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj.MW_FDCAN_HANDLE,
      &rtb_VectorConcatenate[0], 528U, 0, 0, 3U, 1000U, 0, 0, &fifoLevel);
  }

  /* End of RelationalOperator: '<S1>/GreaterThan' */
  /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator3' */
}

/* Model initialize function */
void Can_send_receive_initialize(void)
{
  /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S28>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem1'
   */
  /* System initialize for function-call system: '<Root>/Function-Call Subsystem1' */

  /* Start for S-Function (scanfdunpack): '<S2>/CAN FD Unpack1' */

  /*-----------S-Function Block: <S2>/CAN FD Unpack1 -----------------*/

  /* Start for S-Function (scanfdunpack): '<S2>/CAN FD Unpack3' */

  /*-----------S-Function Block: <S2>/CAN FD Unpack3 -----------------*/

  /* Start for S-Function (scanfdunpack): '<S2>/CAN FD Unpack4' */

  /*-----------S-Function Block: <S2>/CAN FD Unpack4 -----------------*/

  /* Start for MATLABSystem: '<S2>/FDCAN Read1' */
  Can_send_receive_DW.obj_n.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_n.isInitialized = 1;
  Can_send_receive_DW.obj_n.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(Can_send_receive_DW.obj_n.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_n.isSetupComplete = true;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem2'
   */
  /* Start for MATLABSystem: '<S5>/FDCAN Write1' */
  Can_send_receive_DW.obj_a.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_a.isInitialized = 1;
  Can_send_receive_DW.obj_a.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(Can_send_receive_DW.obj_a.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_a.isSetupComplete = true;

  /* Start for MATLABSystem: '<S5>/FDCAN Write3' */
  Can_send_receive_DW.obj_l.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_l.isInitialized = 1;
  Can_send_receive_DW.obj_l.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(Can_send_receive_DW.obj_l.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_l.isSetupComplete = true;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/10 HZ Send2'
   */
  /* SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S6>/FDCAN Write2' */
  Can_send_receive_DW.obj_c.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_c.isInitialized = 1;
  Can_send_receive_DW.obj_c.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(Can_send_receive_DW.obj_c.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_c.isSetupComplete = true;

  /* Start for MATLABSystem: '<S6>/FDCAN Write3' */
  Can_send_receive_DW.obj.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj.isInitialized = 1;
  Can_send_receive_DW.obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(Can_send_receive_DW.obj.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj.isSetupComplete = true;

  /* End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator3' */
}

/* Model terminate function */
void Can_send_receive_terminate(void)
{
  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S28>/Hardware Interrupt' */

  /* Terminate for S-Function (HardwareInterrupt_sfun): '<S28>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem1'
   */
  /* Termination for function-call system: '<Root>/Function-Call Subsystem1' */

  /* Terminate for MATLABSystem: '<S2>/FDCAN Read1' */
  if (!Can_send_receive_DW.obj_n.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_n.isInitialized == 1) &&
        Can_send_receive_DW.obj_n.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_n.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/FDCAN Read1' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S28>/Hardware Interrupt' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem2'
   */
  /* Terminate for MATLABSystem: '<S5>/FDCAN Write1' */
  if (!Can_send_receive_DW.obj_a.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_a.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_a.isInitialized == 1) &&
        Can_send_receive_DW.obj_a.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_a.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S5>/FDCAN Write1' */

  /* Terminate for MATLABSystem: '<S5>/FDCAN Write3' */
  if (!Can_send_receive_DW.obj_l.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_l.isInitialized == 1) &&
        Can_send_receive_DW.obj_l.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_l.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S5>/FDCAN Write3' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator3' incorporates:
   *  SubSystem: '<Root>/10 HZ Send2'
   */
  /* Terminate for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  /* Terminate for MATLABSystem: '<S6>/FDCAN Write2' */
  if (!Can_send_receive_DW.obj_c.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_c.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_c.isInitialized == 1) &&
        Can_send_receive_DW.obj_c.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_c.MW_FDCAN_HANDLE);
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
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator3' */
}

void Can_send_receive_configure_interrupts(void)
{
  /* Register interrupt service routine */
  MW_NVIC_ConfigureIRQ(34,&FDCAN1_IT0_IRQHandler,3);
  MW_NVIC_EnableIRQ(34);
}

/* Hardware Interrupt Block: '<S28>/Hardware Interrupt' */
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
        /* S-Function (HardwareInterrupt_sfun): '<S28>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/Function-Call Subsystem1' */
        {
          uint32_T fifoLevel;

          /* MATLABSystem: '<S2>/FDCAN Read1' */
          MW_FDCAN_ReceiveMessage(Can_send_receive_DW.obj_n.MW_FDCAN_HANDLE,
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

          /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack1' */
          {
            /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack1' */
            if ((8 == Can_send_receive_B.FDCANRead1.Length) &&
                (Can_send_receive_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((1 == Can_send_receive_B.FDCANRead1.ID) && (0U ==
                   Can_send_receive_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Can_send_receive_B.FromPedalBoxtoVCU[0],
                              Can_send_receive_B.FDCANRead1.Data,
                              8 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S2>/Byte Unpack' */

          /* Unpack: <S2>/Byte Unpack */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Can_send_receive_B.FromPedalBoxtoVCU[4];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Can_send_receive_B.WheelSpeedFrontLeft, (void *)
                     &(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* S-Function (byte2any_svd): '<S2>/Byte Unpack1' */

          /* Unpack: <S2>/Byte Unpack1 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Can_send_receive_B.FromPedalBoxtoVCU[6];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Can_send_receive_B.WheelSpeedFrontRight, (void *)
                     &(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack3' */
          {
            /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack3' */
            if ((8 == Can_send_receive_B.FDCANRead1.Length) &&
                (Can_send_receive_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((4 == Can_send_receive_B.FDCANRead1.ID) && (0U ==
                   Can_send_receive_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Can_send_receive_B.BMS1[0],
                              Can_send_receive_B.FDCANRead1.Data,
                              8 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S2>/Byte Unpack2' */

          /* Unpack: <S2>/Byte Unpack2 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Can_send_receive_B.BMS1[0];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Can_send_receive_B.BMSCurrentSensor, (void *)
                     &(((uint8_T *)unpackData)[MW_inputPortOffset]),
                     MW_outputPortWidth);
            }
          }

          /* S-Function (byte2any_svd): '<S2>/Byte Unpack3' */

          /* Unpack: <S2>/Byte Unpack3 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Can_send_receive_B.BMS1[2];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Can_send_receive_B.BMSVoltage, (void *)&(((uint8_T *)
                       unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
            }
          }

          /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack4' */
          {
            /* S-Function (scanfdunpack): '<S2>/CAN FD Unpack4' */
            if ((8 == Can_send_receive_B.FDCANRead1.Length) &&
                (Can_send_receive_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
              if ((5 == Can_send_receive_B.FDCANRead1.ID) && (0U ==
                   Can_send_receive_B.FDCANRead1.Extended) ) {
                (void) memcpy(&Can_send_receive_B.BMS2[0],
                              Can_send_receive_B.FDCANRead1.Data,
                              8 * sizeof(uint8_T));
              }
            }
          }

          /* S-Function (byte2any_svd): '<S2>/Byte Unpack4' */

          /* Unpack: <S2>/Byte Unpack4 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Can_send_receive_B.BMS2[0];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Can_send_receive_B.DCL, (void *)&(((uint8_T *)
                       unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
            }
          }

          /* S-Function (byte2any_svd): '<S2>/Byte Unpack5' */

          /* Unpack: <S2>/Byte Unpack5 */
          {
            uint32_T MW_inputPortOffset = 0U;
            uint16_T MW_outputPortWidth = 0U;

            /* Packed input data type - uint8_T */
            void* unpackData = &Can_send_receive_B.BMS2[2];

            /* Unpacking the values to output 1 */
            /* Output data type - uint16_T, size - 1 */
            {
              MW_outputPortWidth = sizeof(uint16_T);
              memcpy((void*)&Can_send_receive_B.CCL, (void *)&(((uint8_T *)
                       unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
            }
          }
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S28>/Hardware Interrupt' */

        /* RateTransition generated from: '<Root>/Function-Call Subsystem1' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem1O =
          Can_send_receive_B.BMSCurrentSensor;

        /* RateTransition generated from: '<Root>/Function-Call Subsystem1' */
        Can_send_receive_DW.TmpRTBAtFunctionCallSubsystem_l =
          Can_send_receive_B.BMSVoltage;
      }
    }
  }

  __ISB();
  __DSB();
}

void Can_send_receive_unconfigure_interrupts (void)
{
  MW_NVIC_DisableIRQ(34);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
