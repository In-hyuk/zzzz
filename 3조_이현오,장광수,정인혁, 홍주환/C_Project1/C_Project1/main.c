#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <conio.h>
#include <windows.h>// Sleep()
#include "menu.h"
#include "ui.h"
#include "file.h"
#include "func.h"

int main() {
	// �ܼ�â ����ǥ���� ����ٲٱ�
	SetConsoleTitle(TEXT("��.��.�� v1.0"));
	// �ܼ�â�� ����� �߾�����
	center();
	// Ŀ�� ����
	set_cursor_type(NOCURSOR);
	// ��Ʈ���� 
	font_color(LIGHT_GREEN);
	// Ÿ��Ʋ �Լ� ȣ��
	title();
	// ������ 1��
	Sleep(1000);
	//Ÿ��Ʋ ���� �ý���Ŭ����
	system("cls");
	font_color(LIGHT_GRAY);
	set_cursor_type(NORMAL_CURSOR);

	// ���ϸ� �Ű������� ���� �ֱ� ���� ����
	char file_in[]= "income.bin";
	char file_sp[] = "out.bin";
	
	while (1) {
		// �� ���� ���� 
		int totalincome = 0;
		// �� ���� ����
		int totalout = 0;

		// goto�� ���ư��� ��ġ
		com:

		// Ÿ��Ʋ ���� �Ѽ��� ������ ���ڻ� �����ϴ� �Լ� ȣ��
		show_total_money(file_in,file_sp, totalincome, totalout);
		font_color(WHITE);

		// ���θ޴� ���� 
		switch (main_menu()) {

		// 1�� ����
		case MAIN_INCOME : 
		{
			//����ü income �� ���� in ����,�ʱ�ȭ
			income in = { 0 };

			// 230918 q, Q�Է½� ���θ޴��� ���� ���� ����
			char ch;

			printf(" ���θ޴��� ���ư��÷��� (q or Q)\n");
			printf(" �� ��¥ �Է� ex 9/5 : ");
			if (scanf("%d/%d", &in.month, &in.day)) {}
			else if (scanf("%c", &ch) && ch == 'q'|| ch=='Q') {
				break;
			}
			rewind(stdin);

			// 230914 month������ 1~12���� , day������ 1~31������ �ްԲ� �Ϸ�. 
			// month�� 1�̸� 13�̻��̰ų� day�� 1�̸� 32�̸��϶� �����޼��� �ٽ��Է¹ޱ�
			while (in.month < 1 || in.month >= 13 || in.day < 1 || in.day >= 32) {
				printf(" �߸��� ��¥ �Է�!\n");
				printf(" �ٽ� �Է��� �ּ���.\n");
				printf(" �� ��¥ �Է� ex 9/5 : ");
				scanf("%d/%d", &in.month, &in.day);

			// 230918 while�ݺ��� �ȿ��� q������ Ż��.
			if (scanf("%c", &ch) && ch == 'q' || ch == 'Q') {
				system("cls");
				goto com;	
			}	rewind(stdin);
			}
						
			printf(" �� �ݾ� �Է� : ");
			scanf("%d", &in.money);
			rewind(stdin);

			// �Է±ݾ� Ȯ���� �Է¹ޱ����� ���� select
			int select = 0;

			// �ݾ��Է�Ȯ�θ޼��� �Լ� ȣ��
			while (1) {
			check_input_msg(in);
			
			scanf("%d", &select);
			rewind(stdin);
				// �Է°��� 1�ϰ�� �Է¹��� �ݾ�
				if (select == 1) {
					in.money;
					break;
				}// 2�ϰ�� �ٽ��Է� �ޱ�
				else if (select == 2) {
					printf(" �ݾ��� �ٽ� �Է��� �ּ��� : ");
					scanf("%d", &in.money);
					rewind(stdin);
					continue;
				}
				else {
					printf(" �߸��� �Է��Դϴ�.\n");
					printf(" �ٽ� �Է����ּ���.\n");
				}
			}
			// �޸� �Է� 
			printf(" �� �޸� �Է� : ");
			scanf("%s", in.memo);
		
			// ���� ���� ���� �Լ� ȣ��
			file_write_income(file_in,in);
			printf(" ���Գ��� ������");
			Sleep(400); printf(".");
			Sleep(400); printf(".");
			Sleep(400); printf(".\n");
			Sleep(400);
			printf(" ���� �Ϸ�!\n");
			system("pause");
		}  break;

		// 2�� ����
		case MAIN_SPEND :
		{
			char ch;
			out ou = { 0 };
			printf(" ���θ޴��� ���ư��÷��� (q or Q)\n");
			printf(" �� ��¥ �Է� ex 9/5 : ");
			if (scanf("%d/%d", &ou.month, &ou.day)) {}
			else if (scanf("%c", &ch) && ch == 'q' || ch == 'Q') {
				break;
			}rewind(stdin);
		
			while (ou.month < 1 || ou.month >= 13 || ou.day < 1 || ou.day >= 32) {
				printf(" �߸��� ��¥ �Է�!\n");
				printf(" �ٽ� �Է��� �ּ���.\n");
				printf(" �� ��¥ �Է� ex 9/5 : ");
				scanf("%d/%d", &ou.month, &ou.day);

				// 230918 while�ݺ��� �ȿ��� q������ Ż��.
				if (scanf("%c", &ch) && ch == 'q' || ch == 'Q') {
					system("cls");
					goto com;
				}	rewind(stdin);
			}
			printf(" �� ���� �ݾ� : ");
			scanf("%d", &ou.money);			
			rewind(stdin);

			// �ݾ�Ȯ�� �޼��� ���� ����
			int select = 0;

			// �ݾ��Է�Ȯ�θ޼��� �Լ� ȣ��
			while (1) {
			check_input_msg2(ou);

			// ���� üũ
				scanf("%d", &select);
				rewind(stdin);
				if (select == 1) {
					ou.money;
					break;
				}
				else if (select == 2) {
					printf(" �ݾ��� �ٽ� �Է��� �ּ��� : ");
					scanf("%d", &ou.money);
					rewind(stdin);
					continue;
				}
				else {
					printf(" �߸��� �Է��Դϴ�.\n");
					printf(" �ٽ� �Է����ּ���.\n");
				}
			}
			// ���� ī�װ� �Լ� ȣ�� 
			// �۵� �ȉ� ���� �߰� ��ĭ�� ��!
			// ī�װ� �޴� �Լ� ������ ����
			int submenu0 = type_menu();
			if (submenu0 == 1) {
				strcpy(ou.type, "�ĺ�");
			}
			else if (submenu0 == 2) {
				strcpy(ou.type, "�ְ� / ���");
			}
			else if (submenu0 == 3) {
				strcpy(ou.type, "�Ǻ� / �̿�");
			}
			else if (submenu0 == 4) {
				strcpy(ou.type, "�ǰ� / ��ȭ");
			}
			else if (submenu0 == 5) {
				strcpy(ou.type, "���� / ����");
			}
			else if (submenu0 == 6) {
				strcpy(ou.type, "���� / ����");
			}
			else if (submenu0 == 7) {
				strcpy(ou.type, "��Ÿ");
			}
			
			// �޸��Է�
			printf(" �� �޸� �Է� : ");
			scanf("%s", ou.memo);

			// ���� ���� �޴� �Լ� ȣ�� 
			// �۵��ȉ� ���� �߰� ��ĭ�̵�
			int submenu1 = import_menu();
			if (submenu1 == 1) {
				strcpy(ou.pay, "ī��");
			}
			else if (submenu1 == 2) {
				strcpy(ou.pay, "����");
			}

			// ���� ���� ���� �Լ� ȣ��
			file_write_spend(file_sp, ou);
			printf(" ���⳻�� ������");
			Sleep(400); printf(".");
			Sleep(400); printf(".");
			Sleep(400); printf(".\n");
			Sleep(400);
			printf(" ���� �Ϸ�!\n");
			system("pause");
		}  break;
			
		// 3�� ��ȸ 
		case MAIN_CHECK :
		{
			// ��ȸ �޴� �Լ�ȣ��
			system("cls");
			int submenu2 = check_menu();	

			// �� ��ȸ �Լ� ȣ��
			day_check(submenu2, file_in, file_sp);

			// �� ��ȸ �Լ� ȣ��
			month_check(submenu2, file_in, file_sp);

			// ��ü ���� ��ȸ �Լ� ȣ��
			all_check(submenu2, file_in, file_sp);
		} break;

		// 4�� ����
		case MAIN_DELETE :	// ����޴� �� �޾Ƽ� ��ü���� ��������, �˻��ؼ� ����?? , 				
		{					// �ƴϸ� ���ͳ����� ���� , ���⳻���� ���� �̷��� �ص��ɵ�
			delete_all(file_in,file_sp);
		}break;

		case MAIN_EXIT :
		{
			printf(" ���α׷��� �����մϴ�.\n");
			printf(" ���� �Ǽ���~");
			exit(0);
		}
			} // switch �� �ݴ� �߰�ȣ
		system("cls");
	} // while�� �ݴ� �߰�ȣ

} // main�� �ݴ� �߰�ȣ


