#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "menu.h"

int menuInput(int start, int end)
{
	int menu;
	scanf("%d", &menu);
	while (1)
	{
		if (menu < start || menu>end)
		{
			// �Է� ���� ���� 
			rewind(stdin);
			printf(" �ٽ� �Է����ּ��� : ");
			scanf("%d", &menu);
			continue;
		}
		break;

	}
	return menu;
}

void printMenu()
{
	printf("������������������������������������������������������������\n");
	printf("��          �� �� ��          ��\n");
	printf("������������������������������������������������������������\n");
	printf("�� �� ����                    ��\n");
	printf("�� �� ����                    ��\n");
	printf("�� �� ��ȸ                    ��\n");
	printf("�� �� ����                    ��\n");
	printf("�� �� ����                    ��\n");
	printf("������������������������������������������������������������\n");
	printf(" �� �޴� ���� : ");
}

int main_menu()
{
	printMenu();
//	menuInput(1, 5);
	//int menu;
	//scanf("%d", &menu);
	//while (1)
	//{
	//	if (menu < 1 || menu>5)
	//	{
	//		// �Է� ���� ���� 
	//		rewind(stdin);
	//		printf("�ٽ� �Է����ּ���.");
	//		scanf("%d", &menu);
	//		continue;
	//	}
	//	break;

	//}
	return menuInput(1, 5);
}

int type_menu()
{
	printf("������������������������������������������������������������\n");
	printf("��        �з� �׸� ����      ��\n");
	printf("������������������������������������������������������������\n");
	printf("�� �� �ĺ� \t");
	printf("�� �ְ�, ��Ŧ�\n");
	printf("�� �� �Ǻ�, �̿�\t");
	printf("�� �ǰ�, ��ȭ��\n");
	printf("�� �� ����, ����\t");
	printf("�� ����, ������\n");
	printf("�� �� ��Ÿ \t\t     ��\n");
	printf("������������������������������������������������������������\n");
	printf(" �� �Է� ��ȣ : ");
//	int menu;
//	scanf("%d", &menu);
//	return menu;
	return menuInput(1, 7);
}

int import_menu()
{
	printf("������������������������������������������������������������\n");
	printf("��      ���� ���� ����        �� \n");
	printf("������������������������������������������������������������\n");
	printf("�� �� ī��                    ��\n");
	printf("�� �� ����                    ��\n");
	printf("������������������������������������������������������������\n");
	printf(" �� �Է� ��ȣ :");
//	int menu;
//	scanf("%d", &menu);
//	return menu;
	return menuInput(1, 2);
}

int check_menu()
{
	printf("������������������������������������������������������������\n");
	printf("�� �� �Ϻ��� ��ȸ             ��\n");
	printf("�� �� ������ ��ȸ             ��\n");
	printf("�� �� ��ü���� ��ȸ           ��\n");
	printf("�� �� ������                  ��\n");
	printf("������������������������������������������������������������\n");
	printf(" �� �Է� ��ȣ : ");
//	int menu;
//	scanf("%d", &menu);
//	return menu;
	return menuInput(1, 4);
}

