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


// File04.c 함수 선언
void file04(void);
int maxresult(int m, int n);
void leastresult(int M, int N, int RESULT);


// File06.c 구조체 및 함수 선언
typedef struct procession
{

	int A[3][3];
	int B[3][3];


}PROCESSION;
void file06(void);