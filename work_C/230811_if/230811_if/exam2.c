#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 1) 간단한 계산기. (if, switch)
	// 1. 2개의 숫자를 입력받고, 문자 +, -, *, / 를 입력받음.
	// 2. 출력 형태는 아래 참고.
	// >>> 입력 예시 <<<
    // 1번째 숫자 입력: 10
	// 2번째 숫자 입력: 20
	// 연산자 입력(+,-,*,/): +

	// >>> 출력 예시 <<<
	// 10 + 5 = 15
	
	//int x, y; // 2개의 숫자 변수
	//char c;   // 1개의 연산자
	//printf("1번째 숫자 입력: ");
	//scanf("%d", &x);
	//printf("2번째 숫자 입력: ");
	//scanf("%d", &y);
	//printf("연산자 입력(+,-,*,/): ");
	//// 바로 위에서 숫자를 입력하고 엔터키를 치면 엔터키값이 c변수에 자동으로 저장되어지는 오류 발생.
	//// 해결방법: "%c" -> " %c" %c앞에 공백을 1칸 둠.
	//scanf(" %c", &c);
	//if (c == '+') {
	//	printf("%d + %d = %d", x, y, x + y);
	//}
	//else if (c == '-') {
	//	printf("%d - %d = %d", x, y, x - y);
	//}
	//else if (c == '*') {
	//	printf("%d * %d = %d", x, y, x * y);
	//}
	//else{
	//	printf("%d / %d = %d", x, y, x / y);
	//}

	//switch (c)
	//{
	//case '+':
	//	printf("%d + %d = %d", x, y, x + y);
	//	break;
	//case '-':
	//	printf("%d - %d = %d", x, y, x - y);
	//	break;
	//case '*':
	//	printf("%d * %d = %d", x, y, x * y);
	//	break;
	//case '/':
	//	printf("%d / %d = %d", x, y, x / y);
	//}



	// 2) 윤년 구분하는 프로그램 (if만 가능)
	// 1. 입력한 년도를 4로 나누면 나머지가 0이고, 100으로 나누면 0이 아님 -> 윤년
	// 2. 입력한 년도를 400으로 나누면 나머지가 0 -> 윤년
	int year;
	printf("년도 입력: ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0)) {
		printf("%d년은 윤년\n", year);
	}
	else {
		printf("%d년은 윤년아님\n", year);
	}

	
}