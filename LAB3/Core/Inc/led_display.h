/*
 * led_display.h
 *
 *  Created on: Oct 23, 2024
 *      Author: Admin
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_
#include "global.h"
#define MAX_LED_7SEG	4


void displayLED(int status, int lane);
void setDurationBuffer(int index, int duration);
void validateDuration(void);
void blinkyLED1s(int led);
void turnOffLEDAllin(int lane);
void turnOffLEDAll();
#endif /* INC_LED_DISPLAY_H_ */
