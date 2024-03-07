#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal(int x, int y, char z);

int main()
{
	// 1. 정수 2개와 사칙연산자를 main()에서 입력받음.
	// 2. 사칙연산자는 문자로 입력받음. (+, -, x, /)
	// 3. 3개의 정보를 매개변수로 전달
	// 4. 계산 결과값을 리턴하여 main()에서 출력하기.

	// scanf함수에서 숫자 입력 후 문자 입력시에는 " %c" 사용
	int n1, n2;
	char z;
	printf("첫번째 수 입력: ");
	scanf("%d", &n1);
	printf("두번째 수 입력: ");
	scanf("%d", &n2);
	printf("사칙연산자(+,-,x,/)중 입력: ");
	scanf(" %c", &z);
	printf("계산 결과값은 %d 입니다.\n", cal(n1, n2, z));
}

int cal(int x, int y, char z) {
	int result = 0;
	if (z == '+') {
		result = x + y;
	}
	else if (z == '-') {
		result = x - y;
	}
	else if (z == 'x') {
		result = x * y;
	}
	else if (z == '/') {
		result = x / y;
	}
	return result;
}