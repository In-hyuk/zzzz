#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int ch = 0;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return -1;
	}
	/*while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}*/
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) break;
		printf("%c", ch);
	}
	fclose(fp);
}