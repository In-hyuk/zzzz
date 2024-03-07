#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int menu();
void insert(struct customer cus[]);
void random_insert(struct customer cus[]);
void show(struct customer cus[]);

struct car {
	char model[20];
};

struct manager {
	char name[20];
};

struct customer {
	char name[20];
	struct car car;
	struct manager mana;
};

char* name[5] = { "홍길동", "전우치", "유관순", "이순신", "김유신" };
char* model[5] = { "그랜저", "제네시스", "산타페", "소나타", "K9" };
char* dealer[5] = { "김주임","이주임","정주임","황주임","권주임" };

int main()
{
	// 고객이름, 차량모델, 매니저명
	//--------------------------------
	// 고객 차량 관리 프로그램 v1.6
	//--------------------------------
	// 1. 고객정보 직접 입력
	// 2. 고객정보 랜덤 입력
	// 3. 고객정보 보기
	// 4. 종료
	//--------------------------------
	// 메뉴선택:
	struct customer cus[5] = { 0 };

	srand(time(NULL));
		while (1) {
		switch (menu()) {
		case 1:
			insert(cus);
			break;
		case 2:
			random_insert(cus);
			break;
		case 3:
			show(cus);
			break;
		case 4:
			printf("프로그램 종료");
			exit(0);
			break;
		default:
			printf("잘못된 메뉴 선택!\n");

		}
	}
}

int menu()
{
	printf("--------------------------------\n");
	printf(" 고객 차량 관리 프로그램 v1.6\n");
	printf("--------------------------------\n");
	printf("1. 고객정보 직접 입력\n");
	printf("2. 고객정보 랜덤 입력\n");
	printf("3. 고객정보 보기\n");
	printf("4. 종료\n");
	printf("--------------------------------\n");
	printf("메뉴 선택: ");
	int num;
	scanf("%d", &num);
	return num;
}

void insert(struct customer cus[])
{
	printf("이름 입력: ");
	scanf("%s", &cus[0].name);
	printf("차량 모델 입력: ");
	scanf("%s", &cus[0].car.model);
	printf("딜러 이름 입력: ");
	scanf("%s", &cus[0].mana.name);
}

void random_insert(struct customer cus[])
{
	for (int i = 0; i < 5; i++) {
		strcpy(cus[i].name, name[rand() % 5]);
		strcpy(cus[i].car.model, model[rand() % 5]);
		strcpy(cus[i].mana.name, dealer[rand() % 5]);
	}
}

void show(struct customer cus[])
{
	for (int i = 0; i < 5; i++) {
		// cus[i].name의 값이 ""과 같다면
		if (strcmp(cus[i].name, "") == 0) {
			break;
		}
		printf("고객명:%s\n", cus[i].name);
		printf("차랑명:%s\n", cus[i].car.model);
		printf("매니저명:%s\n", cus[i].mana.name);
	}
}