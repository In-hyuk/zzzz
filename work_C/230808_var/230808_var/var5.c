#include <stdio.h>

int main()
{
	float PI = 3.14;
	float r = 5.0;
	float res = r * r * PI;
	printf("원의 면적: %f\n\n", res);

	int language, english, math, science = 0;
	language = 90;
	printf("국어 점수: %d\n", language);
	english = 80;
	printf("영어 점수: %d\n", english);
	math = 70;
	printf("수학 점수: %d\n", math);
	science = 60;
	printf("과학 점수: %d\n", science);
	float avg, sum;
	sum = language + english + math + science;
	avg = sum / 4;
	printf("평균값: %.2f, 총점: %.2f\n\n", avg, sum);

	int x;
	x = 40;
	float y;
	y = (x - 32) / 1.8;
	printf("섭씨온도: %f\n", y);
}