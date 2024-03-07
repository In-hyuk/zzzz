#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct fren {
	char name[10];
	char sex;
	int age;
} Friend;

int main()
{
	FILE* fp;
	Friend myfren1;
	Friend myfren2;

	// 파일 쓰기
	fp = fopen("friend.bin", "wb");
	printf("이름 입력:");
	scanf("%s", myfren1.name);
	//getchar();
	printf("성별(M/F) 입력:");
	scanf("%c", &myfren1.sex);
	printf("나이 입력:");
	scanf("%d", &myfren1.age);
	fwrite(&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);

	// 파일 읽기
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("이름:%s\n", myfren2.name);
	printf("성별:%c\n", myfren2.sex);
	printf("나이:%d\n", myfren2.age);
	fclose(fp);
}