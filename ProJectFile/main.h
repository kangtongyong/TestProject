//	대충 짠 헤더

//#ifndef "main.h"
//#define "main.h"
//#endif;


#pragma once


//	귀찮아서 선언
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//	exefuncsion.c 함수 선언
void backslashN(void);
void exefuncsion(void);


//	File04.c 함수 선언
void file04(void);
int maxresult(int m, int n);
void leastresult(int M, int N, int RESULT);


//	File06.c 함수 선언
#define ARRAY_SIZE 3	//	배열 사이즈

extern int a[ARRAY_SIZE][ARRAY_SIZE];	//	전역 선언
extern int b[ARRAY_SIZE][ARRAY_SIZE];	//	전역 선언

void file06(void);
void matrixA(int A[][ARRAY_SIZE]);
void matrixB(int B[][ARRAY_SIZE]);

void addAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE]);
void subtractionAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE]);
void multiplyAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE]);


//	File07.c 함수 선언
#define ARRAY_DOUBLE_SIZE 256	//	배열 사이즈

void file07(void);
void printtriangle(int repeatnum);


//	File08.c 함수 선언
void file08(void);
float normalkg(float CM);
void bodymass(float CM, float KG);
void Obesity(float KG, float Normal_KG_Result);

//	File22.c 함수 선언


//	Project22.c 구조체 및 함수 선언
#define WEEK_COUNT 5		//	일의 개수
#define CLASS_ROOM_NUM 6	//	수업과 강의실 이름 최대 입력
#define CLASS_PERIOD 8		//	교시의 개수

typedef struct year_seesion	//	요일 저장 구조체
{
	int year;
	int session;
	
}Year_Seesion;


typedef struct info_class
{
	char room_code[CLASS_ROOM_NUM];		//	몇일, 몇교시~교시 강의실 코드 저장
	char class_name[CLASS_ROOM_NUM];	//	몇일, 몇교시~교시 강의 이름 저장
	
}INFO_CLASS;


void project22(void);
void case1(void);
void case2(void);
void case3(void);
void case4(void);
void case5(void);