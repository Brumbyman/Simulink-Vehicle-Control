/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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

#include <stdio.h>
#include <stdlib.h>
#include "Communication_Testing.h"
#include "Communication_Testing_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "main.h"
#include "mw_freertos.h"
#define UNUSED(x)                      x = x
#define NAMELEN                        16

/* Function prototype declaration*/
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
SemaphoreHandle_t stopSem;
SemaphoreHandle_t baserateTaskSem;
SemaphoreHandle_t subrateTaskSem[2];
int taskId[2];
mw_thread_t schedulerThread;
mw_thread_t baseRateThread;
void *threadJoinStatus;
int terminatingmodel = 0;
mw_thread_t subRateThread[2];
int subratePriority[2];
void *subrateTask(void *arg)
{
  int tid = *((int *) arg);
  int subRateId;
  subRateId = tid + 1;
  while (runModel) {
    mw_osSemaphoreWaitEver(&subrateTaskSem[tid]);
    if (terminatingmodel)
      break;

#ifdef MW_RTOS_DEBUG

    printf(" -subrate task %d semaphore received\n", subRateId);

#endif

    Communication_Testing_step(subRateId);

    /* Get model outputs here */
  }

  mw_osThreadExit((void *)0);
  return NULL;
}

void *baseRateTask(void *arg)
{
  int_T i;
  runModel = (rtmGetErrorStatus(Communication_Testing_M) == (NULL));
  while (runModel) {
    mw_osSemaphoreWaitEver(&baserateTaskSem);

#ifdef MW_RTOS_DEBUG

    printf("*base rate task semaphore received\n");
    fflush(stdout);

#endif

    for (i = 1
         ; i <= 2; i++) {
      if (rtmStepTask(Communication_Testing_M, i)
          ) {
        mw_osSemaphoreRelease(&subrateTaskSem[ i - 1
                              ]);
      }
    }

    Communication_Testing_step(0);

    /* Get model outputs here */
    stopRequested = !((rtmGetErrorStatus(Communication_Testing_M) == (NULL)));
  }

  terminateTask(arg);
  mw_osThreadExit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(Communication_Testing_M, "stopping the model");
  runModel = 0;
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    int i;

    /* Signal all periodic tasks to complete */
    for (i=0; i<2; i++) {
      CHECK_STATUS(mw_osSemaphoreRelease(&subrateTaskSem[i]), 0,
                   "mw_osSemaphoreRelease");
      CHECK_STATUS(mw_osSemaphoreDelete(&subrateTaskSem[i]), 0,
                   "mw_osSemaphoreDelete");
    }

    /* Wait for all periodic tasks to complete */
    for (i=0; i<2; i++) {
      CHECK_STATUS(mw_osThreadJoin(subRateThread[i], &threadJoinStatus), 0,
                   "mw_osThreadJoin");
    }

    runModel = 0;
  }

#if !defined(MW_FREERTOS) && !defined(USE_RTX)

  (void) systemClock;

#endif

  ;

  /* Terminate model */
  Communication_Testing_terminate();
  mw_osSemaphoreRelease(&stopSem);
  return NULL;
}

int main(int argc, char **argv)
{
  subratePriority[0] = 39;
  subratePriority[1] = 38;

#if !defined(MW_FREERTOS) && defined(MW_MULTI_TASKING_MODE) && (MW_MULTI_TASKING_MODE == 1)

  MW_ASM (" SVC #1");

#endif

  ;

  // Peripheral initialization imported from STM32CubeMX project;
  HAL_Init();
  SystemClock_Config();
  PeriphCommonClock_Config();
  MX_GPIO_Init();
  MX_ADC1_Init();
  configureADCChannelPreselectionRegister(ADC1,1 ,0);
  MX_ADC2_Init();
  configureADCChannelPreselectionRegister(ADC2,1 ,0);
  MX_ADC3_Init();
  configureADCChannelPreselectionRegister(ADC3,1 ,0);
  MX_DAC1_Init();
  MX_ETH_Init();
  MX_FDCAN1_Init();
  MX_FDCAN2_Init();
  MX_I2C4_Init();
  MX_LTDC_Init();
  MX_OCTOSPI1_Init();
  MX_OCTOSPI2_Init();
  MX_SAI1_Init();
  MX_TIM1_Init();
  MX_TIM4_Init();
  MX_TIM5_Init();
  MX_USART1_UART_Init();
  MX_USART3_UART_Init();
  MX_DMA_Init();
  MX_USB_OTG_HS_USB_Init();
  MX_TIM6_Init();
  MX_TIM16_Init();
  MX_TIM17_Init();
  MX_TIM23_Init();
  MX_TIM24_Init();
  MX_TIM7_Init();
  rtmSetErrorStatus(Communication_Testing_M, 0);

  /* Initialize model */
  Communication_Testing_initialize();

  /* Call RTOS Initialization function */
  mw_RTOSInit(0.002, 2);

  /* Wait for stop semaphore */
  mw_osSemaphoreWaitEver(&stopSem);

#if (MW_NUMBER_TIMER_DRIVEN_TASKS > 0)

  {
    int i;
    for (i=0; i < MW_NUMBER_TIMER_DRIVEN_TASKS; i++) {
      CHECK_STATUS(mw_osSemaphoreDelete(&timerTaskSem[i]), 0,
                   "mw_osSemaphoreDelete");
    }
  }

#endif

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
