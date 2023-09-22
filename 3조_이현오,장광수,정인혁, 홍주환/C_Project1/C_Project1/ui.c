#include <stdio.h>
#include <windows.h>// win32 api ��� (������ ȯ�濡���� ��� ����)
#include <conio.h>
#include "ui.h"


void title()
{
	printf("\t\t\t\t         v1.0\n");
	printf("\n");
	printf("\n");
	printf("\n");
	font_color(LIGHT_RED);
	printf("\t         (\\____/)\n");
	printf("\t         / @__@ \\\n");
	printf("\t        (  (oo)  )\n");
	printf("\t         `-.~~.-'\n");
	printf("\t          /    \\\n");
	printf("\t        @/      \\@\n");
	printf("\t       (/ /    \\ \\)\n");
	printf("\t        WW      WW\n");
	printf("\n");
	printf("\n");
	font_color(WHITE);
	printf("\t        �ε���");
	Sleep(400); printf(". ");
	Sleep(400); printf(". ");
	Sleep(400); printf(". ");
	printf("\n");
	printf("\n");
	Sleep(1000);
	printf("\t         �ε��Ϸ�!");
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

void center() {// 230918 �ܼ� ���� â ũ�� �� ȭ�� �߾� ����. by JANG
	HWND consoleWindow = GetConsoleWindow();

	if (consoleWindow != NULL) {
		// �ܼ�â ũ�� ���� 
		RECT r;
		GetWindowRect(consoleWindow, &r);
		MoveWindow(consoleWindow, r.left, r.top, 400, 400, TRUE);

		// ���� ������� �ػ� ������ ����
		int screenX = GetSystemMetrics(SM_CXSCREEN);
		int screenY = GetSystemMetrics(SM_CYSCREEN);

		// �ܼ� â�� ũ�� ������ ����
		RECT consoleRect;
		GetWindowRect(consoleWindow, &consoleRect);
		int consoleWidth = consoleRect.right - consoleRect.left;
		int consoleHeight = consoleRect.bottom - consoleRect.top;

		// �ܼ� â�� ȭ�� �߾����� �̵�
		int newX = (screenX - consoleWidth) / 2;
		int newY = (screenY - consoleHeight) / 2;
		MoveWindow(consoleWindow, newX, newY, consoleWidth, consoleHeight, TRUE);
	}
}