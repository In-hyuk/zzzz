// exam2.c
#define _CRT_SECURE_NO_WARNINGS // scanf�Լ��� ����ϱ� ����
#include <stdio.h>

int main_menu();
void full_gugu();
void odd_gugu();
void even_gugu();

int main()
{
	while (1) { // ���� �ݺ�
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
			printf("���α׷� ����\n");
			exit(0); // ���α׷��� ������ ����
		default:
			printf("�߸��� �޴� �Է�!!\n");
		}
	}
}

int main_menu()
{
	printf("-------------------------------\n");
	printf("�������� ����ϴ� �Լ� ���� 1.0\n");
	printf("-------------------------------\n");
	printf("1.������ ¦���� ���(2~8)\n");
	printf("2.������ Ȧ���� ���(3~9)\n");
	printf("3.������ ��ü ���(2~9)\n");
	printf("4.����\n");
	printf("-------------------------------\n");
	printf("�޴� ����:");
	int menu;
	scanf("%d", &menu); // �޴��� �Է� ����
	return menu;
}

void full_gugu()
{
	for (int i = 1; i < 10; i++) { // 1~9
		for (int j = 2; j < 10; j++) { // �� 2~9
			printf("%dx%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}
}

void odd_gugu()
{
	for (int i = 1; i < 10; i++) { // 1~9
		for (int j = 2; j < 10; j++) { // �� 2~9
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
		for (int j = 2; j < 10; j++) { // �� 2~9
			if (j % 2 == 0) { // ¦���ܸ� ���
				printf("%dx%d=%d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}