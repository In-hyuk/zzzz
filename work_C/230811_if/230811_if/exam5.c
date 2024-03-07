#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*문제 8-1.1
	for (int i = 1; i < 100; i++) {
		if (i % 7 == 0 && i % 9 == 0) {
			printf("%d\n", i);
		}
		else if (i % 7 == 0 || i % 9 == 0) {
			printf("%d\n", i);
		}
	}*/

	/*문제 8-1.2
	int x, y;
	int num;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &x, &y);

	if (x > y) {
		num = x - y;
		printf("%d", num);
	}
	else {
		num = y - x;
		printf("%d", num);
	}*/

	/*문제 8-1.3
	int kor, eng, math;
	printf("국어, 영어, 수학 점수 차례대로 입력 ");
	scanf("%d %d %d", &kor, &eng, &math);
	float avg;
	avg = (kor + eng + math) / 3;
	if (avg >= 90) {
		printf("A");
	}
	else if (avg >= 80) {
		printf("B");
	}
	else if (avg >= 70) {
		printf("C");
	}
	else if (avg >= 50) {
		printf("D");
	}
	else {
		printf("F");
	}*/
	
	/*문제 8-1.4
	int x, y;
	int num;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &x, &y);
	num = x > y ? x - y : y - x;
	printf("%d", num);*/

	/*문제 8-2.1
	int num;
	for (int x = 2; x < 10; x++)
	{
		if (x % 2 != 0) {
			continue;
		}
		for (int y = 1; y < 10; y++)
		{
			if (y > x) {
				break;
			}
			printf("%d x %d = %d\n", x, y, x * y);
		}
		printf("\n");
	}*/

	/*문제8-2.2
	int A = 0;
	int Z = 0;
	int result;
	for (A; A < 10; A++) {
		for (Z; Z < 10; Z++) {
			result = (10*A + Z) + (10*Z + A);
			if (result == 99) {
				printf("%d%d+%d%d=%d \n", A, Z,Z,A,result);
			}
			result = 0;
		}
		Z = 0;
	}*/

	/*문제 8-2.2 답
	int A, Z;
	int result;
	for (A = 0; A < 10; A++)
	{
		for (Z = 0; Z < 10; Z++)
		{
			if (A == Z)
				continue;
			result = (A * 10 + Z) + (Z * 10 + A);
			if (result == 99)
				printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
		}
	}*/

	/*문제 8-3
	int a, n;
	scanf("%d", &a);
	n = a / 10;
	switch (n)
	{
	case 0:
		printf("0이상 10미만");
		break;
	case 1:
		printf("10이상 20미만");
		break;
	case 2:
		printf("20이상 30미만");
		break;
	default:
		printf("30이상");
	}*/


}