// exam3.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

struct car {
	char model[20];		// 모델명
	char price[20];		// 가격
	int year;			// 연식
	char color[10];		// 색상
	char office[50];	// 영업소
};

struct customer {
	char name[20];		// 고객명
	char tel[20];		// 전화
	char addr[50];		// 주소
	char job[20];		// 직업
	char birth[20];		// 생일
	struct car ca;		// 구매차량
};

int main()
{
	// 고객차량 관리 프로그램 1.0
	// 고객, 차량 구조체 -> (클래스로 확장)
	// 고객:이름, 전화번호, 주소, 직업, 생일
	// 차량:모델명, 가격, 연식, 색상, 영업소
	// 10명의 고객 정보를 배열에서 랜덤하게 추출하여 입력 및 출력.
}