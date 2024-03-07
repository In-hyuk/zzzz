#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 상수변수 : const가 변수 앞에 붙음. (재사용 불가)
	int result;
	int num1, num2, num3; // 일반변수 -> 재사용 가능

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
	return 0;

	// 상수변수
	const int n = 100;
	int n2 = 200;
	n2 = 300; // 일반변수는 값을 변경 가능
	n = 500;  // 상수변수는 값을 변경 불가 
}