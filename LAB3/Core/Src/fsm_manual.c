/*
 * input_processing.c
 *
 *  Created on: Oct 23, 2024
 *      Author: Admin
 */

#include "fsm_manual.h"

void fsm_manual(void)
{
	switch(statusHorizontal)
	{
	case MAN_RED_IN_HORIZONTAL:
		displayLED(RED, HORIZONTAL);
		displayLED(GREEN, VERTICAL);
		if(is_button_pressed(2))
		{
			statusHorizontal = MAN_GREEN_IN_HORIZONTAL;
		}
		if(is_button_pressed(0))
		{
			statusHorizontal = RED_MODIFY;
			turnOffLEDAll();
			setTimerBlinky(100);
			setTimer7SEG(50);
			index_enable = 0;
			index_7SEG_buffer = 0;
			turnOffAll7SEG();
		}
		break;
	case MAN_GREEN_IN_HORIZONTAL:
		displayLED(GREEN, HORIZONTAL);
		displayLED(RED, VERTICAL);
		if(is_button_pressed(1))
		{
			statusHorizontal = MAN_RED_IN_HORIZONTAL;
		}
		if(is_button_pressed(0))
		{
			statusHorizontal = RED_MODIFY;
			turnOffLEDAll();
			setTimerBlinky(100);
			setTimer7SEG(50);
			index_enable = 0;
			index_7SEG_buffer = 0;
			turnOffAll7SEG();
		}
		break;
	default:
		break;
	}
}
