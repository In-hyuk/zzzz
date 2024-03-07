#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000) {
			break; // 자신이 속한 반복문만 탈출 가능
		}
		num++;
	}
	
	printf("sum: %d\n", sum);
	printf("num: %d\n", num);
	return 0;
}