/*
 * led_7segment.c
 *
 *  Created on: Nov 9, 2024
 *      Author: Admin
 */
#include "led_7segment.h"

void display7SEG(int num)
{

	switch(num)
	{
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		default:
			break;
	}
}

void turnOffAll7SEG()
{
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);

    HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
    HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
    HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
    HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
}

void set7SEGBuffer_setting(int duration)
{
	if(duration <= 9)
	{
		led7SEGBuffer_setting[0] = 0;
		led7SEGBuffer_setting[1] = duration;
	}
	else
	{
		led7SEGBuffer_setting[0] = duration / 10;
		led7SEGBuffer_setting[1] = duration % 10;
	}
}

void enable7SEGat(int index)
{
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	switch(index)
	{
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		break;
	default:
		break;
	}
}

void runClock()
{
	if(timer_clock_flag)
	{
		setTimerClock(100);
		led7SEGBuffer[1]--;
		led7SEGBuffer[3]--;
		if(led7SEGBuffer[0] <= 0 && led7SEGBuffer[1] <= 0)
		{
			updateBuffer();
		}
		else
		{
			if(led7SEGBuffer[1] <= 0)
			{
				led7SEGBuffer[0]--;
				led7SEGBuffer[1] = 9;
			}
		}

		if(led7SEGBuffer[2] <= 0 && led7SEGBuffer[3] <= 0)
		{
			led7SEGBuffer[2] = led7SEGBuffer[0];
			led7SEGBuffer[3] = led7SEGBuffer[1];
		}
		else
		{
			if(led7SEGBuffer[3] <= 0)
			{
				led7SEGBuffer[2]--;
				led7SEGBuffer[3] = 9;
			}
		}
	}
}
void updateBuffer()
{
	if(ledDurationBuffer[0] <= 9)
	{
		led7SEGBuffer[0] = 0;
		led7SEGBuffer[1] = ledDurationBuffer[0];
	}
	else
	{
		led7SEGBuffer[0] = ledDurationBuffer[0] / 10;
		led7SEGBuffer[1] = ledDurationBuffer[0] % 10;
	}

	if(ledDurationBuffer[1] <= 9)
	{
		led7SEGBuffer[2] = 0;
		led7SEGBuffer[3] = ledDurationBuffer[1];
	}
	else
	{
		led7SEGBuffer[2] = ledDurationBuffer[1] / 10;
		led7SEGBuffer[3] = ledDurationBuffer[1] % 10;
	}
}

void init7SEGBuffer_setting(int mode, int duration)
{
	if(duration <= 9)
	{
		led7SEGBuffer_setting[0] = 0;
		led7SEGBuffer_setting[1] = duration;
	}
	else
	{
		led7SEGBuffer_setting[0] = duration / 10;
		led7SEGBuffer_setting[1] = duration % 10;
	}
	switch(mode)
	{
	case RED_MODIFY:
		led7SEGBuffer_setting[2] = 0;
		led7SEGBuffer_setting[3] = 1;
		break;
	case YELLOW_MODIFY:
		led7SEGBuffer_setting[2] = 0;
		led7SEGBuffer_setting[3] = 3;
		break;
	case GREEN_MODIFY:
		led7SEGBuffer_setting[2] = 0;
		led7SEGBuffer_setting[3] = 2;
		break;
	default:
		break;
	}
}
