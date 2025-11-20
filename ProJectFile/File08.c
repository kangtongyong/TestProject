#include "main.h"

/*
	신장과 체중을 입력 하여, 표준 체중, 신체질량지수, 비만도를 계산
	각각의 비만도를 판정하는 프로그램
*/



//	신장과 체중을 입력받는 함수
void file08(void)
{
	float cm,kg = 0.0;
	float normal_kg_result = 0.0;
	
	printf("바민도 측정 program\n\n");
	
	printf("신장(cm)을 입력하고 Enter>");
	scanf("%f", &cm);
	printf("체중(kg)을 입력하고 Enter>");
	scanf("%f", &kg);
	backslashN();
	
	printf("판정 결과\n");
	backslashN(); backslashN;
	
	normal_kg_result = normalkg(cm);
	bodymass(cm, kg);
	Obesity(kg, normal_kg_result);
	
	
	return;
}


//	표준 체중을 계산과 출력한 뒤 반환하는 함수
//	표쥰 체중의 계산 방법 : 표준 체중 = ( 신장 - 100 ) * 0.9
float normalkg(float CM)
{
	float normalkg_result;
	
	normalkg_result = (CM - 100) * 0.9;
	
	printf("표준체중(kg) : %.1f\n", normalkg_result);
	
	return normalkg_result;
}


//	신체질량지수를 계산하고 출력하는 함수
//	신체질량지수 계산 방법 : 신체질량지수 = 체중 / ( 신장 * 신장 )
void bodymass(float CM, float KG)
{
	// 신체질량지수
	float bodymass_result;
	
	// 체중 / 신장 %% 2
	float floatcm = CM / 100;
	
	//	신체질량계산
	bodymass_result = KG / (floatcm * floatcm);	//	이 수식 (floatcm * floatcm 은 ai의 도움을 받음
	printf("신체질량지수 : %.1f\n", bodymass_result);
	
	/*
		20 미만 저체중
		20 ~ 24 정상 체중
		25 ~ 30 과체중
		31 이상 병적 비만
	*/
	
	//	체중 검사
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
// 비만도 계산 방법 : 비만도(%) = ( (실측체증 - 표준체중) / 표준체중 ) * 100
void Obesity(float KG, float Normal_KG_Result)
{
	//	결과 저장 변수
	float obesity_result = 0.0;
	
	
	//	비만도 계산
	obesity_result = ((KG - Normal_KG_Result) / Normal_KG_Result) * 100;
	printf("비만도(%%) : %.1f\n", obesity_result);	//	이 코드에서 비만도(%%) 부분은 ai의 도음울 받음
	
	
	//	체중 검사
	printf("비만도에 대한 판정 : ");
	if (obesity_result <= 10)
	{
		printf("정상 체중");
	}
	else if (obesity_result < 20)
	{
		printf("과체중");
	}
	else
	{
		printf("비만");
	}
	
	return;
}