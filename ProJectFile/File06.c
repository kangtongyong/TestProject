#include "main.h"

/*
	


*/


void file06(void)
{
	int a[ARRAY_SIZE][ARRAY_SIZE] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

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