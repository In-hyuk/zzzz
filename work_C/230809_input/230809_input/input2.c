#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ������� : const�� ���� �տ� ����. (���� �Ұ�)
	int result;
	int num1, num2, num3; // �Ϲݺ��� -> ���� ����

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
	return 0;

	// �������
	const int n = 100;
	int n2 = 200;
	n2 = 300; // �Ϲݺ����� ���� ���� ����
	n = 500;  // ��������� ���� ���� �Ұ� 
}