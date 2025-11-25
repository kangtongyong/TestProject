#include "main.h"

/*
	파스칼의 삼각형을 출력하는 프로그램을 함수로 작성
	출력할 행의 수는 입력을 받아 처리한다.
*/


//	입력할 행의 수를 입력받는 함수
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


//	행의 수만큼 배열에 수를 추가하고 출력하는 함수
void printtriangle(int repeatnum)
{
	int trianglearr[FILE07_ARRAY_SIZE][FILE07_ARRAY_SIZE];	//	= { 1, };
	
	
	// 삼각형 숫자 할당
	for (int i = 0; i < repeatnum; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			//	j의 첫번쨰 출력을 1, j 의 마지막 출력을 1로 함
			if (j == 0 || j == i)
			{
				trianglearr[i][j] = 1;		//	수정
			}
			else
			{
				trianglearr[i][j]=			// 배열 i행,j열 (현재 입력하는 행과 열)
					trianglearr[i - 1][j - 1] +		//	현재 행 - 1, 열 - 1 + 
					trianglearr[i - 1][j];			//	현재 행 - 1, 열
			}
		}
	}
	
	
	//	삼각형 출력
	backslashN();
	for (int i = 0; i < repeatnum; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%10d  ", trianglearr[i][j]);
		}
		backslashN();
	}
	
	return;
}