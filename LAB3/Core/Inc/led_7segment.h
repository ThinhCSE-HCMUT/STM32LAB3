/*
 * led_7segment.h
 *
 *  Created on: Nov 9, 2024
 *      Author: Admin
 */

#ifndef INC_LED_7SEGMENT_H_
#define INC_LED_7SEGMENT_H_

#include "global.h"


void display7SEG(int num);
void turnOffAll7SEG();
void set7SEGBuffer_setting(int duration);
void enable7SEGat(int index);
void runClock();
void updateBuffer();
void init7SEGBuffer_setting(int mode, int duration);
#endif /* INC_LED_7SEGMENT_H_ */
