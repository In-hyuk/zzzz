// file1.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// C:/ �ٷ� �ؿ��� ������ �������� ���� �Ұ�!
	// "C:/����" ���� ���� ����.
	
	// 1.���� ���� (wt:����, text)
	// w: ������ ������ �����ϰ� ���. (���� ����)
	// a: ������ ������ �����ϰ� �ڿ� �ٿ���.
	// r: ������ ������ �о��
	FILE* fp = fopen("data.txt", "at"); // data.txt ������ ����
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return -1;
	}

	fputc('B', fp); // ���� 1���� ���Ͽ� �Է�
	fputc('C', fp);
	fputc('D', fp);
	fclose(fp);
	// 1. ���� ����(����, �б�)
	// 2. ���ų� �Ǵ� �аų� �۾�
	// 3. ���� �ݱ�
}