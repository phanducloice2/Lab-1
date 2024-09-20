/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#define red1_Pin GPIO_PIN_13
#define red1_GPIO_Port GPIOC
#define red2_Pin GPIO_PIN_14
#define red2_GPIO_Port GPIOC
#define yellow1_Pin GPIO_PIN_15
#define yellow1_GPIO_Port GPIOC
#define yellow2_Pin GPIO_PIN_1
#define yellow2_GPIO_Port GPIOA
#define green1_Pin GPIO_PIN_2
#define green1_GPIO_Port GPIOA
#define green2_Pin GPIO_PIN_3
#define green2_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define pb0_Pin GPIO_PIN_0
#define pb0_GPIO_Port GPIOB
#define pb1_Pin GPIO_PIN_1
#define pb1_GPIO_Port GPIOB
#define pb2_Pin GPIO_PIN_2
#define pb2_GPIO_Port GPIOB
#define pb6_Pin GPIO_PIN_3
#define pb6_GPIO_Port GPIOB
#define pb5_Pin GPIO_PIN_4
#define pb5_GPIO_Port GPIOB
#define pb4_Pin GPIO_PIN_5
#define pb4_GPIO_Port GPIOB
#define pb3_Pin GPIO_PIN_6
#define pb3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
