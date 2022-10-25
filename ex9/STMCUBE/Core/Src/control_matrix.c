/*
 * control_matrix.c
 *
 *  Created on: Oct 12, 2022
 *      Author: Welcome
 */
#include "control_matrix.h"

int index_led_matrix = 0;
uint8_t matrix_buffer [8] = {0x18,0x24,0x42,0x42,0x7e,0x42,0x42,0x42};

void displayLedMatrix(int row, int col){
	int shift = 1;// mask used to get bit by bit of buffer

	if(row == 0){// enable row 0
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);

		// get bit by bit of buffer, then assign to ENM-PIN to control COL-PIN
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 1){// enable row 1
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);

		// get bit by bit of buffer, then assign to ENM-PIN to control COL-PIN
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 2){// enable row 2
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);

		// get bit by bit of buffer, then assign to ENM-PIN to control COL-PIN
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 3){// enable row 3
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);

		// get bit by bit of buffer, then assign to ENM-PIN to control COL-PIN
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 4){// enable row 4
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);

		// get bit by bit of buffer, then assign to ENM-PIN to control COL-PIN
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 5){// enable row 5
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);

		// get bit by bit of buffer, then assign to ENM-PIN to control COL-PIN
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 6){// enable row 6
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);

		// get bit by bit of buffer, then assign to ENM-PIN to control COL-PIN
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

	if(row == 7){// enable row 7
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_RESET);

		// get bit by bit of buffer, then assign to ENM-PIN to control COL-PIN
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin,  1 - (col & shift));
	}

}


int index_led_matrix = 0;
uint8_t matrix_buffer [8] = {0x18,0x24,0x42,0x42,0x7e,0x42,0x42,0x42};

void updateLedMatrix(int index){
	switch(index){
	case 0:// display row 0 of led matrix
		displayLedMatrix(0, matrix_buffer[0]);
		break;
	case 1:// display row 1 of led matrix
		displayLedMatrix(1, matrix_buffer[1]);
		break;
	case 2:// display row 2 of led matrix
		displayLedMatrix(2, matrix_buffer[2]);
		break;
	case 3:// display row 3 of led matrix
		displayLedMatrix(3, matrix_buffer[3]);
		break;
	case 4:// display row 4 of led matrix
		displayLedMatrix(4, matrix_buffer[4]);
		break;
	case 5:// display row 5 of led matrix
		displayLedMatrix(5, matrix_buffer[5]);
		break;
	case 6:// display row 6 of led matrix
		displayLedMatrix(6, matrix_buffer[6]);
		break;
	case 7:// display row 7 of led matrix
		displayLedMatrix(7, matrix_buffer[7]);
		break;
	default:
		break;
	}
}

