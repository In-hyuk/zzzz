#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_day(int n);

int main()
{
	// main()���� 1~7 ������ ���ڸ� �Է¹޾Ƽ� �Ű������� �����Ͽ� �Ű������� ���� 1�̸�, ������ ���. 2�̸�, ȭ���� ���.
	// 7�̸�, �Ͽ��� ����ϴ� �Լ� �ۼ�
	int n;
	printf("1~7���� ���� �Է�: ");
	scanf("%d", &n);
	show_day(n); // show_day�Լ� ȣ��(����)
}

void show_day(int n)
{
	/*if (n == 1) {
		printf("������");
	}
	if (n == 2) {
		printf("ȭ����");
	}
	if (n == 3) {
		printf("������");
	}
	if (n == 4) {
		printf("�����");
	}
	if (n == 5) {
		printf("�ݿ���");
	}
	if (n == 6) {
		printf("�����");
	}
	if (n == 7) {
		printf("�Ͽ���");
	}*/

	switch (n) {
	case 1:
		printf("������\n"); break;
	case 2:
		printf("ȭ����\n"); break;
	case 3:
		printf("������\n"); break;
	case 4:
		printf("�����\n"); break;
	case 5:
		printf("�ݿ���\n"); break;
	case 6:
		printf("�����\n"); break;
	case 7:
		printf("�Ͽ���\n"); break;
	default :
		printf("�߸��� ����");
	}
}
