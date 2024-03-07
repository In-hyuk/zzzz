#include <stdio.h>
void swap(int* a, int* b);
int main()
{
	int a = 3;
	int	b = 5;
	printf("a = %d\tb = %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("a = %d\tb = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d\tb = %d\n", a, b);
	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}