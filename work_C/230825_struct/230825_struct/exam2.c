#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct professor {
	char name[20];	// 교수명
	char major[20]; // 전공
	int age;		// 교수나이
};

struct info {
	char name[20];			// 학생명
	char phoneNum[20];		// 전화번호
	int age;				// 나이
	char address[50];		// 주소
	struct professor pro;   // 담당교수
};


int main()
{
	// 1. 학생 정보 구조체 만들기
	// 2. 학생 정보는 이름, 휴대폰번호, 나이, 주소가 있음.
	// 3. 100명의 학생 정보를 랜덤하게 저장하여 출력
	// 4. 랜덤값은 배열에 값을 저장하고 랜덤하게 불러오게 처리
	char* name[5] = { "홍길동","전우치","김유신","유관순","강감찬" };
	char* addr[5] = { "대구 동구","대구 수성구","대구 북구","대구 남구","대구 서구" };
	int age[5] = { 20,30,40,50,60 };
	char* tel[5] = { "010-1234-5677","010-2424-2424","010-6731-2241","010-2421-1111","010-0000-0000" };
	
	srand(time(NULL));
	struct info st[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		strcpy(st[i].name, name[rand() % 5]);
		strcpy(st[i].phoneNum, tel[rand() % 5]);
		st[i].age = age[rand() % 5];
		strcpy(st[i].address, addr[rand() % 5]);
		printf(">>> %d번째 학생 정보 <<<\n", i + 1);
		printf("이름: %s\n", st[i].name);
		printf("번호: %s\n", st[i].phoneNum);
		printf("나이: %d\n", st[i].age);
		printf("주소: %s\n", st[i].address);
		printf("===================\n");
	}
	st[0].pro.age = 50; // 첫번째 학생의 담당교수 나이
	strcpy(st[0].pro.name, "홍교수");
	printf("%s 학생의 담당 교수: %s\n", st[0].name, st[0].pro.name);
}