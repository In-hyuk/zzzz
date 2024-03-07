#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct fren {
	char name[20];
	char sex;
	int age;
}Friend;

int menu();
void write();
void read();

int main()
{
	//--------------------------------
	//  파일 제어 프로그램 v1.0
	//--------------------------------
	// 1. 친구 정보 쓰기
	// 2. 친구 정보 읽기
	// 3. 종료
	//--------------------------------
	// 메뉴 선택:
	
	while (1) {
		switch (menu()) {
		case 1:
			write();
			break;
		case 2:
			read();
			break;
		case 3:
			printf("프로그램을 종료 합니다!");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!\n");
		}
	}

}

int menu()
{
	printf("--------------------------------\n");
	printf("  파일 제어 프로그램 v1.0\n");
	printf("--------------------------------\n");
	printf("1. 친구 정보 쓰기\n");
	printf("2. 친구 정보 읽기\n");
	printf("3. 종료\n");
	printf("--------------------------------\n");
	printf("메뉴 선택: ");
	int num;
	scanf("%d", &num);
	return num;
}

void write()
{
	Friend myfren1;
	FILE *fp = fopen("friend.bin", "wb");
	printf("이름 입력: ");
	scanf("%s", myfren1.name);
	getchar();
	printf("성별(M/F) 입력: ");
	scanf("%c", &myfren1.sex);
	printf("나이 입력: ");
	scanf("%d", &myfren1.age);
	fwrite(&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);
}

void read()
{
	Friend myfren2;
	FILE *fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
}