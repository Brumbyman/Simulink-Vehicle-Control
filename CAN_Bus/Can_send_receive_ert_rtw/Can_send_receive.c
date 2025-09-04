/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive.c
 *
 * Code generated for Simulink model 'Can_send_receive'.
 *
 * Model version                  : 1.64
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Sep  4 11:10:08 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Can_send_receive.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "Can_send_receive_private.h"

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

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* MATLABSystem: '<S3>/FDCAN Write3' incorporates:
   *  Concatenate: '<S3>/Vector Concatenate'
   * */
  MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_c.MW_FDCAN_HANDLE,
    &Can_send_receive_ConstB.VectorConcatenate_j[0], 8U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* MATLABSystem: '<S3>/FDCAN Write1' incorporates:
   *  Concatenate: '<S3>/Vector Concatenate1'
   * */
  MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_m.MW_FDCAN_HANDLE,
    &Can_send_receive_ConstB.VectorConcatenate1[0], 9U, 0, 0, 8U, 1000U, 0, 0,
    &fifoLevel);

  /* S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem3'
   */
  /* MATLABSystem: '<S4>/FDCAN Write3' incorporates:
   *  Concatenate: '<S4>/Vector Concatenate'
   * */
  MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_a.MW_FDCAN_HANDLE,
    &Can_send_receive_ConstB.VectorConcatenate[0], 210U, 0, 0, 5U, 1000U, 0, 0,
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
   *  EnablePort: '<S5>/Enable'
   */
  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant3'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (!(Can_send_receive_DW.UnitDelay_DSTATE > 12.0)) {
    /* SignalConversion generated from: '<S5>/Vector Concatenate' */
    rtb_VectorConcatenate[0] = Can_send_receive_ConstB.DataTypeConversion3_e;

    /* UnitDelay: '<S6>/Output' */
    rtb_FixPtSum1 = Can_send_receive_DW.Output_DSTATE;

    /* Switch: '<S9>/FixPt Switch' incorporates:
     *  Constant: '<S8>/FixPt Constant'
     *  Constant: '<S9>/Constant'
     *  Sum: '<S8>/FixPt Sum1'
     *  UnitDelay: '<S6>/Output'
     */
    if ((uint8_T)(Can_send_receive_DW.Output_DSTATE + 1U) > 5) {
      Can_send_receive_DW.Output_DSTATE = 0U;
    } else {
      Can_send_receive_DW.Output_DSTATE++;
    }

    /* End of Switch: '<S9>/FixPt Switch' */

    /* LookupNDDirect: '<S5>/Direct Lookup Table (n-D)' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion16'
     *
     * About '<S5>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (rtb_FixPtSum1 > 5) {
      tmp_0 = 5;
    } else {
      tmp_0 = rtb_FixPtSum1;
    }

    /* DataTypeConversion: '<S5>/Data Type Conversion2' incorporates:
     *  LookupNDDirect: '<S5>/Direct Lookup Table (n-D)'
     *
     * About '<S5>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    tmp = floor(Can_send_receive_ConstP.pooled4[tmp_0]);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[1] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S5>/Data Type Conversion2' */

    /* UnitDelay: '<S7>/Output' */
    rtb_FixPtSum1 = Can_send_receive_DW.Output_DSTATE_c;

    /* Switch: '<S11>/FixPt Switch' incorporates:
     *  Constant: '<S10>/FixPt Constant'
     *  Constant: '<S11>/Constant'
     *  Sum: '<S10>/FixPt Sum1'
     *  UnitDelay: '<S7>/Output'
     */
    if ((uint8_T)(Can_send_receive_DW.Output_DSTATE_c + 1U) > 5) {
      Can_send_receive_DW.Output_DSTATE_c = 0U;
    } else {
      Can_send_receive_DW.Output_DSTATE_c++;
    }

    /* End of Switch: '<S11>/FixPt Switch' */

    /* LookupNDDirect: '<S5>/Direct Lookup Table (n-D)1' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion1'
     *
     * About '<S5>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    if (rtb_FixPtSum1 > 5) {
      tmp_0 = 5;
    } else {
      tmp_0 = rtb_FixPtSum1;
    }

    /* DataTypeConversion: '<S5>/Data Type Conversion4' incorporates:
     *  LookupNDDirect: '<S5>/Direct Lookup Table (n-D)1'
     *
     * About '<S5>/Direct Lookup Table (n-D)1':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     *   */
    tmp = floor(Can_send_receive_ConstP.pooled4[tmp_0]);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    rtb_VectorConcatenate[2] = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S5>/Data Type Conversion4' */

    /* MATLABSystem: '<S5>/FDCAN Write2' */
    MW_FDCAN_TransmitMessage(Can_send_receive_DW.obj_g.MW_FDCAN_HANDLE,
      &rtb_VectorConcatenate[0], 529U, 0, 0, 3U, 1000U, 0, 0, &fifoLevel);

    /* MATLABSystem: '<S5>/FDCAN Write3' */
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
  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Start for MATLABSystem: '<S3>/FDCAN Write3' */
  Can_send_receive_DW.obj_c.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_c.isInitialized = 1;
  Can_send_receive_DW.obj_c.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Can_send_receive_DW.obj_c.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_c.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/FDCAN Write1' */
  Can_send_receive_DW.obj_m.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_m.isInitialized = 1;
  Can_send_receive_DW.obj_m.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Can_send_receive_DW.obj_m.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_m.isSetupComplete = true;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem3'
   */
  /* Start for MATLABSystem: '<S4>/FDCAN Write3' */
  Can_send_receive_DW.obj_a.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_a.isInitialized = 1;
  Can_send_receive_DW.obj_a.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Can_send_receive_DW.obj_a.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_a.isSetupComplete = true;

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S5>/FDCAN Write2' */
  Can_send_receive_DW.obj_g.matlabCodegenIsDeleted = false;
  Can_send_receive_DW.obj_g.isInitialized = 1;
  Can_send_receive_DW.obj_g.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(Can_send_receive_DW.obj_g.MW_FDCAN_HANDLE);
  Can_send_receive_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<S5>/FDCAN Write3' */
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
  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Terminate for MATLABSystem: '<S3>/FDCAN Write3' */
  if (!Can_send_receive_DW.obj_c.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_c.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_c.isInitialized == 1) &&
        Can_send_receive_DW.obj_c.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_c.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/FDCAN Write3' */

  /* Terminate for MATLABSystem: '<S3>/FDCAN Write1' */
  if (!Can_send_receive_DW.obj_m.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_m.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_m.isInitialized == 1) &&
        Can_send_receive_DW.obj_m.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_m.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/FDCAN Write1' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem3'
   */
  /* Terminate for MATLABSystem: '<S4>/FDCAN Write3' */
  if (!Can_send_receive_DW.obj_a.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_a.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_a.isInitialized == 1) &&
        Can_send_receive_DW.obj_a.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_a.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/FDCAN Write3' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' incorporates:
   *  SubSystem: '<Root>/10 HZ Send1'
   */
  /* Terminate for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  /* Terminate for MATLABSystem: '<S5>/FDCAN Write2' */
  if (!Can_send_receive_DW.obj_g.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj_g.isInitialized == 1) &&
        Can_send_receive_DW.obj_g.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj_g.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S5>/FDCAN Write2' */

  /* Terminate for MATLABSystem: '<S5>/FDCAN Write3' */
  if (!Can_send_receive_DW.obj.matlabCodegenIsDeleted) {
    Can_send_receive_DW.obj.matlabCodegenIsDeleted = true;
    if ((Can_send_receive_DW.obj.isInitialized == 1) &&
        Can_send_receive_DW.obj.isSetupComplete) {
      MW_FDCAN_Close(Can_send_receive_DW.obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S5>/FDCAN Write3' */
  /* End of Terminate for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator4' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
