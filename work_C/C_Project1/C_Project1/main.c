#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

typedef enum {
	NOCURSOR,		// Ŀ�� ����		0
	SOLID_CURSOR,	// solid ����	1
	NORMAL_CURSOR	// �Ϲ� ����		2
} CURSOR_TYPE;

typedef enum {
	BLACK,	// 0
	BLUE,	// 1
	GREEN,	// 2
	CYAN,
	RED,
	PURPLE,
	YELLOW,
	WHITE,
	GRAY,
	LIGHT_BLUE,
	LIGHT_GREEN,
	LIGHT_CYAN,
	LIGHT_RED,
	LIGHT_PURPLE,
	LIGHT_YELLOW,
	LIGHT_GRAY	// 15
} FONT_COLOR;

void title();
void gotoxy(int x, int y);
void set_cursor_type(CURSOR_TYPE type);
void font_color(FONT_COLOR color);

typedef struct _IN_MONEY {
	int day;
	int in_money;
	char memo[50];
} IN_MONEY;

typedef struct _OUT_MONEY {
	int day;
	int out_money;
	char category[20];
	char memo[50];
} OUT_MONEY;

int main() {
	set_cursor_type(NOCURSOR);
	font_color(LIGHT_GREEN);
	title();
	_getch();

	system("cls");
	font_color(LIGHT_GRAY);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case 1: {
			IN_MONEY money = { 0 };
			printf("��¥ �Է�(ex.230913): ");
			scanf("%d", &money.day);
			printf("�ݾ� �Է�: ");
			scanf("%d", &money.in_money);
			printf("�޸�: ");
			scanf("%s", &money.memo);

			FILE* fp = fopen("in_money", "ab");
			if (fp == NULL) {
				printf("���� ���� ����!\n");
				return;
			}
			fwrite(&money, sizeof(IN_MONEY), 1, fp);
			fclose(fp);

		}
			break;
		case 2: {
			system("cls");
			int submenu1 = search_menu();
		}
			break;
		case 3:
			system("cls");
			int submenu2 = sub_menu();
			if (submenu2 == 2) {
				FILE* fp = fopen("in_money", "rb");
				if (fp == NULL) {
					printf("���� �б� ����!\n");
					exit(0);
				}
				IN_MONEY money = { 0 };
				int count = 1;
				int check = 0;
				printf("��ȸ�ϰ� ���� ��� �Է� (ex.2309): ");
				scanf("%d", &money.day);
				
				
			}
			if (submenu2 == 3) {
				FILE* fp = fopen("in_money", "rb");
				if (fp == NULL) {
					printf("���� �б� ����!\n");
					exit(0);
				}
				IN_MONEY money = { 0 };
				int count = 1;
				int check = 0;
				while (fread(&money, sizeof(IN_MONEY), 1, fp) == 1) {
					printf("��ȣ:%d\n", count++);
					printf("��¥:%d\n", money.day);
					printf("����:%d��\n", money.in_money);
					printf("�޸�:%s\n", money.memo);
					printf("==========================\n");
					check = 1;
				}
				fclose(fp);
				system("pause");
				if (check == 0) {
					printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
				}
			}
			break;
		case 4:
			printf("���α׷��� �����մϴ�.\n");
			printf("���� �Ǽ���~");
			exit(0);
		}
		system("cls");
	}
}

int main_menu()
{
	printf("=============================\n");
	printf("         �� �� ��\n");
	printf("=============================\n");
	printf("1.����\n");
	printf("2.����\n");
	printf("3.��ȸ\n");
	printf("4.����\n");
	printf("=============================\n");
	printf("�޴� ����:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

int search_menu()
{
	printf("=============================\n");
	printf("�з� �׸� ����\n");
	printf("=============================\n");
	printf("1.�ĺ�\n");
	printf("2.�ְ� / ���\n");
	printf("3.�Ǻ� / �̿�\n");
	printf("4.�ǰ� / ��ȭ\n");
	printf("5.���� / ����\n");
	printf("6.���� / ����\n");
	printf("7.��Ÿ\n");
	printf("8.������\n");
	printf("=============================\n");
	printf("�Է� ��ȣ :");
	int menu;
	scanf("%d", &menu);
	return menu;
}

int sub_menu()
{
	printf("=============================\n");
	printf("1.�Ϻ��� ��ȸ\n");
	printf("2.������ ��ȸ\n");
	printf("3.��ü���� ��ȸ\n");
	printf("4.������\n");
	printf("=============================\n");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void title()
{
	int x = 5;
	int y = 3;
	gotoxy(x, y + 0); printf("������������������������������");
	gotoxy(x, y + 1); printf("��							     ��");
	gotoxy(x, y + 2); printf("��							     ��");
	gotoxy(x, y + 3); printf("��							     ��");
	gotoxy(x, y + 4); printf("��							     ��");
	gotoxy(x, y + 5); printf("��							     ��");
	gotoxy(x, y + 6); printf("��							     ��");
	gotoxy(x, y + 7); printf("������������������������������");
	gotoxy(x + 12, y + 2); printf("�� �� ��");
	gotoxy(x + 33, y + 4); printf("���糯¥	: 2023.09.13");
	gotoxy(x, y + 12); printf("����ȭ�� �̵��� �ƹ�Ű�� ��������!!!");
}

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	// ������ �ֿܼ��� Ŀ�� ��ġ �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void set_cursor_type(CURSOR_TYPE type)
{
	CONSOLE_CURSOR_INFO info = { 0 };
	switch (type) {
	case NOCURSOR:
		info.dwSize = 1;
		info.bVisible = FALSE;
		break;
	case SOLID_CURSOR:
		info.dwSize = 100;
		info.bVisible = TRUE;
		break;
	case NORMAL_CURSOR:
		info.dwSize = 20;
		info.bVisible = TRUE;
		break;
	}
	// Ŀ�� Ÿ���� ���� (win32 API)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void font_color(FONT_COLOR color)
{
	// ��Ʈ�� ���� ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}