// exam3.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

struct car {
	char model[20];		// �𵨸�
	char price[20];		// ����
	int year;			// ����
	char color[10];		// ����
	char office[50];	// ������
};

struct customer {
	char name[20];		// ����
	char tel[20];		// ��ȭ
	char addr[50];		// �ּ�
	char job[20];		// ����
	char birth[20];		// ����
	struct car ca;		// ��������
};

int main()
{
	// ������ ���� ���α׷� 1.0
	// ��, ���� ����ü -> (Ŭ������ Ȯ��)
	// ��:�̸�, ��ȭ��ȣ, �ּ�, ����, ����
	// ����:�𵨸�, ����, ����, ����, ������
	// 10���� �� ������ �迭���� �����ϰ� �����Ͽ� �Է� �� ���.
}