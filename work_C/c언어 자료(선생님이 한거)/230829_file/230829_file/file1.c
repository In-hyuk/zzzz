// file1.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// C:/ 바로 밑에는 관리자 권한으로 생성 불가!
	// "C:/폴더" 에는 생성 가능.
	
	// 1.파일 오픈 (wt:쓰기, text)
	// w: 기존의 내용을 무시하고 덮어씀. (기존 삭제)
	// a: 기존의 내용을 보존하고 뒤에 붙여씀.
	// r: 파일의 내용을 읽어옴
	FILE* fp = fopen("data.txt", "at"); // data.txt 파일을 오픈
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return -1;
	}

	fputc('B', fp); // 문자 1개를 파일에 입력
	fputc('C', fp);
	fputc('D', fp);
	fclose(fp);
	// 1. 파일 오픈(쓰기, 읽기)
	// 2. 쓰거나 또는 읽거나 작업
	// 3. 파일 닫기
}