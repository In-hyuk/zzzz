#include <stdio.h>

int add(int n1, int n2);
int sub(int n1, int n2);

int main(void)
{
	// ���ϰ��� ������Ÿ�� �Լ���(�Ű�����, ...)
	int n1 = 200; // ��������
	int n2 = 50;
	int a = add(n1, n2);
	printf("����: %d\n", a);
	printf("����: %d\n", sub(n1, n2));
}

int add(int n1, int n2) // �� ������ -> ȣ�������� ���� ä����
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	int res = n1 - n2;
	return res;
}
