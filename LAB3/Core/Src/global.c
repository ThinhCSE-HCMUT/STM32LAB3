/*
 * global.c
 *
 *  Created on: Oct 29, 2024
 *      Author: Admin
 */

#include "global.h"

int statusHorizontal = INIT;
int statusVertical = INIT;
int ledDurationBuffer[3] = {20, 17, 3}; //red green yellow

int led7SEGBuffer[4]; //{0, 7, 0, 4}

int led7SEGBuffer_setting[4] = {0, 0, 0, 0};
int red_duration = 0;
int green_duration = 0;
int yellow_duration = 0;
int index_7SEG_buffer = 0;
int index_enable = 0;
GPIO_PinState buttonBuffer[3] = {SET};
