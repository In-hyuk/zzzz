#include <stdio.h>

int main()
{
	int num1 = 100, num2 = 100;
	int* pnum = NULL; // 포인터변수 초기화는 반드시 NULL
	
	pnum = &num1;
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30; // (*pnum) = (*pnum) - 30;

	printf("num1:%d, num2:%d\n", num1, num2);
}