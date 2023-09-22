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

void file_write_income(char file1[],income in) {
	// ���Ͽ��� income.bin�� �̾���� ab
	FILE* fp = fopen(file1, "ab");
	// fwrite ����in������ income����üũ�⸸ŭ �ѵ�� ����
	fwrite(&in, sizeof(income), 1, fp);
	fclose(fp);
}

void file_write_spend(char file2[], out ou) {
	FILE* fp = fopen(file2, "ab");
	fwrite(&ou, sizeof(out), 1, fp);
	fclose(fp);
}

void show_total_money(char file1[], char file2[], int totalincome, int totalspend)
{
	//���� �б�
	//����ü income �� ���� in �ʱ�ȭ
	income in = { 0 };
	//����ü out�� ���� ou �ʱ�ȭ
	out ou = { 0 };

	FILE* fp1 = fopen(file1, "rb");
	FILE* fp2 = fopen(file2, "rb");
	while (fread(&in, sizeof(income), 1, fp1) > 0) {
		// �Ѽ��� = �Ѽ��� + ����ü income.money
		totalincome += in.money;
	}
	while (fread(&ou, sizeof(out), 1, fp2) > 0) {
		// ������ = ������ + ����ü income.money
		totalspend += ou.money;
	}
	fclose(fp1);
	fclose(fp2);

	font_color(WHITE);
	printf("�� ���� : %d��\n", totalincome);

	font_color(RED);
	printf("�� ���� : %d��\n", totalspend);

	// ���� �Ѽ��� - ������ 0���� Ŭ��
		//-��Ʈ�� �ʷϻ�, ���� �ڻ� ���
	if (totalincome - totalspend > 0) {
		font_color(GREEN);
		printf("���� �ڻ� : %d��\n", totalincome - totalspend);
	}
	// �ƴϰ� 0�̰ų� ������ 
	//-��Ʈ ����, ���� �ڻ����
	else if (totalincome - totalspend <= 0) {
		font_color(RED);
		printf("���� �ڻ� : %d��\n", totalincome - totalspend);
	}
}





