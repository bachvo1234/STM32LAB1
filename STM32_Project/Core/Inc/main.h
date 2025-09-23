/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define RED_LED_Pin GPIO_PIN_5
#define YELLOW_LED_Pin GPIO_PIN_6
#define GREEN_LED_Pin GPIO_PIN_7
#define SEG_a GPIO_PIN_0
#define SEG_b GPIO_PIN_1
#define SEG_c GPIO_PIN_2
#define RED_LED_OP_Pin GPIO_PIN_8
#define YELLOW_LED_OP_Pin GPIO_PIN_9
#define GREEN_LED_OP_Pin GPIO_PIN_10
#define SEG_d GPIO_PIN_3
#define SEG_e GPIO_PIN_4
#define SEG_f GPIO_PIN_5
#define SEG_g GPIO_PIN_6
//
#define SEG_a_OP GPIO_PIN_7
#define SEG_b_OP GPIO_PIN_8
#define SEG_c_OP GPIO_PIN_9
#define SEG_d_OP GPIO_PIN_10
#define SEG_e_OP GPIO_PIN_11
#define SEG_f_OP GPIO_PIN_12
#define SEG_g_OP GPIO_PIN_13
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
