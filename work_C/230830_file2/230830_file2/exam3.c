#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()

typedef struct _CAR {
	char model[20];
	char price[20];
	int year;
}CAR;

typedef struct _CUST {
	char name[20];
	char tel[20];
	char addr[50];
	CAR car;
}CUST;

int main_menu();
void self_insert();

int main()
{
	char* name[5] = { "홍길동","강감찬","이순신","김민수","박민수" };
	char* tel[5] = { "010-1234-1234", "010-1234-1111", "010-1234-2222","010-1234-3333", "010-1234-4444" };
	char* addr[5] = { "대구 동구 신암4동", "서울 동구 신암4동" ,"광주 동구 신암4동", "대전 동구 신암4동", "부산 동구 신암4동" };
	char* model[5] = { "그랜저","제네시스","소나타","아반떼","모닝" };
	char* price[5] = { "천만원","이천만원","삼천만원","사천만원","오천만원" };
	int year[5] = { 19,20,21,22,23 };
	// 주의: 파일에 저장할 때 기존 데이터가 계속 존재해야됨!!!
	//============================
	// 고객 차량 관리 프로그램 v2.0
	//============================
	// 1. 고객 정보 직접 입력
	// 2. 고객 정보 랜덤 입력
	// 3. 고객 정보 보기
	// 4. 종료
	//============================
	// 메뉴 선택: 

	// 고객 정보: 이름, 전화, 주소
	// 차량 정보: 모델명, 가격, 연식
	srand(time(NULL));
	while (1) {
		switch (main_menu()) {
		case 1: 
			self_insert();
			break;
		case 2: {
			FILE* fp = fopen("car.bin", "ab");
			CUST cus = { 0 };
			strcpy(cus.name, name[rand() % 5]);
			strcpy(cus.tel, tel[rand() % 5]);
			strcpy(cus.addr, addr[rand() % 5]);
			strcpy(cus.car.model, model[rand() % 5]);
			strcpy(cus.car.price, price[rand() % 5]);
			cus.car.year = year[rand() % 5];
			fwrite(&cus, sizeof(CUST), 1, fp);
			fclose(fp);
		}  
			break;
		case 3: {
			FILE* fp = fopen("car.bin", "rb");
			CUST temp = { 0 };
			while (fread(&temp, sizeof(CUST), 1, fp) == 1) {
				printf("이름: %s, 전화: %s, 주소: %s, 모델: %s, 가격: %s, %d년식\n", temp.name,temp.tel,temp.addr, temp.car.model, temp.car.price, temp.car.year);
				printf("------------------------------------------------------------------------------------------------\n");
			}
			fclose(fp);
		}
			break;
		case 4: {
			FILE* fp = fopen("car.bin", "wb");
			fclose(fp);
			break;
		}
		case 5:
			printf("프로그램을 종료합니다!");
			exit(0);
		default :
			printf("잘못된 메뉴 선택!\n");
		}
	}
}

int main_menu()
{
	printf("============================\n");
	printf("고객 차량 관리 프로그램 v2.0\n");
	printf("============================\n");
	printf("1. 고객 정보 직접 입력\n");
	printf("2. 고객 정보 랜덤 입력\n");
	printf("3. 고객 정보 보기\n");
	printf("4. 고객 정보 전체 삭제\n");
	printf("5. 종료\n");
	printf("============================\n");
	printf("메뉴 선택: ");
	int num;
	scanf("%d", &num);
	return num;
}

void self_insert()
{
	FILE* fp = fopen("car.bin", "ab");
	CUST cus = { 0 };
	printf("이름 입력: ");
	scanf("%s", cus.name);
	printf("전화 입력: ");
	scanf("%s", cus.tel);
	printf("주소 입력: ");
	//scanf("%s", cus.addr); 띄어쓰기 인식안됨
	getchar();
	gets(cus.addr); // 공백을 입력받기 위해 사용 ex)대구시 동구
	printf("차량 모델 입력: ");
	scanf("%s", cus.car.model);
	printf("차량 가격 입력: ");
	scanf("%s", cus.car.price);
	printf("차량 연식: ");
	scanf("%d", &cus.car.year);
	fwrite(&cus, sizeof(CUST), 1, fp);
	fclose(fp);
}