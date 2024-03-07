#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sum(int arr[]);

int main()
{
	int arr[5][3] = { 0 };
	
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = (rand() % 101);
		}
		printf("%d번째 학생 ", i + 1);
		sum(arr[i]);
	}
}

void sum(int arr[])
{
	int sum = 0;
	int avg;
	for (int i = 0; i < 3; i++) {
		sum += arr[i];
		}
	avg = sum / 3;
	printf("총점: %d, 평균: %d ", sum, avg);
	if (avg >= 90) {
		printf("학점: A\n");
	}
	else if (avg >= 80) {
		printf("학점: B\n");
	}
	else if (avg >= 70) {
		printf("학점: C\n");
	}
	else if (avg >= 60) {
		printf("학점: D\n");
	}
	else if (avg >= 50) {
		printf("학점: E\n");
	}
	else
		printf("학점: F\n");
}