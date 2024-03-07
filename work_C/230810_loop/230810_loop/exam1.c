#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1개의 숫자를 입력받아 구구단 출력하는 프로그램.
	// 예) 3을 입력하면 구구단 3단 출력

	/*int num;
	int i = 2;
	printf("몇 단? ");
	scanf("%d", &num);
	for (num; i < 10; i+=2) {
		printf("%d x %d = %d\n", num, i, num * i);
	}*/

	// 시작값과 마지막값을 입력받아 합 구하는 프로그램.
	// 예) 1번째 입력: 2, 2번째 입력: 5 
	//     2+3+4+5 = 14
	// 조건) 만약에 2번째 수가 1번째 수보다 작거나 같으면 다시 입력.(do while)

	//int n1, n2, total = 0; // do~while문

	//printf("1번째 입력: ");
	//scanf("%d", &n1);
	//do {
	//	printf("2번째 입력: ");
	//	scanf("%d", &n2);
	//} while (n2 <= n1);
	//for (int i = n1; i <= n2; i++)
	//	{
	//		total = total + i;
	//	}
	//	printf("%d과 %d사이의 총 합은 %d", n1, n2, total);

	//int n1, n2, total = 0; //while문
	//printf("1번째 입력: ");
	//scanf("%d", &n1);
	//printf("2번째 입력: ");
	//scanf("%d", &n2);
	//while (n1 >= n2) {
	//	printf("2번째 입력: ");
	//	scanf("%d", &n2);
	//}
	//for (int i = n1; i <= n2; i++)
	//	{
	//		total = total + i;
	//	}
	//printf("%d과 %d사이의 총 합은 %d", n1, n2, total);

	// 구구단 전체 출력. (2~9단 출력)
	// 2x1=2 3x1=3 4x1=4 ... 9x1=9
	// 2x2=4 3x2=6 4x2=8 ... 9x2=18
	// ...                   9x9=81

	//for (int x=1; x < 10; x++){ //1~9 
	//	for (int y=2; y < 10; y++){ // 2~9단
	//		printf("%d x %d = %d\t",y,x,x*y);			
	//	}
	//	printf("\n");
	//}	

	for (int i = 0; i < 3; i++) {
		printf("1행의%d\t", i+1);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {       // 행
		for (int j = 0; j < 2; j++) {   // 열
			printf("%d행 %d열\t", i+1, j+1);
		}
		printf("\n");
	}

	// 구구단
	for (int i = 1; i < 10; i++) {  
		for (int j = 2; j < 10; j++) {
			printf("%d x %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
}