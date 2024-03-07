#include <stdio.h>

void show_number(int n);
void show_number2(int n, int n2);

int main()
{
	// void 함수명() -> 괄호안(void)생략가능, 매개변수 없음
	// void 함수명(매개변수, ...) -> 매개변수는 n개

	// 중요: 반드시 매개변수가 있는 함수를 호출할 경우 ()안에 매개변수로 전달하는 값(변수)을 넣어줌
	show_number(100);
	int n = 100;
	int n2 = 200;
	show_number2(n, n2);
}

// 코딩 스타일
// 스네이크 방식: show_number -> C언어 스타일
// 카멜방식: showNumber -> 자바 (객체지향)
// 파스칼방식: ShowNumber -> C++, C# (객체지향)
void show_number(int n) // 매개변수(인수, 인자)가 있는 함수 정의
{
	int sum = n + 100;
	printf("함수의 변수1 sum:%d\n", sum);
}

void show_number2(int n,int n2) // 매개변수가 있는 함수 정의
{
	int sum = n + n2;
	printf("함수의 변수2 sum:%d\n", sum);
}