#include <stdio.h>

int main(void) 
{
	char* name = "ȫ�浿";
	int age = 200;
	char* phone = "010-1234-4321";
	char* address = "���� �Ѿ� ȫ�밨�� 11����";
	float height = 180.2;
	float weight = 78.5;
	char blood_type = 'B';

	printf("---------------------------------\n");
	printf("        ������ ���� Ȯ�μ�        \n");
	printf("---------------------------------\n");
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("��ȭ: %s\n", phone);
	printf("�ּ�: %s\n", address);
	printf("Ű: %.1fcm\n", height);
	printf("������: %.1fkg\n", weight);
	printf("������: %c��\n", blood_type);
	printf("---------------------------------\n");

	int a = 100; // �ʱ�ȭ(������ �����ϰ� �� ���� ���� ����)
	int b = 200;
	int c ; // ������ �����ϰ� �� ���� ���� �������� ����
	c = a + b;
	printf("%d\n\n", c);

	// ���� ����
	float PI = 3.14;
	float radius = 3.452;
	float area = radius * radius * PI;
	printf("%f\n", area);

	// ����ǥ ���ϴ� ���α׷� �ۼ��ϱ�
	int language, english, math, science = 0;
	language = 90;
	printf("%d\n", language);
	english = 80;
	printf("%d\n", english);
	math = 70;
	printf("%d\n", math);
	science = 60;
	printf("%d\n", science);
	float avg, sum;
	avg = (language + english + math + science) / 4;
	sum = language + english + math + science;
	printf("��հ�: %f, ����: %f\n", avg, sum);

	// �µ��� ���ϴ� ���α׷�
	int x;
	x = 40;
	float y;
	y = (x - 32) / 1.8;
	printf("%f\n", y);
}