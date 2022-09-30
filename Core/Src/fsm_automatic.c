/*
 * fsm_automatic.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Thinh Dang
 */

#include "fsm_automatic.h"

void fsm_automatic_run(int status){
	switch (status) {
		case INIT:
			status = AUTO_RED;
			break;
		case AUTO_RED:
			if(time1_flag == 1){
			status = AUTO_GREEN;
			setTimer1(300);
			}
					break;
		case AUTO_YELLOW:
			if(time1_flag == 1){

			status = AUTO_RED;
			setTimer1(500);
			}
					break;
		case AUTO_GREEN:
			if(timer_flag == 1){
			status = AUTO_YELLOW;
			setTimer1(200);

			}
					break;
		default:
			break;
	}
}
