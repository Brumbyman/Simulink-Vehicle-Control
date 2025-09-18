/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Communication_Testing.h
 *
 * Code generated for Simulink model 'Communication_Testing'.
 *
 * Model version                  : 1.71
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Sep 18 09:41:34 2025
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
#include "stm_fdcan_hal.h"
#endif                              /* Communication_Testing_COMMON_INCLUDES_ */

#include "Communication_Testing_types.h"
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

/* Block signals for system '<S19>/Moving Average' */
typedef struct {
  real_T MovingAverage;                /* '<S19>/Moving Average' */
} B_MovingAverage_Communication_T;

/* Block states (default storage) for system '<S19>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage_Co_T obj; /* '<S19>/Moving Average' */
  boolean_T objisempty;                /* '<S19>/Moving Average' */
} DW_MovingAverage_Communicatio_T;

/* Block states (default storage) for system '<S10>/FDCAN Write2' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S10>/FDCAN Write2' */
  boolean_T objisempty;                /* '<S10>/FDCAN Write2' */
} DW_FDCANWrite2_Communication__T;

/* Block states (default storage) for system '<S10>/FDCAN Write3' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S10>/FDCAN Write3' */
  boolean_T objisempty;                /* '<S10>/FDCAN Write3' */
} DW_FDCANWrite3_Communication__T;

/* Block signals (default storage) */
typedef struct {
  uint16_T DataTypeConversion7;        /* '<S8>/Data Type Conversion7' */
  uint16_T ByteReversal7;              /* '<S8>/Byte Reversal7' */
  int16_T DataTypeConversion;          /* '<S2>/Data Type Conversion' */
  int16_T ByteReversal;                /* '<S2>/Byte Reversal' */
  int16_T DataTypeConversion2;         /* '<S2>/Data Type Conversion2' */
  int16_T ByteReversal1;               /* '<S2>/Byte Reversal1' */
  uint8_T VectorConcatenate[3];        /* '<S2>/Vector Concatenate' */
  uint8_T VectorConcatenate1[3];       /* '<S2>/Vector Concatenate1' */
  uint8_T VectorConcatenate1_f[8];     /* '<S8>/Vector Concatenate1' */
  B_MovingAverage_Communication_T MovingAverage_p;/* '<S19>/Moving Average' */
  B_MovingAverage_Communication_T MovingAverage;/* '<S19>/Moving Average' */
} B_Communication_Testing_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S9>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_c;/* '<S8>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_m;/* '<S8>/FDCAN Write1' */
  stm32cube_blocks_AnalogInputF_T obj_mo;/* '<S18>/Analog to Digital Converter' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T Filter_DSTATE;                /* '<S51>/Filter' */
  real_T Integrator_DSTATE;            /* '<S56>/Integrator' */
  real_T Filter_DSTATE_i;              /* '<S103>/Filter' */
  real_T Integrator_DSTATE_l;          /* '<S108>/Integrator' */
  real_T TmpRTBAt50HZSendTorqueRequestst;/* synthesized block */
  real_T TmpRTBAt50HZSendTorqueRequest_d;/* synthesized block */
  real_T TmpRTBAtTriggeredSubsystemInpor;/* synthesized block */
  real_T Memory1_PreviousInput;        /* '<S19>/Memory1' */
  real_T Filter_PREV_U;                /* '<S51>/Filter' */
  real_T Memory1_PreviousInput_g;      /* '<S20>/Memory1' */
  real_T Filter_PREV_U_e;              /* '<S103>/Filter' */
  uint32_T ThrottleRegenControl_PREV_T;/* '<Root>/Throttle//Regen Control' */
  uint8_T Output_DSTATE;               /* '<S11>/Output' */
  uint8_T Output_DSTATE_c;             /* '<S12>/Output' */
  uint8_T Filter_SYSTEM_ENABLE;        /* '<S51>/Filter' */
  uint8_T Filter_SYSTEM_ENABLE_o;      /* '<S103>/Filter' */
  boolean_T ThrottleRegenControl_RESET_ELAP;/* '<Root>/Throttle//Regen Control' */
  boolean_T Relay_Mode;                /* '<S19>/Relay' */
  boolean_T IC1_FirstOutputTime;       /* '<S19>/IC1' */
  boolean_T Relay_Mode_f;              /* '<S20>/Relay' */
  boolean_T IC2_FirstOutputTime;       /* '<S20>/IC2' */
  DW_FDCANWrite3_Communication__T FDCANWrite3_pna;/* '<S10>/FDCAN Write3' */
  DW_FDCANWrite2_Communication__T FDCANWrite1_p;/* '<S10>/FDCAN Write2' */
  DW_FDCANWrite3_Communication__T FDCANWrite3_pn;/* '<S10>/FDCAN Write3' */
  DW_FDCANWrite2_Communication__T FDCANWrite2;/* '<S10>/FDCAN Write2' */
  DW_MovingAverage_Communicatio_T MovingAverage_p;/* '<S19>/Moving Average' */
  DW_MovingAverage_Communicatio_T MovingAverage;/* '<S19>/Moving Average' */
} DW_Communication_Testing_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Add1;                   /* '<Root>/Add1' */
  const real_T Abs;                    /* '<S9>/Abs' */
  const real_T Add;                    /* '<S9>/Add' */
  const real_T Divide;                 /* '<S9>/Divide' */
  const real_T Switch;                 /* '<S9>/Switch' */
  const real_T Add1_c;                 /* '<S9>/Add1' */
  const real_T RearWheelSpeed;         /* '<S9>/Product' */
  const real_T RearMotorSpeed;         /* '<S9>/Product1' */
  const real_T MotorSpeed0100;         /* '<S9>/Gain' */
  const real_T Switch1;                /* '<S9>/Switch1' */
  const real_T Switch2;                /* '<S9>/Switch2' */
  const real_T Saturation;             /* '<S9>/Saturation' */
  const real_T Gain1;                  /* '<S9>/Gain1' */
  const real_T Subtract;               /* '<S19>/Subtract' */
  const real_T Subtract1;              /* '<S19>/Subtract1' */
  const real_T Slope;                  /* '<S19>/Divide1' */
  const real_T Subtract_a;             /* '<S20>/Subtract' */
  const real_T Subtract1_k;            /* '<S20>/Subtract1' */
  const real_T Slope_h;                /* '<S20>/Divide1' */
  const uint16_T DataTypeConversion;   /* '<S8>/Data Type Conversion' */
  const uint16_T ByteReversal;         /* '<S8>/Byte Reversal' */
  const uint16_T DataTypeConversion1;  /* '<S8>/Data Type Conversion1' */
  const uint16_T ByteReversal1;        /* '<S8>/Byte Reversal1' */
  const uint16_T DataTypeConversion2;  /* '<S8>/Data Type Conversion2' */
  const uint16_T ByteReversal2;        /* '<S8>/Byte Reversal2' */
  const uint16_T DataTypeConversion3;  /* '<S8>/Data Type Conversion3' */
  const uint16_T ByteReversal3;        /* '<S8>/Byte Reversal3' */
  const uint16_T DataTypeConversion4;  /* '<S8>/Data Type Conversion4' */
  const uint16_T ByteReversal4;        /* '<S8>/Byte Reversal4' */
  const uint16_T DataTypeConversion5;  /* '<S8>/Data Type Conversion5' */
  const uint16_T ByteReversal5;        /* '<S8>/Byte Reversal5' */
  const uint16_T DataTypeConversion6;  /* '<S8>/Data Type Conversion6' */
  const uint16_T ByteReversal6;        /* '<S8>/Byte Reversal6' */
  const int16_T DataTypeConversion_n;  /* '<S9>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_n; /* '<S2>/Data Type Conversion1' */
  const uint8_T DataTypeConversion3_h; /* '<S2>/Data Type Conversion3' */
  const uint8_T DataTypeConversion3_e; /* '<S10>/Data Type Conversion3' */
  const uint8_T BytePack[2];           /* '<S9>/Byte Pack' */
  const uint8_T DataTypeConversion1_k; /* '<S9>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_c; /* '<S9>/Data Type Conversion2' */
  const uint8_T DataTypeConversion3_i; /* '<S9>/Data Type Conversion3' */
  const uint8_T VectorConcatenate[5];  /* '<S9>/Vector Concatenate' */
  const uint8_T BytePack_g[2];         /* '<S8>/Byte Pack' */
  const uint8_T BytePack1[2];          /* '<S8>/Byte Pack1' */
  const uint8_T BytePack2[2];          /* '<S8>/Byte Pack2' */
  const uint8_T BytePack3[2];          /* '<S8>/Byte Pack3' */
  const uint8_T VectorConcatenate_j[8];/* '<S8>/Vector Concatenate' */
  const uint8_T BytePack4[2];          /* '<S8>/Byte Pack4' */
  const uint8_T BytePack5[2];          /* '<S8>/Byte Pack5' */
  const uint8_T BytePack6[2];          /* '<S8>/Byte Pack6' */
  const boolean_T GreaterThan1;        /* '<S9>/GreaterThan1' */
  const boolean_T LessThan1;           /* '<S9>/Less Than1' */
  const boolean_T AND;                 /* '<S9>/AND' */
  const boolean_T GreaterThan;         /* '<S9>/GreaterThan' */
  const boolean_T LessThan;            /* '<S9>/Less Than' */
} ConstB_Communication_Testing_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [235 74 168 73 95 138])
   * Referenced by:
   *   '<S10>/Direct Lookup Table (n-D)'
   *   '<S10>/Direct Lookup Table (n-D)1'
   */
  real_T pooled25[6];
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
      uint8_T TID[3];
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
extern void Communication_Testing_step(int_T tid);
extern void Communication_Testing_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Communication_Testin_T *const Communication_Testing_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S11>/Data Type Propagation' : Unused code path elimination
 * Block '<S13>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S12>/Data Type Propagation' : Unused code path elimination
 * Block '<S15>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S10>/Scope2' : Unused code path elimination
 * Block '<S10>/Scope3' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope12' : Unused code path elimination
 * Block '<Root>/Scope13' : Unused code path elimination
 * Block '<Root>/Scope14' : Unused code path elimination
 * Block '<Root>/Scope15' : Unused code path elimination
 * Block '<Root>/Scope16' : Unused code path elimination
 * Block '<Root>/Scope17' : Unused code path elimination
 * Block '<S4>/Constant2' : Unused code path elimination
 * Block '<S5>/Scope15' : Unused code path elimination
 * Block '<S5>/Scope16' : Unused code path elimination
 * Block '<S6>/Scope15' : Unused code path elimination
 * Block '<S6>/Scope16' : Unused code path elimination
 * Block '<S19>/Add2' : Unused code path elimination
 * Block '<S19>/Constant10' : Unused code path elimination
 * Block '<S19>/Constant3' : Unused code path elimination
 * Block '<S19>/Constant9' : Unused code path elimination
 * Block '<S19>/Product3' : Unused code path elimination
 * Block '<S19>/Saturation1' : Unused code path elimination
 * Block '<S19>/Saturation2' : Unused code path elimination
 * Block '<S19>/Scope' : Unused code path elimination
 * Block '<S19>/Scope1' : Unused code path elimination
 * Block '<S19>/Scope11' : Unused code path elimination
 * Block '<S19>/Scope13' : Unused code path elimination
 * Block '<S19>/Scope14' : Unused code path elimination
 * Block '<S19>/Scope2' : Unused code path elimination
 * Block '<S19>/Scope3' : Unused code path elimination
 * Block '<S19>/Scope5' : Unused code path elimination
 * Block '<S19>/Scope7' : Unused code path elimination
 * Block '<S19>/Scope8' : Unused code path elimination
 * Block '<S19>/Scope9' : Unused code path elimination
 * Block '<S19>/Square' : Unused code path elimination
 * Block '<S19>/Subtract2' : Unused code path elimination
 * Block '<S20>/Scope' : Unused code path elimination
 * Block '<S20>/Scope1' : Unused code path elimination
 * Block '<S20>/Scope10' : Unused code path elimination
 * Block '<S20>/Scope11' : Unused code path elimination
 * Block '<S20>/Scope12' : Unused code path elimination
 * Block '<S20>/Scope13' : Unused code path elimination
 * Block '<S20>/Scope14' : Unused code path elimination
 * Block '<S20>/Scope15' : Unused code path elimination
 * Block '<S20>/Scope2' : Unused code path elimination
 * Block '<S20>/Scope3' : Unused code path elimination
 * Block '<S20>/Scope4' : Unused code path elimination
 * Block '<S20>/Scope5' : Unused code path elimination
 * Block '<S20>/Scope6' : Unused code path elimination
 * Block '<S20>/Scope7' : Unused code path elimination
 * Block '<S20>/Scope8' : Unused code path elimination
 * Block '<S20>/Scope9' : Unused code path elimination
 * Block '<S7>/Scope' : Unused code path elimination
 * Block '<S7>/Sum' : Unused code path elimination
 * Block '<S8>/Scope' : Unused code path elimination
 * Block '<S9>/Scope' : Unused code path elimination
 * Block '<S9>/Scope1' : Unused code path elimination
 * Block '<S9>/Scope2' : Unused code path elimination
 * Block '<Root>/Manual Switch' : Eliminated due to constant selection input
 * Block '<S19>/Manual Switch1' : Eliminated due to constant selection input
 * Block '<S20>/Manual Switch1' : Eliminated due to constant selection input
 * Block '<Root>/Constant16' : Unused code path elimination
 * Block '<Root>/Constant17' : Unused code path elimination
 * Block '<Root>/Constant22' : Unused code path elimination
 * Block '<Root>/Constant23' : Unused code path elimination
 * Block '<Root>/Product1' : Unused code path elimination
 * Block '<Root>/Product2' : Unused code path elimination
 * Block '<S19>/Constant2' : Unused code path elimination
 * Block '<S19>/Product1' : Unused code path elimination
 * Block '<S20>/Constant12' : Unused code path elimination
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
 * '<S4>'   : 'Communication_Testing/Subsystem'
 * '<S5>'   : 'Communication_Testing/Subsystem1'
 * '<S6>'   : 'Communication_Testing/Subsystem2'
 * '<S7>'   : 'Communication_Testing/Throttle//Regen Control'
 * '<S8>'   : 'Communication_Testing/Triggered Subsystem'
 * '<S9>'   : 'Communication_Testing/Triggered Subsystem3'
 * '<S10>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem'
 * '<S11>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited'
 * '<S12>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited1'
 * '<S13>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited/Increment Real World'
 * '<S14>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited/Wrap To Zero'
 * '<S15>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited1/Increment Real World'
 * '<S16>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited1/Wrap To Zero'
 * '<S17>'  : 'Communication_Testing/Analog to Digital Converter/ECSoC'
 * '<S18>'  : 'Communication_Testing/Analog to Digital Converter/ECSoC/ECSimCodegen'
 * '<S19>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1'
 * '<S20>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request'
 * '<S21>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Compare To Constant'
 * '<S22>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1'
 * '<S23>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Anti-windup'
 * '<S24>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/D Gain'
 * '<S25>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/External Derivative'
 * '<S26>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter'
 * '<S27>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter ICs'
 * '<S28>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/I Gain'
 * '<S29>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain'
 * '<S30>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S31>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator'
 * '<S32>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator ICs'
 * '<S33>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Copy'
 * '<S34>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Gain'
 * '<S35>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/P Copy'
 * '<S36>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Parallel P Gain'
 * '<S37>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Reset Signal'
 * '<S38>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation'
 * '<S39>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation Fdbk'
 * '<S40>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum'
 * '<S41>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum Fdbk'
 * '<S42>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode'
 * '<S43>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode Sum'
 * '<S44>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Integral'
 * '<S45>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Ngain'
 * '<S46>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/postSat Signal'
 * '<S47>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/preSat Signal'
 * '<S48>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S49>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S50>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/External Derivative/Error'
 * '<S51>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S52>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S53>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S54>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S55>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S56>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator/Discrete'
 * '<S57>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S58>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Copy/Disabled'
 * '<S59>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S60>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/P Copy/Disabled'
 * '<S61>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S62>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S63>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation/Passthrough'
 * '<S64>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S65>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum/Sum_PID'
 * '<S66>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S67>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S68>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S69>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S70>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S71>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S72>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S73>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Compare To Constant'
 * '<S74>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1'
 * '<S75>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Anti-windup'
 * '<S76>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/D Gain'
 * '<S77>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/External Derivative'
 * '<S78>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter'
 * '<S79>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter ICs'
 * '<S80>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/I Gain'
 * '<S81>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain'
 * '<S82>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S83>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator'
 * '<S84>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator ICs'
 * '<S85>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Copy'
 * '<S86>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Gain'
 * '<S87>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/P Copy'
 * '<S88>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Parallel P Gain'
 * '<S89>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Reset Signal'
 * '<S90>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation'
 * '<S91>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation Fdbk'
 * '<S92>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum'
 * '<S93>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum Fdbk'
 * '<S94>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode'
 * '<S95>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode Sum'
 * '<S96>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Integral'
 * '<S97>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Ngain'
 * '<S98>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/postSat Signal'
 * '<S99>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/preSat Signal'
 * '<S100>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S101>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S102>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/External Derivative/Error'
 * '<S103>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S104>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S105>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S106>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S107>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S108>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator/Discrete'
 * '<S109>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S110>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Copy/Disabled'
 * '<S111>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S112>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/P Copy/Disabled'
 * '<S113>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S114>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S115>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation/Passthrough'
 * '<S116>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S117>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum/Sum_PID'
 * '<S118>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S119>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S120>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S121>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S122>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S123>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S124>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/preSat Signal/Forward_Path'
 */
#endif                                 /* Communication_Testing_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
