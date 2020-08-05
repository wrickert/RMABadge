/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
   //Red on
   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET);
   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET);
   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET);
   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET);
   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,GPIO_PIN_RESET);
   //HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_RESET);
   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET);
   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_RESET);

   //Blue off
   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET);
   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET);
   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET);
   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET);
   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,GPIO_PIN_SET);
   HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,GPIO_PIN_SET);
   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_SET);
   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_SET);


  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
      //Red on
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_0);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_1);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_4);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
      HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_2);
      //HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_8);
      HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_5);
      HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_6);

      //Blue off
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_2);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_3);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_6);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_7);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_9);
      HAL_GPIO_TogglePin(GPIOC,GPIO_PIN_6);
      HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_7);
      HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_8);

      HAL_Delay(500);
      //Red First
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_0);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_1);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_4);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
      HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_2);
      //HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_8);
      HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_5);
      HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_6);

      //Blue off
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_2);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_3);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_6);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_7);
      HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_9);
      HAL_GPIO_TogglePin(GPIOC,GPIO_PIN_6);
      HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_7);
      //HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_8);

      HAL_Delay(500);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage 
  */
  HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSIDiv = RCC_HSI_DIV1;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, W_R1_Pin|W_R2_Pin|W_B1_Pin|W_B2_Pin 
                          |S_R1_Pin|S_R2_Pin|S_B1_Pin|S_B2_Pin 
                          |E_R2_Pin|E_B1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, E_R1_Pin|N_R1_Pin|N_R2_Pin|N_B1_Pin 
                          |N_B2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(E_B2_GPIO_Port, E_B2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : W_R1_Pin W_R2_Pin W_B1_Pin W_B2_Pin 
                           S_R1_Pin S_R2_Pin S_B1_Pin S_B2_Pin 
                           E_R2_Pin E_B1_Pin */
  GPIO_InitStruct.Pin = W_R1_Pin|W_R2_Pin|W_B1_Pin|W_B2_Pin 
                          |S_R1_Pin|S_R2_Pin|S_B1_Pin|S_B2_Pin 
                          |E_R2_Pin|E_B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : Button_Pin */
  GPIO_InitStruct.Pin = Button_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(Button_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : E_R1_Pin N_R1_Pin N_R2_Pin N_B1_Pin 
                           N_B2_Pin */
  GPIO_InitStruct.Pin = E_R1_Pin|N_R1_Pin|N_R2_Pin|N_B1_Pin 
                          |N_B2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : E_B2_Pin */
  GPIO_InitStruct.Pin = E_B2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(E_B2_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
