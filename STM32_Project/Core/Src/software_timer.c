/*
 * software_timer.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Admin
 */

#include "software_timer.h"

uint16_t timerCounter[9] = {0};
uint8_t timerFlag[9] = {0};

void setTimer(uint8_t index, uint16_t duration) {
	timerCounter[index] = duration;
	timerFlag[index] = 0;
}

void timerRun(uint8_t index){
	if(timerCounter[index] > 0){
		timerCounter[index]--;
		if (timerCounter[index] <= 0){
			timerFlag[index] = 1;
		}
	}
}
