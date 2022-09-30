/*
 * 7led.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Thinh Dang
 */
#include "main.h"

void SevenSegment_Update(int number){
	if(number == 0){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	}
	if(number == 1){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
		}
	if(number == 2){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		}
	if(number == 3){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		}
	if(number == 4){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		}
	if(number == 5){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		}
	if(number == 6){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		}
	if(number == 7){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
		}
	if(number == 8){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		}
	if(number == 9){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		}
	if(number == 10){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	}
}
