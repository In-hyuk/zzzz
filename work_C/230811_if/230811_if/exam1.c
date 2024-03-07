#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 관계연산자, 논리연산자 if문의 조건으로 많이 사용
	// 연습1.
	// 1개의 숫자를 입력받아서 짝수, 홀수인지 체크하는 프로그램(나머지 연산자 % 활용)
	int num; // 정수형 변수 선언(생성)
	printf("홀수 짝수 판별하기\n");
	printf("정수 입력: ");
	scanf("%d", &num); // 키보드로 데이터를 입력받아 변수 n에 저장

	if (num % 2 == 0) { // 관계연산자 <, <=, ==, != 논리연산자 &&, ||
		printf("정수 %d는 짝수 입니다\n", num);
	}
	else
		printf("정수 %d는 홀수 입니다.\n", num);

	// 연습2.
	// 2개의 숫자를 입력받아서 크다, 작다, 같다를 체크하는 프로그램.
	int x, y;
	printf("숫자 2개 입력 ");
	scanf("%d %d", &x, &y);

	if (x > y) {
		printf("%d는 %d보다 크다\n", x, y);
	}
	else if (x < y) {
		printf("%d는 %d보다 작다\n", x, y);
	}
	else
		printf("%d는 %d와 같다\n", x, y);

	// 연습3.
	// 국어, 영어, 수학 점수를 입력받아서 총점, 평균, 학점을 구하는 프로그램
	// 학점: 100~90:A학점, 89~80:B학점, .... 59 ~ 0:F학점 A,B,C,D,F
	// if ( 90 <= num <= 100) <- 이런건 없음 
	// if (num >= 90 && num <=100) <- 이렇게
	int kor, eng, math;
	printf("국어 점수: ");
	scanf("%d", &kor);
	printf("영어 점수: ");
	scanf("%d", &eng);
	printf("수학 점수: ");
	scanf("%d", &math);
	float avg, sum;
	sum = kor + math + eng;
	avg = sum / 3;

	if (avg >= 90 && avg <= 100) { // 90점~100점 사이
		printf("총점: %.2f, 평균: %.2f, 학점: A\n", sum, avg);
	}
	else if (avg >= 80) { // 80 ~ 89
		printf("총점: %.2f, 평균: %.2f, 학점: B\n", sum, avg);
	}
	else if (avg >= 70) { // 70 ~ 79
		printf("총점: %.2f, 평균: %.2f, 학점: C\n", sum, avg);
	}
	else if (avg >= 60) { // 60 ~ 69
		printf("총점: %.2f, 평균: %.2f, 학점: D\n", sum, avg);
	}
	else // 0 ~ 59
		printf("총점: %.2f, 평균: %.2f, 학점: F\n", sum, avg);	
}