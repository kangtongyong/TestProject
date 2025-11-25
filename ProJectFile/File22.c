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
	scanf(" %s  ", s1);
	printf("st2=");
	fgets(s2, " %s", stdin);

	reserse_han(s1);
	remove_blank(s2);

	return;
}


//	문자열 역순 변환 함수
void reserse_han(char* s1)
{
	printf("역변환:");

	for (int i = -1; i < -15; i--)
	{
		if ((s1[i] == "\n" || s1[i] == NULL) == 1)
		{
			continue;
		}
		printf('%s', s1[i]);
	}
	backslashN();

	printf("원본:%s", s1);
}


//	문자열의 공백 제거 함수
void remove_blank(char* s2)
{
	printf("공백제거:");

	for (int i = 0; i < FILE22_ARRAY_SIZE; i++)
	{
		if (s2[i] == " ")
		{
			continue;
		}
		printf("")
	}
	backslashN();

	printf("원본:%s", s2);
}