#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dan = 0, num = 1;
	printf("¸î ´Ü? ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	}
}