#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _PERSON {
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} PERSON;

int menu();
void insert();
void show();

char* name[5] = { "홍길동","전우치","강감찬","이순신","김민수" };
int age[5] = { 10,20,30,40,50 };
char* tel[5] = { "010-1234-5678","010-2424-4242","010-3636-6363","010-8282-2828","010-9876-5432" };
char* addr[5] = { "대구시 동구","대구시 남구","대구시 서구","대구시 중구","대구시 수성구" };

int main()
{
	//-----------------------------
	//  파일 제어 프로그램 v1.0
	//-----------------------------
	// 1. 랜덤한 데이터 파일 입력
	// 2. 파일에서 읽어오기
	// 3. 종료
	//-----------------------------
	// 메뉴 선택: 
	
	while (1) {
		switch (menu()) {
		case 1:
			insert();
			break;
		case 2:
			show();
			break;
		case 3:
			printf("프로그램 종료\n");
			exit(0);
		default:
			printf("잘못된 메뉴 입력!\n");
		}
	}
}

int menu()
{
	printf("-----------------------------\n");
	printf("  파일 제어 프로그램 v1.0\n");
	printf("-----------------------------\n");
	printf("1. 랜덤한 데이터 파일 입력\n");
	printf("2. 파일에서 읽어오기\n");
	printf("3. 종료\n");
	printf("-----------------------------\n");
	printf("메뉴 선택: ");
	int num;
	scanf("%d", &num);
	return num;
}

void insert()
{
	PERSON son[10] = { 0 };
	FILE *fp = fopen("per.bin", "wb");
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		strcpy(son[i].name, name[rand() % 5]);
		son[i].age = age[rand() % 5];
		strcpy(son[i].tel, tel[rand() % 5]);
		strcpy(son[i].addr, addr[rand() % 5]);
		fwrite(&son[i], sizeof(PERSON), 1, fp);
	}
	fclose(fp);
}
void show()
{
	PERSON temp = { 0 };
	FILE* fp = fopen("per.bin", "rb");
	int cnt = 1;
	while (fread(&temp, sizeof(PERSON), 1, fp) == 1) {
		printf("번호:%d %s %d세 %s %s\n", cnt++, temp.name, temp.age, temp.tel, temp.addr);
	}
	fclose(fp);
}