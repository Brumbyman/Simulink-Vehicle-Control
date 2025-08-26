/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Vehicle_Control_CodeGen_data.c
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

/* Block parameters (default storage) */
P_Vehicle_Control_CodeGen_T Vehicle_Control_CodeGen_P = {
  /* Mask Parameter: DiscretePIDController1_D
   * Referenced by: '<S134>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_D_e
   * Referenced by: '<S186>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_D
   * Referenced by: '<S78>/Derivative Gain'
   */
  21000.0,

  /* Mask Parameter: DiscretePIDController1_I
   * Referenced by: '<S138>/Integral Gain'
   */
  0.544217300579932,

  /* Mask Parameter: DiscretePIDController1_I_o
   * Referenced by: '<S190>/Integral Gain'
   */
  0.544217300579932,

  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S82>/Integral Gain'
   */
  0.042,

  /* Mask Parameter: DiscretePIDController1_InitialC
   * Referenced by: '<S136>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_Initia_f
   * Referenced by: '<S188>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_InitialCo
   * Referenced by: '<S80>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_Initia_h
   * Referenced by: '<S141>/Integrator'
   */
  10.0,

  /* Mask Parameter: DiscretePIDController1_Initia_j
   * Referenced by: '<S193>/Integrator'
   */
  10.0,

  /* Mask Parameter: DiscretePIDController_Initial_o
   * Referenced by: '<S85>/Integrator'
   */
  10000.0,

  /* Mask Parameter: DiscretePIDController1_N
   * Referenced by: '<S144>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController1_N_e
   * Referenced by: '<S196>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController_N
   * Referenced by: '<S88>/Filter Coefficient'
   */
  0.01,

  /* Mask Parameter: DiscretePIDController1_P
   * Referenced by: '<S146>/Proportional Gain'
   */
  0.000544217300579932,

  /* Mask Parameter: DiscretePIDController1_P_i
   * Referenced by: '<S198>/Proportional Gain'
   */
  0.000544217300579932,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S90>/Proportional Gain'
   */
  -420.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S106>/Constant'
   */
  5.0,

  /* Mask Parameter: CompareToConstant_const_d
   * Referenced by: '<S158>/Constant'
   */
  5.0,

  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S16>/FixPt Switch'
   */
  5U,

  /* Mask Parameter: WrapToZero_Threshold_e
   * Referenced by: '<S18>/FixPt Switch'
   */
  5U,

  /* Expression: 3.6
   * Referenced by: '<S104>/Constant2'
   */
  3.6,

  /* Expression: 1
   * Referenced by: '<S104>/Sine Wave1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S104>/Sine Wave1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S104>/Sine Wave1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S104>/Sine Wave1'
   */
  0.0,

  /* Expression: 6
   * Referenced by: '<S104>/Constant12'
   */
  6.0,

  /* Expression: 0
   * Referenced by: '<S104>/Constant7'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S104>/Constant6'
   */
  20.0,

  /* Expression: 10
   * Referenced by: '<S104>/Constant4'
   */
  10.0,

  /* Expression: 100
   * Referenced by: '<S104>/Constant5'
   */
  100.0,

  /* Expression: 100
   * Referenced by: '<S104>/Saturation'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S104>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S104>/Constant11'
   */
  0.0,

  /* Expression: 0.65
   * Referenced by: '<S104>/Scale'
   */
  0.65,

  /* Expression: 90
   * Referenced by: '<S104>/Constant18'
   */
  90.0,

  /* Expression: 60
   * Referenced by: '<S104>/Constant14'
   */
  60.0,

  /* Expression: 5
   * Referenced by: '<S104>/Constant19'
   */
  5.0,

  /* Expression: 50
   * Referenced by: '<S104>/Constant16'
   */
  50.0,

  /* Expression: 30
   * Referenced by: '<S104>/Constant13'
   */
  30.0,

  /* Expression: 10
   * Referenced by: '<S104>/Constant17'
   */
  10.0,

  /* Expression: 2
   * Referenced by: '<S104>/Constant26'
   */
  2.0,

  /* Expression: 0.01
   * Referenced by: '<S104>/Constant15'
   */
  0.01,

  /* Expression: 580
   * Referenced by: '<S104>/Constant20'
   */
  580.0,

  /* Expression: 0
   * Referenced by: '<S104>/Constant21'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S104>/Constant28'
   */
  0.0,

  /* Expression: 3.6
   * Referenced by: '<S105>/Constant2'
   */
  3.6,

  /* Expression: 1
   * Referenced by: '<S105>/Sine Wave1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S105>/Sine Wave1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S105>/Sine Wave1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S105>/Sine Wave1'
   */
  0.0,

  /* Expression: 6
   * Referenced by: '<S105>/Constant12'
   */
  6.0,

  /* Expression: 0
   * Referenced by: '<S105>/Constant7'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S105>/Constant6'
   */
  20.0,

  /* Expression: 10
   * Referenced by: '<S105>/Constant4'
   */
  10.0,

  /* Expression: 100
   * Referenced by: '<S105>/Constant5'
   */
  100.0,

  /* Expression: 100
   * Referenced by: '<S105>/Saturation'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S105>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S105>/Constant11'
   */
  0.0,

  /* Expression: 0.65
   * Referenced by: '<S105>/Scale'
   */
  0.65,

  /* Expression: 90
   * Referenced by: '<S105>/Constant18'
   */
  90.0,

  /* Expression: 60
   * Referenced by: '<S105>/Constant14'
   */
  60.0,

  /* Expression: 5
   * Referenced by: '<S105>/Constant19'
   */
  5.0,

  /* Expression: 50
   * Referenced by: '<S105>/Constant16'
   */
  50.0,

  /* Expression: 30
   * Referenced by: '<S105>/Constant13'
   */
  30.0,

  /* Expression: 10
   * Referenced by: '<S105>/Constant17'
   */
  10.0,

  /* Expression: 2
   * Referenced by: '<S105>/Constant26'
   */
  2.0,

  /* Expression: 0.01
   * Referenced by: '<S105>/Constant15'
   */
  0.01,

  /* Expression: 580
   * Referenced by: '<S105>/Constant20'
   */
  580.0,

  /* Expression: 0
   * Referenced by: '<S105>/Constant21'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S105>/Constant28'
   */
  0.0,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S8>/Out1'
   */
  0.0,

  /* Computed Parameter: Out2_Y0
   * Referenced by: '<S8>/Out2'
   */
  0.0,

  /* Expression: 590
   * Referenced by: '<S104>/Relay'
   */
  590.0,

  /* Expression: 585
   * Referenced by: '<S104>/Relay'
   */
  585.0,

  /* Expression: 0
   * Referenced by: '<S104>/Relay'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S104>/Relay'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S104>/Switch2'
   */
  0.5,

  /* Expression: 0.75
   * Referenced by: '<S104>/Constant23'
   */
  0.75,

  /* Expression: 22
   * Referenced by: '<S104>/Constant27'
   */
  22.0,

  /* Expression: 14
   * Referenced by: '<S104>/Memory1'
   */
  14.0,

  /* Expression: inf
   * Referenced by: '<S104>/Saturation5'
   */
  INFINITY,

  /* Expression: 0
   * Referenced by: '<S104>/Saturation5'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S104>/Gain'
   */
  -1.0,

  /* Expression: 2
   * Referenced by: '<S104>/Constant'
   */
  2.0,

  /* Expression: inf
   * Referenced by: '<S104>/Saturation3'
   */
  INFINITY,

  /* Expression: 0
   * Referenced by: '<S104>/Saturation3'
   */
  0.0,

  /* Expression: 600
   * Referenced by: '<S104>/IC1'
   */
  600.0,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S136>/Filter'
   */
  0.02,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S141>/Integrator'
   */
  1.0,

  /* Expression: 0.75
   * Referenced by: '<S105>/Constant23'
   */
  0.75,

  /* Expression: 22
   * Referenced by: '<S105>/Constant27'
   */
  22.0,

  /* Expression: 14
   * Referenced by: '<S105>/Memory1'
   */
  14.0,

  /* Expression: inf
   * Referenced by: '<S105>/Saturation5'
   */
  INFINITY,

  /* Expression: 0
   * Referenced by: '<S105>/Saturation5'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S105>/Gain'
   */
  -1.0,

  /* Expression: 590
   * Referenced by: '<S105>/Relay'
   */
  590.0,

  /* Expression: 585
   * Referenced by: '<S105>/Relay'
   */
  585.0,

  /* Expression: 0
   * Referenced by: '<S105>/Relay'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S105>/Relay'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S105>/Switch2'
   */
  0.5,

  /* Expression: 2
   * Referenced by: '<S105>/Constant'
   */
  2.0,

  /* Expression: inf
   * Referenced by: '<S105>/Saturation3'
   */
  INFINITY,

  /* Expression: 0
   * Referenced by: '<S105>/Saturation3'
   */
  0.0,

  /* Expression: 600
   * Referenced by: '<S105>/IC2'
   */
  600.0,

  /* Computed Parameter: Filter_gainval_p
   * Referenced by: '<S188>/Filter'
   */
  0.02,

  /* Computed Parameter: Integrator_gainval_f
   * Referenced by: '<S193>/Integrator'
   */
  1.0,

  /* Computed Parameter: Out1_Y0_e
   * Referenced by: '<S7>/Out1'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S7>/Constant5'
   */
  100.0,

  /* Computed Parameter: DiscreteTimeIntegrator2_gainval
   * Referenced by: '<S103>/Discrete-Time Integrator2'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<S103>/Discrete-Time Integrator2'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S7>/Constant4'
   */
  5.0,

  /* Expression: 22000
   * Referenced by: '<S7>/Constant6'
   */
  22000.0,

  /* Expression: 0
   * Referenced by: '<S7>/Constant7'
   */
  0.0,

  /* Computed Parameter: Filter_gainval_e
   * Referenced by: '<S80>/Filter'
   */
  0.1,

  /* Computed Parameter: Integrator_gainval_k
   * Referenced by: '<S85>/Integrator'
   */
  0.1,

  /* Expression: 2
   * Referenced by: '<S103>/Constant2'
   */
  2.0,

  /* Expression: 25000
   * Referenced by: '<S2>/Constant'
   */
  25000.0,

  /* Expression: 25000
   * Referenced by: '<S2>/Constant2'
   */
  25000.0,

  /* Expression: 144
   * Referenced by: '<S2>/Constant1'
   */
  144.0,

  /* Expression: 144
   * Referenced by: '<S2>/Constant3'
   */
  144.0,

  /* Expression: 61
   * Referenced by: '<S12>/Constant4'
   */
  61.0,

  /* Expression: [235 74 168 73 95 138]
   * Referenced by: '<S12>/Direct Lookup Table (n-D)'
   */
  { 235.0, 74.0, 168.0, 73.0, 95.0, 138.0 },

  /* Expression: [235 74 168 73 95 138]
   * Referenced by: '<S12>/Direct Lookup Table (n-D)1'
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

  /* Expression: 25000
   * Referenced by: '<Root>/Constant9'
   */
  25000.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant10'
   */
  25000.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant11'
   */
  25000.0,

  /* Expression: 50000
   * Referenced by: '<Root>/Power Limit'
   */
  50000.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant2'
   */
  25000.0,

  /* Expression: 25000
   * Referenced by: '<Root>/Constant8'
   */
  25000.0,

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

  /* Expression: 0
   * Referenced by:
   */
  0.0,

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
   * Referenced by: '<Root>/Switch3'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch5'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch6'
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
   * Referenced by: '<Root>/Switch10'
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
   * Referenced by: '<S27>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_p
   * Referenced by: '<S26>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_g
   * Referenced by: '<S25>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_k
   * Referenced by: '<S24>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_pe
   * Referenced by: '<S23>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_j
   * Referenced by: '<S19>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_n
   * Referenced by: '<S22>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_o
   * Referenced by: '<S21>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_m
   * Referenced by: '<S20>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_b
   * Referenced by: '<S30>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_i
   * Referenced by: '<S29>/Out1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_h
   * Referenced by: '<S28>/Out1'
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
   * Referenced by: '<S104>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting_n
   * Referenced by: '<S105>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S16>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S18>/Constant'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S13>/Output'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition_n
   * Referenced by: '<S14>/Output'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S15>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: FixPtConstant_Value_n
   * Referenced by: '<S17>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<Root>/Manual Switch2'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting_h
   * Referenced by: '<Root>/Manual Switch1'
   */
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
