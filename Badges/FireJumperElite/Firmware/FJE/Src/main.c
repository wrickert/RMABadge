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
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "usb_device.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "charlie.c"
#include "semihosting.c"

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
RTC_HandleTypeDef hrtc;

TIM_HandleTypeDef htim1;

/* USER CODE BEGIN PV */

//void dance();

// Keep track of what dance we are on
int mamboNumber = 5;
// Stopper for the inturrupt funciton
int stopFlag = 0;
// Flag to switch to time 
int hourFlag= 0;
int minuteFlag = 0;

// RTC defs
RTC_TimeTypeDef RTCtime;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_RTC_Init(void);
static void MX_TIM1_Init(void);
/* USER CODE BEGIN PFP */

void dance();
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
  MX_USB_DEVICE_Init();
  MX_RTC_Init();
  MX_TIM1_Init();
  /* USER CODE BEGIN 2 */
  GPIO_InitTypeDef PinA = initA();
  GPIO_InitTypeDef PinB = initB();
  GPIO_InitTypeDef PinC = initC();
  GPIO_InitTypeDef PinD = initD();

  stopFlag = 0;
  int newMinutes = 0;
  int newHours = 0;


  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */

    // Ladies and gentlemen, this is Mambo Number Five
    if(mamboNumber == 5)
      clock(PinA, PinB, PinC, PinD, hrtc);

    // Or not...
    else
       dance(PinA, PinB, PinC, PinD, mamboNumber);


    // Increase hour by one
    if(stopFlag == 1 && hourFlag == 1){
      HAL_StatusTypeDef res;
      // Make new values, I got an oblique warning that this was needed to avoid a bug
      RTC_TimeTypeDef newTime;
      RTC_DateTypeDef currentDate;
      RTC_TimeTypeDef currentTime;
      memset(&newTime, 0, sizeof(newTime));
      memset(&currentTime, 0, sizeof(currentTime));

      say("In hour button\n");
      HAL_Delay(100);

      
      char buf[20];
      
      // Clear out our flags
      stopFlag =0;
      hourFlag =0;
      mamboNumber = 5;

      
      res = HAL_RTC_GetTime(&hrtc, &currentTime, RTC_FORMAT_BIN);
      // Weird. We dont care about the date but unless we touch the date the registers
      // for rtc time dont unlock...
      // You dont want to know how long I fought this
      res = HAL_RTC_GetDate(&hrtc, &currentDate, RTC_FORMAT_BIN);
      newHours = currentTime.Hours;
      sprintf(buf,"hour is %d \n", currentTime.Hours);
      say(buf);

      if(newHours >12)
         newTime.Hours = 1;
      else
         newTime.Hours = ++newHours;

      newTime.Minutes = 0; 
      newTime.Seconds = 0; 


      res = HAL_RTC_SetTime(&hrtc, &newTime, RTC_FORMAT_BIN);
      if(res != 0){
         sprintf(buf,"Set hour time error is %d \n", res);
         say(buf);
      }

    }

    // Increase minute by 10
    if(stopFlag == 1 && minuteFlag == 1){
      HAL_StatusTypeDef res;
      // Make new values, I got an oblique warning that this was needed to avoid a bug
      RTC_TimeTypeDef newTime;
      RTC_DateTypeDef currentDate;
      RTC_TimeTypeDef currentTime;
      say("In minute button\n");
      HAL_Delay(100);
      char buf[20];

      // Clear out flags
      stopFlag =0;
      minuteFlag =0;
      mamboNumber = 5;

      res = HAL_RTC_GetTime(&hrtc, &currentTime, RTC_FORMAT_BIN);
      // Weird. We dont care about the date but unless we touch the date the registers
      // for rtc time dont unlock...
      // You dont want to know how long I fought this
      res = HAL_RTC_GetDate(&hrtc, &currentDate, RTC_FORMAT_BIN);

      newMinutes = currentTime.Minutes;

      newTime.Seconds = 0; 
      
      if(newMinutes < 55){
         newTime.Minutes = (newMinutes + 5);
         newTime.Hours = currentTime.Hours;
      }
      else{
         newTime.Minutes = 0;
         newTime.Hours = (currentTime.Hours + 1);
      }

      sprintf(buf,"minute is %d \n", currentTime.Minutes);
      say(buf);

      res = HAL_RTC_SetTime(&hrtc, &newTime, RTC_FORMAT_BIN);
      if(res != 0){
         sprintf(buf,"Set minute time error is %d \n", res);
         say(buf);
      }
    }

    // Switch mode
    if(stopFlag == 1){
      say("In mode button\n");
      HAL_Delay(100);
      stopFlag =0;
      mamboNumber++;
      if(mamboNumber > 6)
         mamboNumber = 0;
    }
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
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI48|RCC_OSCILLATORTYPE_LSI;
  RCC_OscInitStruct.HSI48State = RCC_HSI48_ON;
  RCC_OscInitStruct.LSIState = RCC_LSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI48;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USB|RCC_PERIPHCLK_RTC;
  PeriphClkInit.RTCClockSelection = RCC_RTCCLKSOURCE_LSI;
  PeriphClkInit.UsbClockSelection = RCC_USBCLKSOURCE_HSI48;

  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief RTC Initialization Function
  * @param None
  * @retval None
  */
static void MX_RTC_Init(void)
{

  /* USER CODE BEGIN RTC_Init 0 */

  /* USER CODE END RTC_Init 0 */

  /* USER CODE BEGIN RTC_Init 1 */

  /* USER CODE END RTC_Init 1 */
  /** Initialize RTC Only 
  */
  hrtc.Instance = RTC;
  hrtc.Init.HourFormat = RTC_HOURFORMAT_12;
  hrtc.Init.AsynchPrediv = 127;
  hrtc.Init.SynchPrediv = 255;
  hrtc.Init.OutPut = RTC_OUTPUT_DISABLE;
  hrtc.Init.OutPutPolarity = RTC_OUTPUT_POLARITY_HIGH;
  hrtc.Init.OutPutType = RTC_OUTPUT_TYPE_OPENDRAIN;
  if (HAL_RTC_Init(&hrtc) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN RTC_Init 2 */

  /* USER CODE END RTC_Init 2 */

}

/**
  * @brief TIM1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM1_Init(void)
{

  /* USER CODE BEGIN TIM1_Init 0 */

  /* USER CODE END TIM1_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM1_Init 1 */

  /* USER CODE END TIM1_Init 1 */
  htim1.Instance = TIM1;
  htim1.Init.Prescaler = 0;
  htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim1.Init.Period = 0;
  htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim1.Init.RepetitionCounter = 0;
  htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim1) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM1_Init 2 */

  /* USER CODE END TIM1_Init 2 */

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
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

/*
  //Configure GPIO pin Output Level 
  HAL_GPIO_WritePin(GPIOA, A_Pin|B_Pin|C_Pin|D_Pin, GPIO_PIN_RESET);

  //Configure GPIO pins : A_Pin B_Pin C_Pin D_Pin 
  GPIO_InitStruct.Pin = A_Pin|B_Pin|C_Pin|D_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
  */

  //Configure GPIO pin : Mode_Pin 
  GPIO_InitStruct.Pin = Mode_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(Mode_GPIO_Port, &GPIO_InitStruct);

  //Configure GPIO pins : Hour_Pin Minute_Pin 
  GPIO_InitStruct.Pin = Hour_Pin|Minute_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI4_15_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI4_15_IRQn);

}

/* USER CODE BEGIN 4 */

/**
* @brief Interrupt callback for GPIOs
*/
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    // Mode
    if ( GPIO_Pin == GPIO_PIN_8) {
      stopFlag = 1;
    }
    // Minute  
    else if ( GPIO_Pin == GPIO_PIN_6) {
      stopFlag = 1;
      minuteFlag = 1;
    }
    // Hour 
    else if ( GPIO_Pin == GPIO_PIN_5) {
      stopFlag = 1;
      hourFlag = 1;
    }

}
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
