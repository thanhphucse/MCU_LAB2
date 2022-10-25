/*
 * controll_buffer.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Welcome
 */

#include <control_clock_buffer.h>
#include "global.h"

int index_led = 0;
int led_buffer [4] = {3, 4, 5, 7};

void updateClockBuffer(){
	if(hour < 10)// if hour is 1 degit number, degit 0 is added
	{
		led_buffer[0] = 0;
		led_buffer[1] = hour;
	}
	if(hour >= 10)
	{
		led_buffer[0] = hour/10;
		led_buffer[1] = hour%10;
	}

	if(minute < 10)// if minute is 1 degit number, degit 0 is added
	{
		led_buffer[2] = 0;
		led_buffer[3] = minute;
	}
	if(minute >= 10)
	{
		led_buffer[2] = minute/10;
		led_buffer[3] = minute%10;
	}
}

