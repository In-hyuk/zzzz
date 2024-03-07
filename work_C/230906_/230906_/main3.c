#include <stdio.h>

int main()
{
	// 버블 정렬
	int arr[] = { 8,5,6,2,4 };
	int temp = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}
}