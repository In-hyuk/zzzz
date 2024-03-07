#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch = 0;
	if (src == NULL || des == NULL) {
		printf("파일 오픈 실패!");
		return -1;
	}

	// 파일 끝까지 문자 1개씩 읽음
	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}

	// 파일의 끝에 도달했다면
	if (feof(src) != 0) {
		printf("파일 복사 완료!\n");
	}
	else {
		printf("파일 복사 실패!\n");
	}
	fclose(src);
	fclose(des);
}