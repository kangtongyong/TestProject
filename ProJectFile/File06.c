#include "main.h"




void file06(void)
{
	extern int A[ARRAY_SIZE][ARRAY_SIZE];
	extern int B[ARRAY_SIZE][ARRAY_SIZE];

	matrixA(A);
	matrixB(B);

}


void matrixA(int A[][ARRAY_SIZE])
{
	printf("matrix A:\n");


	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = 0; j < ARRAY_SIZE; j++)
		{
			printf(" %2d", A[i][j]);
		}
		printf("\n");
	}

	return;
}



void matrixB(int B[][ARRAY_SIZE])
{
	printf("matrix B:\n");


	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = 0; j < ARRAY_SIZE; j++)
		{
			printf(" %2d", A[i][j]);
		}
		printf("\n");
	}

	return;

}



void addAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE])
{


}



void subtractionAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE])
{


}



void multiplyAB(int A[][ARRAY_SIZE], int B[][ARRAY_SIZE])
{


}