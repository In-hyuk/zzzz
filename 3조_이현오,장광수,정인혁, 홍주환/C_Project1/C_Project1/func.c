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

void check_input_msg(income in) {

	printf("���� Ȯ�Φ�����������������������������������������������������������\n");
	printf("��  �Է��Ͻ� �ݾ��� %d�� �Դϴ�. ��\n", in.money);
	printf("��\t\t(1.��  2.�ƴϿ�)    ��\n");
	printf("��������������������������������������������������������������������������\n");
	printf(" �� ����: ");
}

void check_input_msg2(out ou) {

	printf("���� Ȯ�Φ�����������������������������������������������������������\n");
	printf("��  �Է��Ͻ� �ݾ��� %d�� �Դϴ�. ��\n", ou.money);
	printf("��\t\t(1.��  2.�ƴϿ�)    ��\n");
	printf("��������������������������������������������������������������������������\n");
	printf(" �� ����: ");
	
}

char spend_catagory(out ou) { // ���� ��Ʈ��ī�ǰ� �����̾ȉ�
	
}

void pay_method(out ou) { // ����
	
}

void day_check(int submenu2,char file1[],char file2[]) {
	// �Ϻ� ��ȸ  ���⼭ �� ���� �Է¹ް� �Է¹��� ���� �ϼ��� ǥ���ϰ� �ؾ� �ҵ� 
	if (submenu2 == 1) {
		int count = 1;
		int cnt = 1;
		int totalincome = 0;
		int totalout = 0;
		int card = 0;
		int cash = 0;
		income in = { 0 };
		out ou = { 0 };

		// 230918 �� �Է¹ޱ����� ���� ����
		int month = 0;

		printf(" �� ���� �Է� ���ּ��� : ");
		scanf("%d", &month);

		rewind(stdin);
		// 230918 month������ 1~12������ �ްԲ� �Ϸ�. �ƴҽ� ���Է�
		while (month < 1 || month>12) {
			printf(" �߸��� ��¥ �Է�!\n");
			printf(" �ٽ� �Է��� �ּ���.\n");
			printf(" �� ���� �ٽ� �Է����ּ��� : ");
			scanf("%d", &month);
			rewind(stdin);
		}
		//�� �Է¹ޱ����� ���� ����
		int day = 0;

		printf(" �� �ñ��� ���� �Է����ּ��� : ");
		scanf("%d", &day);
		rewind(stdin);
		printf(" ���� �ҷ�������");
		Sleep(400); printf(".");
		Sleep(400); printf(".");
		Sleep(400); printf(".\n");
		Sleep(400);

		while (day < 1 || day>31) {
			printf(" �߸��� ��¥ �Է�!\n");
			printf(" �ٽ� �Է��� �ּ���.\n");
			printf(" �� �ñ��� ���� �ٽ� �Է����ּ��� : ");
			scanf("%d", &day);
			rewind(stdin);
		}
		FILE* fp1 = fopen(file1, "rb");
		FILE* fp2 = fopen(file2, "rb");

		while (fread(&in, sizeof(income), 1, fp1) > 0) {
			// ���� �Է¹�����¥�� ���� ����ü ���� month ���� day ���� ���ٸ�
			if (month == in.month && day == in.day) {
				totalincome += in.money;
				printf("����������������������������������������������\n");
				printf(" ���ͳ��� %d ��°\n", count++);
				printf(" ��¥ : %d�� %d��\n", in.month, in.day);
				printf(" �ݾ� : %d\n", in.money);
				printf(" �޸� : %s\n", in.memo);
			}
		}
		while (fread(&ou, sizeof(out), 1, fp2) > 0) {
			// ���� �Է� ���� ��¥�� ���� ����ü ���� month ���� month���� ���� day ���� ���ٸ�
			if (month == ou.month && day == ou.day) {
				totalout += ou.money;
				// 230915 ���ҹ���� ī���� ��� card������ ou.money �� ���� �ջ� by jung 
				if (strcmp(ou.pay, "ī��") == 0) {
					card += ou.money;
				}
				// 230915 ���ҹ���� ������ ��� cash������ ou.money �� ���� �ջ� by jung
				if (strcmp(ou.pay, "����") == 0) {
					cash += ou.money;
				}
				printf("����������������������������������������������\n");
				printf(" ���⳻�� %d ��°\n", cnt++);
				printf(" ��¥ : %d�� %d��\n", ou.month, ou.day);
				printf(" �ݾ� : %d��\n", ou.money);
				printf(" Ÿ�� : %s\n", ou.type);
				printf(" �޸� : %s\n", ou.memo);
				printf(" �������� : %s\n", ou.pay);
			}
		}
		fclose(fp1);
		fclose(fp2);

		// �Ϻ� ��ȸ ���
		// 230915 ī��, ���� �� ���ݾ� �߰� by jung
		printf("������������������������������������������������������������������������\n");
		printf(" %d�� %d�� ī�� �� ��� �ݾ� : %d��\n", month, day, card);
		printf(" %d�� %d�� ���� �� ��� �ݾ� : %d��\n", month, day, cash);
		printf(" %d�� %d�� �� ���� �ݾ� : %d��\n", month, day, totalincome);
		printf(" %d�� %d�� �� ���� �ݾ� : %d��\n", month, day, totalout);
		printf(" %d�� %d�� �� �ջ� �ݾ� : %d��\n", month, day, totalincome - totalout);
		system("pause");
	}
}

void month_check(int submenu2, char file1[], char file2[]) {
	// ���� ��ȸ
	if (submenu2 == 2) {
		int count = 1;
		int cnt = 1;
		int totalincome = 0;
		int totalout = 0;
		// 230915 ī�庯�� �߰� by jung
		int card = 0;
		// 230915 ���ݺ��� �߰� by jung
		int cash = 0;
		income in = { 0 };
		out ou = { 0 };

		FILE* fp1 = fopen(file1, "rb");
		FILE* fp2 = fopen(file2, "rb");
		int month = 0;
		printf(" �� �� �� ������ ����Ͻðڽ��ϱ�? : ");
		scanf("%d", &month);
		// 230916 �Է¹��� ����(���ѷ��� ����) by Jung
		rewind(stdin);
		// ������ �ֱ� 23.09.16 by Lee
		printf(" ���� �ҷ�������");
		Sleep(400); printf(".");
		Sleep(400); printf(".");
		Sleep(400); printf(".\n");
		Sleep(400);

		// 230914 month������ 1~12������ �ްԲ� �Ϸ�. by jung
		while (month < 1 || month > 12) {
			printf(" �߸��� ��¥ �Է�!\n");
			printf(" �ٽ� �Է��� �ּ���.\n");
			printf(" �� �� �� ������ ����Ͻðڽ��ϱ�? : ");
			scanf("%d", &month);
			rewind(stdin);
		}
		while (fread(&in, sizeof(income), 1, fp1) > 0) {
			if (month == in.month) {
				totalincome += in.money;
				printf("����������������������������������������������\n");
				printf(" ���ͳ��� %d ��°\n", count++);
				printf(" ��¥ : %d�� %d��\n", in.month, in.day);
				printf(" �ݾ� : %d\n", in.money);
				printf(" �޸� : %s\n", in.memo);
				
			}
		}
		while (fread(&ou, sizeof(out), 1, fp2) > 0) {
			if (month == ou.month) {
				totalout += ou.money;
				// 230915 ���ҹ���� ī���� ��� card������ ou.money �� ���� �ջ� by jung
				if (strcmp(ou.pay, "ī��") == 0) {
					card += ou.money;
				}
				// 230915 ���ҹ���� ������ ��� cash������ ou.money �� ���� �ջ� by jung
				if (strcmp(ou.pay, "����") == 0) {
					cash += ou.money;
				}
				printf("����������������������������������������������\n");
				printf(" ���⳻�� %d ��°\n", cnt++);
				printf(" ��¥ : %d�� %d��\n", ou.month, ou.day);
				printf(" �ݾ� : %d��\n", ou.money);
				printf(" Ÿ�� : %s\n", ou.type);
				printf(" �޸� : %s\n", ou.memo);
				printf(" �������� : %s\n", ou.pay);
			}
		}
		fclose(fp1);
		fclose(fp2);
		printf("������������������������������������������������������������������������\n");
		printf(" %d�� ī�� �� ���ݾ� : %d��\n", month, card);
		printf(" %d�� ���� �� ���ݾ� : %d��\n", month, cash);
		printf(" %d�� �� ���� �ݾ�: %d��\n", month, totalincome);
		printf(" %d�� �� ���� �ݾ� : %d��\n", month, totalout);
		printf(" %d�� �� �ջ� �ݾ� : %d��\n", month, totalincome - totalout);
		system("pause");
	}
}

void all_check(int submenu2, char file1[], char file2[]) {
	// ��ü ���� ��ȸ
	if (submenu2 == 3) {
		int count = 1;
		int cnt = 1;
		int totalincome = 0;
		int totalout = 0;
		int card = 0;
		int cash = 0;
		income in = { 0 };
		out ou = { 0 };
		printf(" ���� �ҷ�������");
		Sleep(400); printf(".");
		Sleep(400); printf(".");
		Sleep(400); printf(".\n");
		Sleep(400);
		FILE* fp1 = fopen(file1, "rb");
		FILE* fp2 = fopen(file2, "rb");
		while (fread(&in, sizeof(income), 1, fp1) > 0) {
			totalincome += in.money;
			printf("����������������������������������������������\n");
			printf(" ���ͳ��� %d ��°\n", count++);
			printf(" ��¥ : %d�� %d��\n", in.month, in.day);
			printf(" �ݾ� : %d��\n", in.money);
			printf(" �޸� : %s\n", in.memo);
		}
		while (fread(&ou, sizeof(out), 1, fp2) > 0) {
			totalout += ou.money;
			if (strcmp(ou.pay, "ī��") == 0) {
				card += ou.money;
			}
			if (strcmp(ou.pay, "����") == 0) {
				cash += ou.money;
			}
			printf("����������������������������������������������\n");
			printf(" ���⳻�� %d ��°\n", cnt++);
			printf(" ��¥ : %d�� %d��\n", ou.month, ou.day);
			printf(" �ݾ� : %d��\n", ou.money);
			printf(" Ÿ�� : %s\n", ou.type);
			printf(" �޸� : %s\n", ou.memo);
			printf(" �������� : %s\n", ou.pay);
		}
		fclose(fp1);
		fclose(fp2);
		printf("������������������������������������������������������������������������\n");
		printf(" ī�� �� ��� �ݾ�: %d��\n", card);
		printf(" ���� �� ��� �ݾ�: %d��\n", cash);
		printf(" �� ���� �ݾ�: %d��\n", totalincome);
		printf(" �� ���� �ݾ�: %d��\n", totalout);
		printf(" �� �ջ� �ݾ�: %d��\n", totalincome - totalout);
		system("pause");
	}
}

void delete_all(char file1[],char file2[]) {
	char del;
	printf("���� ���!��������������������������������������������\n");
	printf("��                            ��\n");
	printf("��  ��� �����Ͱ� �������ϴ�. ��\n");
	printf("��                            ��\n");
	printf("������������������������������������������������������������\n");
	printf(" �� ���� �Ͻðڽ��ϱ� Y/N : ");
	while (1) {
		scanf(" %c", &del);
		rewind(stdin);
		if (del == 'y' || del == 'Y') {
			FILE* fp1 = fopen(file1, "wb");
			FILE* fp2 = fopen(file2, "wb");
			fclose(fp1);
			fclose(fp2);

			printf(" ������ ������");
			Sleep(400); printf(".");
			Sleep(400); printf(".");
			Sleep(400); printf(".\n");
			Sleep(400);
			printf(" �����Ϸ�!\n");
			system("pause");
		}
		else if (del == 'n' || del == 'N') {
			printf(" ���� ��� �ϼ̽��ϴ�.\n");
			system("pause");
		}
		else {
			printf(" �߸��� �Է�!\n");
			printf(" �ٽ� �Է��� �ּ��� : ");
			continue;
		}
		break;
	}
}