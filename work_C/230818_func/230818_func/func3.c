#include <stdio.h>
int get_number();
char get_char();

int main()
{
	// ��ȯ���� ������Ÿ�� �Լ���() -> �Ű����� x
	int n = get_number(); // return�� 200�� ���� ���� n�� ����
	printf("���Ϲ��� ��: %d\n", n);
	int b = get_char();
	printf("���Ϲ��� ����: %c\n", b);

	// ������ ����ؼ� ���ϰ��� ���� �ʰ� ���� �Լ� ���ϰ��� %d�� ����
	printf("�Լ� ���ϰ�: %c\n", get_char());
}

int get_number()
{
	int n = 200;
	return n; // �Լ��� ����Ǳ����� return ���� ȣ���� ������ �ǵ�����
	          // ���ϰ��� 1���� ���� ����
}

char get_char()
{
	char c = 'B';
	return c;
}