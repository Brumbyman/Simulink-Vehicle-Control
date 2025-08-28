/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive.h
 *
 * Code generated for Simulink model 'Can_send_receive'.
 *
 * Model version                  : 1.63
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Aug 28 15:08:56 2025
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
#include "can_fd_message.h"
#include "stm_fdcan_hal.h"
#endif                                 /* Can_send_receive_COMMON_INCLUDES_ */

#include "mw_stm32_nvic.h"
#include "Can_send_receive_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  CAN_FD_MESSAGE_BUS FDCANRead1;       /* '<S2>/FDCAN Read1' */
  real_T BrakesPercentage;             /* '<S2>/Data Type Conversion3' */
  uint16_T TmpRTBAtFunctionCallSubsystemOu;/* '<Root>/Function-Call Subsystem' */
  uint16_T TmpRTBAtFunctionCallSubsystem_c;/* '<Root>/Function-Call Subsystem' */
  uint16_T TmpRTBAtFunctionCallSubsystem_m;/* '<Root>/Function-Call Subsystem' */
  uint16_T TmpRTBAtFunctionCallSubsystem_i;/* '<Root>/Function-Call Subsystem' */
  uint16_T TmpRTBAtFunctionCallSubsystem_e;/* '<Root>/Function-Call Subsystem' */
  uint16_T TmpRTBAtFunctionCallSubsystem_o;/* '<Root>/Function-Call Subsystem' */
  uint16_T ByteUnpack;                 /* '<S2>/Byte Unpack' */
  uint16_T ByteUnpack1;                /* '<S2>/Byte Unpack1' */
  uint16_T DataTypeConversion;         /* '<S2>/Data Type Conversion' */
  uint16_T In1;                        /* '<S14>/In1' */
  uint16_T In1_g;                      /* '<S16>/In1' */
  uint16_T In1_g2;                     /* '<S13>/In1' */
  uint16_T In1_g20;                    /* '<S17>/In1' */
  uint16_T In1_g20a;                   /* '<S19>/In1' */
  uint16_T ByteReversal1;              /* '<S5>/Byte Reversal1' */
  uint16_T ByteReversal2;              /* '<S5>/Byte Reversal2' */
  uint16_T ByteReversal3;              /* '<S5>/Byte Reversal3' */
  uint16_T ByteReversal4;              /* '<S5>/Byte Reversal4' */
  uint16_T ByteReversal5;              /* '<S5>/Byte Reversal5' */
  uint16_T DataTypeConversion6;        /* '<S5>/Data Type Conversion6' */
  uint16_T ByteReversal6;              /* '<S5>/Byte Reversal6' */
  uint16_T ByteReversal7;              /* '<S5>/Byte Reversal7' */
  uint8_T CANFDUnpack2[3];             /* '<S2>/CAN FD Unpack2' */
  uint8_T CANFDUnpack1[3];             /* '<S2>/CAN FD Unpack1' */
  uint8_T VectorConcatenate1[8];       /* '<S5>/Vector Concatenate1' */
  uint8_T VectorConcatenate[8];        /* '<S5>/Vector Concatenate' */
} B_Can_send_receive_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S6>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_g;/* '<S6>/FDCAN Write2' */
  stm32cube_blocks_FDCANWrite_C_T obj_h;/* '<S5>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_l;/* '<S5>/FDCAN Write1' */
  stm32cube_blocks_FDCANRead_Ca_T obj_d;/* '<S2>/FDCAN Read1' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  volatile real_T TmpRTBAtFunctionCallSubsystemOu;/* synthesized block */
  int_T CANFDUnpack2_ModeSignalID;     /* '<S2>/CAN FD Unpack2' */
  int_T CANFDUnpack2_StatusPortID;     /* '<S2>/CAN FD Unpack2' */
  int_T CANFDUnpack1_ModeSignalID;     /* '<S2>/CAN FD Unpack1' */
  int_T CANFDUnpack1_StatusPortID;     /* '<S2>/CAN FD Unpack1' */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_a;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_g;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_k;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_m;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_h;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_i;/* synthesized block */
  uint8_T Output_DSTATE;               /* '<S7>/Output' */
  uint8_T Output_DSTATE_c;             /* '<S8>/Output' */
} DW_Can_send_receive_T;

/* Invariant block signals (default storage) */
typedef struct {
  const int16_T DataTypeConversion;    /* '<S5>/Data Type Conversion' */
  const int16_T ByteReversal8;         /* '<S5>/Byte Reversal8' */
  const uint8_T DataTypeConversion3;   /* '<S6>/Data Type Conversion3' */
  const uint8_T BytePack[2];           /* '<S5>/Byte Pack' */
} ConstB_Can_send_receive_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [235 74 168 73 95 138])
   * Referenced by:
   *   '<S6>/Direct Lookup Table (n-D)'
   *   '<S6>/Direct Lookup Table (n-D)1'
   */
  real_T pooled1[6];
} ConstP_Can_send_receive_T;

/* Real-time Model Data Structure */
struct tag_RTM_Can_send_receive_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Can_send_receive_T Can_send_receive_B;

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

#ifdef __cpluscplus

extern "C"
{

#endif

  void FDCAN2_IT0_IRQHandler(void);
  void Can_send_receive_configure_interrupts (void);
  void Can_send_receive_unconfigure_interrupts (void);

#ifdef __cpluscplus

}

#endif

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S7>/Data Type Propagation' : Unused code path elimination
 * Block '<S9>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S8>/Data Type Propagation' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S12>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S6>/Scope2' : Unused code path elimination
 * Block '<S6>/Scope3' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
 * Block '<S2>/Scope1' : Unused code path elimination
 * Block '<S2>/Scope2' : Unused code path elimination
 * Block '<S2>/Scope4' : Unused code path elimination
 * Block '<S2>/Scope7' : Unused code path elimination
 * Block '<S4>/Constant2' : Unused code path elimination
 * Block '<S5>/Scope' : Unused code path elimination
 * Block '<S5>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion7' : Eliminate redundant data type conversion
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
 * '<S2>'   : 'Can_send_receive/Function-Call Subsystem'
 * '<S3>'   : 'Can_send_receive/Hardware Interrupt1'
 * '<S4>'   : 'Can_send_receive/Subsystem'
 * '<S5>'   : 'Can_send_receive/Triggered Subsystem1'
 * '<S6>'   : 'Can_send_receive/10 HZ Send1/Enabled Subsystem'
 * '<S7>'   : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited'
 * '<S8>'   : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited1'
 * '<S9>'   : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited/Increment Real World'
 * '<S10>'  : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited/Wrap To Zero'
 * '<S11>'  : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited1/Increment Real World'
 * '<S12>'  : 'Can_send_receive/10 HZ Send1/Enabled Subsystem/Counter Limited1/Wrap To Zero'
 * '<S13>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem1'
 * '<S14>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem10'
 * '<S15>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem11'
 * '<S16>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem12'
 * '<S17>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem2'
 * '<S18>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem3'
 * '<S19>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem4'
 * '<S20>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem5'
 * '<S21>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem6'
 * '<S22>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem7'
 * '<S23>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem8'
 * '<S24>'  : 'Can_send_receive/Function-Call Subsystem/If Action Subsystem9'
 * '<S25>'  : 'Can_send_receive/Hardware Interrupt1/ECSoC'
 * '<S26>'  : 'Can_send_receive/Hardware Interrupt1/ECSoC/ECSimCodegen'
 */
#endif                                 /* Can_send_receive_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
