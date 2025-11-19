#include "main.h"

/*
	파스칼의 삼각형을 출력하는 프로그램을 함수로 작성
	출력할 행의 수는 입력을 받아 처리한다.
*/



void file07(void)
{
	int inputnum = 0;

	printf("파스칼의 삼각형 출력 프로그램\n\n");

	printf("출력할 행의 수 입력후 Enter\n");
	printf("행의 수:");
	scanf("%d", &inputnum);


	printtriangle(inputnum);

	return;
}


void printtriangle(int repeatnum)
{
	int i, j;
	int linecount = 0;

	

	for (i = 0; i < repeatnum; i++)



	for (i = 0; i < repeatnum; i++)
	{
		linecount++;
		for (j = 0; j < linecount; j++)
		{
			printf("%d  ", linecount + j);
		}
		backslashN();
	}

	return;
}