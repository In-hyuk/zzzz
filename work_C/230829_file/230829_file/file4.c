#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	printf("%c", ch);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	for (int i = 0; i < 4; i++) {
		fgets(str, sizeof(str), fp);
		printf("%s", str);
	}
	fclose(fp);
	return 0;
}