#include <stdio.h>

int main(void)
{
	int arr[5] = { 10,20,30,40,50 }; // 1차원 배열 초기화
	int sum = 0, i;

	/*arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;*/ /*이방법은 잘 안씀*/

	for (i = 0; i < 5; i++) {
		/*arr[i] = (i + 1) * 10;*/ // 일정한 규칙을 가진 패턴일때 사용 (10씩 증가)
		printf("arr[%d]:%d\n", i, arr[i]);
		sum = sum + arr[i];
	}
	printf("배열요소에 저장된 값의 합 : %d \n", sum);
}