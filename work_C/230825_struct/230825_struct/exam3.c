#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct car {
	char model[20];
	int price;
	int year;
	char color[20];
	char store[20];
};

struct customer {
	char name[20];
	char phoneNum[20];
	char address[50];
	char job[20];
	char birthday[20];
	struct car car;
};


int main()
{
	// 차량고객관리 프로그램 1.0
	// 고객, 차량 구조체 -> (클래스로 확장)
	// 고객: 이름, 전화번호, 주소, 직업, 생일
	// 차량: 모델명, 가격, 연식, 색상, 영업소
	// 10명의 고객과 차량 정보를 배열에서 랜덤하게 추출하여 입력 및 출력.
	char* name[5] = { "홍길동","이순신","강감찬","김유신","전우치" };
	char* phoneNum[5] = { "010-1234-5678","010-2345-6789","010-3456-7890","010-4567-8910","010-5678-9012" };
	char* address[5] = { "대구시 동구","대구시 남구","대구시 중구","대구시 수성구","대구시 서구" };
	char* job[5] = { "초딩","중딩","고딩","대딩","직장인" };
	char* birthday[5] = { "1월11일","12월12일","7월21일","5월26일","11월24일" };
	char* model[5] = { "K3","K5","K7","K8","K9" };
	int price[5] = { 10000000,20000000,30000000,40000000,50000000 };
	int year[5] = { 19,20,21,22,23 };
	char* color[5] = { "white","black","silver","yellow","gray" };
	char* store[5] = { "서울","대전","대구","부산","울산" };

	struct customer cus[10] = { 0 };
	struct car car[10] = { 0 };

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		strcpy(cus[i].name, name[rand() % 5]);
		strcpy(cus[i].phoneNum, phoneNum[rand() % 5]);
		strcpy(cus[i].address, address[rand() % 5]);
		strcpy(cus[i].job, job[rand() % 5]);
		strcpy(cus[i].birthday, birthday[rand() % 5]);
		strcpy(cus[i].car.model, model[rand() % 5]);
		cus[i].car.price = price[rand() % 5];
		cus[i].car.year = year[rand() % 5];
		strcpy(cus[i].car.color, color[rand() % 5]);
		strcpy(cus[i].car.store, store[rand() % 5]);
	}

	for (int i = 0; i < 10; i++) {
		printf("==========%d 번째 고객정보===========\n", i + 1);
		printf("%s %s %s %s %s\n", cus[i].name, cus[i].phoneNum, cus[i].address, cus[i].job, cus[i].birthday);
		printf("%s %d %d %s %s\n", cus[i].car.model, cus[i].car.price, cus[i].car.year, cus[i].car.color, cus[i].car.store);
	}
}