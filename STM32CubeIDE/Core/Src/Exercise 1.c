/*
 * Exercise 1.c
 *
 *  Created on: Sep 20, 2024
 *      Author: Phan Duc Loi
 */
#include "Exercise 1.h"
int count=2;
int status=0;
void init_exercise1(){}
void led_red(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
}
void led_yellow(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
}
void run_exercise1(){
	if (count!=0&&status==0) {led_red(); count--;}
	if (count!=0&&status==1) {led_yellow();count--;}
	if (count==0) {status=!status; count=2;}
}
