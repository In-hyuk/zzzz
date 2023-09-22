#pragma once

// ����ü ���� income ����
typedef struct _income {
	int month;
	int day;
	int money;
	char memo[50];
} income;

// ����ü ���� out ����
typedef struct _out {
	int month;
	int day;
	int money;
	char type[20];
	char pay[20];
	char memo[50];
} out;



void show_total_money(char file1[], char file2[], int totalincome, int totalspend);
void file_write_income(char file1[], income in);
void file_write_spend(char file2[], out ou);