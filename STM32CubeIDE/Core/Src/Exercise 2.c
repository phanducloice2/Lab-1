/*
 * Exercise 2.c
 *
 *  Created on: Sep 20, 2024
 *      Author: Phan Duc Loi
 */
#include "Exercise 2.h"
int count=5;
int status=0;
void init_exercise2(){}
void led_red(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}
void led_yellow(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}
void led_green(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
}
void run_exercise2(){
	if (count!=0&&status==0){led_red();count--;}
	if (count!=0&&status==1){led_green();count--;}
	if (count!=0&&status==2){led_yellow();count--;}
	if (count==0&&status==0){status=1;count=3;}
	if (count==0&&status==1){status=2;count=2;}
	if (count==0&&status==2){status=0;count=5;}
}



