// exam2.c
#define _CRT_SECURE_NO_WARNINGS // scanf함수를 사용하기 위해
#include <stdio.h>

int main_menu();
void full_gugu();
void odd_gugu();
void even_gugu();

int main()
{
	while (1) { // 무한 반복
		int menu = main_menu();
		switch (menu) {
		case 1:
			even_gugu();
			break;
		case 2:
			odd_gugu();
			break;
		case 3:
			full_gugu();
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

void full_gugu()
{
	for (int i = 1; i < 10; i++) { // 1~9
		for (int j = 2; j < 10; j++) { // 단 2~9
			printf("%dx%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}
}

void odd_gugu()
{
	for (int i = 1; i < 10; i++) { // 1~9
		for (int j = 2; j < 10; j++) { // 단 2~9
			if (j % 2 != 0) {
				printf("%dx%d=%d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}

void even_gugu()
{
	for (int i = 1; i < 10; i++) { // 1~9
		for (int j = 2; j < 10; j++) { // 단 2~9
			if (j % 2 == 0) { // 짝수단만 출력
				printf("%dx%d=%d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}