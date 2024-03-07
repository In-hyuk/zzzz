// exam2.c
#define _CRT_SECURE_NO_WARNINGS // scanf함수를 사용하기 위해
#include <stdio.h>
#include <stdlib.h> // exit()

// 전역변수: 함수 밖에서 선언되는 변수 (모든 함수에 값을 전달할수 있음)
// 지역변수: 함수 안에서만 사용 가능한 변수
const char CHECK_FULL = 'f'; // const - 상수 변수 (값을 변경할수 없는 변수)
// #define CHECK_FULL 'f'
const char CHECK_EVEN = 'e';
const char CHECK_ODD = 'o';

int main_menu();
void gugu(char n);

int main()
{
	while (1) { // 무한반복
		int menu = main_menu();
		switch (menu) {
		case 1: // 짝수
			gugu(CHECK_EVEN);
			break;
		case 2: // 홀수
			gugu(CHECK_ODD);
			break;
		case 3: // 전체
			gugu(CHECK_FULL);
			break;
		case 4:
			printf("프로그램 종료\n");
			exit(0); // 프로그램을 강제로 종료
		default:
			printf("잘못된 메뉴 입력!!\n");
		}
	}
}

int main_menu()
{
	printf("-------------------------------\n");
	printf("구구단을 출력하는 함수 연습 1.0\n");
	printf("-------------------------------\n");
	printf("1.구구단 짝수단 출력(2~8)\n");
	printf("2.구구단 홀수단 출력(3~9)\n");
	printf("3.구구단 전체 출력(2~9)\n");
	printf("4.종료\n");
	printf("-------------------------------\n");
	printf("메뉴 선택:");
	int menu;
	scanf("%d", &menu); // 메뉴를 입력 받음
	return menu;
}

void gugu(char n)
{
	for (int i = 1; i < 10; i++) { // 1~9
		for (int j = 2; j < 10; j++) { // 단 2~9
			if (j % 2 == 0 && n == CHECK_EVEN) { // 짝수단
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (j % 2 != 0 && n == CHECK_ODD) { // 홀수단
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (n == CHECK_FULL) { // 전체
				printf("%dx%d=%d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}