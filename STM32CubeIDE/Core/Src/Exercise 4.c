/*
 * Exercise 4.c
 *
 *  Created on: Sep 20, 2024
 *      Author: Phan Duc Loi
 */
#include "Exercise 4.h"
int counter=0;
void init_exercise4(){}
void display7SEG(int dem){
	if (dem==0){
	HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
	HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
	HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
	HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, SET);
	HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
	HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
	HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);}

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
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
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
			HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
			HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, SET);}
	else if (dem==5){
			HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
			HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, SET);
			HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
			HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
			HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);}
	else if (dem==6){
			HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
			HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, SET);
			HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
			HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
			HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);}
	else if (dem==7){
			HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
			HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
			HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
			HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, SET);
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, SET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
			HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, SET);}
	else if (dem==8){
			HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
			HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
			HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
			HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, RESET);
			HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);}
	else if (dem==9){
			HAL_GPIO_WritePin(pb0_GPIO_Port, pb0_Pin, RESET);
			HAL_GPIO_WritePin(pb1_GPIO_Port, pb1_Pin, RESET);
			HAL_GPIO_WritePin(pb2_GPIO_Port, pb2_Pin, RESET);
			HAL_GPIO_WritePin(pb3_GPIO_Port, pb3_Pin, RESET);
			HAL_GPIO_WritePin(pb4_GPIO_Port, pb4_Pin, RESET);
			HAL_GPIO_WritePin(pb5_GPIO_Port, pb5_Pin, SET);
			HAL_GPIO_WritePin(pb6_GPIO_Port, pb6_Pin, RESET);}
}
void run_exercise4(){
	if(counter>=10)counter=0;
	display7SEG(counter++);
}



