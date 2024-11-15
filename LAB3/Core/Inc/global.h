/*
 * global.h
 *
 *  Created on: Oct 29, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "timer.h"
#include "input_reading.h"
#include "main.h"
#include "led_display.h"
#include "led_7segment.h"

//Define the states of fsm
#define DISABLE					0
#define INIT					1
#define NORMAL_RED				2
#define NORMAL_GREEN			3
#define NORMAL_YELLOW			4

#define RED_MODIFY				5
#define RED_CHANGE_DURATION		6
#define RED_SET_DURATION		7

#define GREEN_MODIFY			8
#define GREEN_CHANGE_DURATION	9
#define GREEN_SET_DURATION		10

#define YELLOW_MODIFY			11
#define YELLOW_CHANGE_DURATION	12
#define YELLOW_SET_DURATION		13

#define MAN_RED_IN_HORIZONTAL	14
#define MAN_GREEN_IN_HORIZONTAL	15

//Define the lanes
#define VERTICAL				16
#define HORIZONTAL				17


//Define the display color
#define RED						18
#define GREEN					19
#define YELLOW					20


extern int statusHorizontal;
extern int statusVertical;
extern int red_duration;
extern int green_duration;
extern int yellow_duration;

extern GPIO_PinState buttonBuffer[3];
extern int led7SEGBuffer[4];
extern int ledDurationBuffer[3];
extern int led7SEGBuffer_setting[4];
extern int index_7SEG_buffer;
extern int index_enable;
#endif /* INC_GLOBAL_H_ */
