/*
 * Exercise 3.c
 *
 *  Created on: Sep 20, 2024
 *      Author: Phan Duc Loi
 */
#include "Exercise 3.h"
int count=10;
void init_exercise3(){}
void led_red1(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, RESET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, SET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, SET);
}
void led_yellow1(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, SET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, RESET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, SET);
}
void led_green1(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, SET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, SET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, RESET);
}
void led_red2(){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, RESET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, SET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, SET);
}
void led_yellow2(){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, SET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, RESET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, SET);
}
void led_green2(){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, SET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, SET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, RESET);
}
void run_exercise3(){
	if (count>7){led_red1();led_green2();count--;}
	else if (count>5){led_red1();led_yellow2();count--;}
	else if (count>2){led_green1();led_red2();count--;}
	else if (count>0){led_yellow1();led_red2();count--;}
	else count=10;
}



