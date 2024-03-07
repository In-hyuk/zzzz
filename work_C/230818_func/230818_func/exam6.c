#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void score(int x, int y, int z);

int main()
{
	int kor, eng, math;
	printf("국어 점수: ");
	scanf("%d", &kor);
	if (kor < 0 || kor >100) {
		printf("잘못된 점수 입력!\n");
		printf("다시 입력: ");
		scanf("%d", &kor);
	}
	printf("영어 점수: ");
	scanf("%d", &eng);
	if (eng < 0 || eng >100) {
		printf("잘못된 점수 입력!\n");
		printf("다시 입력: ");
		scanf("%d", &eng);
	}
	printf("수학 점수: ");
	scanf("%d", &math);
	if (math < 0 || math >100) {
		printf("잘못된 점수 입력!\n");
		printf("다시 입력: ");
		scanf("%d", &math);
	}
	
	score(kor, eng, math);
}

void score(int x, int y, int z)
{
	int sum, avg;
	sum = x + y + z;
	avg = sum / 3;
	printf("총점: %d점\n", sum);
	printf("평균: %d점\n", avg);
}