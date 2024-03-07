#include <stdio.h>

int main()
{
	// 선택 정렬
	int arr[] = { 8,3,1,4 };

	for (int i = 0; i < 4; i++) {
		int key = arr[i];
		for (int j = i+1; j < 4; j++) {
			if (key > arr[j]) {
				arr[i] = arr[j];
				arr[j] = key;
				key = arr[i];
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("%d\t", arr[i]);
	}
}