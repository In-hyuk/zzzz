#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;
	printf("���� one: "); // ����Ϳ� ���� ���
	// �ֽ� ���־�Ʃ��������� scanf�� ���Ұ�.
	// scanf_s ��� �Լ��� ��ü�Ǿ���.
	// ������ C��� ǥ���Լ��� scanf �� ����.
	scanf("%d", &num1); // Ű���忡�� ������ �Է�
	printf("���� two: ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}