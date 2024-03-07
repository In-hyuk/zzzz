// func3.c
#include <stdio.h>
void call_by_addr(int a[]);
int main()
{	
	// call by address (주소값에 의한 전달)
	int arr[2] = { 10, 20 };
	printf("%d %d\n", arr[0], arr[1]);
	call_by_addr(arr);
	printf("2.main()=>arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
}

void call_by_addr(int a[])
{
	// a와 b의 값을 서로 바꿔치기
	int temp = a[0]; // a의 값을 temp 변수에 백업
	a[0] = a[1];
	a[1] = temp;
	printf("call_by_addr()=>arr[0]:%d, arr[1]:%d\n", a[0], a[1]);
}