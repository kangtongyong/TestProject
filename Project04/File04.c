#include "main.h"

/*

	임의의 두 정수를 입력받아 유클리드 호제법을
	이용하여, 최대 공약수와 최소 공배수를 출력하는
	프로그램

	입력될 두 숫자 x, y 라 하고 x < y 임을 가정

*/




//	2개의 숫자를 입력받아 최대, 최소 공배수를 구하는 함수에 전달하는 함수
void file04(void)
{
	printf("04번 문제\n\n");


	//	첫번째 숫자
	int x = 0;
	//	두번째 숫자
	int y = 0;
	//	최대 공약수 저장 변수
	int result = 0;

	printf("최소공배수와 최대공약수\n");

	while (1)
	{
		printf("\n두개의 숫자를 입력합니다.\n");

		printf("첫번째 숫자를 입력하고 Enter>");
		scanf("%d", &x);

		printf("두번째 숫자를 입력하고 Enter>");
		scanf("%d", &y);

		//	조건인 x < y 체크
		if (x >= y)
		{
			printf("\nx는 y미만 이여아 함.\n");
			continue;
		}

		else
		{
			break;
		}
	}

	printf("\n");

	result = maxresult(x, y);
	leastresult(x, y, result);

	return;
}


//	최대 공약수 구하는 함수
int maxresult(int M, int N)
{
	int maxnum = 0;
	int m = M;
	int n = N;

	while (1)
	{
		maxnum = n % m;

		if (maxnum == 0)
		{
			break;
		}

		n = m;
		m = maxnum;
	}

	printf("최대공약수 %d\n", m);

	return m;
}


//	최소 공배수 구하는 함순
void leastresult(int M, int N, int RESULT)
{
	int leastnum = 0;

	leastnum = RESULT * (N / RESULT) * (M / RESULT);

	printf("최대공약수 %d\n", leastnum);
}