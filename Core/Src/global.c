/*
 * global.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Thinh Dang
 */

#include "global.h"
#include "main.h"

int index_led_matrix;

int shift = 0;
uint8_t matrix_buffer[MAX_LED_MATRIX] = {0x01 , 0x02 , 0x03 , 0x04 , 0x05 , 0x06 , 0x07 , 0x08 };

uint8_t A_value[MAX_LED_MATRIX] = {0x00,0xFC,0xFE,0x33,0x33,0xFE,0xFC,0x00};
