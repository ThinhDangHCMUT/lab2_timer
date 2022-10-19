/*
 * setup_matrix.h
 *
 *  Created on: Oct 19, 2022
 *      Author: Thinh Dang
 */
#include "main.h"

#ifndef INC_SETUP_MATRIX_H_
#define INC_SETUP_MATRIX_H_

void clearMatrixLed();

void updateDisplayMatrixLed(uint8_t index);

void updateLEDMatrix(int index);

void updateLedBuffer();

void updateLedBuffer_animation();

#endif /* INC_SETUP_MATRIX_H_ */
