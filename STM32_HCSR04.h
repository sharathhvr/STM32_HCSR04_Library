/*
 * STM32_HCSR04.h
 *
 *  Created on: Aug 31, 2020
 *      Author: SHARATH
 */

#ifndef INC_STM32_HCSR04_H_
#define INC_STM32_HCSR04_H_



#include "stm32f4xx_hal.h"
#include <stdint.h>

#define TRIG_PIN GPIO_PIN_9
#define TRIG_PORT GPIOA



void HCSR04_Read (TIM_HandleTypeDef* htim);
void delay_us(uint16_t time,TIM_HandleTypeDef* htim);
void HAL_TIM_IC_CaptureCallback_HCSR04_Ch1(TIM_HandleTypeDef *htim,uint8_t* Distance);

#endif /* INC_STM32_HCSR04_H_ */
