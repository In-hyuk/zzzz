#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const float PI = 3.14;
	float radius;
	printf("��������? ");
	scanf("%f", &radius);
	float area = PI * radius * radius;
	printf("���� ���̴�: %.2f\n", area);
	//------------------------------------------------------------------
	int kor, eng, math, sci;
	printf("���� ����: ");
	scanf("%d", &kor);
	printf("���� ����: ");
	scanf("%d", &eng);
	printf("���� ����: ");
	scanf("%d", &math);
	printf("���� ����: ");
	scanf("%d", &sci);

	float sum, avg;
	sum = kor + eng + math + sci;
	avg = sum / 4;

	printf("��հ�: %.2f��, ����: %.2f��\n", avg, sum); 
	//-------------------------------------------------------------------
	int x;
	printf("ȭ�� �µ���? ");
	scanf("%d", &x);
	float y;
	y = (x - 32) / 1.8;
	printf("���� �µ��� : %f��", y);
	//------------------------------------------------------------------
	int a;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &a);
	char* b;
	b = (a % 2 == 0?"¦��":"Ȧ��");
	printf("a�� %s �Դϴ�.", b); 
	//-------------------------------------------------------------------
	int c, d = 0;
	printf("���� 2�� �Է�: ");
	scanf("%d %d", &c, &d);
	printf("�ִ밪 %d, �ּҰ� %d", c > d ? c : d, c < d ? c : d);
	//--------------------------------------------------------------------
	int x500, x100, x50, x10 = 0;
	int money;
	printf("��? ");
	scanf("%d", &money);

	x500 = money / 500;
	money = money % 500;
	x100 = money / 100;
	money = money % 100;
	x50 = money / 50;
	money = money % 50;
	x10 = money / 10;
	money = money % 10;

	printf("����� ����: %d��\n", x500);
	printf("��� ����: %d��\n", x100);
	printf("���ʿ� ����: %d��\n", x50);
	printf("�ʿ� ����: %d��\n", x10);
	printf("�ٲ��� ���� �ܵ�: %d��\n", money);
	
}

