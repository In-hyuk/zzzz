#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*���� ��ȯ�� ���α׷� �����
	  ������ 500��,100��,50��,10��
	  ���� ���� ���� ���� ����� �ʱⰪ 0
	  Ư�� �ݾ� �Է¹ޱ� (�� : 1370)
	  �ݾ��� ���� ������ �ٲٱ� */
	int x500, x100, x50, x10 = 0;
	int money; // �Է¹޴� �ݾ�
	printf("�󸶸� �ְڽ��ϱ�? ");
	scanf("%d", &money);
	
	x500 = money / 500; // 500���� ���� ��(500��¥�� ���� ����)
	//money = money % 500;
	money %= 500;
	x100 = money / 100;
	money = money % 100;
	x50 = money / 50;
	money = money % 50;
	x10 = money / 10;
	money = money % 10;
	
	printf("---------------------------\n");
	printf(" ���� ��ȯ�� ���α׷� 1.0\n");
	printf("---------------------------\n");
	printf("  ����� ����    : %d ��\n",x500);
	printf("   ��� ����     : %d ��\n",x100);
	printf("  ���ʿ� ����    : %d ��\n",x50);
	printf("   �ʿ� ����     : %d ��\n",x10);
	printf("�ٲ��� ���� �ܵ� : %d ��\n",money);
	printf("---------------------------\n");	
}