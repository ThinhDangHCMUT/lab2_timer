/*
 * update7led.c
 *
 *  Created on: Oct 3, 2022
 *      Author: Thinh Dang
 */
#include "main.h"
#include "update7led.h"
#include "7led.h"

int led_buffer[4] = {1,2,3,4};
void update7SEG (int index) {
		switch(index){
		  		  case 0:
		  			  HAL_GPIO_WritePin(GPIOA, EN3_Pin, SET);
		  			  HAL_GPIO_WritePin(GPIOA, EN2_Pin, SET);
		  			  HAL_GPIO_WritePin(GPIOA, EN1_Pin, SET);
		  			  HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
		  			  SevenSegment_Update(led_buffer[index]);
		  			  break;
		  		  case 1:
		  			HAL_GPIO_WritePin(GPIOA, EN3_Pin, SET);
		  			HAL_GPIO_WritePin(GPIOA, EN2_Pin, SET);
		  			HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
		  			HAL_GPIO_WritePin(GPIOA, EN0_Pin, SET);
		  			  SevenSegment_Update(led_buffer[index]);
		  		      break;
		  		  case 2:
		  			HAL_GPIO_WritePin(GPIOA, EN3_Pin, SET);
		  			HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
		  			HAL_GPIO_WritePin(GPIOA, EN1_Pin, SET);
		  			HAL_GPIO_WritePin(GPIOA, EN0_Pin, SET);
		  			SevenSegment_Update(led_buffer[index]);
		  			  break;
		  		  case 3:
		  			HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
		  		    HAL_GPIO_WritePin(GPIOA, EN2_Pin, SET);
		  			HAL_GPIO_WritePin(GPIOA, EN1_Pin, SET);
		  			HAL_GPIO_WritePin(GPIOA, EN0_Pin, SET);
		  			SevenSegment_Update(led_buffer[index]);
		  			  break;
		  		  default:
		  			  //SevenSegment_Update(index);
		  			  break;
		  		  }
 }
