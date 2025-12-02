#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	신장과 체중을 입력 하여, 표준 체중, 신체질량지수, 비만도를 계산
	각각의 비만도를 판정하는 프로그램
*/

//	File08.c 함수 선언 (비만도 계산)
void file08(void);									//	비만도 측정 실행 함수
double normalkg(double CM);							//	표준 체중 계산
void bodymass(double CM, double KG);					//	신체질량지수 계산
void Obesity(double KG, double Normal_KG_Result);		//	비만도 계산

int main(void)
{
	file08();	//	테스트 172, 75
	return 0;
}

//	신장과 체중을 입력받는 함수
void file08(void)
{
	double cm, kg = 0.0;						//	신장(cm)과 체중(kg) 저장 변수
	double normal_kg_result = 0.0;			//	표준체중 계산 결과 저장 변수

	printf("바민도 측정 program\n\n");

	printf("신장(cm)을 입력하고 Enter>");
	scanf("%lf", &cm);						//	신장 입력
	printf("체중(kg)을 입력하고 Enter>");
	scanf("%lf", &kg);						//	체중 입력
	printf("\n");									//	줄바꿈

	printf("판정 결과\n");
	printf("\n");							//	줄바꿈

	normal_kg_result = normalkg(cm);		//	표준체중 계산 및 출력
	bodymass(cm, kg);						//	신체질량지수 계산 및 판정
	Obesity(kg, normal_kg_result);			//	비만도 계산 및 판정

	int a;
	while ((a = getchar()) != '\n' && a != EOF);	//	입력 스트림 비우기

	return;
}


//	표준 체중을 계산과 출력한 뒤 반환하는 함수
//	표준 체중 계산 방법 : 표준 체중 = (신장 - 100) * 0.9
double normalkg(double CM)
{
	double normalkg_result;								//	표준 체중 저장 변수

	normalkg_result = (CM - 100) * 0.9;					//	표준 체중 계산

	printf("표준체중(kg) : %.1lf\n", normalkg_result);	//	결과 출력

	return normalkg_result;								//	계산된 표준 체중 반환
}


//	신체질량지수를 계산하고 출력하는 함수
//	신체질량지수 계산 방법 : 신체질량지수 = 체중 / (신장(m) * 신장(m))
void bodymass(double CM, double KG)
{
	double bodymass_result;								//	신체질량지수 저장 변수

	double floatcm = CM / 100;							//	신장을 m 단위로 변환

	//	신체질량지수 계산
	bodymass_result = KG / (floatcm * floatcm);			//	체중 ÷ (신장(m)²)
	printf("신체질량지수 : %.1lf\n", bodymass_result);	//	결과 출력

	/*
		비만 판정 기준
		20 미만	: 저체중
		20~24	: 정상 체중
		25~30	: 과체중
		31 이상	: 병적 비만
	*/
	printf("지수에 대한 비만 판정 : ");
	if (bodymass_result < 20.0)
	{
		printf("저체중\n");
	}
	else if (bodymass_result <= 24)
	{
		printf("정상 체중\n");
	}
	else if (bodymass_result <= 30)
	{
		printf("과체중\n");
	}
	else
	{
		printf("병적 비만\n");
	}

	return;
}


//	비만도를 계산하고 출력하는 함수
//	비만도 계산 방법 : 비만도(%) = ((실측 체중 - 표준 체중) / 표준 체중) * 100
void Obesity(double KG, double Normal_KG_Result)
{
	double obesity_result = 0.0;						//	비만도 결과 저장 변수

	//	비만도 계산
	obesity_result = ((KG - Normal_KG_Result) / Normal_KG_Result) * 100;
	printf("비만도(%%) : %.1lf\n", obesity_result);	//	비만도 출력

	//	비만도 판정
	printf("비만도에 대한 판정 : ");
	if (obesity_result <= 10)
	{
		printf("정상 체중\n");
	}
	else if (obesity_result < 20)
	{
		printf("과체중\n");
	}
	else
	{
		printf("비만\n");
	}

	return;
}
