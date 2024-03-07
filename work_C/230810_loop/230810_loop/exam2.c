#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int i = 0;
	int j = 0;
	while (i < 5) {
		while (j < i) {
			printf("*\n");
			j++;
		}
		i++;
	}

	/*문제 7.2-2
	int i = 0;
	int j = 0;
	while (i < 5) {
		while (j < i) {
			printf("o ");
			j++;
		}
		j = 0;
		printf("* \n");
		i++;
	}*/

	/*문제 7.2-1
	int sum = 0; int num = 0; int i = 0;

	while (i < 5) {
		while (num <= 0) {
			printf("0보다 큰 수를 입력(%d번째): ", i + 1);
			scanf("%d", &num);
		}
		sum = sum + num;
		num = 0;
		i++;
	}
	printf("총 합 : %d \n", sum);*/


	/*문제 7.1-5
	int n,x;
	printf("몇 개의 정수 입력? ");
	scanf("%d", &n);
	int i = 1;
	float avg=0;
	while (i <= n) {
		printf("%d번째 정수 입력: ",i);
		scanf("%d", &x);
		avg = avg + x;
		i++;
	}
	avg = avg / (i - 1);
	printf("평균은 : %.2f", avg);*/

	/*문제 7.1-4
	int x;
	printf("몇 단: ");
	scanf("%d", &x);
	int i = 9;
	while (i > 0) {
		printf("%d x %d = %d\n", x, i, x * i);
		i--;
	}*/

	/*문제 7.1-3
	int sum = 0;
	int x;
	printf("정수 입력 ");
	scanf("%d", &x);
	while (x != 0) {
		sum = sum + x;
		printf("정수 입력 ");
		scanf("%d", &x);
	}
	printf("총 합: %d\n", sum);*/

	/*문제 7.1-2
	int x;
	printf("양의 정수 입력 ");
	scanf("%d", &x);
	int num = 1;
	while (num <= x) {
		printf("%d\n", 3 * num);
		num++;
	}*/

	/*문제 7.1-1
	int i = 0;
	int a;
	printf("숫자 입력 ");
	scanf("%d", &a);

	while (i < a) {
		printf("Hello World\n");
		i++;
	}*/

}


