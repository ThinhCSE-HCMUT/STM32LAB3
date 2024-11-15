/*
 * fsm_normal_mode.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Admin
 */

#include "fsm_normal_mode.h"

void fsm_normal_mode()
{
	runClock();
	switch(statusHorizontal)
	{
	case INIT:
		setTimer7SEG(50);
		setTimerBlinky(-1); //not use in this mode
		setTimerClock(100);

		validateDuration();
		turnOffLEDAll();
		statusHorizontal = NORMAL_RED;
		setTimerHorizontal(ledDurationBuffer[0]*100);
		index_7SEG_buffer = 0;
		index_enable = 0;
		updateBuffer();
		break;
	case NORMAL_RED:
		displayLED(RED, HORIZONTAL);

		if(timer_horizontal_flag)
		{
			statusHorizontal = NORMAL_GREEN;
			setTimerHorizontal(ledDurationBuffer[1]*100);
		}
		if(is_button_pressed(0))
		{
			statusHorizontal = MAN_RED_IN_HORIZONTAL;
			statusVertical = DISABLE;
			setTimerClock(-1);
			setTimerHorizontal(-1);
			setTimerVertical(-1);
			setTimer7SEG(-1);
			turnOffAll7SEG();
		}
		break;
	case NORMAL_GREEN:
		displayLED(GREEN, HORIZONTAL);


		if(timer_horizontal_flag)
		{
			statusHorizontal = NORMAL_YELLOW;
			setTimerHorizontal(ledDurationBuffer[2]*100);
		}
		if(is_button_pressed(0))
		{
			is_button_pressed(0);
			statusHorizontal = MAN_RED_IN_HORIZONTAL;
			statusVertical = DISABLE;
			setTimerClock(-1);
			setTimerHorizontal(-1);
			setTimerVertical(-1);
			setTimer7SEG(-1);
			turnOffAll7SEG();
		}
		break;
	case NORMAL_YELLOW:
		displayLED(YELLOW, HORIZONTAL);

//		if(timer_7seg_flag && (index_7SEG >= 4) && (index_display7seg >= 2))
//		{
//			setTimer7SEG(50);
//			display7SEG(led7SEGBuffer[index_7SEG]);
//			enable7SEGat(index_display7seg);
//		}
		if(timer_horizontal_flag)
		{
			statusHorizontal = NORMAL_RED;
			setTimerHorizontal(ledDurationBuffer[0]*100);
		}
		if(is_button_pressed(0))
		{
			statusHorizontal = MAN_RED_IN_HORIZONTAL;
			statusVertical = DISABLE;
			setTimerClock(-1);
			setTimerHorizontal(-1);
			setTimerVertical(-1);
			setTimer7SEG(-1);
			turnOffAll7SEG();
		}
		break;
	default:
		break;
	}
	switch(statusVertical)
	{
	case INIT:
		validateDuration();
		turnOffLEDAll();
		statusVertical = NORMAL_GREEN;
		setTimerVertical(ledDurationBuffer[1]*100);
		break;
	case NORMAL_RED:
		displayLED(RED, VERTICAL);
		if(timer_vertical_flag)
		{
			statusVertical = NORMAL_GREEN;
			setTimerVertical(ledDurationBuffer[1]*100);
			index_7SEG_buffer = 0;
			index_enable = 0;
		}
		if(is_button_pressed(0))
		{
			statusHorizontal = MAN_RED_IN_HORIZONTAL;
			statusVertical = DISABLE;
			setTimerClock(-1);
			setTimerHorizontal(-1);
			setTimerVertical(-1);
			setTimer7SEG(-1);
			turnOffAll7SEG();
		}
		break;
	case NORMAL_GREEN:
		displayLED(GREEN, VERTICAL);
		if(timer_vertical_flag)
		{
			statusVertical = NORMAL_YELLOW;
			setTimerVertical(ledDurationBuffer[2]*100);
		}
		if(is_button_pressed(0))
		{
			statusHorizontal = MAN_RED_IN_HORIZONTAL;
			statusVertical = DISABLE;
			setTimerClock(-1);
			setTimerHorizontal(-1);
			setTimerVertical(-1);
			setTimer7SEG(-1);
			turnOffAll7SEG();
		}
		break;
	case NORMAL_YELLOW:
		displayLED(YELLOW, VERTICAL);
		if(timer_vertical_flag)
		{
			statusVertical = NORMAL_RED;
			setTimerVertical(ledDurationBuffer[0]*100);
			index_enable = 2;
			index_7SEG_buffer = 0;
		}
		if(is_button_pressed(0))
		{
			statusHorizontal = MAN_RED_IN_HORIZONTAL;
			statusVertical = DISABLE;
			setTimerClock(-1);
			setTimerHorizontal(-1);
			setTimerVertical(-1);
			setTimer7SEG(-1);
			turnOffAll7SEG();
		}
		break;
	default:
		break;
	}
	if(timer_7seg_flag && statusVertical != DISABLE)
	{
	    setTimer7SEG(50);
		display7SEG(led7SEGBuffer[index_7SEG_buffer]);
		enable7SEGat(index_enable);
		index_enable = (index_enable + 1) % 4;
		index_7SEG_buffer = (index_7SEG_buffer + 1) % 4;
	}
}
