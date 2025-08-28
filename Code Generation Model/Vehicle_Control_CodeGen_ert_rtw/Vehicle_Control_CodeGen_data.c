/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Vehicle_Control_CodeGen_data.c
 *
 * Code generated for Simulink model 'Vehicle_Control_CodeGen'.
 *
 * Model version                  : 1.62
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Aug 28 17:03:56 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Vehicle_Control_CodeGen.h"

/* Block parameters (default storage) */
P_Vehicle_Control_CodeGen_T Vehicle_Control_CodeGen_P = {
  /* Mask Parameter: DiscretePIDController1_D
   * Referenced by: '<S78>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_D_e
   * Referenced by: '<S130>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_I
   * Referenced by: '<S82>/Integral Gain'
   */
  0.544217300579932,

  /* Mask Parameter: DiscretePIDController1_I_o
   * Referenced by: '<S134>/Integral Gain'
   */
  0.544217300579932,

  /* Mask Parameter: DiscretePIDController1_InitialC
   * Referenced by: '<S80>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_Initia_f
   * Referenced by: '<S132>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_Initia_h
   * Referenced by: '<S85>/Integrator'
   */
  10.0,

  /* Mask Parameter: DiscretePIDController1_Initia_j
   * Referenced by: '<S137>/Integrator'
   */
  10.0,

  /* Mask Parameter: DiscretePIDController1_N
   * Referenced by: '<S88>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController1_N_e
   * Referenced by: '<S140>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController1_P
   * Referenced by: '<S90>/Proportional Gain'
   */
  0.000544217300579932,

  /* Mask Parameter: DiscretePIDController1_P_i
   * Referenced by: '<S142>/Proportional Gain'
   */
  0.000544217300579932,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S50>/Constant'
   */
  5.0,

  /* Mask Parameter: CompareToConstant_const_d
   * Referenced by: '<S102>/Constant'
   */
  5.0,

  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S15>/FixPt Switch'
   */
  5U,

  /* Mask Parameter: WrapToZero_Threshold_e
   * Referenced by: '<S17>/FixPt Switch'
   */
  5U,

  /* Expression: 3.6
   * Referenced by: '<S48>/Constant2'
   */
  3.6,

  /* Expression: 1
   * Referenced by: '<S48>/Sine Wave1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S48>/Sine Wave1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S48>/Sine Wave1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S48>/Sine Wave1'
   */
  0.0,

  /* Expression: 6
   * Referenced by: '<S48>/Constant12'
   */
  6.0,

  /* Expression: 0
   * Referenced by: '<S48>/Constant7'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S48>/Constant6'
   */
  20.0,

  /* Expression: 10
   * Referenced by: '<S48>/Constant4'
   */
  10.0,

  /* Expression: 100
   * Referenced by: '<S48>/Constant5'
   */
  100.0,

  /* Expression: 100
   * Referenced by: '<S48>/Saturation'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S48>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S48>/Constant11'
   */
  0.0,

  /* Expression: 0.65
   * Referenced by: '<S48>/Scale'
   */
  0.65,

  /* Expression: 90
   * Referenced by: '<S48>/Constant18'
   */
  90.0,

  /* Expression: 60
   * Referenced by: '<S48>/Constant14'
   */
  60.0,

  /* Expression: 5
   * Referenced by: '<S48>/Constant19'
   */
  5.0,

  /* Expression: 50
   * Referenced by: '<S48>/Constant16'
   */
  50.0,

  /* Expression: 30
   * Referenced by: '<S48>/Constant13'
   */
  30.0,

  /* Expression: 10
   * Referenced by: '<S48>/Constant17'
   */
  10.0,

  /* Expression: 2
   * Referenced by: '<S48>/Constant26'
   */
  2.0,

  /* Expression: 0.01
   * Referenced by: '<S48>/Constant15'
   */
  0.01,

  /* Expression: 580
   * Referenced by: '<S48>/Constant20'
   */
  580.0,

  /* Expression: 0
   * Referenced by: '<S48>/Constant21'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S48>/Constant28'
   */
  0.0,

  /* Expression: 3.6
   * Referenced by: '<S49>/Constant2'
   */
  3.6,

  /* Expression: 1
   * Referenced by: '<S49>/Sine Wave1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S49>/Sine Wave1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S49>/Sine Wave1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S49>/Sine Wave1'
   */
  0.0,

  /* Expression: 6
   * Referenced by: '<S49>/Constant12'
   */
  6.0,

  /* Expression: 0
   * Referenced by: '<S49>/Constant7'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S49>/Constant6'
   */
  20.0,

  /* Expression: 10
   * Referenced by: '<S49>/Constant4'
   */
  10.0,

  /* Expression: 100
   * Referenced by: '<S49>/Constant5'
   */
  100.0,

  /* Expression: 100
   * Referenced by: '<S49>/Saturation'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S49>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S49>/Constant11'
   */
  0.0,

  /* Expression: 0.65
   * Referenced by: '<S49>/Scale'
   */
  0.65,

  /* Expression: 90
   * Referenced by: '<S49>/Constant18'
   */
  90.0,

  /* Expression: 60
   * Referenced by: '<S49>/Constant14'
   */
  60.0,

  /* Expression: 5
   * Referenced by: '<S49>/Constant19'
   */
  5.0,

  /* Expression: 50
   * Referenced by: '<S49>/Constant16'
   */
  50.0,

  /* Expression: 30
   * Referenced by: '<S49>/Constant13'
   */
  30.0,

  /* Expression: 10
   * Referenced by: '<S49>/Constant17'
   */
  10.0,

  /* Expression: 2
   * Referenced by: '<S49>/Constant26'
   */
  2.0,

  /* Expression: 0.01
   * Referenced by: '<S49>/Constant15'
   */
  0.01,

  /* Expression: 580
   * Referenced by: '<S49>/Constant20'
   */
  580.0,

  /* Expression: 0
   * Referenced by: '<S49>/Constant21'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S49>/Constant28'
   */
  0.0,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S7>/Out1'
   */
  0.0,

  /* Computed Parameter: Out2_Y0
   * Referenced by: '<S7>/Out2'
   */
  0.0,

  /* Expression: 590
   * Referenced by: '<S48>/Relay'
   */
  590.0,

  /* Expression: 585
   * Referenced by: '<S48>/Relay'
   */
  585.0,

  /* Expression: 0
   * Referenced by: '<S48>/Relay'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S48>/Relay'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S48>/Switch2'
   */
  0.5,

  /* Expression: 0.75
   * Referenced by: '<S48>/Constant23'
   */
  0.75,

  /* Expression: 22
   * Referenced by: '<S48>/Constant27'
   */
  22.0,

  /* Expression: 14
   * Referenced by: '<S48>/Memory1'
   */
  14.0,

  /* Expression: inf
   * Referenced by: '<S48>/Saturation5'
   */
  INFINITY,

  /* Expression: 0
   * Referenced by: '<S48>/Saturation5'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S48>/Gain'
   */
  -1.0,

  /* Expression: 2
   * Referenced by: '<S48>/Constant'
   */
  2.0,

  /* Expression: inf
   * Referenced by: '<S48>/Saturation3'
   */
  INFINITY,

  /* Expression: 0
   * Referenced by: '<S48>/Saturation3'
   */
  0.0,

  /* Expression: 600
   * Referenced by: '<S48>/IC1'
   */
  600.0,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S80>/Filter'
   */
  0.002,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S85>/Integrator'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S48>/Gain1'
   */
  -1.0,

  /* Expression: 0.75
   * Referenced by: '<S49>/Constant23'
   */
  0.75,

  /* Expression: 22
   * Referenced by: '<S49>/Constant27'
   */
  22.0,

  /* Expression: 14
   * Referenced by: '<S49>/Memory1'
   */
  14.0,

  /* Expression: inf
   * Referenced by: '<S49>/Saturation5'
   */
  INFINITY,

  /* Expression: 0
   * Referenced by: '<S49>/Saturation5'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S49>/Gain'
   */
  -1.0,

  /* Expression: 590
   * Referenced by: '<S49>/Relay'
   */
  590.0,

  /* Expression: 585
   * Referenced by: '<S49>/Relay'
   */
  585.0,

  /* Expression: 0
   * Referenced by: '<S49>/Relay'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S49>/Relay'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S49>/Switch2'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S49>/Constant'
   */
  2.0,

  /* Expression: inf
   * Referenced by: '<S49>/Saturation3'
   */
  INFINITY,

  /* Expression: 0
   * Referenced by: '<S49>/Saturation3'
   */
  0.0,

  /* Expression: 600
   * Referenced by: '<S49>/IC2'
   */
  600.0,

  /* Computed Parameter: Filter_gainval_p
   * Referenced by: '<S132>/Filter'
   */
  0.002,

  /* Computed Parameter: Integrator_gainval_f
   * Referenced by: '<S137>/Integrator'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S49>/Gain1'
   */
  -1.0,

  /* Expression: 144
   * Referenced by: '<S2>/Constant1'
   */
  144.0,

  /* Expression: 144
   * Referenced by: '<S2>/Constant3'
   */
  144.0,

  /* Expression: 61
   * Referenced by: '<S11>/Constant4'
   */
  61.0,

  /* Expression: [235 74 168 73 95 138]
   * Referenced by: '<S11>/Direct Lookup Table (n-D)'
   */
  { 235.0, 74.0, 168.0, 73.0, 95.0, 138.0 },

  /* Expression: [235 74 168 73 95 138]
   * Referenced by: '<S11>/Direct Lookup Table (n-D)1'
   */
  { 235.0, 74.0, 168.0, 73.0, 95.0, 138.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Constant1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/Constant2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/Constant'
   */
  1.0,

  /* Expression: 12
   * Referenced by: '<S1>/Constant3'
   */
  12.0,

  /* Computed Parameter: Out14_Y0
   * Referenced by: '<S4>/Out14'
   */
  0.0,

  /* Computed Parameter: Out15_Y0
   * Referenced by: '<S4>/Out15'
   */
  0.0,

  /* Computed Parameter: Out16_Y0
   * Referenced by: '<S4>/Out16'
   */
  0.0,

  /* Computed Parameter: Out21_Y0
   * Referenced by: '<S4>/Out21'
   */
  0.0,

  /* Computed Parameter: Out22_Y0
   * Referenced by: '<S4>/Out22'
   */
  0.0,

  /* Computed Parameter: Out23_Y0
   * Referenced by: '<S4>/Out23'
   */
  0.0,

  /* Computed Parameter: Out24_Y0
   * Referenced by: '<S4>/Out24'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant14'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant15'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant5'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant6'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant10'
   */
  25000.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant11'
   */
  25000.0,

  /* Expression: 0.10472
   * Referenced by: '<Root>/Constant16'
   */
  0.10472,

  /* Expression: 10
   * Referenced by: '<Root>/Constant3'
   */
  10.0,

  /* Expression: 0.10472
   * Referenced by: '<Root>/Constant17'
   */
  0.10472,

  /* Expression: 10
   * Referenced by: '<Root>/Constant4'
   */
  10.0,

  /* Expression: 50000
   * Referenced by: '<Root>/Power Limit'
   */
  50000.0,

  /* Expression: 50
   * Referenced by: '<Root>/Constant8'
   */
  50.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant2'
   */
  25000.0,

  /* Expression: 580
   * Referenced by: '<Root>/Constant20'
   */
  580.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant7'
   */
  25000.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant12'
   */
  25000.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant13'
   */
  25000.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch6'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch3'
   */
  0.5,

  /* Expression: 0
   * Referenced by:
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch4'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch1'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory5'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch5'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch7'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch8'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch9'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch11'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch12'
   */
  0.5,

  /* Computed Parameter: Out1_Y0_a
   * Referenced by: '<S26>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_p
   * Referenced by: '<S25>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_g
   * Referenced by: '<S24>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_k
   * Referenced by: '<S23>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_pe
   * Referenced by: '<S22>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_j
   * Referenced by: '<S18>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_n
   * Referenced by: '<S21>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_o
   * Referenced by: '<S20>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_m
   * Referenced by: '<S19>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_b
   * Referenced by: '<S29>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_i
   * Referenced by: '<S28>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_h
   * Referenced by: '<S27>/Out1'
   */
  0U,

  /* Computed Parameter: Out17_Y0
   * Referenced by: '<S4>/Out17'
   */
  0U,

  /* Computed Parameter: Out18_Y0
   * Referenced by: '<S4>/Out18'
   */
  0U,

  /* Computed Parameter: Out19_Y0
   * Referenced by: '<S4>/Out19'
   */
  0U,

  /* Computed Parameter: Out20_Y0
   * Referenced by: '<S4>/Out20'
   */
  0U,

  /* Computed Parameter: TmpRTBAtFunctionCallSubsystemOu
   * Referenced by:
   */
  0U,

  /* Computed Parameter: TmpRTBAtFunctionCallSubsystem_j
   * Referenced by:
   */
  0U,

  /* Computed Parameter: TmpRTBAtFunctionCallSubsyste_jx
   * Referenced by:
   */
  0U,

  /* Computed Parameter: TmpRTBAtFunctionCallSubsyst_jxk
   * Referenced by:
   */
  0U,

  /* Computed Parameter: TmpRTBAtFunctionCallSubsys_jxkx
   * Referenced by:
   */
  0U,

  /* Computed Parameter: TmpRTBAtFunctionCallSubsy_jxkxj
   * Referenced by:
   */
  0U,

  /* Computed Parameter: TmpRTBAtFunctionCallSubs_jxkxj0
   * Referenced by:
   */
  0U,

  /* Computed Parameter: TmpRTBAtFunctionCallSub_jxkxj0l
   * Referenced by:
   */
  0U,

  /* Computed Parameter: Out1_Y0_on
   * Referenced by: '<S4>/Out1'
   */
  false,

  /* Computed Parameter: Out2_Y0_o
   * Referenced by: '<S4>/Out2'
   */
  false,

  /* Computed Parameter: Out3_Y0
   * Referenced by: '<S4>/Out3'
   */
  false,

  /* Computed Parameter: Out4_Y0
   * Referenced by: '<S4>/Out4'
   */
  false,

  /* Computed Parameter: Out5_Y0
   * Referenced by: '<S4>/Out5'
   */
  false,

  /* Computed Parameter: Out6_Y0
   * Referenced by: '<S4>/Out6'
   */
  false,

  /* Computed Parameter: Out7_Y0
   * Referenced by: '<S4>/Out7'
   */
  false,

  /* Computed Parameter: Out8_Y0
   * Referenced by: '<S4>/Out8'
   */
  false,

  /* Computed Parameter: Out9_Y0
   * Referenced by: '<S4>/Out9'
   */
  false,

  /* Computed Parameter: Out10_Y0
   * Referenced by: '<S4>/Out10'
   */
  false,

  /* Computed Parameter: Out11_Y0
   * Referenced by: '<S4>/Out11'
   */
  false,

  /* Computed Parameter: Out12_Y0
   * Referenced by: '<S4>/Out12'
   */
  false,

  /* Computed Parameter: Out13_Y0
   * Referenced by: '<S4>/Out13'
   */
  false,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S48>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting_n
   * Referenced by: '<S49>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S15>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_dp
   * Referenced by: '<S17>/Constant'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S12>/Output'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition_n
   * Referenced by: '<S13>/Output'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S14>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: FixPtConstant_Value_n
   * Referenced by: '<S16>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<Root>/Manual Switch2'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting_h
   * Referenced by: '<Root>/Manual Switch1'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
