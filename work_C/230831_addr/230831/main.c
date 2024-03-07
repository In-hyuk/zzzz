#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	
#include <time.h>	
#include <string.h>

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
}ADDR;

int main_menu();
void addr_rand(char address[]);
void addr_dir(char address[]);
void addr_del(char address[]);
void addr_show(char address[]);

const int id[] = { 111,222,333,444,555 };
const char* name[] = { "홍길동","전우치","이순신","김민수","황철수" };
const char* tel[] = { "010-1111-2222","010-3333-4444","010-5555-6666","010-7777-8888","010-9999-0000" };
const char* addr[] = { "대구시 동구","대구시 남구","대구시 서구","대구시 중구","대구시 수성구" };
const char* email[] = { "kim@naver.com","lee@naver.com","jung@naver.com","Hwang@naver.com","Hong@naver.com" };

int main()
{
	char address[] = "address.bin";
	srand(time(NULL));
	// 파일명: address.bin -> 매개변수로 전달

	//=============================
	// 주소록 관리 프로그램 v1.0
	//=============================
	//1. 주소록 자동 생성
	//2. 주소록 직접 입력
	//3. 주소록 전체 삭제
	//4. 주소록 보기
	//5. 종료
	//=============================
	//메뉴 선택: 
	while (1) {
		switch (main_menu()) {
		case 1: 
			addr_rand(address);
			break;
		case 2:
			addr_dir(address);
			break;
		case 3:
			addr_del(address);
			break;
		case 4:
			addr_show(address);
			break;
		case 5:
			printf("프로그램을 종료합니다!");
			exit(0);
		default :
			printf("잘못된 메뉴 입력!\n");
		}
	}
}

int main_menu()
{
	printf("=============================\n");
	printf(" 주소록 관리 프로그램 v1.0\n");
	printf("=============================\n");
	printf("1. 주소록 자동 생성\n");
	printf("2. 주소록 직접 입력\n");
	printf("3. 주소록 전체 삭제\n");
	printf("4. 주소록 보기\n");
	printf("5. 종료\n");
	printf("=============================\n");
	printf("메뉴 선택: ");
	int num;
	scanf("%d", &num);
	return num;
}
void addr_rand(char address[])
{
	FILE* fp = fopen(address , "ab");
	ADDR add = { 0 };
	add.id = id[rand() % 5];
	strcpy(add.name, name[rand() % 5]);
	strcpy(add.tel, tel[rand() % 5]);
	strcpy(add.addr, addr[rand() % 5]);
	strcpy(add.email, email[rand() % 5]);
	fwrite(&add, sizeof(ADDR), 1, fp);
	fclose(fp);
}
void addr_dir(char address[])
{
	FILE* fp = fopen(address, "ab");
	ADDR add = { 0 };
	printf("id 입력: ");
	scanf("%d", &add.id);
	printf("이름 입력: ");
	scanf("%s", add.name);
	printf("주소 입력: ");
	getchar();
	gets(add.addr);
	printf("이메일 입력: ");
	scanf("%s", add.email);
	fwrite(&add, sizeof(ADDR), 1, fp);
	fclose(fp);
}
void addr_del(char address[])
{
	FILE* fp = fopen(address, "wb");
	fclose(fp);
}
void addr_show(char address[])
{
	FILE* fp = fopen(address, "rb");
	ADDR temp = { 0 };
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		printf("id: %d\n", temp.id);
		printf("이름: %s\n", temp.name);
		printf("주소: %s\n", temp.addr);
		printf("이메일: %s\n", temp.email);
		printf("------------------\n");
	}
	fclose(fp);
}
