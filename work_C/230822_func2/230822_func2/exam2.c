#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_menu();
void gugu();
void gugu_even();
void gugu_odd();
void gugu_common(int n);

const char CHECK_FULL = 'f'; // 전역변수 : 모든 함수에 값을 전달할 수 있음

int main()
{
	//-------------------------------
	// 구구단을 출력하는 함수 연습 v1.0
	//-------------------------------
	// 1.구구단 짝수단 출력(2,4,6,8)
	// 2.구구단 홀수단 출력(3,5,7,9)
	// 3.구구단 전체 출력(2~9)
	// 4.종료
	//-------------------------------
	// 메뉴 선택:
	while (1) {
		int menu = main_menu();
		switch (menu) {
		case 1:
			gugu_common(menu); // 기능 추가
			break;
		case 2:
			gugu_common(menu);
			break;
		case 3:
			gugu_common(menu);
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
	printf("구구단을 출력하는 함수 연습 v1.0\n");
	printf("-------------------------------\n");
	printf("1.구구단 짝수단 출력(2,4,6,8)\n");
	printf("2.구구단 홀수단 출력(3,5,7,9)\n");
	printf("3.구구단 전체 출력(2~9)\n");
	printf("4.종료\n");
	printf("-------------------------------\n");
	printf("메뉴 선택: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void gugu()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%d x %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
}

void gugu_even()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j += 2) {
			printf("%d x %d = %d\t", j, i, j * i);
		}
		printf("\n");
	}
}

void gugu_odd()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 3; j < 10; j += 2) {
			printf("%d x %d =%d\t", j, i, j * i);
		}
		printf("\n");
	}
}

void gugu_common(int n)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (n == 2 & j % 2 != 0 ) {
				printf("%d x %d = %d\t", j, i, j * i);
			}
			else if (n == 1 & j % 2 == 0) {
				printf("%d x %d = %d\t", j, i, j * i);
			}
			else if (n == 3) {
				printf("%d x %d = %d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}

