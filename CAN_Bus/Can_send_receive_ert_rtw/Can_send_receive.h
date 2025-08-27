/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Can_send_receive.h
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
  uint16_T TmpRTBAtFunctionCallSubsystem1O;/* '<Root>/Function-Call Subsystem1' */
  uint16_T TmpRTBAtFunctionCallSubsystem_d;/* '<Root>/Function-Call Subsystem1' */
  uint16_T WheelSpeedFrontLeft;        /* '<S2>/Byte Unpack' */
  uint16_T WheelSpeedFrontRight;       /* '<S2>/Byte Unpack1' */
  uint16_T BMSCurrentSensor;           /* '<S2>/Byte Unpack2' */
  uint16_T BMSVoltage;                 /* '<S2>/Byte Unpack3' */
  uint16_T DCL;                        /* '<S2>/Byte Unpack4' */
  uint16_T CCL;                        /* '<S2>/Byte Unpack5' */
  uint16_T ByteReversal6;              /* '<S5>/Byte Reversal6' */
  uint16_T ByteReversal7;              /* '<S5>/Byte Reversal7' */
  uint8_T FromPedalBoxtoVCU[8];        /* '<S2>/CAN FD Unpack1' */
  uint8_T BMS1[8];                     /* '<S2>/CAN FD Unpack3' */
  uint8_T BMS2[8];                     /* '<S2>/CAN FD Unpack4' */
  uint8_T VectorConcatenate1[8];       /* '<S5>/Vector Concatenate1' */
} B_Can_send_receive_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_FDCANWrite_C_T obj; /* '<S6>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_c;/* '<S6>/FDCAN Write2' */
  stm32cube_blocks_FDCANWrite_C_T obj_l;/* '<S5>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_C_T obj_a;/* '<S5>/FDCAN Write1' */
  stm32cube_blocks_FDCANRead_Ca_T obj_n;/* '<S2>/FDCAN Read1' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  int_T CANFDUnpack1_ModeSignalID;     /* '<S2>/CAN FD Unpack1' */
  int_T CANFDUnpack1_StatusPortID;     /* '<S2>/CAN FD Unpack1' */
  int_T CANFDUnpack3_ModeSignalID;     /* '<S2>/CAN FD Unpack3' */
  int_T CANFDUnpack3_StatusPortID;     /* '<S2>/CAN FD Unpack3' */
  int_T CANFDUnpack4_ModeSignalID;     /* '<S2>/CAN FD Unpack4' */
  int_T CANFDUnpack4_StatusPortID;     /* '<S2>/CAN FD Unpack4' */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem1O;/* synthesized block */
  volatile uint16_T TmpRTBAtFunctionCallSubsystem_l;/* synthesized block */
  uint8_T Output_DSTATE;               /* '<S7>/Output' */
  uint8_T Output_DSTATE_l;             /* '<S8>/Output' */
} DW_Can_send_receive_T;

/* Invariant block signals (default storage) */
typedef struct {
  const uint16_T ByteReversal;         /* '<S5>/Byte Reversal' */
  const uint16_T ByteReversal1;        /* '<S5>/Byte Reversal1' */
  const uint16_T ByteReversal2;        /* '<S5>/Byte Reversal2' */
  const uint16_T DataTypeConversion3;  /* '<S5>/Data Type Conversion3' */
  const uint16_T ByteReversal3;        /* '<S5>/Byte Reversal3' */
  const uint16_T ByteReversal4;        /* '<S5>/Byte Reversal4' */
  const uint16_T ByteReversal5;        /* '<S5>/Byte Reversal5' */
  const uint8_T DataTypeConversion3_k; /* '<S6>/Data Type Conversion3' */
  const uint8_T BytePack[2];           /* '<S5>/Byte Pack' */
  const uint8_T BytePack1[2];          /* '<S5>/Byte Pack1' */
  const uint8_T BytePack2[2];          /* '<S5>/Byte Pack2' */
  const uint8_T BytePack3[2];          /* '<S5>/Byte Pack3' */
  const uint8_T VectorConcatenate[8];  /* '<S5>/Vector Concatenate' */
  const uint8_T BytePack4[2];          /* '<S5>/Byte Pack4' */
  const uint8_T BytePack5[2];          /* '<S5>/Byte Pack5' */
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

  void FDCAN1_IT0_IRQHandler(void);
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
 * Block '<S2>/CAN FD Unpack2' : Unused code path elimination
 * Block '<S2>/Data Type Conversion1' : Unused code path elimination
 * Block '<S2>/Data Type Conversion10' : Unused code path elimination
 * Block '<S2>/Data Type Conversion11' : Unused code path elimination
 * Block '<S2>/Data Type Conversion12' : Unused code path elimination
 * Block '<S2>/Data Type Conversion13' : Unused code path elimination
 * Block '<S2>/Data Type Conversion14' : Unused code path elimination
 * Block '<S2>/Data Type Conversion15' : Unused code path elimination
 * Block '<S2>/Data Type Conversion16' : Unused code path elimination
 * Block '<S2>/Data Type Conversion17' : Unused code path elimination
 * Block '<S2>/Data Type Conversion18' : Unused code path elimination
 * Block '<S2>/Data Type Conversion19' : Unused code path elimination
 * Block '<S2>/Data Type Conversion2' : Unused code path elimination
 * Block '<S2>/Data Type Conversion20' : Unused code path elimination
 * Block '<S2>/Data Type Conversion21' : Unused code path elimination
 * Block '<S2>/Data Type Conversion3' : Unused code path elimination
 * Block '<S2>/Data Type Conversion4' : Unused code path elimination
 * Block '<S2>/Data Type Conversion5' : Unused code path elimination
 * Block '<S2>/Data Type Conversion6' : Unused code path elimination
 * Block '<S2>/Data Type Conversion7' : Unused code path elimination
 * Block '<S2>/Data Type Conversion8' : Unused code path elimination
 * Block '<S2>/Data Type Conversion9' : Unused code path elimination
 * Block '<S13>/DTProp1' : Unused code path elimination
 * Block '<S13>/DTProp2' : Unused code path elimination
 * Block '<S13>/Extract Desired Bits' : Unused code path elimination
 * Block '<S13>/Modify Scaling Only' : Unused code path elimination
 * Block '<S14>/DTProp1' : Unused code path elimination
 * Block '<S14>/DTProp2' : Unused code path elimination
 * Block '<S14>/Extract Desired Bits' : Unused code path elimination
 * Block '<S14>/Modify Scaling Only' : Unused code path elimination
 * Block '<S15>/DTProp1' : Unused code path elimination
 * Block '<S15>/DTProp2' : Unused code path elimination
 * Block '<S15>/Extract Desired Bits' : Unused code path elimination
 * Block '<S15>/Modify Scaling Only' : Unused code path elimination
 * Block '<S16>/DTProp1' : Unused code path elimination
 * Block '<S16>/DTProp2' : Unused code path elimination
 * Block '<S16>/Extract Desired Bits' : Unused code path elimination
 * Block '<S16>/Modify Scaling Only' : Unused code path elimination
 * Block '<S17>/DTProp1' : Unused code path elimination
 * Block '<S17>/DTProp2' : Unused code path elimination
 * Block '<S17>/Extract Desired Bits' : Unused code path elimination
 * Block '<S17>/Modify Scaling Only' : Unused code path elimination
 * Block '<S18>/DTProp1' : Unused code path elimination
 * Block '<S18>/DTProp2' : Unused code path elimination
 * Block '<S18>/Extract Desired Bits' : Unused code path elimination
 * Block '<S18>/Modify Scaling Only' : Unused code path elimination
 * Block '<S19>/DTProp1' : Unused code path elimination
 * Block '<S19>/DTProp2' : Unused code path elimination
 * Block '<S19>/Extract Desired Bits' : Unused code path elimination
 * Block '<S19>/Modify Scaling Only' : Unused code path elimination
 * Block '<S20>/DTProp1' : Unused code path elimination
 * Block '<S20>/DTProp2' : Unused code path elimination
 * Block '<S20>/Extract Desired Bits' : Unused code path elimination
 * Block '<S20>/Modify Scaling Only' : Unused code path elimination
 * Block '<S21>/DTProp1' : Unused code path elimination
 * Block '<S21>/DTProp2' : Unused code path elimination
 * Block '<S21>/Extract Desired Bits' : Unused code path elimination
 * Block '<S21>/Modify Scaling Only' : Unused code path elimination
 * Block '<S22>/DTProp1' : Unused code path elimination
 * Block '<S22>/DTProp2' : Unused code path elimination
 * Block '<S22>/Extract Desired Bits' : Unused code path elimination
 * Block '<S22>/Modify Scaling Only' : Unused code path elimination
 * Block '<S23>/DTProp1' : Unused code path elimination
 * Block '<S23>/DTProp2' : Unused code path elimination
 * Block '<S23>/Extract Desired Bits' : Unused code path elimination
 * Block '<S23>/Modify Scaling Only' : Unused code path elimination
 * Block '<S24>/DTProp1' : Unused code path elimination
 * Block '<S24>/DTProp2' : Unused code path elimination
 * Block '<S24>/Extract Desired Bits' : Unused code path elimination
 * Block '<S24>/Modify Scaling Only' : Unused code path elimination
 * Block '<S25>/DTProp1' : Unused code path elimination
 * Block '<S25>/DTProp2' : Unused code path elimination
 * Block '<S25>/Extract Desired Bits' : Unused code path elimination
 * Block '<S25>/Modify Scaling Only' : Unused code path elimination
 * Block '<S26>/Constant2' : Unused code path elimination
 * Block '<S4>/Constant2' : Unused code path elimination
 * Block '<S5>/Scope' : Unused code path elimination
 * Block '<S5>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion6' : Eliminate redundant data type conversion
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
 * '<S1>'   : 'Can_send_receive/10 HZ Send2'
 * '<S2>'   : 'Can_send_receive/Function-Call Subsystem1'
 * '<S3>'   : 'Can_send_receive/Hardware Interrupt3'
 * '<S4>'   : 'Can_send_receive/Subsystem'
 * '<S5>'   : 'Can_send_receive/Triggered Subsystem2'
 * '<S6>'   : 'Can_send_receive/10 HZ Send2/Enabled Subsystem'
 * '<S7>'   : 'Can_send_receive/10 HZ Send2/Enabled Subsystem/Counter Limited'
 * '<S8>'   : 'Can_send_receive/10 HZ Send2/Enabled Subsystem/Counter Limited1'
 * '<S9>'   : 'Can_send_receive/10 HZ Send2/Enabled Subsystem/Counter Limited/Increment Real World'
 * '<S10>'  : 'Can_send_receive/10 HZ Send2/Enabled Subsystem/Counter Limited/Wrap To Zero'
 * '<S11>'  : 'Can_send_receive/10 HZ Send2/Enabled Subsystem/Counter Limited1/Increment Real World'
 * '<S12>'  : 'Can_send_receive/10 HZ Send2/Enabled Subsystem/Counter Limited1/Wrap To Zero'
 * '<S13>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits'
 * '<S14>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits1'
 * '<S15>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits10'
 * '<S16>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits11'
 * '<S17>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits12'
 * '<S18>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits2'
 * '<S19>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits3'
 * '<S20>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits4'
 * '<S21>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits5'
 * '<S22>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits6'
 * '<S23>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits7'
 * '<S24>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits8'
 * '<S25>'  : 'Can_send_receive/Function-Call Subsystem1/Extract Bits9'
 * '<S26>'  : 'Can_send_receive/Function-Call Subsystem1/Subsystem'
 * '<S27>'  : 'Can_send_receive/Hardware Interrupt3/ECSoC'
 * '<S28>'  : 'Can_send_receive/Hardware Interrupt3/ECSoC/ECSimCodegen'
 */
#endif                                 /* Can_send_receive_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
