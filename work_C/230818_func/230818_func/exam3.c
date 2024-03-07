#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_sort(int n1, int n2, int n3);

int main()
{
	// 1. 3개 정수를 main()에서 입력받아서 매개변수에 전달.
	// 2. 함수에서 3개의 숫자를 크기 순서대로 출력
	// 3. 함수 이름: my_sort()
	// 4. n1 > n2 > n3 --> if(n1 > n2 > n3): 잘못된 문법 
	// 5. n1이 제일 크고 n2가 두번째 크고 n3가 제일 작음
	//	  n1 > n2 > n3
	//    n3가 제일 크고 n1이 두번째 크고 n2가 제일 작음
	//    n3 > n1 > n2
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	my_sort(n1, n2, n3);
	
}

void my_sort(int n1, int n2, int n3) {
	if (n1 > n2 && n2 > n3) {
		printf("%d > %d > %d\n", n1, n2, n3);
	}
	else if (n1 > n3 && n3 > n2) {
		printf("%d > %d > %d\n", n1, n3, n2);
	}
	else if (n2 > n1 && n1 > n3) {
		printf("%d > %d > %d\n", n2, n1, n3);
	}
	else if (n2 > n3 && n3 > n1) {
		printf("%d > %d > %d\n", n2, n3, n1);
	}
	else if (n3 > n2 && n2 > n1) {
		printf("%d > %d > %d\n", n3, n2, n1);
	}
	else if (n3 > n1 && n1 > n2) {
		printf("%d > %d > %d\n", n3, n1, n2);
	}
}