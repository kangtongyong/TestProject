// 대충 짠 헤더

//#ifndef <stdio.h>
//#define <stdio.h>
//#include <stdio.h>
//#endif;



#pragma once


// 귀찮아서 선언
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


// exefuncsion.c 함수 선언
void exefuncsion(void);



// File04.c 함수 선언
void file04(void);
int maxresult(int m, int n);
void leastresult(int M, int N, int RESULT);


// File06.c 구조체 및 함수 선언
#define ARRAY_SIZE 3

int A[ARRAY_SIZE][ARRAY_SIZE] =
{
	{1,2,3},
	{4,5,6},
	{7,8,9}
};
int B[ARRAY_SIZE][ARRAY_SIZE] =
{
	{3,6,9},
	{2,5,8},
	{1,4,7}
};

void file06(void);
void matrixA(int A[][ARRAY_SIZE]);
void matrixB(int B[][ARRAY_SIZE]);
void addAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE]);
void subtractionAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE]);
void multiplyAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE]);