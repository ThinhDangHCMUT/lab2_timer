/*
 * global.h
 *
 *  Created on: Sep 30, 2022
 *      Author: Thinh Dang
 */
#include "main.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#define MAX_LED_MATRIX   8

int index_led_matrix;
int shift;
uint8_t matrix_buffer[MAX_LED_MATRIX];

uint8_t A_value[MAX_LED_MATRIX];

#endif /* INC_GLOBAL_H_ */
