// func3.c
#include <stdio.h>
#include <stdlib.h>	// srand()
#include <time.h>	// time()
void hap_func();
void avg_func();
char hak_func(int avg);
int main()
{
	// 5명의 국,영,수 점수를 랜덤하게 생성 (0~100)
	int score[5][3] = { 0 };
	srand(time(NULL));
	// 랜덤하게 발생한 숫자를 5명의 학생(5x3배열)에게 저장
	int hap = 0; // 총점
	int avg = 0; // 평균
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			score[i][j] = (rand() % 101); // 0~100
			printf("score[%d][%d]=%d\t", i, j, score[i][j]);
			hap = hap + score[i][j]; // hap += score[i][j];
		} // 열이 끝나는 위치
		avg = hap / 3;
		printf("총점:%d\t평균:%d\t", hap, avg);
		printf("%c학점", hak_func(avg));
		hap = 0;		
		printf("\n");
	}
}

void hap_func() // 합을 구하는 함수
{

}

void avg_func() // 평균을 구하는 함수
{

}

char hak_func(int avg) // 학점을 구하는 함수
{
	char hak = 0;
	if (avg >= 90 && avg <= 100) {
		hak = 'A';
	}
	else if (avg >= 80 && avg <= 89) {
		hak = 'B';
	}
	else if (avg >= 70 && avg <= 79) {
		hak = 'C';
	}
	else if (avg >= 60 && avg <= 69) {
		hak = 'D';
	}
	else {
		hak = 'F';
	}
	return hak;
}