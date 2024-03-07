#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char hak(int avg);

struct score { // 1명
	int kor;
	int eng;
	int math;
	int sum;
	int avg;
	char hak;
	char name[20];
};

int main()
{
	// 학생 5명의 국,영,수 점수와 총점, 평균, 학점을 정의하는 구조체
	// 1. 구조체를 정의하고 배열변수 선언
	char* name[5] = { "홍길동","이순신","강감찬","전우치","김유신" };
	int s[] = { 10,20,30,40,50,60,70,80,90,100 };
	struct score sc_arr[5] = { 0 };
	// 2. 5명의 학생에게 랜덤한 국,영,수 점수를 입력하고 출력.
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		strcpy(sc_arr[i].name, name[rand() % 5]);
		sc_arr[i].kor = s[rand() % 10];
		sc_arr[i].eng = s[rand() % 10];
		sc_arr[i].math = s[rand() % 10];
		/*printf("%d %d %d\n", sc_arr[i].kor, sc_arr[i].eng, sc_arr[i].math);*/
		sc_arr[i].sum = sc_arr[i].kor + sc_arr[i].eng + sc_arr[i].math;
		sc_arr[i].avg = sc_arr[i].sum / 3;
		sc_arr[i].hak = hak(sc_arr[i].avg);
		printf("%s ", sc_arr[i].name);
		printf("%d %d %d 총점:%d 평균:%d ", sc_arr[i].kor, sc_arr[i].eng, sc_arr[i].math, sc_arr[i].sum, sc_arr[i].avg);
		printf("%c\n", sc_arr[i].hak);
		}
}

char hak(int avg)
{
	char hak = 0;
	if (avg >= 90) {
		hak = 'A';
	}
	else if (avg >= 80) {
		hak = 'B';
	}
	else if (avg >= 70) {
		hak = 'C';
	}
	else if (avg >= 60) {
		hak = 'D';
	}
	else if (avg >= 50) {
		hak = 'E';
	}
	else
		hak = 'F';
	return hak;
}