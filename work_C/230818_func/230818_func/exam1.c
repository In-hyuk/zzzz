#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_num(int n);

int main()
{
	// 1~5���� ���������� �Ű������� �����Ͽ� ����ϴ� �Լ�
	// �Լ���: show_num()

	show_num(5); // show_num �Լ� ȣ��(����)
}

// �Ű������� ����ϴ� �Լ�
void show_num(int n)
{
	for (int i = 0; i < n; i++) {
		int number = i+1;
		printf("%d\n", number);
	}	
}



