/*
 * led_display.c
 *
 *  Created on: Oct 23, 2024
 *      Author: Admin
 */

#include "led_display.h"


void displayLED(int status, int lane)
{
	switch(lane)
	{
	case VERTICAL:
		switch(status)
		{
		case RED:
			HAL_GPIO_WritePin(RED_VER_GPIO_Port, RED_VER_Pin, SET);
			HAL_GPIO_WritePin(GREEN_VER_GPIO_Port, GREEN_VER_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin, RESET);
			break;
		case GREEN:
			HAL_GPIO_WritePin(RED_VER_GPIO_Port, RED_VER_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_VER_GPIO_Port, GREEN_VER_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin, RESET);
			break;
		case YELLOW:
			HAL_GPIO_WritePin(RED_VER_GPIO_Port, RED_VER_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_VER_GPIO_Port, GREEN_VER_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin, SET);
			break;
		default:
			break;
		}
		break;
	case HORIZONTAL:
		switch(status)
		{
		case RED:
			HAL_GPIO_WritePin(RED_HOZ_GPIO_Port, RED_HOZ_Pin, SET);
			HAL_GPIO_WritePin(GREEN_HOZ_GPIO_Port, GREEN_HOZ_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_HOZ_GPIO_Port, YELLOW_HOZ_Pin, RESET);
			break;
		case GREEN:
			HAL_GPIO_WritePin(RED_HOZ_GPIO_Port, RED_HOZ_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_HOZ_GPIO_Port, GREEN_HOZ_Pin, SET);
			HAL_GPIO_WritePin(YELLOW_HOZ_GPIO_Port, YELLOW_HOZ_Pin, RESET);
			break;
		case YELLOW:
			HAL_GPIO_WritePin(RED_HOZ_GPIO_Port, RED_HOZ_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_HOZ_GPIO_Port, GREEN_HOZ_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_HOZ_GPIO_Port, YELLOW_HOZ_Pin, SET);
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
void setDurationBuffer(int index, int duration)
{
	ledDurationBuffer[index] = duration;
}

void validateDuration()
{
	ledDurationBuffer[0] = (ledDurationBuffer[0] > 99) ? 99 : ledDurationBuffer[0];
	ledDurationBuffer[0] = (ledDurationBuffer[0] <= 1) ? 2 : ledDurationBuffer[0];

	ledDurationBuffer[1] = (ledDurationBuffer[1] >= ledDurationBuffer[0]) ? ledDurationBuffer[0] - 1 : ledDurationBuffer[1];
	ledDurationBuffer[2] = ledDurationBuffer[0] - ledDurationBuffer[1];
}

void blinkyLED1s(int led)
{
	switch(led)
	{
	case RED:
		if(timer_blinky_led_flag)
		{
			setTimerBlinky(100);
			HAL_GPIO_TogglePin(RED_HOZ_GPIO_Port, RED_HOZ_Pin);
			HAL_GPIO_TogglePin(RED_VER_GPIO_Port, RED_VER_Pin);
		}
		break;
	case YELLOW:
		if(timer_blinky_led_flag)
		{
			setTimerBlinky(100);
			HAL_GPIO_TogglePin(YELLOW_HOZ_GPIO_Port, YELLOW_HOZ_Pin);
			HAL_GPIO_TogglePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin);
		}

		break;
	case GREEN:
		if(timer_blinky_led_flag)
		{
			setTimerBlinky(100);
			HAL_GPIO_TogglePin(GREEN_HOZ_GPIO_Port, GREEN_HOZ_Pin);
			HAL_GPIO_TogglePin(GREEN_VER_GPIO_Port, GREEN_VER_Pin);
		}
		break;
	default:
		break;
	}
}
void turnOffLEDAllin(int lane)
{
	switch(lane)
	{
	case VERTICAL:
		HAL_GPIO_WritePin(RED_VER_GPIO_Port, RED_VER_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_VER_GPIO_Port, GREEN_VER_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin, RESET);
		break;
	case HORIZONTAL:
		HAL_GPIO_WritePin(RED_HOZ_GPIO_Port, RED_HOZ_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_HOZ_GPIO_Port, GREEN_HOZ_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_HOZ_GPIO_Port, YELLOW_HOZ_Pin, RESET);
		break;
	default:
		break;
	}
}
void turnOffLEDAll()
{
	HAL_GPIO_WritePin(RED_VER_GPIO_Port, RED_VER_Pin, RESET);
	HAL_GPIO_WritePin(GREEN_VER_GPIO_Port, GREEN_VER_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_VER_GPIO_Port, YELLOW_VER_Pin, RESET);

	HAL_GPIO_WritePin(RED_HOZ_GPIO_Port, RED_HOZ_Pin, RESET);
	HAL_GPIO_WritePin(GREEN_HOZ_GPIO_Port, GREEN_HOZ_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_HOZ_GPIO_Port, YELLOW_HOZ_Pin, RESET);
}
