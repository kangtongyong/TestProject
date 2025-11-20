#include "main.h"

/*
	과목, 시간, 강의실을 입력받아 해당학기의 시간표를
	화면과 텍스트 파일로 출력하는 프로그램
	
	과목은 한글 5자, 강으ㅢ실은 영문 5자리 까지 입력이 가능하도록 한다.
	과목과 강의실은 구조체로 정의하여 사용한다.
	강의는 월요일부터 금요일까지, 1교시에서 8교시까지만 있다고 가정한다,
*/


void file22(void)
{
	while (1)
	{
		extern Year_Seesion ys;
		
		
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
			case1();
			continue;
		}
		if (answer == 2)
		{
			case2();
			continue;
		}
		if (answer == 3)
		{
			case3();
			continue;
		}
		if (answer == 4)
		{
			case4();
			continue;
		}
		if (answer == 5)
		{
			case5();
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
	
	
	printf("1. 시간표 제목 입력 및 변경\n");
	backslashN();
	
	printf("년도<4자리>를 입력하고 Enter>");
	scanf("%4d", ys.year);
	printf("학기<1자리>를 입력하고 Enter>");
	scanf("%1d", ys.session);
	
	backslashN();
	printf("Enter를 누르면 메인 메뉴로...");
	
	return;
}	


//	강의시간, 과목 및 강의실 입력 및 변경 힘수
void case2(void)
{
	while (1)
	{
		int whileanswer = 2;
		
		printf("2.강의시간 및 강의실 입력 및 변경\n");
		backslashN();

		printf("요일구분: 월<a>, 화<h>, 수<c>, 목<d>, 금<e>\n");
		printf("시간구분 : 1~8<교시>\n");
		
		printf("요일과 시간<예로 수요일 2교시는 d2>을 입력하고 Enter>");
		
		printf("과목명<5자리>을 입력하고 Enter>");
		
		printf("강의실<5자일>을 입력하고 Enter>");
		
		printf("연속 몇시간인지를 입력하고 Enter>");
		
		
		
		while ((whileanswer == 1 || whileanswer == 0) != 0)
		{
			printf("계속입력은 1을, 종료는 0을 입력>");
			
			if ((whileanswer == 1 || whileanswer == 0) != 0)
			{
				continue;
			}
		}
		
		if (whileanswer == 1)
		{
			continue;
		}
		else if (whileanswer == 0)
		{
			break;
		}
	}
}


//	현재까지 입력된 시간표 화면 출력
void case3(void)
{
	printf("3. 시간표 화면 출력\n");
	backslashN();
	printf("                          %4d 년 %1d 학기\n");
	backslashN();
	
	printf("=======================================================================\n");
	printf("시간   월         화            수           목          금\n");
	printf("=======================================================================\n");
	
	for (int i = 0; i < WEEK_COUNT; i++)
	{
		printf("%d교시 ");
	}
}


//	완성된 시간표 파일 출력
void case4(void)
{
	FILE* fp;
	fp = fopen("time.txt", "w");
	
	

	fclose(fp);
	
	return;
}


//	종료 코드 함수
void case5(void)
{
	printf("프로그램을 종료합니다.\n");
	return;
}