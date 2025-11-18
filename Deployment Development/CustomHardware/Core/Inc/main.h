/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

#include "stm32h7xx_ll_adc.h"
#include "stm32h7xx_ll_rcc.h"
#include "stm32h7xx_ll_crs.h"
#include "stm32h7xx_ll_bus.h"
#include "stm32h7xx_ll_system.h"
#include "stm32h7xx_ll_exti.h"
#include "stm32h7xx_ll_cortex.h"
#include "stm32h7xx_ll_utils.h"
#include "stm32h7xx_ll_pwr.h"
#include "stm32h7xx_ll_dma.h"
#include "stm32h7xx_ll_tim.h"
#include "stm32h7xx_ll_gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_BLUE_Pin LL_GPIO_PIN_2
#define LED_BLUE_GPIO_Port GPIOE
#define LED_GREEN_Pin LL_GPIO_PIN_3
#define LED_GREEN_GPIO_Port GPIOE
#define LED_RED_Pin LL_GPIO_PIN_4
#define LED_RED_GPIO_Port GPIOE
#define CTRAW_Pin LL_GPIO_PIN_11
#define CTRAW_GPIO_Port GPIOF
#define HV_BUS_VOLTAGE_TO_ADC_Pin LL_GPIO_PIN_14
#define HV_BUS_VOLTAGE_TO_ADC_GPIO_Port GPIOF
#define PDOC_PRE_CHECK_Pin LL_GPIO_PIN_11
#define PDOC_PRE_CHECK_GPIO_Port GPIOE
#define PDOC_DIS_CHECK_Pin LL_GPIO_PIN_12
#define PDOC_DIS_CHECK_GPIO_Port GPIOE
#define ACCY_FAN_PWM_GPIO_Pin LL_GPIO_PIN_13
#define ACCY_FAN_PWM_GPIO_GPIO_Port GPIOE
#define SC_HARD_BPSD_CHECK_Pin LL_GPIO_PIN_14
#define SC_HARD_BPSD_CHECK_GPIO_Port GPIOE
#define SC_IMD_CHECK_Pin LL_GPIO_PIN_15
#define SC_IMD_CHECK_GPIO_Port GPIOE
#define SC_AMS_CHECK_Pin LL_GPIO_PIN_12
#define SC_AMS_CHECK_GPIO_Port GPIOB
#define INVERTER_ENABLE_Pin LL_GPIO_PIN_14
#define INVERTER_ENABLE_GPIO_Port GPIOB
#define RIGHT_INVERTER_CHECK_Pin LL_GPIO_PIN_15
#define RIGHT_INVERTER_CHECK_GPIO_Port GPIOB
#define LEFT_INVERTER_CHECK_Pin LL_GPIO_PIN_8
#define LEFT_INVERTER_CHECK_GPIO_Port GPIOD
#define SC_HVD_CHECK_Pin LL_GPIO_PIN_9
#define SC_HVD_CHECK_GPIO_Port GPIOD
#define SC_RIGHTESTOP_CHECK_Pin LL_GPIO_PIN_10
#define SC_RIGHTESTOP_CHECK_GPIO_Port GPIOD
#define BRAKE_LIGHT_Pin LL_GPIO_PIN_11
#define BRAKE_LIGHT_GPIO_Port GPIOD
#define FAN_ENABLE_Pin LL_GPIO_PIN_12
#define FAN_ENABLE_GPIO_Port GPIOD
#define PUMP_ENABLE_Pin LL_GPIO_PIN_13
#define PUMP_ENABLE_GPIO_Port GPIOD
#define SC_TSMPCHECK_Pin LL_GPIO_PIN_14
#define SC_TSMPCHECK_GPIO_Port GPIOD
#define SC_AIRS_POSITIVE_CHECK_Pin LL_GPIO_PIN_15
#define SC_AIRS_POSITIVE_CHECK_GPIO_Port GPIOD
#define SC_PEDALBOX_CHECK_Pin LL_GPIO_PIN_6
#define SC_PEDALBOX_CHECK_GPIO_Port GPIOG
#define SC_HV_INTERLOCK_CHECK_Pin LL_GPIO_PIN_7
#define SC_HV_INTERLOCK_CHECK_GPIO_Port GPIOG
#define SC_LEFTESTOP_CHECK_Pin LL_GPIO_PIN_7
#define SC_LEFTESTOP_CHECK_GPIO_Port GPIOC
void   MX_GPIO_Init(void);
void   MX_FDCAN1_Init(void);
void   MX_FDCAN2_Init(void);
void   MX_FDCAN3_Init(void);
void   MX_ADC1_Init(void);
void   MX_ADC2_Init(void);
void   MX_SDMMC1_SD_Init(void);
void   MX_TIM1_Init(void);
void   MX_USB_OTG_HS_PCD_Init(void);
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
