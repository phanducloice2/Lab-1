/*
 * Exercise 5.c
 *
 *  Created on: Sep 20, 2024
 *      Author: Phan Duc Loi
 */
#include "Exercise 5.h"
int count=10;
//int counter=0;
void init_exercise5(){}
void display7SEG(int dem){
	if (dem==0){
	HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
	HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
	HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
	HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
	HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
	HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
	HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, SET);}

	else if (dem==1){
		HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, SET);
		HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
		HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
		HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, SET);
		HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
		HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
		HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, SET);}
	else if (dem==2){
			HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
			HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
			HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, SET);
			HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
			HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);}
	else if (dem==3){
			HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
			HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
			HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
			HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
			HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);}
	else if (dem==4){
			HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, SET);
			HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
			HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
			HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, SET);
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
			HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);}
}
void display7SEG2(int dem){
	if (dem==0){
	HAL_GPIO_WritePin(pb7_GPIO_Port, pb7_Pin, RESET);
	HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
	HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
	HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
	HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
	HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
	HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);}

	else if (dem==1){
		HAL_GPIO_WritePin(pb7_GPIO_Port, pb7_Pin, SET);
		HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
		HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
		HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
		HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
		HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
		HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, SET);}
	else if (dem==2){
			HAL_GPIO_WritePin(pb7_GPIO_Port, pb7_Pin, RESET);
			HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
			HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, SET);
			HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
			HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, RESET);
			HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
			HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);}
	else if (dem==3){
			HAL_GPIO_WritePin(pb7_GPIO_Port, pb7_Pin, RESET);
			HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
			HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
			HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, RESET);
			HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
			HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, SET);
			HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);}
	else if (dem==4){
			HAL_GPIO_WritePin(pb7_GPIO_Port, pb7_Pin, SET);
			HAL_GPIO_WritePin(pb8_GPIO_Port, pb8_Pin, RESET);
			HAL_GPIO_WritePin(pb9_GPIO_Port, pb9_Pin, RESET);
			HAL_GPIO_WritePin(pb10_GPIO_Port, pb10_Pin, SET);
			HAL_GPIO_WritePin(pb11_GPIO_Port, pb11_Pin, SET);
			HAL_GPIO_WritePin(pb12_GPIO_Port, pb12_Pin, RESET);
			HAL_GPIO_WritePin(pb13_GPIO_Port, pb13_Pin, RESET);}
}

void led_red1(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, SET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, RESET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, RESET);
}
void led_yellow1(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, RESET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, SET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, RESET);
}
void led_green1(){
	HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, RESET);
	HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, RESET);
	HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, SET);
}
void led_red2(){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, SET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, RESET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, RESET);
}
void led_yellow2(){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, RESET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, SET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, RESET);
}
void led_green2(){
	HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, RESET);
	HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, RESET);
	HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, SET);
}
void run_exercise5(){
	if (count>7){led_red1();display7SEG(count-6);display7SEG2(count-8);led_green2();count--;}
	else if (count>5){led_red1();display7SEG(count-6);display7SEG2(count-6);led_yellow2();count--;}
	else if (count>2){led_green1();display7SEG(count-3);display7SEG2(count-1);led_red2();count--;}
	else if (count>0){led_yellow1();led_red2();display7SEG(count-1);display7SEG2(count-1);count--;}
	if (count==0) count=10;
}





