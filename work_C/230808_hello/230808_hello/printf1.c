#include <stdio.h>

int main(void)
{
	// %d: 정수로 바뀜
	printf("Hello Everybody\n");
	printf("정수 출력:%d\n", 1234); // 1234가 %d에 대입.
	printf("2개의 정수 출력:%d %d\n", 10, 20);
	// printf함수를 사용하여 10-20-30 출력
	printf("%d-%d-%d\n" , 10, 20, 30); // 순서대로 대입

	// printf함수: 정보를 화면에 출력
	// 정보: 숫자(정수, 실수), 문자(문자, 문자열)
	// 정수: %d, 실수: %f, 문자: %c, 문자열: %s
	
	printf("실수표시:%f\n", 3.14);
}