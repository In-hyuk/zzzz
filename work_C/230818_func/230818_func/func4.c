#include <stdio.h>

int add(int n1, int n2);
int sub(int n1, int n2);

int main(void)
{
	// 리턴값의 데이터타입 함수명(매개변수, ...)
	int n1 = 200; // 지역변수
	int n2 = 50;
	int a = add(n1, n2);
	printf("덧셈: %d\n", a);
	printf("뺄셈: %d\n", sub(n1, n2));
}

int add(int n1, int n2) // 빈 껍데기 -> 호출했을때 값이 채워짐
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	int res = n1 - n2;
	return res;
}
