#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*동전 교환기 프로그램 만들기
	  동전은 500원,100원,50원,10원
	  동전 갯수 지정 변수 만들고 초기값 0
	  특정 금액 입력받기 (예 : 1370)
	  금액을 동전 갯수로 바꾸기 */
	int x500, x100, x50, x10 = 0;
	int money; // 입력받는 금액
	printf("얼마를 넣겠습니까? ");
	scanf("%d", &money);
	
	x500 = money / 500; // 500으로 나는 몫(500원짜리 동전 갯수)
	//money = money % 500;
	money %= 500;
	x100 = money / 100;
	money = money % 100;
	x50 = money / 50;
	money = money % 50;
	x10 = money / 10;
	money = money % 10;
	
	printf("---------------------------\n");
	printf(" 동전 교환기 프로그램 1.0\n");
	printf("---------------------------\n");
	printf("  오백원 갯수    : %d 개\n",x500);
	printf("   백원 갯수     : %d 개\n",x100);
	printf("  오십원 갯수    : %d 개\n",x50);
	printf("   십원 갯수     : %d 개\n",x10);
	printf("바꾸지 못한 잔돈 : %d 개\n",money);
	printf("---------------------------\n");	
}