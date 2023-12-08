/*
 * software_timer.h
 *
 *  Created on: Dec 8, 2023
 *      Author: Admin
 */
#include <stdint.h>

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern uint8_t timerFlag[9];

void setTimer(uint8_t index, uint16_t duration);
void timerRun(uint8_t index);


#endif /* INC_SOFTWARE_TIMER_H_ */
