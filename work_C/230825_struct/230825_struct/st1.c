#include <stdio.h>

int main()
{
	// 학생 관리 프로그램 (100명) - 이름, 전화번호, 나이
	char name1[20];
	char tel1[20];
	int age1;
	// 일반 변수로 관리하기에는 불편 (300개 필요)

	// 일반 변수가 힘드니까 배열
	char name[100][20];
	char tel[100][20];
	int age[100];
	// 배열을 사용하면 일반 변수를 사용하는것보다 갯수는 많이 줄지만 프로그래밍을 하기에는 불편

	// 1명의 학생 정보를 가지는 구조(틀)
	struct student {
		char name[20];
		char tel[20];
		int age;
	};

}