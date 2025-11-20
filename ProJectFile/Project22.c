#include "main.h"

/*
	과목, 시간, 강의실을 입력받아 해당학기의 시간표를
	화면과 텍스트 파일로 출력하는 프로그램

	과목은 한글 5자, 강의실은 영문 5자리 까지 입력이 가능하도록 한다.
	과목과 강의실은 구조체로 정의하여 사용한다.
	강의는 월요일부터 금요일까지, 1교시에서 8교시까지만 있다고 가정한다,
*/


Year_Seesion ys;								//	강의정보 저장 구조체
INFO_CLASS ic[WEEK_COUNT][CLASS_PERIOD];	//	수강 등록 정보 저장		

//	extern 구조체 ys 헤더에서 선언
void project22(void)
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

		backslashN();
		backslashN();

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
	return;
}


//	시간표 제목 입력 및 변경 함수
void case1(void)
{


	printf("1. 시간표 제목 입력 및 변경\n");
	backslashN();

	printf("년도<4자리>를 입력하고 Enter>");
	scanf("%4d", &ys.year);
	printf("학기<1자리>를 입력하고 Enter>");
	scanf("%1d", &ys.session);
	backslashN();
	backslashN();

	printf("입력 및 변경이 완료되었습니다.\n");
	backslashN();
	backslashN();
	backslashN();

	return;
}


//	강의시간, 과목 및 강의실 입력 및 변경 힘수
void case2(void)
{
	while (1)
	{
		int classanswer = 0;	//	요일과 시간 답변 저장 변수

		int addtime = 0;
		int whileanswer = 2;	//	계속 입력 답변 저장 변수

		printf("2.강의시간 및 강의실 입력 및 변경\n");
		backslashN();

		printf("요일구분: 월<1>, 화<2>, 수<3>, 목<4>, 금<5>\n");
		printf("시간구분 : 1~8<교시>\n");

		printf("요일과 시간<예로 수요일 2교시는 32>을 입력하고 Enter>");
		scanf("%d", &classanswer);

		int daysession = classanswer / 10;
		int classtime = classanswer % 10;

		printf("과목명<5자리>을 입력하고 Enter>");
		scanf("%s", ic[daysession - 1][classanswer - 1].class_name);
		printf("강의실<5자일>을 입력하고 Enter>");
		scanf("%s", ic[daysession - 1][classanswer - 1].room_code);

		printf("연속 몇시간인지를 입력하고 Enter>");
		scanf("%d", &addtime);


		while ((whileanswer == 1 || whileanswer == 0) != 0)
		{
			printf("계속입력은 1을, 종료는 0을 입력>");
			scanf("%d", &whileanswer);
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
	printf("                          %4d 년 %1d 학기\n", ys.year, ys.session);
	backslashN();

	printf("=======================================================================\n");
	printf("시간   월          화          수          목          금\n");
	printf("=======================================================================\n");

	for (int i = 0; i < ; i++)
	{
		for (int j = 0; j < ; j++)
		{
			if (j == 0)
			{
				printf("%d교시   %-4s", i + 1, ic[i][j].class_name);
			}
			else
			{
				printf("          %-4s", i + 1, ic[i][j].class_name);
			}
		}
	}
}


//	완성된 시간표 파일 출력
void case4(void)
{
	printf("4. 시간표 파일 출력\n");
	backslashN();

	FILE* fp;
	fp = fopen("time.txt", "w");



	fclose(fp);
	printf("파일출력이 끝났습니다.\n");
	printf("탐색기로 확인해보시기 바랍니다.\n");
	backslashN();
	return;
}


//	종료 코드 함수
void case5(void)
{
	printf("프로그램을 종료합니다.\n");
	return;
}