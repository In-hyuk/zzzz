#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const float PI = 3.14;
	float radius;
	printf("반지름은? ");
	scanf("%f", &radius);
	float area = PI * radius * radius;
	printf("원이 넓이는: %.2f\n", area);
	//------------------------------------------------------------------
	int kor, eng, math, sci;
	printf("국어 점수: ");
	scanf("%d", &kor);
	printf("영어 점수: ");
	scanf("%d", &eng);
	printf("수학 점수: ");
	scanf("%d", &math);
	printf("과학 점수: ");
	scanf("%d", &sci);

	float sum, avg;
	sum = kor + eng + math + sci;
	avg = sum / 4;

	printf("평균값: %.2f점, 총점: %.2f점\n", avg, sum); 
	//-------------------------------------------------------------------
	int x;
	printf("화씨 온도는? ");
	scanf("%d", &x);
	float y;
	y = (x - 32) / 1.8;
	printf("섭씨 온도는 : %f도", y);
	//------------------------------------------------------------------
	int a;
	printf("숫자를 입력하시오: ");
	scanf("%d", &a);
	char* b;
	b = (a % 2 == 0?"짝수":"홀수");
	printf("a는 %s 입니다.", b); 
	//-------------------------------------------------------------------
	int c, d = 0;
	printf("정수 2개 입력: ");
	scanf("%d %d", &c, &d);
	printf("최대값 %d, 최소값 %d", c > d ? c : d, c < d ? c : d);
	//--------------------------------------------------------------------
	int x500, x100, x50, x10 = 0;
	int money;
	printf("얼마? ");
	scanf("%d", &money);

	x500 = money / 500;
	money = money % 500;
	x100 = money / 100;
	money = money % 100;
	x50 = money / 50;
	money = money % 50;
	x10 = money / 10;
	money = money % 10;

	printf("오백원 갯수: %d개\n", x500);
	printf("백원 갯수: %d개\n", x100);
	printf("오십원 갯수: %d개\n", x50);
	printf("십원 갯수: %d개\n", x10);
	printf("바꾸지 못한 잔돈: %d개\n", money);
	
}

