#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[30] = { 0 };
	int ch = 0;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return -1;
	}
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	// \n�� ���������� read
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	for (int i = 0; i < 4; i++) {
		fgets(str, sizeof(str), fp);
		printf("%s", str);
	}
	fclose(fp);
}