#include <stdio.h>

int main()
{
	float PI = 3.14;
	float r = 5.0;
	float res = r * r * PI;
	printf("���� ����: %f\n\n", res);

	int language, english, math, science = 0;
	language = 90;
	printf("���� ����: %d\n", language);
	english = 80;
	printf("���� ����: %d\n", english);
	math = 70;
	printf("���� ����: %d\n", math);
	science = 60;
	printf("���� ����: %d\n", science);
	float avg, sum;
	sum = language + english + math + science;
	avg = sum / 4;
	printf("��հ�: %.2f, ����: %.2f\n\n", avg, sum);

	int x;
	x = 40;
	float y;
	y = (x - 32) / 1.8;
	printf("�����µ�: %f\n", y);
}