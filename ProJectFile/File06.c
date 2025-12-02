/*
	파일명 : 프로그래밍 13주차 과제 06번 문제
	내  용 : 두 개 행렬의 합, 차, 곱을 구하는 프로그램

	작성자 : 양현인

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define FILE06_ARRAY_SIZE 3	//	행렬 크기

extern int a[FILE06_ARRAY_SIZE][FILE06_ARRAY_SIZE];		//	전역 행렬 A
extern int b[FILE06_ARRAY_SIZE][FILE06_ARRAY_SIZE];		//	전역 행렬 B

void file06(void);										//	행렬 연산 실행 함수
void matrixA(int A[][FILE06_ARRAY_SIZE]);				//	행렬 A 출력
void matrixB(int B[][FILE06_ARRAY_SIZE]);				//	행렬 B 출력
void addAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE]);				//	A+B 연산
void subtractionAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE]);		//	A-B 연산
void multiplyAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE]);		//	A*B 연산

int main(void)
{
	file06();
	return 0;
}

void file06(void)
{
	//	기본 2차원 배열 1
	int a[FILE06_ARRAY_SIZE][FILE06_ARRAY_SIZE] =	//	배열 사이즈 3
	{
		{1,2,3},	//	1행 초기값
		{4,5,6},	//	2행 초기값
		{7,8,9}		//	3행 초기값
	};

	//	기본 2차원 배열 2
	int b[FILE06_ARRAY_SIZE][FILE06_ARRAY_SIZE] =
	{
		{3,6,9},	//	1행 초기값
		{2,5,8},	//	2행 초기값
		{1,4,7}		//	3행 초기값
	};

	matrixA(a);				//	배열 A 출력
	matrixB(b);				//	배열 B 출력
	addAB(a, b);			//	A + B 계산 후 출력
	subtractionAB(a, b);	//	A - B 계산 후 출력
	multiplyAB(a, b);		//	A * B 계산 후 출력

	return;
}


//	기본 2차원 배열 A 출력 함수
void matrixA(int A[][FILE06_ARRAY_SIZE])
{
	printf("matrix A:\n");

	for (int i = 0; i < FILE06_ARRAY_SIZE; i++)		//	행 반복
	{
		for (int j = 0; j < FILE06_ARRAY_SIZE; j++)	//	열 반복
		{
			printf("  %2d", A[i][j]);	//	각 원소 출력
		}
		printf("\n");	//	행 끝마다 줄바꿈
	}
	printf("\n");		//	배열 출력 끝난 후 한 줄 추가

	return;
}


//	기본 2차원 배열 B 출력 함수
void matrixB(int B[][FILE06_ARRAY_SIZE])
{
	printf("matrix B:\n");

	for (int i = 0; i < FILE06_ARRAY_SIZE; i++)		//	행 반복
	{
		for (int j = 0; j < FILE06_ARRAY_SIZE; j++)	//	열 반복
		{
			printf("  %2d", B[i][j]);	//	각 원소 출력
		}
		printf("\n");	//	행 끝마다 줄바꿈
	}
	printf("\n");		//	배열 출력 끝난 후 한 줄 추가

	return;
}


//	배열 + 배열 함수
void addAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE])
{
	printf("matrix A + matrix B:\n");

	for (int i = 0; i < FILE06_ARRAY_SIZE; i++)		//	행 반복
	{
		for (int j = 0; j < FILE06_ARRAY_SIZE; j++)	//	열 반복
		{
			printf("  %2d", A[i][j] + B[i][j]);	//	각 원소 합 출력
		}
		printf("\n");	//	행 끝마다 줄바꿈
	}
	printf("\n");		//	합 계산 후 한 줄 추가

	return;
}


//	배열 - 배열 함수
void subtractionAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE])
{
	printf("matrix A - matrix B:\n");

	for (int i = 0; i < FILE06_ARRAY_SIZE; i++)		//	행 반복
	{
		for (int j = 0; j < FILE06_ARRAY_SIZE; j++)	//	열 반복
		{
			printf("  %2d", A[i][j] - B[i][j]);	//	각 원소 차 출력
		}
		printf("\n");	//	행 끝마다 줄바꿈
	}
	printf("\n");		//	차 계산 후 한 줄 추가

	return;
}


//	배열 * 배열 함수
void multiplyAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE])
{
	printf("matrix A * matrix B:\n");

	for (int i = 0; i < FILE06_ARRAY_SIZE; i++)		//	행 반복
	{
		for (int j = 0; j < FILE06_ARRAY_SIZE; j++)	//	열 반복
		{
			printf("  %2d", A[i][j] * B[i][j]);	//	각 원소 곱 출력
		}
		printf("\n");	//	행 끝마다 줄바꿈
	}
	printf("\n");		//	합 계산 후 한 줄 추가

	return;
}
