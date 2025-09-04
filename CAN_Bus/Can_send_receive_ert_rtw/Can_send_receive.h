/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive.h
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

#ifndef Can_send_receive_h_
#define Can_send_receive_h_
#ifndef Can_send_receive_COMMON_INCLUDES_
#define Can_send_receive_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "string.h"
#include "stm_fdcan_hal.h"
#endif                                 /* Can_send_receive_COMMON_INCLUDES_ */

#include "Can_send_receive_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S5>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_g;/* '<S5>/FDCAN Write2' */
  stm32cube_blocks_FDCANWrite_C_T obj_a;/* '<S4>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_c;/* '<S3>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_m;/* '<S3>/FDCAN Write1' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  uint8_T Output_DSTATE;               /* '<S6>/Output' */
  uint8_T Output_DSTATE_c;             /* '<S7>/Output' */
} DW_Can_send_receive_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Abs;                    /* '<S4>/Abs' */
  const real_T Add;                    /* '<S4>/Add' */
  const real_T Divide;                 /* '<S4>/Divide' */
  const real_T Switch;                 /* '<S4>/Switch' */
  const real_T Add1;                   /* '<S4>/Add1' */
  const real_T RearWheelSpeed;         /* '<S4>/Product' */
  const real_T RearMotorSpeed;         /* '<S4>/Product1' */
  const real_T MotorSpeed0100;         /* '<S4>/Gain' */
  const real_T Switch1;                /* '<S4>/Switch1' */
  const real_T Switch2;                /* '<S4>/Switch2' */
  const real_T Saturation;             /* '<S4>/Saturation' */
  const real_T Gain1;                  /* '<S4>/Gain1' */
  const uint16_T DataTypeConversion;   /* '<S3>/Data Type Conversion' */
  const uint16_T ByteReversal;         /* '<S3>/Byte Reversal' */
  const uint16_T DataTypeConversion1;  /* '<S3>/Data Type Conversion1' */
  const uint16_T ByteReversal1;        /* '<S3>/Byte Reversal1' */
  const uint16_T DataTypeConversion2;  /* '<S3>/Data Type Conversion2' */
  const uint16_T ByteReversal2;        /* '<S3>/Byte Reversal2' */
  const uint16_T DataTypeConversion3;  /* '<S3>/Data Type Conversion3' */
  const uint16_T ByteReversal3;        /* '<S3>/Byte Reversal3' */
  const uint16_T DataTypeConversion4;  /* '<S3>/Data Type Conversion4' */
  const uint16_T ByteReversal4;        /* '<S3>/Byte Reversal4' */
  const uint16_T DataTypeConversion5;  /* '<S3>/Data Type Conversion5' */
  const uint16_T ByteReversal5;        /* '<S3>/Byte Reversal5' */
  const uint16_T DataTypeConversion6;  /* '<S3>/Data Type Conversion6' */
  const uint16_T ByteReversal6;        /* '<S3>/Byte Reversal6' */
  const uint16_T DataTypeConversion7;  /* '<S3>/Data Type Conversion7' */
  const uint16_T ByteReversal7;        /* '<S3>/Byte Reversal7' */
  const int16_T DataTypeConversion_n;  /* '<S4>/Data Type Conversion' */
  const uint8_T DataTypeConversion3_e; /* '<S5>/Data Type Conversion3' */
  const uint8_T BytePack[2];           /* '<S4>/Byte Pack' */
  const uint8_T DataTypeConversion1_k; /* '<S4>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_c; /* '<S4>/Data Type Conversion2' */
  const uint8_T DataTypeConversion3_i; /* '<S4>/Data Type Conversion3' */
  const uint8_T VectorConcatenate[5];  /* '<S4>/Vector Concatenate' */
  const uint8_T BytePack_g[2];         /* '<S3>/Byte Pack' */
  const uint8_T BytePack1[2];          /* '<S3>/Byte Pack1' */
  const uint8_T BytePack2[2];          /* '<S3>/Byte Pack2' */
  const uint8_T BytePack3[2];          /* '<S3>/Byte Pack3' */
  const uint8_T VectorConcatenate_j[8];/* '<S3>/Vector Concatenate' */
  const uint8_T BytePack4[2];          /* '<S3>/Byte Pack4' */
  const uint8_T BytePack5[2];          /* '<S3>/Byte Pack5' */
  const uint8_T BytePack6[2];          /* '<S3>/Byte Pack6' */
  const uint8_T BytePack7[2];          /* '<S3>/Byte Pack7' */
  const uint8_T VectorConcatenate1[8]; /* '<S3>/Vector Concatenate1' */
  const boolean_T GreaterThan1;        /* '<S4>/GreaterThan1' */
  const boolean_T LessThan1;           /* '<S4>/Less Than1' */
  const boolean_T AND;                 /* '<S4>/AND' */
  const boolean_T GreaterThan;         /* '<S4>/GreaterThan' */
  const boolean_T LessThan;            /* '<S4>/Less Than' */
} ConstB_Can_send_receive_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [235 74 168 73 95 138])
   * Referenced by:
   *   '<S5>/Direct Lookup Table (n-D)'
   *   '<S5>/Direct Lookup Table (n-D)1'
   */
  real_T pooled4[6];
} ConstP_Can_send_receive_T;

/* Real-time Model Data Structure */
struct tag_RTM_Can_send_receive_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Can_send_receive_T Can_send_receive_DW;
extern const ConstB_Can_send_receive_T Can_send_receive_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_Can_send_receive_T Can_send_receive_ConstP;

/* Model entry point functions */
extern void Can_send_receive_initialize(void);
extern void Can_send_receive_step(void);
extern void Can_send_receive_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Can_send_receive_T *const Can_send_receive_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S6>/Data Type Propagation' : Unused code path elimination
 * Block '<S8>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S7>/Data Type Propagation' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S5>/Scope2' : Unused code path elimination
 * Block '<S5>/Scope3' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
 * Block '<S2>/Constant2' : Unused code path elimination
 * Block '<S3>/Scope' : Unused code path elimination
 * Block '<S4>/Scope' : Unused code path elimination
 * Block '<S4>/Scope1' : Unused code path elimination
 * Block '<S4>/Scope2' : Unused code path elimination
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
 * '<Root>' : 'Can_send_receive'
 * '<S1>'   : 'Can_send_receive/10 HZ Send1'
 * '<S2>'   : 'Can_send_receive/Subsystem'
 * '<S3>'   : 'Can_send_receive/Triggered Subsystem'
 * '<S4>'   : 'Can_send_receive/Triggered Subsystem3'
 * '<S5>'   : 'Can_send_receive/10 HZ Send1/Enabled Subsystem'
 * '<S6>'   : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited'
 * '<S7>'   : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited1'
 * '<S8>'   : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited/Increment Real World'
 * '<S9>'   : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited/Wrap To Zero'
 * '<S10>'  : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited1/Increment Real World'
 * '<S11>'  : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited1/Wrap To Zero'
 */
#endif                                 /* Can_send_receive_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
