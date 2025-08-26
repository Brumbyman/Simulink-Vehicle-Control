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
#include "stm32h7xx_ll_dac.h"
#include "stm32h7xx_ll_dma.h"
#include "stm32h7xx_ll_i2c.h"
#include "stm32h7xx_ll_rcc.h"
#include "stm32h7xx_ll_crs.h"
#include "stm32h7xx_ll_bus.h"
#include "stm32h7xx_ll_system.h"
#include "stm32h7xx_ll_exti.h"
#include "stm32h7xx_ll_cortex.h"
#include "stm32h7xx_ll_utils.h"
#include "stm32h7xx_ll_pwr.h"
#include "stm32h7xx_ll_tim.h"
#include "stm32h7xx_ll_usart.h"
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
#define LCD_B6_Pin LL_GPIO_PIN_8
#define LCD_B6_GPIO_Port GPIOB
#define FDCAN2_TX_Pin LL_GPIO_PIN_6
#define FDCAN2_TX_GPIO_Port GPIOB
#define JTDO_Pin LL_GPIO_PIN_3
#define JTDO_GPIO_Port GPIOB
#define OCSPI2_IO7_Pin LL_GPIO_PIN_11
#define OCSPI2_IO7_GPIO_Port GPIOG
#define OCSPI1_IO6_Pin LL_GPIO_PIN_9
#define OCSPI1_IO6_GPIO_Port GPIOG
#define LCD_G7_Pin LL_GPIO_PIN_3
#define LCD_G7_GPIO_Port GPIOD
#define Detectn_Pin LL_GPIO_PIN_1
#define Detectn_GPIO_Port GPIOD
#define JTDI_Pin LL_GPIO_PIN_15
#define JTDI_GPIO_Port GPIOA
#define JTCK_Pin LL_GPIO_PIN_14
#define JTCK_GPIO_Port GPIOA
#define SAI4_D2_Pin LL_GPIO_PIN_4
#define SAI4_D2_GPIO_Port GPIOE
#define ARD_D8_Pin LL_GPIO_PIN_3
#define ARD_D8_GPIO_Port GPIOE
#define LCD_B7_Pin LL_GPIO_PIN_9
#define LCD_B7_GPIO_Port GPIOB
#define LCD_R0_Pin LL_GPIO_PIN_0
#define LCD_R0_GPIO_Port GPIOE
#define ARD_D9_Pin LL_GPIO_PIN_7
#define ARD_D9_GPIO_Port GPIOB
#define NJTRST_Pin LL_GPIO_PIN_4
#define NJTRST_GPIO_Port GPIOB
#define OCSPI1_IO7_Pin LL_GPIO_PIN_7
#define OCSPI1_IO7_GPIO_Port GPIOD
#define OCSPI1_IO5_Pin LL_GPIO_PIN_5
#define OCSPI1_IO5_GPIO_Port GPIOD
#define SDIO1_CMD_Pin LL_GPIO_PIN_2
#define SDIO1_CMD_GPIO_Port GPIOD
#define SDIO1_CK_Pin LL_GPIO_PIN_12
#define SDIO1_CK_GPIO_Port GPIOC
#define FDCAN1_RX_Pin LL_GPIO_PIN_14
#define FDCAN1_RX_GPIO_Port GPIOH
#define JTMS_Pin LL_GPIO_PIN_13
#define JTMS_GPIO_Port GPIOA
#define LCD_B3_Pin LL_GPIO_PIN_8
#define LCD_B3_GPIO_Port GPIOA
#define USB_FS_DP_Pin LL_GPIO_PIN_12
#define USB_FS_DP_GPIO_Port GPIOA
#define Blue_button_B2_used_for_wakeup_Pin LL_GPIO_PIN_13
#define Blue_button_B2_used_for_wakeup_GPIO_Port GPIOC
#define OCSPI1_IO2_Pin LL_GPIO_PIN_2
#define OCSPI1_IO2_GPIO_Port GPIOE
#define LCD_R6_Pin LL_GPIO_PIN_1
#define LCD_R6_GPIO_Port GPIOE
#define FDCAN2_RX_Pin LL_GPIO_PIN_5
#define FDCAN2_RX_GPIO_Port GPIOB
#define LCD_B0_Pin LL_GPIO_PIN_14
#define LCD_B0_GPIO_Port GPIOG
#define OCSPI2_IO6_Pin LL_GPIO_PIN_10
#define OCSPI2_IO6_GPIO_Port GPIOG
#define OCSPI1_IO4_Pin LL_GPIO_PIN_4
#define OCSPI1_IO4_GPIO_Port GPIOD
#define LCD_B1_Pin LL_GPIO_PIN_0
#define LCD_B1_GPIO_Port GPIOD
#define SDIO1_D3_Pin LL_GPIO_PIN_11
#define SDIO1_D3_GPIO_Port GPIOC
#define SDIO1_D2_Pin LL_GPIO_PIN_10
#define SDIO1_D2_GPIO_Port GPIOC
#define FDCAN1_TX_Pin LL_GPIO_PIN_13
#define FDCAN1_TX_GPIO_Port GPIOH
#define USB_FS_ID_Pin LL_GPIO_PIN_10
#define USB_FS_ID_GPIO_Port GPIOA
#define USB_FS_DM_Pin LL_GPIO_PIN_11
#define USB_FS_DM_GPIO_Port GPIOA
#define SAI4_CK2_Pin LL_GPIO_PIN_5
#define SAI4_CK2_GPIO_Port GPIOE
#define LCD_BL_CTRL_Pin LL_GPIO_PIN_15
#define LCD_BL_CTRL_GPIO_Port GPIOG
#define OCSPI2_NCS_Pin LL_GPIO_PIN_12
#define OCSPI2_NCS_GPIO_Port GPIOG
#define LCD_B2_Pin LL_GPIO_PIN_6
#define LCD_B2_GPIO_Port GPIOD
#define LCD_G4_Pin LL_GPIO_PIN_15
#define LCD_G4_GPIO_Port GPIOH
#define USB_FS_VBUS_Pin LL_GPIO_PIN_9
#define USB_FS_VBUS_GPIO_Port GPIOA
#define SDIO1_D0_Pin LL_GPIO_PIN_8
#define SDIO1_D0_GPIO_Port GPIOC
#define LCD_G6_Pin LL_GPIO_PIN_7
#define LCD_G6_GPIO_Port GPIOC
#define SAI1_SD_A_Pin LL_GPIO_PIN_6
#define SAI1_SD_A_GPIO_Port GPIOE
#define SDIO1_D1_Pin LL_GPIO_PIN_9
#define SDIO1_D1_GPIO_Port GPIOC
#define LCD_HSYNC_Pin LL_GPIO_PIN_6
#define LCD_HSYNC_GPIO_Port GPIOC
#define OCSPI2_IO1_Pin LL_GPIO_PIN_1
#define OCSPI2_IO1_GPIO_Port GPIOF
#define OCSPI2_IO0_Pin LL_GPIO_PIN_0
#define OCSPI2_IO0_GPIO_Port GPIOF
#define OCSPI1_NCS_Pin LL_GPIO_PIN_6
#define OCSPI1_NCS_GPIO_Port GPIOG
#define ARD_D7_Pin LL_GPIO_PIN_5
#define ARD_D7_GPIO_Port GPIOG
#define OCSPI2_IO2_Pin LL_GPIO_PIN_2
#define OCSPI2_IO2_GPIO_Port GPIOF
#define MEMS_LED_Pin LL_GPIO_PIN_8
#define MEMS_LED_GPIO_Port GPIOG
#define LCD_CLK_Pin LL_GPIO_PIN_7
#define LCD_CLK_GPIO_Port GPIOG
#define ARD_D4_Pin LL_GPIO_PIN_4
#define ARD_D4_GPIO_Port GPIOG
#define CTP_INT_Pin LL_GPIO_PIN_2
#define CTP_INT_GPIO_Port GPIOG
#define SAI1_SD_B_Pin LL_GPIO_PIN_6
#define SAI1_SD_B_GPIO_Port GPIOF
#define OCSPI2_CLK_Pin LL_GPIO_PIN_4
#define OCSPI2_CLK_GPIO_Port GPIOF
#define uSD_Detect_Pin LL_GPIO_PIN_5
#define uSD_Detect_GPIO_Port GPIOF
#define OCSPI2_IO3_Pin LL_GPIO_PIN_3
#define OCSPI2_IO3_GPIO_Port GPIOF
#define ARD_D2_Pin LL_GPIO_PIN_3
#define ARD_D2_GPIO_Port GPIOG
#define STMOD_14_PWM_Pin LL_GPIO_PIN_14
#define STMOD_14_PWM_GPIO_Port GPIOD
#define OCSPI1_IO3_Pin LL_GPIO_PIN_13
#define OCSPI1_IO3_GPIO_Port GPIOD
#define SAI1_SCK_B_Pin LL_GPIO_PIN_8
#define SAI1_SCK_B_GPIO_Port GPIOF
#define SAI1_MCLK_B_Pin LL_GPIO_PIN_7
#define SAI1_MCLK_B_GPIO_Port GPIOF
#define SAI1_FS_B_Pin LL_GPIO_PIN_9
#define SAI1_FS_B_GPIO_Port GPIOF
#define ARD_D6_Pin LL_GPIO_PIN_15
#define ARD_D6_GPIO_Port GPIOD
#define OCSPI1_IO0_Pin LL_GPIO_PIN_11
#define OCSPI1_IO0_GPIO_Port GPIOD
#define OCSPI1_IO1_Pin LL_GPIO_PIN_12
#define OCSPI1_IO1_GPIO_Port GPIOD
#define OCSPI1_CLK_Pin LL_GPIO_PIN_10
#define OCSPI1_CLK_GPIO_Port GPIOF
#define T_VCP_RX_Pin LL_GPIO_PIN_9
#define T_VCP_RX_GPIO_Port GPIOD
#define ARD_D0_Pin LL_GPIO_PIN_15
#define ARD_D0_GPIO_Port GPIOB
#define ARD_D1_Pin LL_GPIO_PIN_14
#define ARD_D1_GPIO_Port GPIOB
#define ARD_A0_Pin LL_GPIO_PIN_0
#define ARD_A0_GPIO_Port GPIOC
#define RMII_MDC_Pin LL_GPIO_PIN_1
#define RMII_MDC_GPIO_Port GPIOC
#define LCD_DISP_Pin LL_GPIO_PIN_10
#define LCD_DISP_GPIO_Port GPIOD
#define T_VCP_TX_Pin LL_GPIO_PIN_8
#define T_VCP_TX_GPIO_Port GPIOD
#define RMII_TXD1_Pin LL_GPIO_PIN_13
#define RMII_TXD1_GPIO_Port GPIOB
#define USER_LED2_Pin LL_GPIO_PIN_2
#define USER_LED2_GPIO_Port GPIOC
#define USER_LED1_Pin LL_GPIO_PIN_3
#define USER_LED1_GPIO_Port GPIOC
#define RMII_RXD1_Pin LL_GPIO_PIN_5
#define RMII_RXD1_GPIO_Port GPIOC
#define LCD_G0_Pin LL_GPIO_PIN_1
#define LCD_G0_GPIO_Port GPIOB
#define SPI5_MISO_Pin LL_GPIO_PIN_7
#define SPI5_MISO_GPIO_Port GPIOH
#define ARD_D5_Pin LL_GPIO_PIN_14
#define ARD_D5_GPIO_Port GPIOE
#define LCD_R5_Pin LL_GPIO_PIN_11
#define LCD_R5_GPIO_Port GPIOH
#define LCD_R3_Pin LL_GPIO_PIN_9
#define LCD_R3_GPIO_Port GPIOH
#define RMII_TXD0_Pin LL_GPIO_PIN_12
#define RMII_TXD0_GPIO_Port GPIOB
#define ARD_A4_Pin LL_GPIO_PIN_2
#define ARD_A4_GPIO_Port GPIOC
#define ARD_A5_Pin LL_GPIO_PIN_3
#define ARD_A5_GPIO_Port GPIOC
#define ARD_A1_Pin LL_GPIO_PIN_2
#define ARD_A1_GPIO_Port GPIOH
#define LCD_B5_Pin LL_GPIO_PIN_3
#define LCD_B5_GPIO_Port GPIOA
#define RMII_CRS_DV_Pin LL_GPIO_PIN_7
#define RMII_CRS_DV_GPIO_Port GPIOA
#define SPI5_MOSI_Pin LL_GPIO_PIN_11
#define SPI5_MOSI_GPIO_Port GPIOF
#define Audio_Int_Pin LL_GPIO_PIN_8
#define Audio_Int_GPIO_Port GPIOE
#define OCSPI2_IO5_Pin LL_GPIO_PIN_1
#define OCSPI2_IO5_GPIO_Port GPIOG
#define I2C4_SDA_Pin LL_GPIO_PIN_15
#define I2C4_SDA_GPIO_Port GPIOF
#define STMOD_20_Pin LL_GPIO_PIN_13
#define STMOD_20_GPIO_Port GPIOF
#define RMII_RX_ER_Pin LL_GPIO_PIN_10
#define RMII_RX_ER_GPIO_Port GPIOB
#define LCD_R2_Pin LL_GPIO_PIN_8
#define LCD_R2_GPIO_Port GPIOH
#define LCD_R4_Pin LL_GPIO_PIN_10
#define LCD_R4_GPIO_Port GPIOH
#define STMOD_11_INT_Pin LL_GPIO_PIN_12
#define STMOD_11_INT_GPIO_Port GPIOH
#define ARD_D3_Pin LL_GPIO_PIN_0
#define ARD_D3_GPIO_Port GPIOA
#define RMII_REF_CLK_Pin LL_GPIO_PIN_1
#define RMII_REF_CLK_GPIO_Port GPIOA
#define ARD_A3_Pin LL_GPIO_PIN_1
#define ARD_A3_GPIO_Port GPIOA
#define LCD_G5_Pin LL_GPIO_PIN_4
#define LCD_G5_GPIO_Port GPIOH
#define LCD_VSYNC_Pin LL_GPIO_PIN_4
#define LCD_VSYNC_GPIO_Port GPIOA
#define DAC1_OUT2_Pin LL_GPIO_PIN_5
#define DAC1_OUT2_GPIO_Port GPIOA
#define OCSPI1_DQS_Pin LL_GPIO_PIN_2
#define OCSPI1_DQS_GPIO_Port GPIOB
#define OCSPI2_IO4_Pin LL_GPIO_PIN_0
#define OCSPI2_IO4_GPIO_Port GPIOG
#define STMOD_17_Pin LL_GPIO_PIN_7
#define STMOD_17_GPIO_Port GPIOE
#define RMII_TX_EN_Pin LL_GPIO_PIN_11
#define RMII_TX_EN_GPIO_Port GPIOB
#define OCSPI2_DQS_Pin LL_GPIO_PIN_12
#define OCSPI2_DQS_GPIO_Port GPIOF
#define LCD_B4_Pin LL_GPIO_PIN_12
#define LCD_B4_GPIO_Port GPIOE
#define LCD_DE_Pin LL_GPIO_PIN_13
#define LCD_DE_GPIO_Port GPIOE
#define LCD_R7_Pin LL_GPIO_PIN_15
#define LCD_R7_GPIO_Port GPIOE
#define LCD_RST_Pin LL_GPIO_PIN_6
#define LCD_RST_GPIO_Port GPIOH
#define RMII_MDIO_Pin LL_GPIO_PIN_2
#define RMII_MDIO_GPIO_Port GPIOA
#define ARD_A2_Pin LL_GPIO_PIN_0
#define ARD_A2_GPIO_Port GPIOA
#define LCD_R1_Pin LL_GPIO_PIN_3
#define LCD_R1_GPIO_Port GPIOH
#define USB_FS_PWR_EN_Pin LL_GPIO_PIN_5
#define USB_FS_PWR_EN_GPIO_Port GPIOH
#define RMII_RXD0_Pin LL_GPIO_PIN_4
#define RMII_RXD0_GPIO_Port GPIOC
#define LCD_G2_Pin LL_GPIO_PIN_6
#define LCD_G2_GPIO_Port GPIOA
#define LCD_G1_Pin LL_GPIO_PIN_0
#define LCD_G1_GPIO_Port GPIOB
#define STMOD_19_Pin LL_GPIO_PIN_10
#define STMOD_19_GPIO_Port GPIOE
#define I2C4_SCL_Pin LL_GPIO_PIN_14
#define I2C4_SCL_GPIO_Port GPIOF
#define STMOD_18_Pin LL_GPIO_PIN_9
#define STMOD_18_GPIO_Port GPIOE
#define LCD_G3_Pin LL_GPIO_PIN_11
#define LCD_G3_GPIO_Port GPIOE
void   MX_GPIO_Init(void);
void   MX_ADC1_Init(void);
void   MX_ADC2_Init(void);
void   MX_ADC3_Init(void);
void   MX_DAC1_Init(void);
void   MX_ETH_Init(void);
void   MX_FDCAN1_Init(void);
void   MX_FDCAN2_Init(void);
void   MX_I2C4_Init(void);
void   MX_LTDC_Init(void);
void   MX_OCTOSPI1_Init(void);
void   MX_OCTOSPI2_Init(void);
void   MX_SAI1_Init(void);
void   MX_SDMMC1_SD_Init(void);
void   MX_TIM1_Init(void);
void   MX_TIM4_Init(void);
void   MX_TIM5_Init(void);
void   MX_USART1_UART_Init(void);
void   MX_USART3_UART_Init(void);
void   MX_DMA_Init(void);
void   MX_USB_OTG_HS_USB_Init(void);
void   MX_TIM6_Init(void);
void   MX_TIM16_Init(void);
void   MX_TIM17_Init(void);
void   MX_TIM23_Init(void);
void   MX_TIM24_Init(void);
void   MX_TIM7_Init(void);
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
