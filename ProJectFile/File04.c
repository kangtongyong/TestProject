/*
	파일명 : 프로그래밍 13주차 과제 04번 문제
	내  용 : 임의의 두 정수를 입력받아 유클리드 호제법을
			 이용하여, 최대 공약수와 최소 공배수를 출력하는 프로그램
			 입력될 두 숫자 x, y 라 하고 x < y 임을 가정
	작성자 : 양현인

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void file04(void);								//	최대공약수/최소공배수 실행 함수
int maxresult(int m, int n);					//	최대공약수 계산
void leastresult(int M, int N, int RESULT);		//	최소공배수 계산

int main(void)
{
	file04();	//	테스트 27, 36
	return 0;
}

//	2개의 숫자를 입력받아 최대, 최소 공배수를 구하는 함수에 전달하는 함수
void file04(void)
{
	//	첫번째 숫자
	int x = 0;
	//	두번째 숫자
	int y = 0;
	//	최대 공약수 저장 변수
	int result = 0;
	//	두 수를 교환하기 위한 임시 변수
	int temp = 0;

	printf("최소공배수와 최대공약수\n");

	printf("\n두개의 숫자를 입력합니다.\n");

	//	첫 번째 정수 입력
	printf("첫번째 숫자를 입력하고 Enter>");
	scanf("%d", &x);

	//	두 번째 정수 입력
	printf("두번째 숫자를 입력하고 Enter>");
	scanf("%d", &y);

	//	조건인 x < y 체크 및 교환
	if (x >= y)
	{
		temp = x;	//	x 값을 임시 변수에 저장
		x = y;		//	x에 y 값 저장
		y = temp;	//	y에 원래 x 값 저장
	}

	printf("\n");	// 줄바꿈 출력

	//	최대 공약수 계산
	result = maxresult(x, y);

	//	최소 공배수 계산
	leastresult(x, y, result);

	return;
}


//	최대 공약수를 구하는 함수
int maxresult(int M, int N)
{
	int maxnum = 0; //	나머지 저장 변수
	int m = M;      //	M을 작업용 변수로 복사
	int n = N;	    //	N을 작업용 변수로 복사

	while (1)
	{
		maxnum = n % m;		//	n을 m으로 나눈 나머지 계산

		if (maxnum == 0)	//	나머지가 0이면 m이 최대 공약수
		{
			break;			//	반복 종료
		}

		n = m;		//	n에 이전 m 값 저장
		m = maxnum; //	m에 나머지 저장
	}

	printf("최대공약수 %d\n", m); // 결과 출력

	return m; // 최대공약수 반환
}


//	최소 공배수를 구하는 함수
void leastresult(int M, int N, int RESULT)
{
	int leastnum = 0; // 최소 공배수 저장 변수

	// 최소 공배수 계산 = 최대공약수 * (N / 최대공약수) * (M / 최대공약수)
	leastnum = RESULT * (N / RESULT) * (M / RESULT);

	printf("최소공배수 %d\n", leastnum); // 결과 출력
}
