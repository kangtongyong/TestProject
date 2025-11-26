#include "main.h"

/*
	파스칼의 삼각형을 출력하는 프로그램을 함수로 작성
	출력할 행의 수는 입력을 받아 처리한다.
*/


//	입력할 행의 수를 입력받는 함수
void file07(void)
{
	int inputnum = 0;			//	사용자가 입력한 행의 수를 저장할 변수

	printf("파스칼의 삼각형 출력 프로그램\n\n");

	printf("출력할 행의 수 입력후 Enter\n");
	printf("행의 수:");
	scanf("%d", &inputnum);		//	사용자로부터 행 수 입력 받기

	printtriangle(inputnum);	//	입력받은 행 수를 이용하여 삼각형 출력

	return;
}


//	행의 수만큼 배열에 수를 추가하고 출력하는 함수
void printtriangle(int repeatnum)
{
	int trianglearr[FILE07_ARRAY_SIZE][FILE07_ARRAY_SIZE];	//	삼각형 값을 저장할 2차원 배열

	//	삼각형 숫자 할당
	for (int i = 0; i < repeatnum; i++)		//	행 반복
	{
		for (int j = 0; j <= i; j++)		//	각 행의 열 반복
		{
			//	j의 첫번째 출력과 마지막 출력은 1로 설정
			if (j == 0 || j == i)
			{
				trianglearr[i][j] = 1;		//	맨 앞과 맨 끝 값은 1
			}
			else
			{
				trianglearr[i][j] =					//	현재 i행, j열 값 계산
					trianglearr[i - 1][j - 1] +		//	위 행 왼쪽 값
					trianglearr[i - 1][j];			//	위 행 같은 열 값
			}
		}
	}

	//	삼각형 출력
	backslashN();	//	출력 전 줄바꿈
	for (int i = 0; i < repeatnum; i++)		//	행 반복
	{
		for (int j = 0; j <= i; j++)		//	각 행 열 반복
		{
			printf("%10d  ", trianglearr[i][j]);	//	10칸 간격으로 숫자 출력
		}
		backslashN();	//	행 출력 후 줄바꿈
	}

	return;
}
