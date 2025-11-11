/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Communication_Testing.h
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

#ifndef Communication_Testing_h_
#define Communication_Testing_h_
#ifndef Communication_Testing_COMMON_INCLUDES_
#define Communication_Testing_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "string.h"
#include "can_fd_message.h"
#include "stm_fdcan_hal.h"
#endif                              /* Communication_Testing_COMMON_INCLUDES_ */

#include "mw_stm32_nvic.h"
#include "Communication_Testing_types.h"
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

/* Block signals for system '<S37>/Moving Average' */
typedef struct {
  real_T MovingAverage;                /* '<S37>/Moving Average' */
} B_MovingAverage_Communication_T;

/* Block states (default storage) for system '<S37>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage_Co_T obj; /* '<S37>/Moving Average' */
  boolean_T objisempty;                /* '<S37>/Moving Average' */
} DW_MovingAverage_Communicatio_T;

/* Block states (default storage) for system '<S12>/FDCAN Write2' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S12>/FDCAN Write2' */
  boolean_T objisempty;                /* '<S12>/FDCAN Write2' */
} DW_FDCANWrite2_Communication__T;

/* Block states (default storage) for system '<S12>/FDCAN Write3' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S12>/FDCAN Write3' */
  boolean_T objisempty;                /* '<S12>/FDCAN Write3' */
} DW_FDCANWrite3_Communication__T;

/* Block signals (default storage) */
typedef struct {
  CAN_FD_MESSAGE_BUS FDCANRead1;       /* '<S5>/FDCAN Read1' */
  uint16_T TmpRTBAtTriggeredSubsystemInpor;
  uint16_T TmpRTBAtFunctionCallSubsystemOu;/* '<Root>/Function-Call Subsystem' */
  uint16_T TmpRTBAtFunctionCallSubsystem_m;/* '<Root>/Function-Call Subsystem' */
  uint16_T TmpRTBAtFunctionCallSubsystem_i;/* '<Root>/Function-Call Subsystem' */
  uint16_T TmpRTBAtTriggeredSubsystemInp_l;
  uint16_T TmpRTBAtFunctionCallSubsystem_j;/* '<Root>/Function-Call Subsystem' */
  uint16_T TmpRTBAtFunctionCallSubsystem_o;/* '<Root>/Function-Call Subsystem' */
  uint16_T ByteUnpack;                 /* '<S5>/Byte Unpack' */
  uint16_T ByteUnpack1;                /* '<S5>/Byte Unpack1' */
  uint16_T In1;                        /* '<S32>/In1' */
  uint16_T In1_g;                      /* '<S33>/In1' */
  uint16_T In1_g2;                     /* '<S24>/In1' */
  uint16_T In1_g20;                    /* '<S26>/In1' */
  uint16_T In1_g20a;                   /* '<S23>/In1' */
  uint16_T In1_g20as;                  /* '<S27>/In1' */
  uint16_T In1_g20asd;                 /* '<S29>/In1' */
  uint16_T DataTypeConversion;         /* '<S10>/Data Type Conversion' */
  uint16_T ByteReversal;               /* '<S10>/Byte Reversal' */
  uint16_T ByteReversal1;              /* '<S10>/Byte Reversal1' */
  uint16_T ByteReversal2;              /* '<S10>/Byte Reversal2' */
  uint16_T ByteReversal3;              /* '<S10>/Byte Reversal3' */
  int16_T DataTypeConversion2;         /* '<S2>/Data Type Conversion2' */
  int16_T ByteReversal1_f;             /* '<S2>/Byte Reversal1' */
  int16_T DataTypeConversion_e;        /* '<S2>/Data Type Conversion' */
  uint8_T CANFDUnpack2[3];             /* '<S5>/CAN FD Unpack2' */
  uint8_T CANFDUnpack1[6];             /* '<S5>/CAN FD Unpack1' */
  uint8_T VectorConcatenate[3];        /* '<S2>/Vector Concatenate' */
  uint8_T VectorConcatenate1[3];       /* '<S2>/Vector Concatenate1' */
  uint8_T VectorConcatenate_j[8];      /* '<S10>/Vector Concatenate' */
  uint8_T VectorConcatenate1_f[8];     /* '<S10>/Vector Concatenate1' */
  B_MovingAverage_Communication_T MovingAverage;/* '<S37>/Moving Average' */
  B_MovingAverage_Communication_T MovingAverage_pn;/* '<S37>/Moving Average' */
  B_MovingAverage_Communication_T MovingAverage_p;/* '<S37>/Moving Average' */
} B_Communication_Testing_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S11>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_c;/* '<S10>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_m;/* '<S10>/FDCAN Write1' */
  stm32cube_blocks_AnalogInputF_T obj_mo;/* '<S20>/Analog to Digital Converter' */
  stm32cube_blocks_FDCANRead_Co_T obj_d;/* '<S5>/FDCAN Read1' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T Filter_DSTATE;                /* '<S69>/Filter' */
  real_T Integrator_DSTATE;            /* '<S74>/Integrator' */
  real_T Filter_DSTATE_i;              /* '<S121>/Filter' */
  real_T Integrator_DSTATE_l;          /* '<S126>/Integrator' */
  real_T TmpRTBAt50HZSendTorqueRequestst;/* synthesized block */
  real_T TmpRTBAt50HZSendTorqueRequest_d;/* synthesized block */
  real_T TmpRTBAtTriggeredSubsystemInpor;/* synthesized block */
  real_T Memory1_PreviousInput;        /* '<S37>/Memory1' */
  real_T Filter_PREV_U;                /* '<S69>/Filter' */
  real_T Memory1_PreviousInput_g;      /* '<S38>/Memory1' */
  real_T Filter_PREV_U_e;              /* '<S121>/Filter' */
  uint32_T ThrottleRegenControl_PREV_T;/* '<Root>/Throttle//Regen Control' */
  int_T CANFDUnpack2_ModeSignalID;     /* '<S5>/CAN FD Unpack2' */
  int_T CANFDUnpack2_StatusPortID;     /* '<S5>/CAN FD Unpack2' */
  int_T CANFDUnpack1_ModeSignalID;     /* '<S5>/CAN FD Unpack1' */
  int_T CANFDUnpack1_StatusPortID;     /* '<S5>/CAN FD Unpack1' */
  volatile uint16_T TmpRTBAtTriggeredSubsystemInp_l;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystemOu;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_k;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_m;/* synthesized block */
  volatile uint16_T TmpRTBAtTriggeredSubsystemInp_d;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_b;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_e;/* synthesized block */
  uint8_T Output_DSTATE;               /* '<S13>/Output' */
  uint8_T Output_DSTATE_c;             /* '<S14>/Output' */
  uint8_T Filter_SYSTEM_ENABLE;        /* '<S69>/Filter' */
  uint8_T Filter_SYSTEM_ENABLE_o;      /* '<S121>/Filter' */
  boolean_T ThrottleRegenControl_RESET_ELAP;/* '<Root>/Throttle//Regen Control' */
  boolean_T Relay_Mode;                /* '<S37>/Relay' */
  boolean_T IC1_FirstOutputTime;       /* '<S37>/IC1' */
  boolean_T Relay_Mode_f;              /* '<S38>/Relay' */
  boolean_T IC2_FirstOutputTime;       /* '<S38>/IC2' */
  DW_MovingAverage_Communicatio_T MovingAverage;/* '<S37>/Moving Average' */
  DW_FDCANWrite3_Communication__T FDCANWrite3_pna;/* '<S12>/FDCAN Write3' */
  DW_FDCANWrite2_Communication__T FDCANWrite1_p;/* '<S12>/FDCAN Write2' */
  DW_FDCANWrite3_Communication__T FDCANWrite3_pn;/* '<S12>/FDCAN Write3' */
  DW_FDCANWrite2_Communication__T FDCANWrite2;/* '<S12>/FDCAN Write2' */
  DW_MovingAverage_Communicatio_T MovingAverage_pn;/* '<S37>/Moving Average' */
  DW_MovingAverage_Communicatio_T MovingAverage_p;/* '<S37>/Moving Average' */
} DW_Communication_Testing_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Add1;                   /* '<Root>/Add1' */
  const real_T ByteReversal;           /* '<S2>/Byte Reversal' */
  const real_T Abs;                    /* '<S11>/Abs' */
  const real_T Add;                    /* '<S11>/Add' */
  const real_T Divide;                 /* '<S11>/Divide' */
  const real_T Switch;                 /* '<S11>/Switch' */
  const real_T Add1_c;                 /* '<S11>/Add1' */
  const real_T RearWheelSpeed;         /* '<S11>/Product' */
  const real_T RearMotorSpeed;         /* '<S11>/Product1' */
  const real_T MotorSpeed0100;         /* '<S11>/Gain' */
  const real_T Switch1;                /* '<S11>/Switch1' */
  const real_T Switch2;                /* '<S11>/Switch2' */
  const real_T Saturation;             /* '<S11>/Saturation' */
  const real_T Gain1;                  /* '<S11>/Gain1' */
  const real_T Subtract;               /* '<S37>/Subtract' */
  const real_T Subtract1;              /* '<S37>/Subtract1' */
  const real_T Slope;                  /* '<S37>/Divide1' */
  const real_T Subtract_a;             /* '<S38>/Subtract' */
  const real_T Subtract1_k;            /* '<S38>/Subtract1' */
  const real_T Slope_h;                /* '<S38>/Divide1' */
  const int16_T DataTypeConversion;    /* '<S11>/Data Type Conversion' */
  const uint8_T DataTypeConversion1;   /* '<S2>/Data Type Conversion1' */
  const uint8_T DataTypeConversion3;   /* '<S2>/Data Type Conversion3' */
  const uint8_T DataTypeConversion3_e; /* '<S12>/Data Type Conversion3' */
  const uint8_T BytePack[2];           /* '<S11>/Byte Pack' */
  const uint8_T DataTypeConversion1_k; /* '<S11>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2;   /* '<S11>/Data Type Conversion2' */
  const uint8_T DataTypeConversion3_i; /* '<S11>/Data Type Conversion3' */
  const uint8_T VectorConcatenate[5];  /* '<S11>/Vector Concatenate' */
  const boolean_T GreaterThan1;        /* '<S11>/GreaterThan1' */
  const boolean_T LessThan1;           /* '<S11>/Less Than1' */
  const boolean_T AND;                 /* '<S11>/AND' */
  const boolean_T GreaterThan;         /* '<S11>/GreaterThan' */
  const boolean_T LessThan;            /* '<S11>/Less Than' */
} ConstB_Communication_Testing_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [235 74 168 73 95 138])
   * Referenced by:
   *   '<S12>/Direct Lookup Table (n-D)'
   *   '<S12>/Direct Lookup Table (n-D)1'
   */
  real_T pooled24[6];
} ConstP_Communication_Testing_T;

/* Real-time Model Data Structure */
struct tag_RTM_Communication_Testing_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    struct {
      uint16_T TID[5];
    } TaskCounters;

    struct {
      boolean_T TID0_1;
      boolean_T TID0_2;
    } RateInteraction;
  } Timing;
};

/* Block signals (default storage) */
extern B_Communication_Testing_T Communication_Testing_B;

/* Block states (default storage) */
extern DW_Communication_Testing_T Communication_Testing_DW;
extern const ConstB_Communication_Testing_T Communication_Testing_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_Communication_Testing_T Communication_Testing_ConstP;

/* External function called from main */
extern void Communication_Testing_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void Communication_Testing_initialize(void);
extern void Communication_Testing_step0(void);
extern void Communication_Testing_step1(void);
extern void Communication_Testing_step2(void);
extern void Communication_Testing_step3(void);
extern void Communication_Testing_step4(void);
extern void Communication_Testing_step(int_T tid);
extern void Communication_Testing_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Communication_Testin_T *const Communication_Testing_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

#ifdef __cpluscplus

extern "C"
{

#endif

  void FDCAN2_IT0_IRQHandler(void);
  void Communication_Testing_configure_interrupts (void);
  void Communication_Testing_unconfigure_interrupts (void);

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
 * Block '<Root>/Constant15' : Unused code path elimination
 * Block '<Root>/Constant17' : Unused code path elimination
 * Block '<S4>/Data Type Propagation' : Unused code path elimination
 * Block '<S21>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S5>/Scope1' : Unused code path elimination
 * Block '<S5>/Scope2' : Unused code path elimination
 * Block '<S5>/Scope4' : Unused code path elimination
 * Block '<S5>/Scope7' : Unused code path elimination
 * Block '<Root>/Product2' : Unused code path elimination
 * Block '<Root>/Scope12' : Unused code path elimination
 * Block '<Root>/Scope13' : Unused code path elimination
 * Block '<Root>/Scope14' : Unused code path elimination
 * Block '<Root>/Scope15' : Unused code path elimination
 * Block '<Root>/Scope16' : Unused code path elimination
 * Block '<Root>/Scope17' : Unused code path elimination
 * Block '<Root>/Scope18' : Unused code path elimination
 * Block '<Root>/Scope19' : Unused code path elimination
 * Block '<Root>/Scope20' : Unused code path elimination
 * Block '<S7>/Constant26' : Unused code path elimination
 * Block '<S7>/Constant30' : Unused code path elimination
 * Block '<S7>/Constant31' : Unused code path elimination
 * Block '<S7>/Constant32' : Unused code path elimination
 * Block '<S7>/Constant33' : Unused code path elimination
 * Block '<S7>/Divide4' : Unused code path elimination
 * Block '<S7>/Divide5' : Unused code path elimination
 * Block '<S7>/Divide6' : Unused code path elimination
 * Block '<S7>/GreaterThan4' : Unused code path elimination
 * Block '<S7>/Product10' : Unused code path elimination
 * Block '<S7>/Product11' : Unused code path elimination
 * Block '<S7>/Product9' : Unused code path elimination
 * Block '<S7>/Scope' : Unused code path elimination
 * Block '<S7>/Scope1' : Unused code path elimination
 * Block '<S7>/Scope15' : Unused code path elimination
 * Block '<S7>/Scope16' : Unused code path elimination
 * Block '<S7>/Scope3' : Unused code path elimination
 * Block '<S7>/Scope4' : Unused code path elimination
 * Block '<S7>/Switch4' : Unused code path elimination
 * Block '<S8>/Scope15' : Unused code path elimination
 * Block '<S8>/Scope16' : Unused code path elimination
 * Block '<Root>/Switch2' : Unused code path elimination
 * Block '<S9>/Divide' : Unused code path elimination
 * Block '<S37>/Add2' : Unused code path elimination
 * Block '<S37>/Constant10' : Unused code path elimination
 * Block '<S37>/Constant3' : Unused code path elimination
 * Block '<S37>/Constant9' : Unused code path elimination
 * Block '<S37>/Product3' : Unused code path elimination
 * Block '<S37>/Saturation1' : Unused code path elimination
 * Block '<S37>/Saturation2' : Unused code path elimination
 * Block '<S37>/Scope' : Unused code path elimination
 * Block '<S37>/Scope1' : Unused code path elimination
 * Block '<S37>/Scope11' : Unused code path elimination
 * Block '<S37>/Scope13' : Unused code path elimination
 * Block '<S37>/Scope14' : Unused code path elimination
 * Block '<S37>/Scope2' : Unused code path elimination
 * Block '<S37>/Scope3' : Unused code path elimination
 * Block '<S37>/Scope5' : Unused code path elimination
 * Block '<S37>/Scope7' : Unused code path elimination
 * Block '<S37>/Scope8' : Unused code path elimination
 * Block '<S37>/Scope9' : Unused code path elimination
 * Block '<S37>/Square' : Unused code path elimination
 * Block '<S37>/Subtract2' : Unused code path elimination
 * Block '<S38>/Scope' : Unused code path elimination
 * Block '<S38>/Scope1' : Unused code path elimination
 * Block '<S38>/Scope10' : Unused code path elimination
 * Block '<S38>/Scope11' : Unused code path elimination
 * Block '<S38>/Scope12' : Unused code path elimination
 * Block '<S38>/Scope13' : Unused code path elimination
 * Block '<S38>/Scope14' : Unused code path elimination
 * Block '<S38>/Scope15' : Unused code path elimination
 * Block '<S38>/Scope16' : Unused code path elimination
 * Block '<S38>/Scope17' : Unused code path elimination
 * Block '<S38>/Scope2' : Unused code path elimination
 * Block '<S38>/Scope3' : Unused code path elimination
 * Block '<S38>/Scope4' : Unused code path elimination
 * Block '<S38>/Scope5' : Unused code path elimination
 * Block '<S38>/Scope6' : Unused code path elimination
 * Block '<S38>/Scope7' : Unused code path elimination
 * Block '<S38>/Scope8' : Unused code path elimination
 * Block '<S38>/Scope9' : Unused code path elimination
 * Block '<S9>/Scope' : Unused code path elimination
 * Block '<S9>/Sum' : Unused code path elimination
 * Block '<S10>/Scope' : Unused code path elimination
 * Block '<S11>/Scope' : Unused code path elimination
 * Block '<S11>/Scope1' : Unused code path elimination
 * Block '<S11>/Scope2' : Unused code path elimination
 * Block '<S11>/Scope3' : Unused code path elimination
 * Block '<S5>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<Root>/Manual Switch' : Eliminated due to constant selection input
 * Block '<Root>/Manual Switch1' : Eliminated due to constant selection input
 * Block '<S37>/Manual Switch1' : Eliminated due to constant selection input
 * Block '<S38>/Manual Switch1' : Eliminated due to constant selection input
 * Block '<S10>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion7' : Eliminate redundant data type conversion
 * Block '<Root>/Constant16' : Unused code path elimination
 * Block '<Root>/Constant22' : Unused code path elimination
 * Block '<Root>/Constant23' : Unused code path elimination
 * Block '<S21>/FixPt Constant' : Unused code path elimination
 * Block '<S21>/FixPt Sum1' : Unused code path elimination
 * Block '<S4>/Output' : Unused code path elimination
 * Block '<S22>/Constant' : Unused code path elimination
 * Block '<S22>/FixPt Switch' : Unused code path elimination
 * Block '<Root>/Product1' : Unused code path elimination
 * Block '<S37>/Constant2' : Unused code path elimination
 * Block '<S37>/Product1' : Unused code path elimination
 * Block '<S38>/Constant12' : Unused code path elimination
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
 * '<Root>' : 'Communication_Testing'
 * '<S1>'   : 'Communication_Testing/10 HZ Send1'
 * '<S2>'   : 'Communication_Testing/50 HZ Send Torque Requests to Inverters1'
 * '<S3>'   : 'Communication_Testing/Analog to Digital Converter'
 * '<S4>'   : 'Communication_Testing/Counter Limited1'
 * '<S5>'   : 'Communication_Testing/Function-Call Subsystem'
 * '<S6>'   : 'Communication_Testing/Hardware Interrupt1'
 * '<S7>'   : 'Communication_Testing/Subsystem1'
 * '<S8>'   : 'Communication_Testing/Subsystem2'
 * '<S9>'   : 'Communication_Testing/Throttle//Regen Control'
 * '<S10>'  : 'Communication_Testing/Triggered Subsystem'
 * '<S11>'  : 'Communication_Testing/Triggered Subsystem3'
 * '<S12>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem'
 * '<S13>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited'
 * '<S14>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited1'
 * '<S15>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited/Increment Real World'
 * '<S16>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited/Wrap To Zero'
 * '<S17>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited1/Increment Real World'
 * '<S18>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited1/Wrap To Zero'
 * '<S19>'  : 'Communication_Testing/Analog to Digital Converter/ECSoC'
 * '<S20>'  : 'Communication_Testing/Analog to Digital Converter/ECSoC/ECSimCodegen'
 * '<S21>'  : 'Communication_Testing/Counter Limited1/Increment Real World'
 * '<S22>'  : 'Communication_Testing/Counter Limited1/Wrap To Zero'
 * '<S23>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem1'
 * '<S24>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem10'
 * '<S25>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem11'
 * '<S26>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem12'
 * '<S27>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem2'
 * '<S28>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem3'
 * '<S29>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem4'
 * '<S30>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem5'
 * '<S31>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem6'
 * '<S32>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem7'
 * '<S33>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem8'
 * '<S34>'  : 'Communication_Testing/Function-Call Subsystem/If Action Subsystem9'
 * '<S35>'  : 'Communication_Testing/Hardware Interrupt1/ECSoC'
 * '<S36>'  : 'Communication_Testing/Hardware Interrupt1/ECSoC/ECSimCodegen'
 * '<S37>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1'
 * '<S38>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request'
 * '<S39>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Compare To Constant'
 * '<S40>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1'
 * '<S41>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Anti-windup'
 * '<S42>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/D Gain'
 * '<S43>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/External Derivative'
 * '<S44>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter'
 * '<S45>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter ICs'
 * '<S46>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/I Gain'
 * '<S47>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain'
 * '<S48>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S49>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator'
 * '<S50>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator ICs'
 * '<S51>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Copy'
 * '<S52>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Gain'
 * '<S53>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/P Copy'
 * '<S54>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Parallel P Gain'
 * '<S55>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Reset Signal'
 * '<S56>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation'
 * '<S57>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation Fdbk'
 * '<S58>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum'
 * '<S59>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum Fdbk'
 * '<S60>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode'
 * '<S61>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode Sum'
 * '<S62>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Integral'
 * '<S63>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Ngain'
 * '<S64>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/postSat Signal'
 * '<S65>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/preSat Signal'
 * '<S66>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S67>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S68>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/External Derivative/Error'
 * '<S69>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S70>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S71>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S72>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S73>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S74>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator/Discrete'
 * '<S75>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S76>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Copy/Disabled'
 * '<S77>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S78>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/P Copy/Disabled'
 * '<S79>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S80>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S81>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation/Passthrough'
 * '<S82>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S83>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum/Sum_PID'
 * '<S84>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S85>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S86>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S87>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S88>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S89>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S90>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S91>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Compare To Constant'
 * '<S92>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1'
 * '<S93>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Anti-windup'
 * '<S94>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/D Gain'
 * '<S95>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/External Derivative'
 * '<S96>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter'
 * '<S97>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter ICs'
 * '<S98>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/I Gain'
 * '<S99>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain'
 * '<S100>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S101>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator'
 * '<S102>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator ICs'
 * '<S103>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Copy'
 * '<S104>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Gain'
 * '<S105>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/P Copy'
 * '<S106>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Parallel P Gain'
 * '<S107>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Reset Signal'
 * '<S108>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation'
 * '<S109>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation Fdbk'
 * '<S110>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum'
 * '<S111>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum Fdbk'
 * '<S112>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode'
 * '<S113>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode Sum'
 * '<S114>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Integral'
 * '<S115>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Ngain'
 * '<S116>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/postSat Signal'
 * '<S117>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/preSat Signal'
 * '<S118>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S119>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S120>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/External Derivative/Error'
 * '<S121>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S122>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S123>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S124>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S125>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S126>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator/Discrete'
 * '<S127>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S128>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Copy/Disabled'
 * '<S129>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S130>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/P Copy/Disabled'
 * '<S131>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S132>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S133>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation/Passthrough'
 * '<S134>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S135>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum/Sum_PID'
 * '<S136>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S137>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S138>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S139>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S140>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S141>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S142>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/preSat Signal/Forward_Path'
 */
#endif                                 /* Communication_Testing_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
