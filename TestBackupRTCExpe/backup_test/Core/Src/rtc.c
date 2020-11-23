/**
  ******************************************************************************
  * File Name          : RTC.c
  * Description        : This file provides code for the configuration
  *                      of the RTC instances.
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

/* Includes ------------------------------------------------------------------*/
#include "rtc.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* RTC init function */
void MX_RTC_Init(void)
{
	  LL_RTC_InitTypeDef RTC_InitStruct = {0};

	  /* Peripheral clock enable */
	  LL_RCC_EnableRTC();
	  /** Initialize RTC and set the Time and Date
	  */
	  RTC_InitStruct.HourFormat = LL_RTC_HOURFORMAT_24HOUR;
	  RTC_InitStruct.AsynchPrescaler = 127;
	  RTC_InitStruct.SynchPrescaler = 255;
	  LL_RTC_Init(RTC, &RTC_InitStruct);
	  //LL_RTC_WAKEUP_Enable(RTC);
	  /** Initialize RTC and set the Time and Date
	  */
}
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
