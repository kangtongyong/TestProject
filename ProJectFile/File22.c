#include "main.h"

/*
	입력된 한글 문자열에 대해 다음을 처리하는 함수와 프로그램
	EUC-KR 환경
*/


void file22(void)
{
	char st1[FILE22_ARRAY_SIZE];			//	첫 번째 문자열 저장 배열 (size 20)
	char st2[FILE22_ARRAY_SIZE];			//	두 번째 문자열 저장 배열 (size 20)

	char* s1 = st1;							//	문자열 포인터 s1에 st1 주소 할당
	char* s2 = st2;							//	문자열 포인터 s2에 st2 주소 할당

	printf("st1=");							//	첫 번째 문자열 입력 안내
	fgets(s1, FILE22_ARRAY_SIZE, stdin);	//	첫 번째 문자열 입력

	int count1 = strlen(s1);				//	문자열 길이 계산
	if (s1[count1 - 1] == '\n')				//	개행문자 제거
	{
		s1[count1 - 1] = '\0';
		count1--;							//	문자 길이 감소
	}

	printf("st2=");							//	두 번째 문자열 입력 안내
	fgets(st2, FILE22_ARRAY_SIZE, stdin);	//	두 번째 문자열 입력

	int count2 = strlen(s2);				//	문자열 길이 계산
	if (s2[count2 - 1] == '\n')				//	개행문자 제거
	{
		s2[count2 - 1] = '\0';
		count2--;							//	문자 길이 감소
	}

	reverse_han(s1, count1);				//	첫 번째 문자열 역순 출력
	remove_blank(s2, count2);				//	두 번째 문자열 공백 제거 후 출력

	return;
}


//	문자열 역순 변환 함수
void reverse_han(const char* s1, int c1)
{
	printf("역변환:");						//	역순 출력 안내

	for (int i = c1 - 2; i >= 0; i -= 2)	//	EUC-KR 2바이트 단위로 역순 반복
	{
		if (s1[i] == '\0')					//	널문자 건너뛰기
		{
			continue;
		}
		if (s1[i] == ' ')					//	공백 건너뛰기
		{
			continue;
		}
		printf("%c", s1[i]);				//	첫 번째 바이트 출력
		printf("%c", s1[i + 1]);			//	두 번째 바이트 출력
	}
	backslashN();							//	줄바꿈

	printf("원본:%s\n", s1);				//	원본 문자열 출력

	return;
}


//	문자열의 공백 제거 함수
void remove_blank(const char* s2, int c2)
{
	printf("공백제거:");				//	공백 제거 안내

	for (int i = 0; i < c2; i++)		//	문자열 순차 반복
	{
		if (s2[i] == '\0')				//	널문자이면 종료
		{
			break;
		}

		if (s2[i] == ' ')				//	공백이면 건너뛰기
		{
			continue;
		}

		printf("%c", s2[i]);			//	공백이 아닌 문자 출력
	}
	backslashN();						//	줄바꿈

	printf("원본:%s\n", s2);			//	원본 문자열 출력

	return;
}
