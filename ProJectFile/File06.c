#include "main.h"

/*
	두 개 행렬의 합, 차, 곱을 구하는 프로그램
*/

void file06(void)
{
	//	기본 2차원 배열 1
	int a[ARRAY_SIZE][ARRAY_SIZE] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	//	기본 2차원 배열 2
	int b[ARRAY_SIZE][ARRAY_SIZE] =
	{
		{3,6,9},
		{2,5,8},
		{1,4,7}
	};
	
	matrixA(a);
	matrixB(b);
	addAB(a, b);
	subtractionAB(a, b);
	multiplyAB(a, b);
	
	return;
}


//	기본 2차원 배열 A 출력 함수
void matrixA(int A[][ARRAY_SIZE])
{
	printf("matrix A:\n");
	
	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = 0; j < ARRAY_SIZE; j++)
		{
			printf("  %2d", A[i][j]);
		}
		backslashN();
	}
	backslashN();
	
	return;
}


//	기본 2차원 배열 B 출력 함수
void matrixB(int B[][ARRAY_SIZE])
{
	printf("matrix B:\n");
	
	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = 0; j < ARRAY_SIZE; j++)
		{
			printf("  %2d", B[i][j]);
		}
		backslashN();
	}
	backslashN();
	
	return;
}


//	배열 + 배열 함수
void addAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE])
{
	printf("matrix A + matrix B:\n");
	
	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = 0; j < ARRAY_SIZE; j++)
		{
			printf("  %2d", A[i][j] + B[i][j]);
		}
		backslashN();
	}
	backslashN();
	
	return;
}


//	배열 - 배열 함수
void subtractionAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE])
{
	printf("matrix A - matrix B:\n");
	
	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = 0; j < ARRAY_SIZE; j++)
		{
			printf("  %2d", A[i][j] - B[i][j]);
		}
		backslashN();
	}
	backslashN();
	
	return;
}


//	배열 * 배열 함수
void multiplyAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE])
{
	printf("matrix A * matrix B:\n");
	
	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = 0; j < ARRAY_SIZE; j++)
		{
			printf("  %2d", A[i][j] * B[i][j]);
		}
		backslashN();
	}
	backslashN();
	
	return;
}