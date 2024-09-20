/*
 * Exercise 6.c
 *
 *  Created on: Sep 20, 2024
 *      Author: Phan Duc Loi
 */
#include "Exercise 678910.h"
#include "main.h"
int count=0;
int gio=0;
int phut=0;
int giay=0;
void init_exercise678910(){}
void clearAllClock(){
	HAL_GPIO_WritePin(pa4_GPIO_Port, pa4_Pin, RESET);
	HAL_GPIO_WritePin(pa5_GPIO_Port, pa5_Pin, RESET);
	HAL_GPIO_WritePin(pa6_GPIO_Port, pa6_Pin, RESET);
	HAL_GPIO_WritePin(pa7_GPIO_Port, pa7_Pin, RESET);
	HAL_GPIO_WritePin(pa8_GPIO_Port, pa8_Pin, RESET);
	HAL_GPIO_WritePin(pa9_GPIO_Port, pa9_Pin, RESET);
	HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);
	HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);
	HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);
	HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);
	HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);
	HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
}
void setNumberOnClock(int so){
	if (so==0) {
		HAL_GPIO_WritePin(pa4_GPIO_Port, pa4_Pin, SET);
	}
	if (so==1){
		HAL_GPIO_WritePin(pa5_GPIO_Port, pa5_Pin, SET);

	}
	if (so==2){
		HAL_GPIO_WritePin(pa6_GPIO_Port, pa6_Pin, SET);

	}
	if (so==3){

		HAL_GPIO_WritePin(pa7_GPIO_Port, pa7_Pin, SET);

	}
	if (so==4){

		HAL_GPIO_WritePin(pa8_GPIO_Port, pa8_Pin, SET);

	}
	if (so==5){

		HAL_GPIO_WritePin(pa9_GPIO_Port, pa9_Pin, SET);

	}
	if (so==6){

		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, SET);

	}
	if (so==7){

			HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, SET);

	}
	if (so==8){

			HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, SET);

	}
	if (so==9){

			HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, SET);

	}
	if (so==10){

			HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, SET);

	}
	if (so==11){

			HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, SET);
	}
}
void clearNumberOnClock(int so){
	if (so==0) {
		HAL_GPIO_WritePin(pa4_GPIO_Port, pa4_Pin, RESET);
	}
	if (so==1){
		HAL_GPIO_WritePin(pa5_GPIO_Port, pa5_Pin, RESET);

	}
	if (so==2){
		HAL_GPIO_WritePin(pa6_GPIO_Port, pa6_Pin, RESET);

	}
	if (so==3){

		HAL_GPIO_WritePin(pa7_GPIO_Port, pa7_Pin, RESET);

	}
	if (so==4){

		HAL_GPIO_WritePin(pa8_GPIO_Port, pa8_Pin, RESET);

	}
	if (so==5){

		HAL_GPIO_WritePin(pa9_GPIO_Port, pa9_Pin, RESET);

	}
	if (so==6){

		HAL_GPIO_WritePin(pa10_GPIO_Port, pa10_Pin, RESET);

	}
	if (so==7){

			HAL_GPIO_WritePin(pa11_GPIO_Port, pa11_Pin, RESET);

	}
	if (so==8){

			HAL_GPIO_WritePin(pa12_GPIO_Port, pa12_Pin, RESET);

	}
	if (so==9){

			HAL_GPIO_WritePin(pa13_GPIO_Port, pa13_Pin, RESET);

	}
	if (so==10){

			HAL_GPIO_WritePin(pa14_GPIO_Port, pa14_Pin, RESET);

	}
	if (so==11){

			HAL_GPIO_WritePin(pa15_GPIO_Port, pa15_Pin, RESET);
	}
}


void run_exercise6(){
	clearAllClock();
	if (count<=11) {setNumberOnClock(count);count++;}
	if (count>11) count=0;

}
void run_exercise7(){clearAllClock();}
void run_exercise8(){setNumberOnClock(count);}
void run_exercise9(){clearNumberOnClock(count);}
void run_exercise10(){
	//clearAllClock();
	if (giay>=60) {giay=0;phut++;}
	if (phut>=60) {phut=0;gio++;}
	if (gio>=24) {gio=0;}
	setNumberOnClock(gio/2);
	setNumberOnClock(phut/5);
	setNumberOnClock(giay/5);
	giay++;
}

