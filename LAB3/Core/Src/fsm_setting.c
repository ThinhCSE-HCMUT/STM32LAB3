/*
 * fsm_setting.c
 *
 *  Created on: Nov 5, 2024
 *      Author: Admin
 */

#include "fsm_setting.h"


void fsm_setting(void)
{
	switch(statusHorizontal)
	{
	case RED_MODIFY:
		blinkyLED1s(RED);
		init7SEGBuffer_setting(RED_MODIFY, red_duration);
		if(is_button_pressed(0))
		{
			turnOffLEDAll();
			statusHorizontal = GREEN_MODIFY;
		}

		if(is_button_pressed(1))
		{
			statusHorizontal = RED_CHANGE_DURATION;
			index_7SEG_buffer = 0;
			index_enable = 0;
		}
		if(timer_7seg_flag)
		{
			setTimer7SEG(50);
			display7SEG(led7SEGBuffer_setting[index_7SEG_buffer]);
			enable7SEGat(index_enable);
			index_enable = (index_enable + 1) % 4;
			index_7SEG_buffer = (index_7SEG_buffer + 1) % 4;
		}
		break;
	case RED_CHANGE_DURATION:
		if(is_button_pressed(1))
		{
			set7SEGBuffer_setting(red_duration++);
		}
		if(is_button_pressed(2))
		{
			statusHorizontal = RED_SET_DURATION;
		}
		if(timer_7seg_flag)
		{
			setTimer7SEG(50);
			display7SEG(led7SEGBuffer_setting[index_7SEG_buffer]);
			enable7SEGat(index_enable);
			index_enable = (index_enable + 1) % 4;
			index_7SEG_buffer = (index_7SEG_buffer + 1) % 4;
		}
		break;
	case RED_SET_DURATION:
		if(red_duration != 0)
		{
			setDurationBuffer(0, red_duration);
			red_duration = 0;
		}

		if(is_button_pressed(0))
		{
			statusHorizontal = RED_MODIFY;
		}
		if(is_button_pressed(1))
		{
			statusHorizontal = RED_CHANGE_DURATION;
		}
		break;

	case GREEN_MODIFY:
		blinkyLED1s(GREEN);
		init7SEGBuffer_setting(GREEN_MODIFY, green_duration);
		if(is_button_pressed(0))
		{
			turnOffLEDAll();
			statusHorizontal = YELLOW_MODIFY;
		}
		if(is_button_pressed(1))
		{
			statusHorizontal = GREEN_CHANGE_DURATION;
		}

		if(timer_7seg_flag)
		{
			setTimer7SEG(50);
			display7SEG(led7SEGBuffer_setting[index_7SEG_buffer]);
			enable7SEGat(index_enable);
			index_enable = (index_enable + 1) % 4;
			index_7SEG_buffer = (index_7SEG_buffer + 1) % 4;
		}

		break;
	case GREEN_CHANGE_DURATION:
		if(is_button_pressed(1))
		{
			set7SEGBuffer_setting(green_duration++);
		}

		if(is_button_pressed(2))
		{
			statusHorizontal = GREEN_SET_DURATION;
		}

		if(timer_7seg_flag)
		{
			setTimer7SEG(50);
			display7SEG(led7SEGBuffer_setting[index_7SEG_buffer]);
			enable7SEGat(index_enable);
			index_enable = (index_enable + 1) % 4;
			index_7SEG_buffer = (index_7SEG_buffer + 1) % 4;
		}
		break;
	case GREEN_SET_DURATION:
		if(green_duration != 0)
		{
			setDurationBuffer(1, green_duration);
			green_duration = 0;
		}

		if(is_button_pressed(0))
		{
			turnOffLEDAll();
			statusHorizontal = GREEN_MODIFY;
		}
		if(is_button_pressed(1))
		{
			statusHorizontal = GREEN_CHANGE_DURATION;
		}
		break;

	case YELLOW_MODIFY:
		blinkyLED1s(YELLOW);
		init7SEGBuffer_setting(YELLOW_MODIFY, yellow_duration);
		if(is_button_pressed(0))
		{
			statusHorizontal = INIT;
			statusVertical = INIT;
		}
		if(is_button_pressed(1))
		{
			statusHorizontal = YELLOW_CHANGE_DURATION;
		}

		if(timer_7seg_flag)
		{
			setTimer7SEG(50);
			display7SEG(led7SEGBuffer_setting[index_7SEG_buffer]);
			enable7SEGat(index_enable);
			index_enable = (index_enable + 1) % 4;
			index_7SEG_buffer = (index_7SEG_buffer + 1) % 4;
		}

		break;
	case YELLOW_CHANGE_DURATION:
		if(is_button_pressed(1))
		{
			set7SEGBuffer_setting(yellow_duration++);
		}
		if(is_button_pressed(2))
		{
			statusHorizontal = YELLOW_SET_DURATION;
		}
		if(timer_7seg_flag)
		{
			setTimer7SEG(50);
			display7SEG(led7SEGBuffer_setting[index_7SEG_buffer]);
			enable7SEGat(index_enable);
			index_enable = (index_enable + 1) % 4;
			index_7SEG_buffer = (index_7SEG_buffer + 1) % 4;
		}
		break;
	case YELLOW_SET_DURATION:
		if(yellow_duration != 0)
		{
			setDurationBuffer(2, yellow_duration);
			yellow_duration = 0;
		}
		if(is_button_pressed(0))
		{
			statusHorizontal = YELLOW_MODIFY;
		}
		if(is_button_pressed(1))
		{
			statusHorizontal = YELLOW_CHANGE_DURATION;
		}
		break;
	}
}
