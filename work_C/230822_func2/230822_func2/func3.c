#include <stdio.h>

void call_by_addr(int a[]);

int main()
{
	// call by address (주소값에 의한 전달)
	int arr[2] = { 10, 20 };
	printf("1. main()=> arr[0]:%d, arr[1]:%d\n",arr[0],arr[1]);
	call_by_addr(arr); // 배열 이름이 주어짐 : 주소를 의미
	printf("2. main()=> arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
}

void call_by_addr(int a[])
{
	// a와 b의 값을 서로 바꿔치기
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	printf("call_by_addr()=> a[0]:%d, a[1]:%d\n", a[0], a[1]);
}