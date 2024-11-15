/*
 * timer.h
 *
 *  Created on: Oct 23, 2024
 *      Author: Admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "input_reading.h"
#include "global.h"

extern int timer_horizontal_flag;
extern int timer_vertical_flag;
extern int timer_7seg_flag;
extern int timer_blinky_led_flag;
extern int timer_clock_flag;

void setTimerHorizontal(int duration);
void setTimerVertical(int duration);
void setTimer7SEG(int duration);
void setTimerBlinky(int duration);
void setTimerClock(int duration);
void timerRun();

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);


#endif /* INC_TIMER_H_ */
