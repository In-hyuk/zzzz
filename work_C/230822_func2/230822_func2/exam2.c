#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_menu();
void gugu();
void gugu_even();
void gugu_odd();
void gugu_common(int n);

const char CHECK_FULL = 'f'; // �������� : ��� �Լ��� ���� ������ �� ����

int main()
{
	//-------------------------------
	// �������� ����ϴ� �Լ� ���� v1.0
	//-------------------------------
	// 1.������ ¦���� ���(2,4,6,8)
	// 2.������ Ȧ���� ���(3,5,7,9)
	// 3.������ ��ü ���(2~9)
	// 4.����
	//-------------------------------
	// �޴� ����:
	while (1) {
		int menu = main_menu();
		switch (menu) {
		case 1:
			gugu_common(menu); // ��� �߰�
			break;
		case 2:
			gugu_common(menu);
			break;
		case 3:
			gugu_common(menu);
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
	printf("�������� ����ϴ� �Լ� ���� v1.0\n");
	printf("-------------------------------\n");
	printf("1.������ ¦���� ���(2,4,6,8)\n");
	printf("2.������ Ȧ���� ���(3,5,7,9)\n");
	printf("3.������ ��ü ���(2~9)\n");
	printf("4.����\n");
	printf("-------------------------------\n");
	printf("�޴� ����: ");
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

