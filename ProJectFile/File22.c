#include "main.h"


void file22(void)
{
	while (1)
	{

		int answer = 0;

		printf("시간표 처리 프로그램\n");
		backslashN();

		printf("1. 시간표 제목 입력 및 변경\n");
		printf("2. 강의시간 및 강의실 입력 및 변경\n");
		printf("3. 시간표 화면 출력\n");
		printf("4. 시간표 파일 출력\n");
		printf("5. 종료\n");

		printf("해당 번호를 입력하고 Enter>");
		scanf("%d", &answer);

		if (answer == 1)
		{

			continue;
		}
		if (answer == 2)
		{
			continue;
		}
		if (answer == 3)
		{
			continue;
		}
		if (answer == 4)
		{
			continue;
		}
		if (answer == 5)
		{
			break;
		}
		else
		{
			printf("%d는 해당하지 않는 번호입니다.\n\n", answer);
			continue;
		}

	}
}

//	시간표 제목 입력 및 변경 함수
void case1(void)
{

}

//	강의시간, 과목 및 강의실 입력 및 변경 힘수
void case2(void)
{
	
}

//	현재까지 입력된 시간표 화면 출력
void case3(void)
{
	
}

//	완성된 시간표 파일 출력
void case4(void)
{

}	