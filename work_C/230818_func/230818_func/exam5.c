#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gugu(int n);

int main()
{
	// 1.�������� ����ϴ� ���ڸ� main()���� �Է� ����.
	// 2.��) 3�� �Է¹޾� �Ű������� �����ϸ� 3�� ���
	// 3.�Է¹��� ���ڸ� �Ű������� �����Ͽ� �Լ����� ������ ���
	int n;
	printf("�� ��? ");
	scanf("%d", &n);
	gugu(n);
}

void gugu(int n)
{
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}
}