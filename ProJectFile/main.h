//	main.h
//	프로그램 전용 헤더 파일
//	각 파일별 함수 선언 및 상수 정의 포함

#pragma once	//	헤더 중복 포함 방지

#define _CRT_SECURE_NO_WARNINGS	//	Visual Studio 컴파일 시 안전하지 않은 함수 경고 제거
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//	exefuncsion.c 함수 선언
void backslashN(void);			//	줄바꿈 함수
void exefuncsion(void);			//	메인 실행 함수


//	File04.c 함수 선언 (최대공약수, 최소공배수)
void file04(void);								//	최대공약수/최소공배수 실행 함수
int maxresult(int m, int n);					//	최대공약수 계산
void leastresult(int M, int N, int RESULT);		//	최소공배수 계산


//	File06.c 함수 선언 (행렬 연산)
#define FILE06_ARRAY_SIZE 3	//	행렬 크기

extern int a[FILE06_ARRAY_SIZE][FILE06_ARRAY_SIZE];		//	전역 행렬 A
extern int b[FILE06_ARRAY_SIZE][FILE06_ARRAY_SIZE];		//	전역 행렬 B

void file06(void);										//	행렬 연산 실행 함수
void matrixA(int A[][FILE06_ARRAY_SIZE]);				//	행렬 A 출력
void matrixB(int B[][FILE06_ARRAY_SIZE]);				//	행렬 B 출력
void addAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE]);				//	A+B 연산
void subtractionAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE]);		//	A-B 연산
void multiplyAB(int A[][FILE06_ARRAY_SIZE], int B[][FILE06_ARRAY_SIZE]);		//	A*B 연산


//	File07.c 함수 선언 (파스칼 삼각형)
#define FILE07_ARRAY_SIZE 128	//	파스칼 삼각형 최대 행 수

void file07(void);							//	파스칼 삼각형 실행 함수
void printtriangle(int repeatnum);			//	삼각형 계산 및 출력


//	File08.c 함수 선언 (비만도 계산)
void file08(void);									//	비만도 측정 실행 함수
float normalkg(float CM);							//	표준 체중 계산
void bodymass(float CM, float KG);					//	신체질량지수 계산
void Obesity(float KG, float Normal_KG_Result);		//	비만도 계산


//	File22.c 함수 선언 (한글 문자열 처리)
#define FILE22_ARRAY_SIZE 20	//	문자열 최대 길이

void file22(void);									//	한글 문자열 처리 실행 함수
void reverse_han(const char* s1, int c1);			//	문자열 역순 변환
void remove_blank(const char* s2, int c2);			//	공백 제거
