// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <windows.h> // win32 api 사용(윈도우 환경에서만 사용 가능)
#include <conio.h>
// #define NOCURSOR		0
// #define SOLID_CURSOR 1
// #NORMAL_CURSOR		2

#define RAND_SIZE 10 

typedef enum {
	NOCURSOR,		// 커서 없앰		0
	SOLID_CURSOR,	// solid 형태	1
	NORMAL_CURSOR	// 일반 형태		2
}CURSOR_TYPE;

typedef enum {
	BLACK,	// 0
	BLUE,	// 1
	GREEN,	// 2
	CYAN,
	RED,
	PURPLE,
	YELLOW,
	WHITE,
	GRAY,
	LIGHT_BLUE,
	LIGHT_GREEN,
	LIGHT_CYAN,
	LIGHT_RED,
	LIGHT_PURPLE,
	LIGHT_YELLOW,
	LIGHT_GRAY	// 15
}FONT_COLOR;

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
} ADDR;

const int id[] = { 111, 222, 333, 444, 555 };
const char* name[] = { "홍길동", "전우치", "강감찬", "유관순", "이순신" };
const char* tel[] = { "010-1234-1234", "010-1234-1111", "010-1234-2222",
	"010-1234-3333", "010-1234-4444" };
const char* addr[] = { "대구 동구 신암4동", "서울 동구 신암4동" ,
	"광주 동구 신암4동", 	"대전 동구 신암4동", "부산 동구 신암4동" };
const char* email[] = { "hong@naver.com", "joen@kakao.com",
	"kang@gmail.com", "yu@msn.com", "lee@daum.net" };

// 함수 정의 프로토타입
int main_menu();
void title();
void gotoxy(int x, int y);
void set_cursor_type(CURSOR_TYPE type);
void font_color(FONT_COLOR color);
void file_write_rand(ADDR ad[], char filename[], int len);
void file_wirte(ADDR ad, char filename[]);
void file_del_all(char filename[]);
void file_read(char filename[]);
void file_search(char filename[], char name[]);
void file_delete(char filename[], char delName[]);
void file_update(char filename[], char name1[], char name2[]);

int main()
{
	char file[] = "address.bin";
	srand(time(NULL)); // 랜덤함수 사용을 위한 시드 설정
	set_cursor_type(NOCURSOR);
	font_color(11);
	title();
	_getch();

	system("cls");
	font_color(3);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case 1:
		{
			ADDR ad[RAND_SIZE] = { 0 };
			int len = sizeof(ad) / sizeof(ADDR); // 배열 크기
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);
			printf("랜덤 데이터를 생성중입니다......\n");
			Sleep(2000); // sec - ms - us - ns 2000ms(약2초)
			system("pause");
			break;
		}
		case 2:
		{
			ADDR ad = { 0 };
			printf("ID: ");
			scanf("%d", &ad.id);

			printf("이름: ");
			scanf("%s", ad.name);

			printf("전화: ");
			scanf("%s", ad.tel);

			printf("주소: ");
			getchar();
			gets(ad.addr);

			printf("Email: ");
			scanf("%s", ad.email);
			file_wirte(ad, file);
			printf("데이터가 입력중입니다......\n");
			Sleep(1000);
			system("pause");
			break;
		}
		case 3:
			file_del_all(file);
			printf("전체 데이터를 삭제중입니다......\n");
			Sleep(1000);
			system("pause");
			break;
		case 4:
			file_read(file);
			system("pause");
			break;
		case 5:
			// 검색 - 이름
		{
			char name[20] = { 0 };
			printf("검색할 이름을 입력하세요: ");
			scanf("%s", name);
			file_search(file, name);
			system("pause");
			break;
		}
		case 6:
		{
			printf("삭제할 이름을 입력하세요: ");
			char name[20] = { 0 };
			scanf("%s", name);
			printf("%s 데이터를 삭제중입니다......\n", name);
			file_delete(file, name);
			Sleep(1000);
			system("pause");
			break;
		}
		case 7:
			// 수정
			printf("수정하고 싶은 이름: ");
			char name1[20] = { 0 };
			scanf("%s", name1);
			printf("수정할 이름: ");
			char name2[20] = { 0 };
			scanf("%s", name2);
			file_update(file, name1, name2);
			system("pause");
			break;
		case 8:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!\n");
		}
		system("cls");
	}
	
}

int main_menu()
{
	printf("=============================\n");
	printf("주소록 관리 프로그램 v1.0\n");
	printf("=============================\n");
	printf("1.주소록 자동 생성\n");
	printf("2.주소록 직접 입력\n");
	printf("3.주소록 전체 삭제\n");
	printf("4.주소록 보기\n");
	printf("5.주소록 검색\n");
	printf("6.주소록 삭제\n");
	printf("7.주소록 수정\n");
	printf("8.종료\n");
	printf("=============================\n");
	printf("메뉴 선택:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void title()
{
	int x = 5;
	int y = 3;
	gotoxy(x, y + 0); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	gotoxy(x, y + 1); printf("■								 ■");
	gotoxy(x, y + 2); printf("■								 ■");
	gotoxy(x, y + 3); printf("■								 ■");
	gotoxy(x, y + 4); printf("■								 ■");
	gotoxy(x, y + 5); printf("■								 ■");
	gotoxy(x, y + 6); printf("■								 ■");
	gotoxy(x, y + 7); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	gotoxy(x + 18, y + 2); printf("주소록 관리 프로그램 v1.5");
	gotoxy(x + 33, y + 4); printf("개발날짜: 2023.09.01");
	gotoxy(x + 33, y + 5); printf("개발자: 박상신");
	gotoxy(x, y + 12); printf("메인화면 이동은 아무키나 누르세요!!!");
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	// 윈도우 콘솔에서 커서 위치 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void set_cursor_type(CURSOR_TYPE type)
{
	CONSOLE_CURSOR_INFO info = { 0 };
	switch (type) {
	case NOCURSOR:
		info.dwSize = 1;
		info.bVisible = FALSE;
		break;
	case SOLID_CURSOR:
		info.dwSize = 100;
		info.bVisible = TRUE;
		break;
	case NORMAL_CURSOR:
		info.dwSize = 20;
		info.bVisible = TRUE;
		break;	
	}
	// 커서 타입을 설정 (win32 API)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void font_color(FONT_COLOR color)
{
	// 폰트에 색상 적용
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void file_write_rand(ADDR ad[], char filename[], int len)
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}

	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void file_wirte(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// 데이터가 없으면 "데이터가 존재하지 않습니다" 에러 메시지를 출력!
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		printf("번호:%d\n", count++);
		printf("ID:%d\n", ad.id);
		printf("이름:%s\n", ad.name);
		printf("전화:% s\n", ad.tel);
		printf("주소:%s\n", ad.addr);
		printf("이메일:%s\n", ad.email);
		printf("===================\n");
		check = 1;
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_del_all(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 읽기 오류!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search(char filename[],char name[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, name) == 0) {
			printf("번호:%d\n", count++);
			printf("ID:%d\n", ad.id);
			printf("이름:%s\n", ad.name);
			printf("전화:% s\n", ad.tel);
			printf("주소:%s\n", ad.addr);
			printf("이메일:%s\n", ad.email);
			printf("===================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_delete(char filename[],char delName[])
{
	// 삭제할 이름과 파일에서 읽어온 이름이 같은지 비교한 후 다른 이름만 출력
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}

	ADDR ad = { 0 };
	ADDR del_arr[100] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) { // 삭제할 이름이 아니라면 
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	if (check == 0) {
		del_arr[0].id = 0;
		strcpy(del_arr[0].name, "");
		strcpy(del_arr[0].addr, "");
		strcpy(del_arr[0].tel, "");
		strcpy(del_arr[0].email, "");
	}

	// 배열에 저장된 구조체 정보를 파일에 쓰기
	FILE* fp1 = fopen(filename, "wb");
	if (fp1 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	for (int j = 0; j < i; j++) {
		fwrite(&del_arr[j], sizeof(ADDR), 1, fp1);
	}
	//for (int i = 0; i < 100; i++) {
	//	if(del_arr[i].id != 0)
	//	//if(strcmp(del_arr[i].name,"")!=0)
	//	fwrite(&del_arr[i], sizeof(ADDR), 1, fp1);
	//}
	fclose(fp1);
}

void file_update(char filename[],char name1[],char name2[])
{
	// 검색할 이름, 수정할 이름 -> 2개의 이름을 입력받음
	// 파일에서 읽어온 이름과 검색할 이름을 비교해서 같으면 수정할 이름을 바꾸어서 빈 배열에 복사
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	ADDR new_name[100] = { 0 };
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		new_name[i].id = ad.id;
		if (strcmp(ad.name, name1) == 0) {
			strcpy(new_name[i].name, name2);
		}
		else {
			strcpy(new_name[i].name, ad.name);
		}
		strcpy(new_name[i].addr, ad.addr);
		strcpy(new_name[i].tel, ad.tel);
		strcpy(new_name[i].email, ad.email);
		i++;
	}
	int count = i;
	fclose(fp);

	FILE* fp1 = fopen(filename, "wb");
	if (fp1 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	for (int i = 0; i < count; i++) {
		if (new_name[i].id != 0)
		fwrite(&new_name[i], sizeof(ADDR), 1, fp1);
	}
	fclose(fp1);
}