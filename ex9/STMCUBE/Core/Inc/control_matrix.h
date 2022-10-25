/*
 * control_matrix.h
 *
 *  Created on: Oct 12, 2022
 *      Author: Welcome
 */

#ifndef INC_CONTROL_MATRIX_H_
#define INC_CONTROL_MATRIX_H_

#include "main.h"

#define  MAX_LED_MATRIX		8
extern int index_led_matrix;
extern uint8_t matrix_buffer [];

void updateLedMatrix(int index);
void displayLedMatrix(int row, int col);

#endif /* INC_CONTROL_MATRIX_H_ */
