// exam2.c
#define _CRT_SECURE_NO_WARNINGS // scanf�Լ��� ����ϱ� ����
#include <stdio.h>
#include <stdlib.h> // exit()

// ��������: �Լ� �ۿ��� ����Ǵ� ���� (��� �Լ��� ���� �����Ҽ� ����)
// ��������: �Լ� �ȿ����� ��� ������ ����
const char CHECK_FULL = 'f'; // const - ��� ���� (���� �����Ҽ� ���� ����)
// #define CHECK_FULL 'f'
const char CHECK_EVEN = 'e';
const char CHECK_ODD = 'o';

int main_menu();
void gugu(char n);

int main()
{
	while (1) { // ���ѹݺ�
		int menu = main_menu();
		switch (menu) {
		case 1: // ¦��
			gugu(CHECK_EVEN);
			break;
		case 2: // Ȧ��
			gugu(CHECK_ODD);
			break;
		case 3: // ��ü
			gugu(CHECK_FULL);
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

void gugu(char n)
{
	for (int i = 1; i < 10; i++) { // 1~9
		for (int j = 2; j < 10; j++) { // �� 2~9
			if (j % 2 == 0 && n == CHECK_EVEN) { // ¦����
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (j % 2 != 0 && n == CHECK_ODD) { // Ȧ����
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (n == CHECK_FULL) { // ��ü
				printf("%dx%d=%d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}