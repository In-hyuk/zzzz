#include <stdio.h>

int main()
{
	// 삽입 정렬
	int j = 0;
	int arr[] = { 8,3,1,4 };
	for (int i = 1; i < 4; i++) {
		int key = arr[i]; // 배열 2번째 위치부터 키값을 받음
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
				arr[j + 1] = arr[j];
		}
		// 자리 이동이 끝나고 키값을 빈자리에 삽입
		arr[j + 1] = key;
	}

	for (int i = 0; i < 4 ; i++) {
		printf("%d\t", arr[i]);
	}

}