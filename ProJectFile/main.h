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
#define FILE06_ARRAY_SIZE 3	//	배열 사이즈

extern int a[FILE06_ARRAY_SIZE][FILE06_ARRAY_SIZE];	//	전역 선언
extern int b[FILE06_ARRAY_SIZE][FILE06_ARRAY_SIZE];	//	전역 선언

void file06(void);
void matrixA(int A[][FILE06_ARRAY_SIZE]);
void matrixB(int B[][FILE06_ARRAY_SIZE]);

void addAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE]);
void subtractionAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE]);
void multiplyAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE]);


//	File07.c 함수 선언
#define FILE07_ARRAY_SIZE 128	//	배열 사이즈

void file07(void);
void printtriangle(int repeatnum);


//	File08.c 함수 선언
void file08(void);
float normalkg(float CM);
void bodymass(float CM, float KG);
void Obesity(float KG, float Normal_KG_Result);

//	File22.c 함수 선언
#define FILE22_ARRAY_SIZE 20

void file22(void);
void reverse_han(const char* s1, int c1);
void remove_blank(const char* s2, int c2);