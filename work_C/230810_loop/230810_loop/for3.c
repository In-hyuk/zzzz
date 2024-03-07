#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int cur = 2; cur < 10; cur++)
	{
		for (int is = 1; is < 10; is++)
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
		}
		printf("\n");
	}
}