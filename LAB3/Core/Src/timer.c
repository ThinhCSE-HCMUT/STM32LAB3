/*
 * timer.c
 *
 *  Created on: Oct 23, 2024
 *      Author: Admin
 */
#include "timer.h"
#include "global.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM2)
	{
		timerRun();
		button_reading();
		fsm_normal_mode();
		fsm_manual();
		fsm_setting();
	}
}
int timer_horizontal_flag = 0;
int timer_vertical_flag = 0;
int timer_7seg_flag = 0;
int timer_blinky_led_flag = 0;
int timer_clock_flag = 0;

int timer_counter_horizontal = 0;
int timer_counter_vertical = 0;
int timer_counter_7seg = 0;
int timer_counter_blinky = 0;
int timer_counter_clock = 0;

void setTimerVertical(int duration)
{
	timer_vertical_flag = 0;
	timer_counter_vertical = duration;
}
void setTimerHorizontal(int duration)
{
	timer_horizontal_flag = 0;
	timer_counter_horizontal = duration;
}
void setTimer7SEG(int duration)
{
	timer_7seg_flag = 0;
	timer_counter_7seg = duration;
}

void setTimerBlinky(int duration)
{
	timer_blinky_led_flag = 0;
	timer_counter_blinky = duration;
}

void setTimerClock(int duration)
{
	timer_clock_flag = 0;
	timer_counter_clock = duration;
}


void timerRun()
{
	if(timer_counter_vertical > 0)
	{
		timer_counter_vertical--;
		if(timer_counter_vertical <= 0)
		{
			timer_vertical_flag = 1;
		}
	}
	if(timer_counter_horizontal > 0)
	{
		timer_counter_horizontal--;
		if(timer_counter_horizontal <= 0)
		{
			timer_horizontal_flag = 1;
		}
	}
	if(timer_counter_7seg > 0)
	{
		timer_counter_7seg--;
		if(timer_counter_7seg <= 0)
		{
			timer_7seg_flag = 1;
		}
	}
	if(timer_counter_blinky > 0)
	{
		timer_counter_blinky--;
		if(timer_counter_blinky <= 0)
		{
			timer_blinky_led_flag = 1;
		}
	}

	if(timer_counter_clock > 0)
	{
		timer_counter_clock--;
		if(timer_counter_clock <= 0)
		{
			timer_clock_flag = 1;
		}
	}
}
