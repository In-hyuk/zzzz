#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// C����̺� �ٷ� �ؿ��� ������ �������� ���� �Ұ�
	// C:/���� ���� ���� ����
	
	// 1.���� ���� (wt:����)
	// w: ������ ������ ���ϰ� ��� (���� ����)
	// a: ������ ������ �����ϰ� �ڿ� �ٿ���
	// r: ������ ������ �о��
	FILE* fp = fopen("data.txt", "at");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
}