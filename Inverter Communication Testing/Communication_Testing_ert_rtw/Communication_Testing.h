/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Communication_Testing.h
 *
 * Code generated for Simulink model 'Communication_Testing'.
 *
 * Model version                  : 1.69
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Sep 16 11:38:53 2025
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

/* Block signals for system '<S17>/Moving Average' */
typedef struct {
  real_T MovingAverage;                /* '<S17>/Moving Average' */
} B_MovingAverage_Communication_T;

/* Block states (default storage) for system '<S17>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage_Co_T obj; /* '<S17>/Moving Average' */
  boolean_T objisempty;                /* '<S17>/Moving Average' */
} DW_MovingAverage_Communicatio_T;

/* Block states (default storage) for system '<S8>/FDCAN Write2' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S8>/FDCAN Write2' */
  boolean_T objisempty;                /* '<S8>/FDCAN Write2' */
} DW_FDCANWrite2_Communication__T;

/* Block states (default storage) for system '<S8>/FDCAN Write3' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S8>/FDCAN Write3' */
  boolean_T objisempty;                /* '<S8>/FDCAN Write3' */
} DW_FDCANWrite3_Communication__T;

/* Block signals (default storage) */
typedef struct {
  uint16_T DataTypeConversion7;        /* '<S6>/Data Type Conversion7' */
  uint16_T ByteReversal7;              /* '<S6>/Byte Reversal7' */
  int16_T DataTypeConversion;          /* '<S2>/Data Type Conversion' */
  int16_T ByteReversal;                /* '<S2>/Byte Reversal' */
  int16_T DataTypeConversion2;         /* '<S2>/Data Type Conversion2' */
  int16_T ByteReversal1;               /* '<S2>/Byte Reversal1' */
  uint8_T VectorConcatenate[3];        /* '<S2>/Vector Concatenate' */
  uint8_T VectorConcatenate1[3];       /* '<S2>/Vector Concatenate1' */
  uint8_T VectorConcatenate1_f[8];     /* '<S6>/Vector Concatenate1' */
  B_MovingAverage_Communication_T MovingAverage_p;/* '<S17>/Moving Average' */
  B_MovingAverage_Communication_T MovingAverage;/* '<S17>/Moving Average' */
} B_Communication_Testing_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S7>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_c;/* '<S6>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_m;/* '<S6>/FDCAN Write1' */
  stm32cube_blocks_AnalogInputF_T obj_mo;/* '<S16>/Analog to Digital Converter' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T Filter_DSTATE;                /* '<S49>/Filter' */
  real_T Integrator_DSTATE;            /* '<S54>/Integrator' */
  real_T Filter_DSTATE_i;              /* '<S101>/Filter' */
  real_T Integrator_DSTATE_l;          /* '<S106>/Integrator' */
  real_T TmpRTBAt50HZSendTorqueRequestst;/* synthesized block */
  real_T TmpRTBAt50HZSendTorqueRequest_d;/* synthesized block */
  real_T TmpRTBAtTriggeredSubsystemInpor;/* synthesized block */
  real_T Memory1_PreviousInput;        /* '<S17>/Memory1' */
  real_T Filter_PREV_U;                /* '<S49>/Filter' */
  real_T Memory1_PreviousInput_g;      /* '<S18>/Memory1' */
  real_T Filter_PREV_U_e;              /* '<S101>/Filter' */
  uint32_T ThrottleRegenControl_PREV_T;/* '<Root>/Throttle//Regen Control' */
  uint8_T Output_DSTATE;               /* '<S9>/Output' */
  uint8_T Output_DSTATE_c;             /* '<S10>/Output' */
  uint8_T Filter_SYSTEM_ENABLE;        /* '<S49>/Filter' */
  uint8_T Filter_SYSTEM_ENABLE_o;      /* '<S101>/Filter' */
  boolean_T ThrottleRegenControl_RESET_ELAP;/* '<Root>/Throttle//Regen Control' */
  boolean_T Relay_Mode;                /* '<S17>/Relay' */
  boolean_T IC1_FirstOutputTime;       /* '<S17>/IC1' */
  boolean_T Relay_Mode_f;              /* '<S18>/Relay' */
  boolean_T IC2_FirstOutputTime;       /* '<S18>/IC2' */
  DW_FDCANWrite3_Communication__T FDCANWrite3_pna;/* '<S8>/FDCAN Write3' */
  DW_FDCANWrite2_Communication__T FDCANWrite1_p;/* '<S8>/FDCAN Write2' */
  DW_FDCANWrite3_Communication__T FDCANWrite3_pn;/* '<S8>/FDCAN Write3' */
  DW_FDCANWrite2_Communication__T FDCANWrite2;/* '<S8>/FDCAN Write2' */
  DW_MovingAverage_Communicatio_T MovingAverage_p;/* '<S17>/Moving Average' */
  DW_MovingAverage_Communicatio_T MovingAverage;/* '<S17>/Moving Average' */
} DW_Communication_Testing_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Add1;                   /* '<Root>/Add1' */
  const real_T Abs;                    /* '<S7>/Abs' */
  const real_T Add;                    /* '<S7>/Add' */
  const real_T Divide;                 /* '<S7>/Divide' */
  const real_T Switch;                 /* '<S7>/Switch' */
  const real_T Add1_c;                 /* '<S7>/Add1' */
  const real_T RearWheelSpeed;         /* '<S7>/Product' */
  const real_T RearMotorSpeed;         /* '<S7>/Product1' */
  const real_T MotorSpeed0100;         /* '<S7>/Gain' */
  const real_T Switch1;                /* '<S7>/Switch1' */
  const real_T Switch2;                /* '<S7>/Switch2' */
  const real_T Saturation;             /* '<S7>/Saturation' */
  const real_T Gain1;                  /* '<S7>/Gain1' */
  const real_T Subtract;               /* '<S17>/Subtract' */
  const real_T Subtract1;              /* '<S17>/Subtract1' */
  const real_T Slope;                  /* '<S17>/Divide1' */
  const real_T Subtract_a;             /* '<S18>/Subtract' */
  const real_T Subtract1_k;            /* '<S18>/Subtract1' */
  const real_T Slope_h;                /* '<S18>/Divide1' */
  const uint16_T DataTypeConversion;   /* '<S6>/Data Type Conversion' */
  const uint16_T ByteReversal;         /* '<S6>/Byte Reversal' */
  const uint16_T DataTypeConversion1;  /* '<S6>/Data Type Conversion1' */
  const uint16_T ByteReversal1;        /* '<S6>/Byte Reversal1' */
  const uint16_T DataTypeConversion2;  /* '<S6>/Data Type Conversion2' */
  const uint16_T ByteReversal2;        /* '<S6>/Byte Reversal2' */
  const uint16_T DataTypeConversion3;  /* '<S6>/Data Type Conversion3' */
  const uint16_T ByteReversal3;        /* '<S6>/Byte Reversal3' */
  const uint16_T DataTypeConversion4;  /* '<S6>/Data Type Conversion4' */
  const uint16_T ByteReversal4;        /* '<S6>/Byte Reversal4' */
  const uint16_T DataTypeConversion5;  /* '<S6>/Data Type Conversion5' */
  const uint16_T ByteReversal5;        /* '<S6>/Byte Reversal5' */
  const uint16_T DataTypeConversion6;  /* '<S6>/Data Type Conversion6' */
  const uint16_T ByteReversal6;        /* '<S6>/Byte Reversal6' */
  const int16_T DataTypeConversion_n;  /* '<S7>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_n; /* '<S2>/Data Type Conversion1' */
  const uint8_T DataTypeConversion3_h; /* '<S2>/Data Type Conversion3' */
  const uint8_T DataTypeConversion3_e; /* '<S8>/Data Type Conversion3' */
  const uint8_T BytePack[2];           /* '<S7>/Byte Pack' */
  const uint8_T DataTypeConversion1_k; /* '<S7>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_c; /* '<S7>/Data Type Conversion2' */
  const uint8_T DataTypeConversion3_i; /* '<S7>/Data Type Conversion3' */
  const uint8_T VectorConcatenate[5];  /* '<S7>/Vector Concatenate' */
  const uint8_T BytePack_g[2];         /* '<S6>/Byte Pack' */
  const uint8_T BytePack1[2];          /* '<S6>/Byte Pack1' */
  const uint8_T BytePack2[2];          /* '<S6>/Byte Pack2' */
  const uint8_T BytePack3[2];          /* '<S6>/Byte Pack3' */
  const uint8_T VectorConcatenate_j[8];/* '<S6>/Vector Concatenate' */
  const uint8_T BytePack4[2];          /* '<S6>/Byte Pack4' */
  const uint8_T BytePack5[2];          /* '<S6>/Byte Pack5' */
  const uint8_T BytePack6[2];          /* '<S6>/Byte Pack6' */
  const boolean_T GreaterThan1;        /* '<S7>/GreaterThan1' */
  const boolean_T LessThan1;           /* '<S7>/Less Than1' */
  const boolean_T AND;                 /* '<S7>/AND' */
  const boolean_T GreaterThan;         /* '<S7>/GreaterThan' */
  const boolean_T LessThan;            /* '<S7>/Less Than' */
} ConstB_Communication_Testing_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [235 74 168 73 95 138])
   * Referenced by:
   *   '<S8>/Direct Lookup Table (n-D)'
   *   '<S8>/Direct Lookup Table (n-D)1'
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
 * Block '<S9>/Data Type Propagation' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S12>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S10>/Data Type Propagation' : Unused code path elimination
 * Block '<S13>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S8>/Scope2' : Unused code path elimination
 * Block '<S8>/Scope3' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope12' : Unused code path elimination
 * Block '<Root>/Scope13' : Unused code path elimination
 * Block '<Root>/Scope14' : Unused code path elimination
 * Block '<Root>/Scope15' : Unused code path elimination
 * Block '<Root>/Scope16' : Unused code path elimination
 * Block '<Root>/Scope17' : Unused code path elimination
 * Block '<S4>/Constant2' : Unused code path elimination
 * Block '<S17>/Add2' : Unused code path elimination
 * Block '<S17>/Constant10' : Unused code path elimination
 * Block '<S17>/Constant3' : Unused code path elimination
 * Block '<S17>/Constant9' : Unused code path elimination
 * Block '<S17>/Product3' : Unused code path elimination
 * Block '<S17>/Saturation1' : Unused code path elimination
 * Block '<S17>/Saturation2' : Unused code path elimination
 * Block '<S17>/Scope' : Unused code path elimination
 * Block '<S17>/Scope1' : Unused code path elimination
 * Block '<S17>/Scope11' : Unused code path elimination
 * Block '<S17>/Scope13' : Unused code path elimination
 * Block '<S17>/Scope14' : Unused code path elimination
 * Block '<S17>/Scope2' : Unused code path elimination
 * Block '<S17>/Scope3' : Unused code path elimination
 * Block '<S17>/Scope5' : Unused code path elimination
 * Block '<S17>/Scope7' : Unused code path elimination
 * Block '<S17>/Scope8' : Unused code path elimination
 * Block '<S17>/Scope9' : Unused code path elimination
 * Block '<S17>/Square' : Unused code path elimination
 * Block '<S17>/Subtract2' : Unused code path elimination
 * Block '<S18>/Scope' : Unused code path elimination
 * Block '<S18>/Scope1' : Unused code path elimination
 * Block '<S18>/Scope10' : Unused code path elimination
 * Block '<S18>/Scope11' : Unused code path elimination
 * Block '<S18>/Scope12' : Unused code path elimination
 * Block '<S18>/Scope13' : Unused code path elimination
 * Block '<S18>/Scope14' : Unused code path elimination
 * Block '<S18>/Scope15' : Unused code path elimination
 * Block '<S18>/Scope2' : Unused code path elimination
 * Block '<S18>/Scope3' : Unused code path elimination
 * Block '<S18>/Scope4' : Unused code path elimination
 * Block '<S18>/Scope5' : Unused code path elimination
 * Block '<S18>/Scope6' : Unused code path elimination
 * Block '<S18>/Scope7' : Unused code path elimination
 * Block '<S18>/Scope8' : Unused code path elimination
 * Block '<S18>/Scope9' : Unused code path elimination
 * Block '<S5>/Scope' : Unused code path elimination
 * Block '<S5>/Sum' : Unused code path elimination
 * Block '<S6>/Scope' : Unused code path elimination
 * Block '<S7>/Scope' : Unused code path elimination
 * Block '<S7>/Scope1' : Unused code path elimination
 * Block '<S7>/Scope2' : Unused code path elimination
 * Block '<Root>/Manual Switch' : Eliminated due to constant selection input
 * Block '<S17>/Manual Switch1' : Eliminated due to constant selection input
 * Block '<S18>/Manual Switch1' : Eliminated due to constant selection input
 * Block '<Root>/Constant16' : Unused code path elimination
 * Block '<Root>/Constant17' : Unused code path elimination
 * Block '<Root>/Constant22' : Unused code path elimination
 * Block '<Root>/Constant23' : Unused code path elimination
 * Block '<Root>/Product1' : Unused code path elimination
 * Block '<Root>/Product2' : Unused code path elimination
 * Block '<S17>/Constant2' : Unused code path elimination
 * Block '<S17>/Product1' : Unused code path elimination
 * Block '<S18>/Constant12' : Unused code path elimination
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
 * '<S5>'   : 'Communication_Testing/Throttle//Regen Control'
 * '<S6>'   : 'Communication_Testing/Triggered Subsystem'
 * '<S7>'   : 'Communication_Testing/Triggered Subsystem3'
 * '<S8>'   : 'Communication_Testing/10 HZ Send1/Enabled Subsystem'
 * '<S9>'   : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited'
 * '<S10>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited1'
 * '<S11>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited/Increment Real World'
 * '<S12>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited/Wrap To Zero'
 * '<S13>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited1/Increment Real World'
 * '<S14>'  : 'Communication_Testing/10 HZ Send1/Enabled Subsystem/Counter Limited1/Wrap To Zero'
 * '<S15>'  : 'Communication_Testing/Analog to Digital Converter/ECSoC'
 * '<S16>'  : 'Communication_Testing/Analog to Digital Converter/ECSoC/ECSimCodegen'
 * '<S17>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1'
 * '<S18>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request'
 * '<S19>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Compare To Constant'
 * '<S20>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1'
 * '<S21>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Anti-windup'
 * '<S22>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/D Gain'
 * '<S23>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/External Derivative'
 * '<S24>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter'
 * '<S25>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter ICs'
 * '<S26>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/I Gain'
 * '<S27>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain'
 * '<S28>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S29>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator'
 * '<S30>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator ICs'
 * '<S31>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Copy'
 * '<S32>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Gain'
 * '<S33>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/P Copy'
 * '<S34>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Parallel P Gain'
 * '<S35>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Reset Signal'
 * '<S36>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation'
 * '<S37>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation Fdbk'
 * '<S38>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum'
 * '<S39>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum Fdbk'
 * '<S40>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode'
 * '<S41>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode Sum'
 * '<S42>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Integral'
 * '<S43>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Ngain'
 * '<S44>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/postSat Signal'
 * '<S45>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/preSat Signal'
 * '<S46>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S47>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S48>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/External Derivative/Error'
 * '<S49>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S50>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S51>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S52>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S53>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S54>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator/Discrete'
 * '<S55>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S56>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Copy/Disabled'
 * '<S57>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S58>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/P Copy/Disabled'
 * '<S59>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S60>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S61>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation/Passthrough'
 * '<S62>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S63>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum/Sum_PID'
 * '<S64>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S65>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S66>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S67>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S68>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S69>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S70>'  : 'Communication_Testing/Throttle//Regen Control/Left Side Torque Request1/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S71>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Compare To Constant'
 * '<S72>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1'
 * '<S73>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Anti-windup'
 * '<S74>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/D Gain'
 * '<S75>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/External Derivative'
 * '<S76>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter'
 * '<S77>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter ICs'
 * '<S78>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/I Gain'
 * '<S79>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain'
 * '<S80>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S81>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator'
 * '<S82>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator ICs'
 * '<S83>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Copy'
 * '<S84>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Gain'
 * '<S85>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/P Copy'
 * '<S86>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Parallel P Gain'
 * '<S87>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Reset Signal'
 * '<S88>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation'
 * '<S89>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation Fdbk'
 * '<S90>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum'
 * '<S91>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum Fdbk'
 * '<S92>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode'
 * '<S93>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode Sum'
 * '<S94>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Integral'
 * '<S95>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Ngain'
 * '<S96>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/postSat Signal'
 * '<S97>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/preSat Signal'
 * '<S98>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S99>'  : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S100>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/External Derivative/Error'
 * '<S101>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S102>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S103>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S104>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S105>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S106>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator/Discrete'
 * '<S107>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S108>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Copy/Disabled'
 * '<S109>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S110>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/P Copy/Disabled'
 * '<S111>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S112>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S113>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation/Passthrough'
 * '<S114>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S115>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum/Sum_PID'
 * '<S116>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S117>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S118>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S119>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S120>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S121>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S122>' : 'Communication_Testing/Throttle//Regen Control/Right Side Torque Request/Discrete PID Controller1/preSat Signal/Forward_Path'
 */
#endif                                 /* Communication_Testing_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
