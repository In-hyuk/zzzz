#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char* name[] = { "홍길동", "김길동", "박길동", "최길동" };
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('\n', fp);
	fputs("My name is Hong\n", fp);
	fputs("당신의 이름은 윤\n", fp);
	for (int i = 0; i < 4; i++) {
		fputs(name[i], fp);
		fputc('\n', fp);
	}
	fclose(fp);
}