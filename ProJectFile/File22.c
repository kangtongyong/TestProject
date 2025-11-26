#define _CRT_SECURE_NO_WARNINGS
#include "main.h"

/*
	입력된 한글 문자열에 대해 다음을 처리하는 함수와 프로그램
*/

void file22(void)
{
	char st1[FILE22_ARRAY_SIZE];
	char st2[FILE22_ARRAY_SIZE];

	char* s1 = st1;
	char* s2 = st2;

	printf("st1=");
	fgets(s1, 20, stdin);
	printf("  st2=");
	fgets(st2, 20, stdin);


	int count1 = strlen(s1);
	int count2 = strlen(s2);

	for (int i = 0; i < count1; i++)
	{
		if (s1[i] == '\n')
		{
			s1[i] = s1[i+1];
			s2[i + 1] = ' ';
		}	
	}

	for (int i = 0; i < count2; i++)
	{
		if (s2[i] == '\n')
		{
			s2[i] = s2[i+1];
			s2[i + 1] = ' ';
		}
	}

	reserse_han(s1, count1);
	remove_blank(s2, count2);

	return;
}


//	문자열 역순 변환 함수
void reserse_han(const char* s1, int c1)
{
	printf("역변환:");

	for (int i = c1 - 3; i >= 0; i -= 3)
	{
		if (s1[i] == '\0')
		{
			continue;
		}
		if (s1[i] == ' ')
		{
			continue;
		}
		printf("%c", s1[i]);
		printf("%c", s1[i + 1]);
		printf("%c", s1[i + 2]);

	}
	backslashN();

	printf("원본:%s\n", s1);

	return;
}


//	문자열의 공백 제거 함수
void remove_blank(const char* s2, int c2)
{
	printf("공백제거:");

	for (int i = 0; i < c2; i++)
	{
		if (s2[i] == '\0')
		{
			break;
		}

		if (s2[i] == ' ')
		{
			continue;
		}

		printf("%c", s2[i]);
	}
	backslashN();
	
	printf("원본:%s\n", s2);
	
	return;
}