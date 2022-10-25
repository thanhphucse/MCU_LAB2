/*
 * software_timer.h
 *
 *  Created on: Oct 11, 2022
 *      Author: Welcome
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int TICK;// time cycle

// timer1 is used to control clock
extern int timer1_flag;
extern int timer1_counter;

// timer2 is used to update led 7-SEG
extern int timer2_flag;
extern int timer2_counter;

// timer3 is uesd to control LED-RED and DOT-LED
extern int timer3_flag;
extern int timer3_counter;

// timer4 is used to update led matrix
extern int timer4_flag;
extern int timer4_counter;

// timer5 is used to update buffer led matrix
extern int timer5_flag;
extern int timer5_counter;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer5(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
