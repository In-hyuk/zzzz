// file1.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _PERSON {
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} PERSON;

int main()
{
	PERSON son = { "홍길동", 100, "010-1234-1234", "한양 홍대감댁" };
	PERSON so2 = { "전우치", 200, "010-1234-4321", "강원 두메산골" };

	// 파일 쓰기
	FILE* fp = fopen("person.bin", "wb");
	if (fp == NULL) {
		printf("파일 쓰기 오픈 에러!!\n");
		return -1;
	}
	fwrite(&son, sizeof(son), 1, fp);
	fwrite(&so2, sizeof(so2), 1, fp);
	printf("파일에 정상적으로 저장되었습니다!\n");
	fclose(fp);

	// 파일 읽기
	FILE* fp3 = fopen("person.bin", "rb");
	if (fp3 == NULL) {
		printf("파일 읽기 오픈 에러!!\n");
		return -1;
	}

	PERSON temp3 = { 0 };
	// 파일에서 정상적으로 구조체 1개를 읽었다면
	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("이름:%s 나이:%d 전화:%s 주소:%s\n", temp3.name,
			temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp3);
}