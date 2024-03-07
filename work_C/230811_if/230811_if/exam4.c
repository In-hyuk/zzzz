#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j >= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 1. 3개의 숫자를 입력받아서 홀수, 짝수 구분하기
	// 조건) 반복문을 사용해서 입력받기
	
	/*for (int i = 0; i < 3; i++) {
		printf("숫자 %d 번째 입력: ", i + 1);
		int n;
		scanf("%d", &n);
		if (n % 2 == 0) {
			printf("%d 짝수\n",n);
		}
		else {
			printf("%d 홀수\n",n);
		}
	}*/

	// 2. 1~100 까지의 숫자중에서 5의 배수만 출력하기.
	// 조건) 반복문 for, while 사용하기
	
	// for문
	//for (int i = 1; i < 101; i++) {
	//	if (i % 5 == 0) {
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n=============================================================\n");
	//// while문
	//int x = 1;
	//while (x < 101) {
	//	if (x % 5 == 0) {
	//		printf("%d ", x);
	//	}
	//	x++;
	//}

}