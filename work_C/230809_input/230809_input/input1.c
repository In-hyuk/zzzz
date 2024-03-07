#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;
	printf("정수 one: "); // 모니터에 정보 출력
	// 최신 비주얼스튜디오에서는 scanf를 사용불가.
	// scanf_s 라는 함수로 대체되었음.
	// 하지만 C언어 표준함수는 scanf 가 맞음.
	scanf("%d", &num1); // 키보드에서 정보를 입력
	printf("정수 two: ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}