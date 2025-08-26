/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Vehicle_Control_CodeGen.h
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

#ifndef Vehicle_Control_CodeGen_h_
#define Vehicle_Control_CodeGen_h_
#ifndef Vehicle_Control_CodeGen_COMMON_INCLUDES_
#define Vehicle_Control_CodeGen_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "string.h"
#include "can_fd_message.h"
#include "stm_fdcan_hal.h"
#endif                            /* Vehicle_Control_CodeGen_COMMON_INCLUDES_ */

#include "mw_stm32_nvic.h"
#include "Vehicle_Control_CodeGen_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals for system '<S104>/Moving Average' */
typedef struct {
  real_T MovingAverage;                /* '<S104>/Moving Average' */
} B_MovingAverage_Vehicle_Contr_T;

/* Block states (default storage) for system '<S104>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage_Ve_T obj; /* '<S104>/Moving Average' */
  boolean_T objisempty;                /* '<S104>/Moving Average' */
} DW_MovingAverage_Vehicle_Cont_T;

/* Block states (default storage) for system '<S2>/FDCAN Write1' */
typedef struct {
  stm32cube_blocks_FDCANWrite_V_T obj; /* '<S2>/FDCAN Write1' */
  boolean_T objisempty;                /* '<S2>/FDCAN Write1' */
} DW_FDCANWrite1_Vehicle_Contro_T;

/* Block states (default storage) for system '<S2>/FDCAN Write3' */
typedef struct {
  stm32cube_blocks_FDCANWrite_V_T obj; /* '<S2>/FDCAN Write3' */
  boolean_T objisempty;                /* '<S2>/FDCAN Write3' */
} DW_FDCANWrite3_Vehicle_Contro_T;

/* Block signals (default storage) */
typedef struct {
  real_T csumrev[999];
  CAN_FD_MESSAGE_BUS FDCANRead1;       /* '<S4>/FDCAN Read1' */
  CAN_FD_MESSAGE_BUS FDCANRead1_l;     /* '<S3>/FDCAN Read1' */
  real_T APPSPercentage;               /* '<S4>/Data Type Conversion15' */
  uint16_T WheelSpeedFrontLeft;        /* '<S4>/Byte Unpack' */
  uint16_T WheelSpeedFrontRight;       /* '<S4>/Byte Unpack1' */
  uint16_T BMSCurrentSensor;           /* '<S4>/Byte Unpack2' */
  uint16_T BMSVoltage;                 /* '<S4>/Byte Unpack3' */
  uint16_T DCL;                        /* '<S4>/Byte Unpack4' */
  uint16_T CCL;                        /* '<S4>/Byte Unpack5' */
  uint16_T ByteUnpack;                 /* '<S3>/Byte Unpack' */
  uint16_T ByteUnpack1;                /* '<S3>/Byte Unpack1' */
  uint16_T In1;                        /* '<S28>/In1' */
  uint16_T In1_g;                      /* '<S29>/In1' */
  uint16_T In1_g2;                     /* '<S20>/In1' */
  uint16_T In1_g20;                    /* '<S22>/In1' */
  uint16_T In1_g20a;                   /* '<S19>/In1' */
  uint16_T In1_g20as;                  /* '<S23>/In1' */
  uint16_T In1_g20asd;                 /* '<S25>/In1' */
  uint16_T In1_g20asdt;                /* '<S27>/In1' */
  uint16_T DataTypeConversion;         /* '<S9>/Data Type Conversion' */
  uint16_T ByteReversal;               /* '<S9>/Byte Reversal' */
  uint16_T DataTypeConversion1;        /* '<S9>/Data Type Conversion1' */
  uint16_T ByteReversal1;              /* '<S9>/Byte Reversal1' */
  uint16_T DataTypeConversion2;        /* '<S9>/Data Type Conversion2' */
  uint16_T ByteReversal2;              /* '<S9>/Byte Reversal2' */
  uint16_T DataTypeConversion3;        /* '<S9>/Data Type Conversion3' */
  uint16_T ByteReversal3;              /* '<S9>/Byte Reversal3' */
  uint16_T DataTypeConversion4;        /* '<S9>/Data Type Conversion4' */
  uint16_T ByteReversal4;              /* '<S9>/Byte Reversal4' */
  uint16_T DataTypeConversion5;        /* '<S9>/Data Type Conversion5' */
  uint16_T ByteReversal5;              /* '<S9>/Byte Reversal5' */
  uint16_T DataTypeConversion6;        /* '<S9>/Data Type Conversion6' */
  uint16_T ByteReversal6;              /* '<S9>/Byte Reversal6' */
  uint16_T DataTypeConversion7;        /* '<S9>/Data Type Conversion7' */
  uint16_T ByteReversal7;              /* '<S9>/Byte Reversal7' */
  uint16_T DataTypeConversion_m;       /* '<S2>/Data Type Conversion' */
  uint16_T ByteReversal_p;             /* '<S2>/Byte Reversal' */
  uint16_T DataTypeConversion2_k;      /* '<S2>/Data Type Conversion2' */
  uint16_T ByteReversal1_j;            /* '<S2>/Byte Reversal1' */
  uint8_T FromPedalBoxtoVCU[8];        /* '<S4>/CAN FD Unpack1' */
  uint8_T BMS1[8];                     /* '<S4>/CAN FD Unpack3' */
  uint8_T BMS2[8];                     /* '<S4>/CAN FD Unpack4' */
  uint8_T CANFDUnpack2[3];             /* '<S3>/CAN FD Unpack2' */
  uint8_T CANFDUnpack1[3];             /* '<S3>/CAN FD Unpack1' */
  uint8_T VectorConcatenate[8];        /* '<S9>/Vector Concatenate' */
  uint8_T VectorConcatenate1[8];       /* '<S9>/Vector Concatenate1' */
  uint8_T VectorConcatenate_c[3];      /* '<S2>/Vector Concatenate' */
  uint8_T VectorConcatenate1_k[3];     /* '<S2>/Vector Concatenate1' */
  B_MovingAverage_Vehicle_Contr_T MovingAverage_p;/* '<S104>/Moving Average' */
  B_MovingAverage_Vehicle_Contr_T MovingAverage;/* '<S104>/Moving Average' */
} B_Vehicle_Control_CodeGen_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_simulink_MovingAverage_g_T obj;  /* '<S103>/Moving Average1' */
  stm32cube_blocks_FDCANWrite_V_T obj_o;/* '<S9>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_V_T obj_b;/* '<S9>/FDCAN Write1' */
  stm32cube_blocks_FDCANRead_Ve_T obj_n;/* '<S4>/FDCAN Read1' */
  stm32cube_blocks_FDCANRead_Ve_T obj_j;/* '<S3>/FDCAN Read1' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T DiscreteTimeIntegrator2_DSTATE;/* '<S103>/Discrete-Time Integrator2' */
  real_T Filter_DSTATE;                /* '<S80>/Filter' */
  real_T Integrator_DSTATE;            /* '<S85>/Integrator' */
  real_T Filter_DSTATE_l;              /* '<S136>/Filter' */
  real_T Integrator_DSTATE_d;          /* '<S141>/Integrator' */
  real_T Filter_DSTATE_i;              /* '<S188>/Filter' */
  real_T Integrator_DSTATE_o;          /* '<S193>/Integrator' */
  volatile real_T TmpRTBAtFunctionCallSubsystem1O;/* synthesized block */
  real_T Global_Power_Limit;           /* '<Root>/Data Store Memory5' */
  real_T DiscreteTimeIntegrator2_PREV_U;/* '<S103>/Discrete-Time Integrator2' */
  real_T Filter_PREV_U;                /* '<S80>/Filter' */
  real_T Integrator_PREV_U;            /* '<S85>/Integrator' */
  real_T Memory1_PreviousInput;        /* '<S104>/Memory1' */
  real_T Filter_PREV_U_p;              /* '<S136>/Filter' */
  real_T Memory1_PreviousInput_a;      /* '<S105>/Memory1' */
  real_T Filter_PREV_U_k;              /* '<S188>/Filter' */
  uint32_T PowerForcasting_PREV_T;     /* '<Root>/Power Forcasting' */
  uint32_T ThrottleRegenControl_PREV_T;/* '<Root>/Throttle//Regen Control' */
  int_T CANFDUnpack1_ModeSignalID;     /* '<S4>/CAN FD Unpack1' */
  int_T CANFDUnpack1_StatusPortID;     /* '<S4>/CAN FD Unpack1' */
  int_T CANFDUnpack3_ModeSignalID;     /* '<S4>/CAN FD Unpack3' */
  int_T CANFDUnpack3_StatusPortID;     /* '<S4>/CAN FD Unpack3' */
  int_T CANFDUnpack4_ModeSignalID;     /* '<S4>/CAN FD Unpack4' */
  int_T CANFDUnpack4_StatusPortID;     /* '<S4>/CAN FD Unpack4' */
  int_T CANFDUnpack2_ModeSignalID;     /* '<S3>/CAN FD Unpack2' */
  int_T CANFDUnpack2_StatusPortID;     /* '<S3>/CAN FD Unpack2' */
  int_T CANFDUnpack1_ModeSignalID_e;   /* '<S3>/CAN FD Unpack1' */
  int_T CANFDUnpack1_StatusPortID_e;   /* '<S3>/CAN FD Unpack1' */
  volatile uint16_T TmpRTBAtFunctionCallSubsystemOu;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_a;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_g;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_k;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_m;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_h;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_b;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_e;/* synthesized block */
  uint8_T Output_DSTATE;               /* '<S13>/Output' */
  uint8_T Output_DSTATE_a;             /* '<S14>/Output' */
  uint8_T DiscreteTimeIntegrator2_SYSTEM_;/* '<S103>/Discrete-Time Integrator2' */
  uint8_T Filter_SYSTEM_ENABLE;        /* '<S80>/Filter' */
  uint8_T Integrator_SYSTEM_ENABLE;    /* '<S85>/Integrator' */
  uint8_T Filter_SYSTEM_ENABLE_j;      /* '<S136>/Filter' */
  uint8_T Filter_SYSTEM_ENABLE_i;      /* '<S188>/Filter' */
  boolean_T PowerForcasting_RESET_ELAPS_T;/* '<Root>/Power Forcasting' */
  boolean_T ThrottleRegenControl_RESET_ELAP;/* '<Root>/Throttle//Regen Control' */
  boolean_T Relay_Mode;                /* '<S104>/Relay' */
  boolean_T IC1_FirstOutputTime;       /* '<S104>/IC1' */
  boolean_T Relay_Mode_f;              /* '<S105>/Relay' */
  boolean_T IC2_FirstOutputTime;       /* '<S105>/IC2' */
  DW_FDCANWrite3_Vehicle_Contro_T FDCANWrite3_pn;/* '<S2>/FDCAN Write3' */
  DW_FDCANWrite1_Vehicle_Contro_T FDCANWrite2;/* '<S2>/FDCAN Write1' */
  DW_FDCANWrite3_Vehicle_Contro_T FDCANWrite3;/* '<S2>/FDCAN Write3' */
  DW_FDCANWrite1_Vehicle_Contro_T FDCANWrite1;/* '<S2>/FDCAN Write1' */
  DW_MovingAverage_Vehicle_Cont_T MovingAverage_p;/* '<S104>/Moving Average' */
  DW_MovingAverage_Vehicle_Cont_T MovingAverage;/* '<S104>/Moving Average' */
} DW_Vehicle_Control_CodeGen_T;

/* Parameters (default storage) */
struct P_Vehicle_Control_CodeGen_T_ {
  real_T DiscretePIDController1_D;   /* Mask Parameter: DiscretePIDController1_D
                                      * Referenced by: '<S134>/Derivative Gain'
                                      */
  real_T DiscretePIDController1_D_e;
                                   /* Mask Parameter: DiscretePIDController1_D_e
                                    * Referenced by: '<S186>/Derivative Gain'
                                    */
  real_T DiscretePIDController_D;     /* Mask Parameter: DiscretePIDController_D
                                       * Referenced by: '<S78>/Derivative Gain'
                                       */
  real_T DiscretePIDController1_I;   /* Mask Parameter: DiscretePIDController1_I
                                      * Referenced by: '<S138>/Integral Gain'
                                      */
  real_T DiscretePIDController1_I_o;
                                   /* Mask Parameter: DiscretePIDController1_I_o
                                    * Referenced by: '<S190>/Integral Gain'
                                    */
  real_T DiscretePIDController_I;     /* Mask Parameter: DiscretePIDController_I
                                       * Referenced by: '<S82>/Integral Gain'
                                       */
  real_T DiscretePIDController1_InitialC;
                              /* Mask Parameter: DiscretePIDController1_InitialC
                               * Referenced by: '<S136>/Filter'
                               */
  real_T DiscretePIDController1_Initia_f;
                              /* Mask Parameter: DiscretePIDController1_Initia_f
                               * Referenced by: '<S188>/Filter'
                               */
  real_T DiscretePIDController_InitialCo;
                              /* Mask Parameter: DiscretePIDController_InitialCo
                               * Referenced by: '<S80>/Filter'
                               */
  real_T DiscretePIDController1_Initia_h;
                              /* Mask Parameter: DiscretePIDController1_Initia_h
                               * Referenced by: '<S141>/Integrator'
                               */
  real_T DiscretePIDController1_Initia_j;
                              /* Mask Parameter: DiscretePIDController1_Initia_j
                               * Referenced by: '<S193>/Integrator'
                               */
  real_T DiscretePIDController_Initial_o;
                              /* Mask Parameter: DiscretePIDController_Initial_o
                               * Referenced by: '<S85>/Integrator'
                               */
  real_T DiscretePIDController1_N;   /* Mask Parameter: DiscretePIDController1_N
                                      * Referenced by: '<S144>/Filter Coefficient'
                                      */
  real_T DiscretePIDController1_N_e;
                                   /* Mask Parameter: DiscretePIDController1_N_e
                                    * Referenced by: '<S196>/Filter Coefficient'
                                    */
  real_T DiscretePIDController_N;     /* Mask Parameter: DiscretePIDController_N
                                       * Referenced by: '<S88>/Filter Coefficient'
                                       */
  real_T DiscretePIDController1_P;   /* Mask Parameter: DiscretePIDController1_P
                                      * Referenced by: '<S146>/Proportional Gain'
                                      */
  real_T DiscretePIDController1_P_i;
                                   /* Mask Parameter: DiscretePIDController1_P_i
                                    * Referenced by: '<S198>/Proportional Gain'
                                    */
  real_T DiscretePIDController_P;     /* Mask Parameter: DiscretePIDController_P
                                       * Referenced by: '<S90>/Proportional Gain'
                                       */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S106>/Constant'
                                       */
  real_T CompareToConstant_const_d; /* Mask Parameter: CompareToConstant_const_d
                                     * Referenced by: '<S158>/Constant'
                                     */
  uint8_T WrapToZero_Threshold;        /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S16>/FixPt Switch'
                                        */
  uint8_T WrapToZero_Threshold_e;      /* Mask Parameter: WrapToZero_Threshold_e
                                        * Referenced by: '<S18>/FixPt Switch'
                                        */
  real_T Constant2_Value;              /* Expression: 3.6
                                        * Referenced by: '<S104>/Constant2'
                                        */
  real_T SineWave1_Amp;                /* Expression: 1
                                        * Referenced by: '<S104>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0
                                        * Referenced by: '<S104>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: 1
                                        * Referenced by: '<S104>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: 0
                                        * Referenced by: '<S104>/Sine Wave1'
                                        */
  real_T Constant12_Value;             /* Expression: 6
                                        * Referenced by: '<S104>/Constant12'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S104>/Constant7'
                                        */
  real_T Constant6_Value;              /* Expression: 20
                                        * Referenced by: '<S104>/Constant6'
                                        */
  real_T Constant4_Value;              /* Expression: 10
                                        * Referenced by: '<S104>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 100
                                        * Referenced by: '<S104>/Constant5'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 100
                                        * Referenced by: '<S104>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S104>/Saturation'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S104>/Constant11'
                                        */
  real_T Scale_Value;                  /* Expression: 0.65
                                        * Referenced by: '<S104>/Scale'
                                        */
  real_T Constant18_Value;             /* Expression: 90
                                        * Referenced by: '<S104>/Constant18'
                                        */
  real_T Constant14_Value;             /* Expression: 60
                                        * Referenced by: '<S104>/Constant14'
                                        */
  real_T Constant19_Value;             /* Expression: 5
                                        * Referenced by: '<S104>/Constant19'
                                        */
  real_T Constant16_Value;             /* Expression: 50
                                        * Referenced by: '<S104>/Constant16'
                                        */
  real_T Constant13_Value;             /* Expression: 30
                                        * Referenced by: '<S104>/Constant13'
                                        */
  real_T Constant17_Value;             /* Expression: 10
                                        * Referenced by: '<S104>/Constant17'
                                        */
  real_T Constant26_Value;             /* Expression: 2
                                        * Referenced by: '<S104>/Constant26'
                                        */
  real_T Constant15_Value;             /* Expression: 0.01
                                        * Referenced by: '<S104>/Constant15'
                                        */
  real_T Constant20_Value;             /* Expression: 580
                                        * Referenced by: '<S104>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 0
                                        * Referenced by: '<S104>/Constant21'
                                        */
  real_T Constant28_Value;             /* Expression: 0
                                        * Referenced by: '<S104>/Constant28'
                                        */
  real_T Constant2_Value_m;            /* Expression: 3.6
                                        * Referenced by: '<S105>/Constant2'
                                        */
  real_T SineWave1_Amp_k;              /* Expression: 1
                                        * Referenced by: '<S105>/Sine Wave1'
                                        */
  real_T SineWave1_Bias_k;             /* Expression: 0
                                        * Referenced by: '<S105>/Sine Wave1'
                                        */
  real_T SineWave1_Freq_n;             /* Expression: 1
                                        * Referenced by: '<S105>/Sine Wave1'
                                        */
  real_T SineWave1_Phase_i;            /* Expression: 0
                                        * Referenced by: '<S105>/Sine Wave1'
                                        */
  real_T Constant12_Value_i;           /* Expression: 6
                                        * Referenced by: '<S105>/Constant12'
                                        */
  real_T Constant7_Value_g;            /* Expression: 0
                                        * Referenced by: '<S105>/Constant7'
                                        */
  real_T Constant6_Value_k;            /* Expression: 20
                                        * Referenced by: '<S105>/Constant6'
                                        */
  real_T Constant4_Value_j;            /* Expression: 10
                                        * Referenced by: '<S105>/Constant4'
                                        */
  real_T Constant5_Value_h;            /* Expression: 100
                                        * Referenced by: '<S105>/Constant5'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 100
                                        * Referenced by: '<S105>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: 0
                                        * Referenced by: '<S105>/Saturation'
                                        */
  real_T Constant11_Value_n;           /* Expression: 0
                                        * Referenced by: '<S105>/Constant11'
                                        */
  real_T Scale_Value_p;                /* Expression: 0.65
                                        * Referenced by: '<S105>/Scale'
                                        */
  real_T Constant18_Value_a;           /* Expression: 90
                                        * Referenced by: '<S105>/Constant18'
                                        */
  real_T Constant14_Value_g;           /* Expression: 60
                                        * Referenced by: '<S105>/Constant14'
                                        */
  real_T Constant19_Value_f;           /* Expression: 5
                                        * Referenced by: '<S105>/Constant19'
                                        */
  real_T Constant16_Value_l;           /* Expression: 50
                                        * Referenced by: '<S105>/Constant16'
                                        */
  real_T Constant13_Value_e;           /* Expression: 30
                                        * Referenced by: '<S105>/Constant13'
                                        */
  real_T Constant17_Value_o;           /* Expression: 10
                                        * Referenced by: '<S105>/Constant17'
                                        */
  real_T Constant26_Value_h;           /* Expression: 2
                                        * Referenced by: '<S105>/Constant26'
                                        */
  real_T Constant15_Value_c;           /* Expression: 0.01
                                        * Referenced by: '<S105>/Constant15'
                                        */
  real_T Constant20_Value_f;           /* Expression: 580
                                        * Referenced by: '<S105>/Constant20'
                                        */
  real_T Constant21_Value_h;           /* Expression: 0
                                        * Referenced by: '<S105>/Constant21'
                                        */
  real_T Constant28_Value_j;           /* Expression: 0
                                        * Referenced by: '<S105>/Constant28'
                                        */
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S8>/Out1'
                                        */
  real_T Out2_Y0;                      /* Computed Parameter: Out2_Y0
                                        * Referenced by: '<S8>/Out2'
                                        */
  real_T Relay_OnVal;                  /* Expression: 590
                                        * Referenced by: '<S104>/Relay'
                                        */
  real_T Relay_OffVal;                 /* Expression: 585
                                        * Referenced by: '<S104>/Relay'
                                        */
  real_T Relay_YOn;                    /* Expression: 0
                                        * Referenced by: '<S104>/Relay'
                                        */
  real_T Relay_YOff;                   /* Expression: 1
                                        * Referenced by: '<S104>/Relay'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S104>/Switch2'
                                        */
  real_T Constant23_Value;             /* Expression: 0.75
                                        * Referenced by: '<S104>/Constant23'
                                        */
  real_T Constant27_Value;             /* Expression: 22
                                        * Referenced by: '<S104>/Constant27'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 14
                                        * Referenced by: '<S104>/Memory1'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S104>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S104>/Saturation5'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S104>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 2
                                        * Referenced by: '<S104>/Constant'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S104>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S104>/Saturation3'
                                        */
  real_T IC1_Value;                    /* Expression: 600
                                        * Referenced by: '<S104>/IC1'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S136>/Filter'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S141>/Integrator'
                                        */
  real_T Constant23_Value_j;           /* Expression: 0.75
                                        * Referenced by: '<S105>/Constant23'
                                        */
  real_T Constant27_Value_o;           /* Expression: 22
                                        * Referenced by: '<S105>/Constant27'
                                        */
  real_T Memory1_InitialCondition_b;   /* Expression: 14
                                        * Referenced by: '<S105>/Memory1'
                                        */
  real_T Saturation5_UpperSat_p;       /* Expression: inf
                                        * Referenced by: '<S105>/Saturation5'
                                        */
  real_T Saturation5_LowerSat_l;       /* Expression: 0
                                        * Referenced by: '<S105>/Saturation5'
                                        */
  real_T Gain_Gain_b;                  /* Expression: -1
                                        * Referenced by: '<S105>/Gain'
                                        */
  real_T Relay_OnVal_i;                /* Expression: 590
                                        * Referenced by: '<S105>/Relay'
                                        */
  real_T Relay_OffVal_i;               /* Expression: 585
                                        * Referenced by: '<S105>/Relay'
                                        */
  real_T Relay_YOn_l;                  /* Expression: 0
                                        * Referenced by: '<S105>/Relay'
                                        */
  real_T Relay_YOff_o;                 /* Expression: 1
                                        * Referenced by: '<S105>/Relay'
                                        */
  real_T Switch2_Threshold_c;          /* Expression: 0.5
                                        * Referenced by: '<S105>/Switch2'
                                        */
  real_T Constant_Value_n;             /* Expression: 2
                                        * Referenced by: '<S105>/Constant'
                                        */
  real_T Saturation3_UpperSat_j;       /* Expression: inf
                                        * Referenced by: '<S105>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_b;       /* Expression: 0
                                        * Referenced by: '<S105>/Saturation3'
                                        */
  real_T IC2_Value;                    /* Expression: 600
                                        * Referenced by: '<S105>/IC2'
                                        */
  real_T Filter_gainval_p;             /* Computed Parameter: Filter_gainval_p
                                        * Referenced by: '<S188>/Filter'
                                        */
  real_T Integrator_gainval_f;       /* Computed Parameter: Integrator_gainval_f
                                      * Referenced by: '<S193>/Integrator'
                                      */
  real_T Out1_Y0_e;                    /* Computed Parameter: Out1_Y0_e
                                        * Referenced by: '<S7>/Out1'
                                        */
  real_T Constant5_Value_a;            /* Expression: 100
                                        * Referenced by: '<S7>/Constant5'
                                        */
  real_T DiscreteTimeIntegrator2_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator2_gainval
                           * Referenced by: '<S103>/Discrete-Time Integrator2'
                           */
  real_T DiscreteTimeIntegrator2_IC;   /* Expression: 0
                                        * Referenced by: '<S103>/Discrete-Time Integrator2'
                                        */
  real_T Constant4_Value_f;            /* Expression: 5
                                        * Referenced by: '<S7>/Constant4'
                                        */
  real_T Constant6_Value_j;            /* Expression: 22000
                                        * Referenced by: '<S7>/Constant6'
                                        */
  real_T Constant7_Value_m;            /* Expression: 0
                                        * Referenced by: '<S7>/Constant7'
                                        */
  real_T Filter_gainval_e;             /* Computed Parameter: Filter_gainval_e
                                        * Referenced by: '<S80>/Filter'
                                        */
  real_T Integrator_gainval_k;       /* Computed Parameter: Integrator_gainval_k
                                      * Referenced by: '<S85>/Integrator'
                                      */
  real_T Constant2_Value_o;            /* Expression: 2
                                        * Referenced by: '<S103>/Constant2'
                                        */
  real_T Constant_Value_e;             /* Expression: 25000
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Constant2_Value_k;            /* Expression: 25000
                                        * Referenced by: '<S2>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 144
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: 144
                                        * Referenced by: '<S2>/Constant3'
                                        */
  real_T Constant4_Value_p;            /* Expression: 61
                                        * Referenced by: '<S12>/Constant4'
                                        */
  real_T DirectLookupTablenD_table[6]; /* Expression: [235 74 168 73 95 138]
                                        * Referenced by: '<S12>/Direct Lookup Table (n-D)'
                                        */
  real_T DirectLookupTablenD1_table[6];/* Expression: [235 74 168 73 95 138]
                                        * Referenced by: '<S12>/Direct Lookup Table (n-D)1'
                                        */
  real_T Constant1_Value_n;            /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant2_Value_l;            /* Expression: 1
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  real_T Constant_Value_b;             /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant3_Value_o;            /* Expression: 12
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T Out14_Y0;                     /* Computed Parameter: Out14_Y0
                                        * Referenced by: '<S4>/Out14'
                                        */
  real_T Out15_Y0;                     /* Computed Parameter: Out15_Y0
                                        * Referenced by: '<S4>/Out15'
                                        */
  real_T Out16_Y0;                     /* Computed Parameter: Out16_Y0
                                        * Referenced by: '<S4>/Out16'
                                        */
  real_T Out21_Y0;                     /* Computed Parameter: Out21_Y0
                                        * Referenced by: '<S4>/Out21'
                                        */
  real_T Out22_Y0;                     /* Computed Parameter: Out22_Y0
                                        * Referenced by: '<S4>/Out22'
                                        */
  real_T Out23_Y0;                     /* Computed Parameter: Out23_Y0
                                        * Referenced by: '<S4>/Out23'
                                        */
  real_T Out24_Y0;                     /* Computed Parameter: Out24_Y0
                                        * Referenced by: '<S4>/Out24'
                                        */
  real_T Constant14_Value_k;           /* Expression: 1
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T Constant15_Value_l;           /* Expression: 0
                                        * Referenced by: '<Root>/Constant15'
                                        */
  real_T Constant5_Value_f;            /* Expression: 1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant6_Value_c;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Constant9_Value;              /* Expression: 25000
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 25000
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Constant11_Value_i;           /* Expression: 25000
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T PowerLimit_Value;             /* Expression: 50000
                                        * Referenced by: '<Root>/Power Limit'
                                        */
  real_T Constant2_Value_j;            /* Expression: 25000
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant8_Value;              /* Expression: 25000
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant7_Value_m4;           /* Expression: 25000
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Constant12_Value_g;           /* Expression: 25000
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T Constant13_Value_i;           /* Expression: 25000
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T TmpRTBAtFunctionCallSubsystem1O;/* Expression: 0
                                          * Referenced by:
                                          */
  real_T DataStoreMemory_InitialValue; /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  real_T DataStoreMemory1_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  real_T DataStoreMemory2_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  real_T DataStoreMemory3_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory3'
                                        */
  real_T DataStoreMemory4_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory4'
                                        */
  real_T DataStoreMemory5_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory5'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch3'
                                        */
  real_T Switch5_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch5'
                                        */
  real_T Switch6_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch6'
                                        */
  real_T Switch7_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch7'
                                        */
  real_T Switch8_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch8'
                                        */
  real_T Switch9_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch9'
                                        */
  real_T Switch10_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch10'
                                        */
  real_T Switch11_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch11'
                                        */
  real_T Switch12_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch12'
                                        */
  uint16_T Out1_Y0_a;                  /* Computed Parameter: Out1_Y0_a
                                        * Referenced by: '<S27>/Out1'
                                        */
  uint16_T Out1_Y0_p;                  /* Computed Parameter: Out1_Y0_p
                                        * Referenced by: '<S26>/Out1'
                                        */
  uint16_T Out1_Y0_g;                  /* Computed Parameter: Out1_Y0_g
                                        * Referenced by: '<S25>/Out1'
                                        */
  uint16_T Out1_Y0_k;                  /* Computed Parameter: Out1_Y0_k
                                        * Referenced by: '<S24>/Out1'
                                        */
  uint16_T Out1_Y0_pe;                 /* Computed Parameter: Out1_Y0_pe
                                        * Referenced by: '<S23>/Out1'
                                        */
  uint16_T Out1_Y0_j;                  /* Computed Parameter: Out1_Y0_j
                                        * Referenced by: '<S19>/Out1'
                                        */
  uint16_T Out1_Y0_n;                  /* Computed Parameter: Out1_Y0_n
                                        * Referenced by: '<S22>/Out1'
                                        */
  uint16_T Out1_Y0_o;                  /* Computed Parameter: Out1_Y0_o
                                        * Referenced by: '<S21>/Out1'
                                        */
  uint16_T Out1_Y0_m;                  /* Computed Parameter: Out1_Y0_m
                                        * Referenced by: '<S20>/Out1'
                                        */
  uint16_T Out1_Y0_b;                  /* Computed Parameter: Out1_Y0_b
                                        * Referenced by: '<S30>/Out1'
                                        */
  uint16_T Out1_Y0_i;                  /* Computed Parameter: Out1_Y0_i
                                        * Referenced by: '<S29>/Out1'
                                        */
  uint16_T Out1_Y0_h;                  /* Computed Parameter: Out1_Y0_h
                                        * Referenced by: '<S28>/Out1'
                                        */
  uint16_T Out17_Y0;                   /* Computed Parameter: Out17_Y0
                                        * Referenced by: '<S4>/Out17'
                                        */
  uint16_T Out18_Y0;                   /* Computed Parameter: Out18_Y0
                                        * Referenced by: '<S4>/Out18'
                                        */
  uint16_T Out19_Y0;                   /* Computed Parameter: Out19_Y0
                                        * Referenced by: '<S4>/Out19'
                                        */
  uint16_T Out20_Y0;                   /* Computed Parameter: Out20_Y0
                                        * Referenced by: '<S4>/Out20'
                                        */
  uint16_T TmpRTBAtFunctionCallSubsystemOu;
                          /* Computed Parameter: TmpRTBAtFunctionCallSubsystemOu
                           * Referenced by:
                           */
  uint16_T TmpRTBAtFunctionCallSubsystem_j;
                          /* Computed Parameter: TmpRTBAtFunctionCallSubsystem_j
                           * Referenced by:
                           */
  uint16_T TmpRTBAtFunctionCallSubsyste_jx;
                          /* Computed Parameter: TmpRTBAtFunctionCallSubsyste_jx
                           * Referenced by:
                           */
  uint16_T TmpRTBAtFunctionCallSubsyst_jxk;
                          /* Computed Parameter: TmpRTBAtFunctionCallSubsyst_jxk
                           * Referenced by:
                           */
  uint16_T TmpRTBAtFunctionCallSubsys_jxkx;
                          /* Computed Parameter: TmpRTBAtFunctionCallSubsys_jxkx
                           * Referenced by:
                           */
  uint16_T TmpRTBAtFunctionCallSubsy_jxkxj;
                          /* Computed Parameter: TmpRTBAtFunctionCallSubsy_jxkxj
                           * Referenced by:
                           */
  uint16_T TmpRTBAtFunctionCallSubs_jxkxj0;
                          /* Computed Parameter: TmpRTBAtFunctionCallSubs_jxkxj0
                           * Referenced by:
                           */
  uint16_T TmpRTBAtFunctionCallSub_jxkxj0l;
                          /* Computed Parameter: TmpRTBAtFunctionCallSub_jxkxj0l
                           * Referenced by:
                           */
  boolean_T Out1_Y0_on;                /* Computed Parameter: Out1_Y0_on
                                        * Referenced by: '<S4>/Out1'
                                        */
  boolean_T Out2_Y0_o;                 /* Computed Parameter: Out2_Y0_o
                                        * Referenced by: '<S4>/Out2'
                                        */
  boolean_T Out3_Y0;                   /* Computed Parameter: Out3_Y0
                                        * Referenced by: '<S4>/Out3'
                                        */
  boolean_T Out4_Y0;                   /* Computed Parameter: Out4_Y0
                                        * Referenced by: '<S4>/Out4'
                                        */
  boolean_T Out5_Y0;                   /* Computed Parameter: Out5_Y0
                                        * Referenced by: '<S4>/Out5'
                                        */
  boolean_T Out6_Y0;                   /* Computed Parameter: Out6_Y0
                                        * Referenced by: '<S4>/Out6'
                                        */
  boolean_T Out7_Y0;                   /* Computed Parameter: Out7_Y0
                                        * Referenced by: '<S4>/Out7'
                                        */
  boolean_T Out8_Y0;                   /* Computed Parameter: Out8_Y0
                                        * Referenced by: '<S4>/Out8'
                                        */
  boolean_T Out9_Y0;                   /* Computed Parameter: Out9_Y0
                                        * Referenced by: '<S4>/Out9'
                                        */
  boolean_T Out10_Y0;                  /* Computed Parameter: Out10_Y0
                                        * Referenced by: '<S4>/Out10'
                                        */
  boolean_T Out11_Y0;                  /* Computed Parameter: Out11_Y0
                                        * Referenced by: '<S4>/Out11'
                                        */
  boolean_T Out12_Y0;                  /* Computed Parameter: Out12_Y0
                                        * Referenced by: '<S4>/Out12'
                                        */
  boolean_T Out13_Y0;                  /* Computed Parameter: Out13_Y0
                                        * Referenced by: '<S4>/Out13'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S104>/Manual Switch1'
                              */
  uint8_T ManualSwitch1_CurrentSetting_n;
                           /* Computed Parameter: ManualSwitch1_CurrentSetting_n
                            * Referenced by: '<S105>/Manual Switch1'
                            */
  uint8_T Constant_Value_h;            /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S16>/Constant'
                                        */
  uint8_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S18>/Constant'
                                        */
  uint8_T Output_InitialCondition;/* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S13>/Output'
                                   */
  uint8_T Output_InitialCondition_n;
                                /* Computed Parameter: Output_InitialCondition_n
                                 * Referenced by: '<S14>/Output'
                                 */
  uint8_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S15>/FixPt Constant'
                                       */
  uint8_T FixPtConstant_Value_n;    /* Computed Parameter: FixPtConstant_Value_n
                                     * Referenced by: '<S17>/FixPt Constant'
                                     */
  uint8_T ManualSwitch2_CurrentSetting;
                             /* Computed Parameter: ManualSwitch2_CurrentSetting
                              * Referenced by: '<Root>/Manual Switch2'
                              */
  uint8_T ManualSwitch1_CurrentSetting_h;
                           /* Computed Parameter: ManualSwitch1_CurrentSetting_h
                            * Referenced by: '<Root>/Manual Switch1'
                            */
};

/* Real-time Model Data Structure */
struct tag_RTM_Vehicle_Control_CodeG_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTick1;
    struct {
      uint8_T TID[3];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Vehicle_Control_CodeGen_T Vehicle_Control_CodeGen_P;

/* Block signals (default storage) */
extern B_Vehicle_Control_CodeGen_T Vehicle_Control_CodeGen_B;

/* Block states (default storage) */
extern DW_Vehicle_Control_CodeGen_T Vehicle_Control_CodeGen_DW;

/* External function called from main */
extern void Vehicle_Control_CodeGen_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void Vehicle_Control_CodeGen_initialize(void);
extern void Vehicle_Control_CodeGen_step0(void);
extern void Vehicle_Control_CodeGen_step1(void);
extern void Vehicle_Control_CodeGen_step2(void);
extern void Vehicle_Control_CodeGen_step(int_T tid);
extern void Vehicle_Control_CodeGen_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Vehicle_Control_Code_T *const Vehicle_Control_CodeGen_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

#ifdef __cpluscplus

extern "C"
{

#endif

  void FDCAN2_IT0_IRQHandler(void);
  void FDCAN1_IT0_IRQHandler(void);
  void Vehicle_Control_CodeGen_configure_interrupts (void);
  void Vehicle_Control_CodeGen_unconfigure_interrupts (void);

#ifdef __cpluscplus

}

#endif

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S13>/Data Type Propagation' : Unused code path elimination
 * Block '<S15>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S14>/Data Type Propagation' : Unused code path elimination
 * Block '<S17>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S12>/Scope2' : Unused code path elimination
 * Block '<S12>/Scope3' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
 * Block '<Root>/Add1' : Unused code path elimination
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Constant3' : Unused code path elimination
 * Block '<Root>/Constant4' : Unused code path elimination
 * Block '<S3>/Scope1' : Unused code path elimination
 * Block '<S3>/Scope2' : Unused code path elimination
 * Block '<S3>/Scope4' : Unused code path elimination
 * Block '<S3>/Scope7' : Unused code path elimination
 * Block '<S4>/CAN FD Unpack2' : Unused code path elimination
 * Block '<S4>/Data Type Conversion1' : Unused code path elimination
 * Block '<S4>/Data Type Conversion10' : Unused code path elimination
 * Block '<S4>/Data Type Conversion11' : Unused code path elimination
 * Block '<S4>/Data Type Conversion12' : Unused code path elimination
 * Block '<S4>/Data Type Conversion13' : Unused code path elimination
 * Block '<S4>/Data Type Conversion14' : Unused code path elimination
 * Block '<S4>/Data Type Conversion16' : Unused code path elimination
 * Block '<S4>/Data Type Conversion17' : Unused code path elimination
 * Block '<S4>/Data Type Conversion18' : Unused code path elimination
 * Block '<S4>/Data Type Conversion19' : Unused code path elimination
 * Block '<S4>/Data Type Conversion2' : Unused code path elimination
 * Block '<S4>/Data Type Conversion20' : Unused code path elimination
 * Block '<S4>/Data Type Conversion21' : Unused code path elimination
 * Block '<S4>/Data Type Conversion3' : Unused code path elimination
 * Block '<S4>/Data Type Conversion4' : Unused code path elimination
 * Block '<S4>/Data Type Conversion5' : Unused code path elimination
 * Block '<S4>/Data Type Conversion6' : Unused code path elimination
 * Block '<S4>/Data Type Conversion7' : Unused code path elimination
 * Block '<S4>/Data Type Conversion8' : Unused code path elimination
 * Block '<S4>/Data Type Conversion9' : Unused code path elimination
 * Block '<S31>/DTProp1' : Unused code path elimination
 * Block '<S31>/DTProp2' : Unused code path elimination
 * Block '<S31>/Extract Desired Bits' : Unused code path elimination
 * Block '<S31>/Modify Scaling Only' : Unused code path elimination
 * Block '<S32>/DTProp1' : Unused code path elimination
 * Block '<S32>/DTProp2' : Unused code path elimination
 * Block '<S32>/Extract Desired Bits' : Unused code path elimination
 * Block '<S32>/Modify Scaling Only' : Unused code path elimination
 * Block '<S33>/DTProp1' : Unused code path elimination
 * Block '<S33>/DTProp2' : Unused code path elimination
 * Block '<S33>/Extract Desired Bits' : Unused code path elimination
 * Block '<S33>/Modify Scaling Only' : Unused code path elimination
 * Block '<S34>/DTProp1' : Unused code path elimination
 * Block '<S34>/DTProp2' : Unused code path elimination
 * Block '<S34>/Extract Desired Bits' : Unused code path elimination
 * Block '<S34>/Modify Scaling Only' : Unused code path elimination
 * Block '<S35>/DTProp1' : Unused code path elimination
 * Block '<S35>/DTProp2' : Unused code path elimination
 * Block '<S35>/Extract Desired Bits' : Unused code path elimination
 * Block '<S35>/Modify Scaling Only' : Unused code path elimination
 * Block '<S36>/DTProp1' : Unused code path elimination
 * Block '<S36>/DTProp2' : Unused code path elimination
 * Block '<S36>/Extract Desired Bits' : Unused code path elimination
 * Block '<S36>/Modify Scaling Only' : Unused code path elimination
 * Block '<S37>/DTProp1' : Unused code path elimination
 * Block '<S37>/DTProp2' : Unused code path elimination
 * Block '<S37>/Extract Desired Bits' : Unused code path elimination
 * Block '<S37>/Modify Scaling Only' : Unused code path elimination
 * Block '<S38>/DTProp1' : Unused code path elimination
 * Block '<S38>/DTProp2' : Unused code path elimination
 * Block '<S38>/Extract Desired Bits' : Unused code path elimination
 * Block '<S38>/Modify Scaling Only' : Unused code path elimination
 * Block '<S39>/DTProp1' : Unused code path elimination
 * Block '<S39>/DTProp2' : Unused code path elimination
 * Block '<S39>/Extract Desired Bits' : Unused code path elimination
 * Block '<S39>/Modify Scaling Only' : Unused code path elimination
 * Block '<S40>/DTProp1' : Unused code path elimination
 * Block '<S40>/DTProp2' : Unused code path elimination
 * Block '<S40>/Extract Desired Bits' : Unused code path elimination
 * Block '<S40>/Modify Scaling Only' : Unused code path elimination
 * Block '<S41>/DTProp1' : Unused code path elimination
 * Block '<S41>/DTProp2' : Unused code path elimination
 * Block '<S41>/Extract Desired Bits' : Unused code path elimination
 * Block '<S41>/Modify Scaling Only' : Unused code path elimination
 * Block '<S42>/DTProp1' : Unused code path elimination
 * Block '<S42>/DTProp2' : Unused code path elimination
 * Block '<S42>/Extract Desired Bits' : Unused code path elimination
 * Block '<S42>/Modify Scaling Only' : Unused code path elimination
 * Block '<S43>/DTProp1' : Unused code path elimination
 * Block '<S43>/DTProp2' : Unused code path elimination
 * Block '<S43>/Extract Desired Bits' : Unused code path elimination
 * Block '<S43>/Modify Scaling Only' : Unused code path elimination
 * Block '<S44>/Constant2' : Unused code path elimination
 * Block '<Root>/Manual Switch' : Unused code path elimination
 * Block '<S7>/Scope1' : Unused code path elimination
 * Block '<S7>/Scope3' : Unused code path elimination
 * Block '<S7>/Scope4' : Unused code path elimination
 * Block '<S7>/Scope6' : Unused code path elimination
 * Block '<S103>/Scope' : Unused code path elimination
 * Block '<S103>/Scope1' : Unused code path elimination
 * Block '<Root>/Rate Transition' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 * Block '<Root>/Scope3' : Unused code path elimination
 * Block '<Root>/Scope5' : Unused code path elimination
 * Block '<Root>/Switch1' : Unused code path elimination
 * Block '<Root>/Switch2' : Unused code path elimination
 * Block '<S8>/Divide' : Unused code path elimination
 * Block '<S8>/Divide1' : Unused code path elimination
 * Block '<S104>/Add2' : Unused code path elimination
 * Block '<S104>/Constant10' : Unused code path elimination
 * Block '<S104>/Constant3' : Unused code path elimination
 * Block '<S104>/Constant9' : Unused code path elimination
 * Block '<S104>/Gain1' : Unused code path elimination
 * Block '<S104>/Product3' : Unused code path elimination
 * Block '<S104>/Product7' : Unused code path elimination
 * Block '<S104>/Saturation1' : Unused code path elimination
 * Block '<S104>/Saturation2' : Unused code path elimination
 * Block '<S104>/Scope' : Unused code path elimination
 * Block '<S104>/Scope1' : Unused code path elimination
 * Block '<S104>/Scope11' : Unused code path elimination
 * Block '<S104>/Scope13' : Unused code path elimination
 * Block '<S104>/Scope14' : Unused code path elimination
 * Block '<S104>/Scope2' : Unused code path elimination
 * Block '<S104>/Scope3' : Unused code path elimination
 * Block '<S104>/Scope5' : Unused code path elimination
 * Block '<S104>/Scope7' : Unused code path elimination
 * Block '<S104>/Scope8' : Unused code path elimination
 * Block '<S104>/Scope9' : Unused code path elimination
 * Block '<S104>/Square' : Unused code path elimination
 * Block '<S104>/Subtract2' : Unused code path elimination
 * Block '<S104>/Sum3' : Unused code path elimination
 * Block '<S105>/Gain1' : Unused code path elimination
 * Block '<S105>/Product7' : Unused code path elimination
 * Block '<S105>/Scope' : Unused code path elimination
 * Block '<S105>/Scope1' : Unused code path elimination
 * Block '<S105>/Scope10' : Unused code path elimination
 * Block '<S105>/Scope11' : Unused code path elimination
 * Block '<S105>/Scope12' : Unused code path elimination
 * Block '<S105>/Scope13' : Unused code path elimination
 * Block '<S105>/Scope14' : Unused code path elimination
 * Block '<S105>/Scope2' : Unused code path elimination
 * Block '<S105>/Scope3' : Unused code path elimination
 * Block '<S105>/Scope4' : Unused code path elimination
 * Block '<S105>/Scope5' : Unused code path elimination
 * Block '<S105>/Scope6' : Unused code path elimination
 * Block '<S105>/Scope7' : Unused code path elimination
 * Block '<S105>/Scope8' : Unused code path elimination
 * Block '<S105>/Scope9' : Unused code path elimination
 * Block '<S105>/Sum3' : Unused code path elimination
 * Block '<S8>/Scope' : Unused code path elimination
 * Block '<S8>/Sum' : Unused code path elimination
 * Block '<S9>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Vehicle_Control_CodeGen'
 * '<S1>'   : 'Vehicle_Control_CodeGen/10 HZ Send1'
 * '<S2>'   : 'Vehicle_Control_CodeGen/50 HZ Send Torque Requests to Inverters'
 * '<S3>'   : 'Vehicle_Control_CodeGen/Function-Call Subsystem'
 * '<S4>'   : 'Vehicle_Control_CodeGen/Function-Call Subsystem1'
 * '<S5>'   : 'Vehicle_Control_CodeGen/Hardware Interrupt1'
 * '<S6>'   : 'Vehicle_Control_CodeGen/Hardware Interrupt3'
 * '<S7>'   : 'Vehicle_Control_CodeGen/Power Forcasting'
 * '<S8>'   : 'Vehicle_Control_CodeGen/Throttle//Regen Control'
 * '<S9>'   : 'Vehicle_Control_CodeGen/Triggered Subsystem'
 * '<S10>'  : 'Vehicle_Control_CodeGen/Variant Subsystem'
 * '<S11>'  : 'Vehicle_Control_CodeGen/Variant Subsystem1'
 * '<S12>'  : 'Vehicle_Control_CodeGen/10 HZ Send1/Enabled Subsystem'
 * '<S13>'  : 'Vehicle_Control_CodeGen/10 HZ Send1/Enabled Subsystem/Counter Limited'
 * '<S14>'  : 'Vehicle_Control_CodeGen/10 HZ Send1/Enabled Subsystem/Counter Limited1'
 * '<S15>'  : 'Vehicle_Control_CodeGen/10 HZ Send1/Enabled Subsystem/Counter Limited/Increment Real World'
 * '<S16>'  : 'Vehicle_Control_CodeGen/10 HZ Send1/Enabled Subsystem/Counter Limited/Wrap To Zero'
 * '<S17>'  : 'Vehicle_Control_CodeGen/10 HZ Send1/Enabled Subsystem/Counter Limited1/Increment Real World'
 * '<S18>'  : 'Vehicle_Control_CodeGen/10 HZ Send1/Enabled Subsystem/Counter Limited1/Wrap To Zero'
 * '<S19>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem1'
 * '<S20>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem10'
 * '<S21>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem11'
 * '<S22>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem12'
 * '<S23>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem2'
 * '<S24>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem3'
 * '<S25>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem4'
 * '<S26>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem5'
 * '<S27>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem6'
 * '<S28>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem7'
 * '<S29>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem8'
 * '<S30>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem/If Action Subsystem9'
 * '<S31>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits'
 * '<S32>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits1'
 * '<S33>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits10'
 * '<S34>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits11'
 * '<S35>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits12'
 * '<S36>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits2'
 * '<S37>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits3'
 * '<S38>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits4'
 * '<S39>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits5'
 * '<S40>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits6'
 * '<S41>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits7'
 * '<S42>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits8'
 * '<S43>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Extract Bits9'
 * '<S44>'  : 'Vehicle_Control_CodeGen/Function-Call Subsystem1/Subsystem'
 * '<S45>'  : 'Vehicle_Control_CodeGen/Hardware Interrupt1/ECSoC'
 * '<S46>'  : 'Vehicle_Control_CodeGen/Hardware Interrupt1/ECSoC/ECSimCodegen'
 * '<S47>'  : 'Vehicle_Control_CodeGen/Hardware Interrupt3/ECSoC'
 * '<S48>'  : 'Vehicle_Control_CodeGen/Hardware Interrupt3/ECSoC/ECSimCodegen'
 * '<S49>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller'
 * '<S50>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Variant Subsystem'
 * '<S51>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Variant Subsystem1'
 * '<S52>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Anti-windup'
 * '<S53>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/D Gain'
 * '<S54>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/External Derivative'
 * '<S55>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Filter'
 * '<S56>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Filter ICs'
 * '<S57>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/I Gain'
 * '<S58>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Ideal P Gain'
 * '<S59>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S60>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Integrator'
 * '<S61>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Integrator ICs'
 * '<S62>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/N Copy'
 * '<S63>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/N Gain'
 * '<S64>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/P Copy'
 * '<S65>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Parallel P Gain'
 * '<S66>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Reset Signal'
 * '<S67>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Saturation'
 * '<S68>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Saturation Fdbk'
 * '<S69>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Sum'
 * '<S70>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Sum Fdbk'
 * '<S71>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Tracking Mode'
 * '<S72>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Tracking Mode Sum'
 * '<S73>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Tsamp - Integral'
 * '<S74>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Tsamp - Ngain'
 * '<S75>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/postSat Signal'
 * '<S76>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/preSat Signal'
 * '<S77>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S78>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S79>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/External Derivative/Error'
 * '<S80>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S81>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S82>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S83>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S84>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S85>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Integrator/Discrete'
 * '<S86>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S87>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/N Copy/Disabled'
 * '<S88>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S89>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/P Copy/Disabled'
 * '<S90>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S91>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Reset Signal/Disabled'
 * '<S92>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Saturation/Passthrough'
 * '<S93>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S94>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Sum/Sum_PID'
 * '<S95>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S96>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S97>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S98>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S99>'  : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S100>' : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S101>' : 'Vehicle_Control_CodeGen/Power Forcasting/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S102>' : 'Vehicle_Control_CodeGen/Power Forcasting/Variant Subsystem/CAN Forwarding'
 * '<S103>' : 'Vehicle_Control_CodeGen/Power Forcasting/Variant Subsystem1/Code Gen, Wheel speed averaging and integration'
 * '<S104>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1'
 * '<S105>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request'
 * '<S106>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Compare To Constant'
 * '<S107>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1'
 * '<S108>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Anti-windup'
 * '<S109>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/D Gain'
 * '<S110>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/External Derivative'
 * '<S111>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter'
 * '<S112>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter ICs'
 * '<S113>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/I Gain'
 * '<S114>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain'
 * '<S115>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S116>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator'
 * '<S117>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator ICs'
 * '<S118>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Copy'
 * '<S119>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Gain'
 * '<S120>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/P Copy'
 * '<S121>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Parallel P Gain'
 * '<S122>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Reset Signal'
 * '<S123>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation'
 * '<S124>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation Fdbk'
 * '<S125>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum'
 * '<S126>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum Fdbk'
 * '<S127>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode'
 * '<S128>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode Sum'
 * '<S129>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Integral'
 * '<S130>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Ngain'
 * '<S131>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/postSat Signal'
 * '<S132>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/preSat Signal'
 * '<S133>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S134>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S135>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/External Derivative/Error'
 * '<S136>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S137>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S138>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S139>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S140>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S141>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator/Discrete'
 * '<S142>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S143>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Copy/Disabled'
 * '<S144>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S145>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/P Copy/Disabled'
 * '<S146>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S147>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S148>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation/Passthrough'
 * '<S149>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S150>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum/Sum_PID'
 * '<S151>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S152>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S153>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S154>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S155>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S156>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S157>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S158>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Compare To Constant'
 * '<S159>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1'
 * '<S160>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Anti-windup'
 * '<S161>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/D Gain'
 * '<S162>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/External Derivative'
 * '<S163>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter'
 * '<S164>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter ICs'
 * '<S165>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/I Gain'
 * '<S166>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain'
 * '<S167>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S168>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator'
 * '<S169>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator ICs'
 * '<S170>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Copy'
 * '<S171>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Gain'
 * '<S172>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/P Copy'
 * '<S173>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Parallel P Gain'
 * '<S174>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Reset Signal'
 * '<S175>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation'
 * '<S176>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation Fdbk'
 * '<S177>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum'
 * '<S178>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum Fdbk'
 * '<S179>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode'
 * '<S180>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode Sum'
 * '<S181>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Integral'
 * '<S182>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Ngain'
 * '<S183>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/postSat Signal'
 * '<S184>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/preSat Signal'
 * '<S185>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S186>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S187>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/External Derivative/Error'
 * '<S188>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S189>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S190>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S191>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S192>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S193>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator/Discrete'
 * '<S194>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S195>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Copy/Disabled'
 * '<S196>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S197>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/P Copy/Disabled'
 * '<S198>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S199>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S200>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation/Passthrough'
 * '<S201>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S202>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum/Sum_PID'
 * '<S203>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S204>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S205>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S206>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S207>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S208>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S209>' : 'Vehicle_Control_CodeGen/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S210>' : 'Vehicle_Control_CodeGen/Variant Subsystem/CAN Forwarding'
 * '<S211>' : 'Vehicle_Control_CodeGen/Variant Subsystem1/CAN Forwarding'
 */
#endif                                 /* Vehicle_Control_CodeGen_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
