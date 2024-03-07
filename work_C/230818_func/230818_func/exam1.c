#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_num(int n);

int main()
{
	// 1~5까지 연속적으로 매개변수로 전달하여 출력하는 함수
	// 함수명: show_num()

	show_num(5); // show_num 함수 호출(실행)
}

// 매개변수를 출력하는 함수
void show_num(int n)
{
	for (int i = 0; i < n; i++) {
		int number = i+1;
		printf("%d\n", number);
	}	
}



