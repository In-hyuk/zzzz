#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch = 0;
	if (src == NULL || des == NULL) {
		printf("���� ���� ����!");
		return -1;
	}

	// ���� ������ ���� 1���� ����
	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}

	// ������ ���� �����ߴٸ�
	if (feof(src) != 0) {
		printf("���� ���� �Ϸ�!\n");
	}
	else {
		printf("���� ���� ����!\n");
	}
	fclose(src);
	fclose(des);
}