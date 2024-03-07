#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// C드라이브 바로 밑에는 관리자 권한으로 생성 불가
	// C:/폴더 에는 생성 가능
	
	// 1.파일 오픈 (wt:쓰기)
	// w: 기존의 내용을 뮈하고 덮어씀 (기존 삭제)
	// a: 기존의 내용을 보존하고 뒤에 붙여씀
	// r: 파일의 내용을 읽어옴
	FILE* fp = fopen("data.txt", "at");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
}