#include "main.h"

/*
	신장과 체중을 입력 하여, 표준 체중, 신체질량지수, 비만도를 계산
	각각의 비만도를 판정하는 프로그램
*/



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

	normalkg(cm);



	return;
}

//	표쥰체중의 계산 방법 : 표준 체중 = ( 신장 - 100 ) * 0.9
void normalkg(float CM)
{
	float normalkg_result;

	normalkg_result = (CM - 100) * 0.9;

	printf("표준체중(kg) : %.1", normalkg_result);
	
	return;
}

// 신체질량지수 계산 방법 : 신체질량지수 = 체중 / ( 미터단위의 신장 ** 2 )
int bodymass(float CM, float KG)
{
	float bodymass_result;

	float floatcm = CM / 100;

	bodymass_result = KG / (floatcm * 2);

	printf("신체질량지수 : %.1f", bodymass_result);

	/*
		20 미만 저체중
		20 ~ 24 정상 체중
		25 ~ 30 과체중
		31 이상 병적 비만
	*/

}


// 비만도 계산 방법 : 비만도(%) = ( (실측체증 - 표준체중) / 표준체중 ) * 100
void Obesity(float KG, float Normal_KG_Result)
{

}