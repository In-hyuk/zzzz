#include <stdio.h>
int a = 3;
int b = 5;
void swap()
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	printf("a=%d\tb=%d\n", a, b);
	swap();
	printf("a=%d\tb=%d\n", a, b);
}