/*
 * software_timer.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Welcome
 */
#include "software_timer.h"

int TICK = 10;// time cycle

// timer1 is used to control clock
int timer1_flag = 0;
int timer1_counter = 0;

// timer2 is used to update led 7-SEG
int timer2_flag = 0;
int timer2_counter = 0;

// timer3 is uesd to control LED-RED and DOT-LED
int timer3_flag = 0;
int timer3_counter = 0;

// timer4 is used to update led matrix
int timer4_flag = 0;
int timer4_counter = 0;


//timer for update clockbuffer
void setTimer1(int duration){
	timer1_counter = duration/TICK;
	timer1_flag = 0;
}

//timer for update 7SEG led
void setTimer2(int duration){
	timer2_counter = duration/TICK;
	timer2_flag = 0;
}

//timer for control LED-RED and DOT-LED
void setTimer3(int duration){
	timer3_counter = duration/TICK;
	timer3_flag = 0;
}

//timer for update led matrix
void setTimer4(int duration){
	timer4_counter = duration/TICK;
	timer4_flag = 0;
}


void timerRun(){
	if(timer1_counter > 0) timer1_counter--;
	if(timer1_counter == 0){
		timer1_flag = 1;
	}

	if(timer2_counter > 0) timer2_counter--;
	if(timer2_counter == 0){
		timer2_flag = 1;
	}

	if(timer3_counter > 0) timer3_counter--;
	if(timer3_counter == 0){
		timer3_flag = 1;
	}

	if(timer4_counter > 0) timer4_counter--;
	if(timer4_counter == 0){
		timer4_flag = 1;
	}

}
