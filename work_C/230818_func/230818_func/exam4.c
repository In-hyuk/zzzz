#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal(int x, int y, char z);

int main()
{
	// 1. ���� 2���� ��Ģ�����ڸ� main()���� �Է¹���.
	// 2. ��Ģ�����ڴ� ���ڷ� �Է¹���. (+, -, x, /)
	// 3. 3���� ������ �Ű������� ����
	// 4. ��� ������� �����Ͽ� main()���� ����ϱ�.

	// scanf�Լ����� ���� �Է� �� ���� �Է½ÿ��� " %c" ���
	int n1, n2;
	char z;
	printf("ù��° �� �Է�: ");
	scanf("%d", &n1);
	printf("�ι�° �� �Է�: ");
	scanf("%d", &n2);
	printf("��Ģ������(+,-,x,/)�� �Է�: ");
	scanf(" %c", &z);
	printf("��� ������� %d �Դϴ�.\n", cal(n1, n2, z));
}

int cal(int x, int y, char z) {
	int result = 0;
	if (z == '+') {
		result = x + y;
	}
	else if (z == '-') {
		result = x - y;
	}
	else if (z == 'x') {
		result = x * y;
	}
	else if (z == '/') {
		result = x / y;
	}
	return result;
}