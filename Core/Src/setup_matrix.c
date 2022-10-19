/*
 * setup_matrix.c
 *
 *  Created on: Oct 19, 2022
 *      Author: Thinh Dang
 */
#include "setup_matrix.h"
#include "main.h"
#include "global.h"

void clearMatrixLed(){
	 HAL_GPIO_WritePin ( GPIOA , ENM0_Pin , SET ) ;
	 HAL_GPIO_WritePin ( GPIOA , ENM1_Pin , SET ) ;
	 HAL_GPIO_WritePin ( GPIOA , ENM2_Pin , SET ) ;
	 HAL_GPIO_WritePin ( GPIOA , ENM3_Pin , SET ) ;
	 HAL_GPIO_WritePin ( GPIOA , ENM4_Pin , SET ) ;
	 HAL_GPIO_WritePin ( GPIOA , ENM5_Pin , SET ) ;
	 HAL_GPIO_WritePin ( GPIOA , ENM6_Pin , SET ) ;
	 HAL_GPIO_WritePin ( GPIOA , ENM7_Pin , SET ) ;
}

void updateDisplayMatrixLed(uint8_t index){
	HAL_GPIO_WritePin ( GPIOB , ROW0_Pin , !( index & 0x1 )) ;
	HAL_GPIO_WritePin ( GPIOB , ROW1_Pin , !(( index >> 1) & 0x1 ));
	HAL_GPIO_WritePin ( GPIOB , ROW2_Pin , !(( index >> 2) & 0x1 ));
	HAL_GPIO_WritePin ( GPIOB , ROW3_Pin , !(( index >> 3) & 0x1 ));
	HAL_GPIO_WritePin ( GPIOB , ROW4_Pin , !(( index >> 4) & 0x1 ));
	HAL_GPIO_WritePin ( GPIOB , ROW5_Pin , !(( index >> 5) & 0x1 ));
	HAL_GPIO_WritePin ( GPIOB , ROW6_Pin , !(( index >> 6) & 0x1 ));
	HAL_GPIO_WritePin ( GPIOB , ROW7_Pin , !(( index >> 7) & 0x1 ) );
}

void updateLedBuffer()
{
	matrix_buffer[7] = A_value[7];
	matrix_buffer[6] = A_value[6];
	matrix_buffer[5] = A_value[5];
	matrix_buffer[4] = A_value[4];
	matrix_buffer[3] = A_value[3];
	matrix_buffer[2] = A_value[2];
	matrix_buffer[1] = A_value[1];
	matrix_buffer[0] = A_value[0];
}


 void updateLEDMatrix (int index ) {
 switch (index) {
	 case 0:
		 clearMatrixLed();
				 HAL_GPIO_WritePin(GPIOA, ENM0_Pin, RESET);
				 updateDisplayMatrixLed(matrix_buffer[index]);
		 break ;
	 case 1:
		 clearMatrixLed();
		 		 HAL_GPIO_WritePin(GPIOA, ENM1_Pin, RESET);
		 		updateDisplayMatrixLed(matrix_buffer[index]);
		 break ;

	 case 2:
		 clearMatrixLed();
		 		 HAL_GPIO_WritePin(GPIOA, ENM2_Pin, RESET);
		 		updateDisplayMatrixLed(matrix_buffer[index]);
		 break ;
	 case 3:
		 clearMatrixLed();
		 		 HAL_GPIO_WritePin(GPIOA, ENM3_Pin, RESET);
		 		updateDisplayMatrixLed(matrix_buffer[index]);
		 break ;
	 case 4:
		 clearMatrixLed();
		 		 HAL_GPIO_WritePin(GPIOA, ENM4_Pin, RESET);
		 		updateDisplayMatrixLed(matrix_buffer[index]);
		 break ;
	 case 5:
		 clearMatrixLed();
		 		 HAL_GPIO_WritePin(GPIOA, ENM5_Pin, RESET);
		 		updateDisplayMatrixLed(matrix_buffer[index]);
		 break ;
	 case 6:
		 clearMatrixLed();
		 		 HAL_GPIO_WritePin(GPIOA, ENM6_Pin, RESET);
		 		updateDisplayMatrixLed(matrix_buffer[index]);
		 break ;
	 case 7:
		 clearMatrixLed();
		 		 HAL_GPIO_WritePin(GPIOA, ENM7_Pin, RESET);
		 		updateDisplayMatrixLed(matrix_buffer[index]);
		 break ;
	 default :
		 break ;
 }
}

