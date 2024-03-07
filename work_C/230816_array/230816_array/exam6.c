#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*int N;
	scanf("%d", &N);
	int arr[101];
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	int v;
	scanf("%d", &v);

	for (int j = 0; j < N; j++) {
		if (arr[j] == v) {
			cnt++;
		}
	}
	printf("%d", cnt);*/

	// 문제 11-1.1
	/*int arr[5];
	for (int i = 0; i < 5; i++) {
		printf("정수 입력: ");
		scanf("%d", &arr[i]);
	}
	int min, max, sum;
	sum = 0;
	max = min = arr[0];
	for (int j = 0; j < 5; j++) {
		sum = sum + arr[j];
		if (max < arr[j]) {
			max = arr[j];
		}
		if (min > arr[j]) {
			min = arr[j];
		}
	}
	printf("총합 %d\n", sum);
	printf("최대값 %d\n", max);
	printf("최소값 %d\n", min);*/

	//문제 16-1.1
	/*int arr1[3][9];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (j + 1) * (i + 2);
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}*/
	
	//문제 16-1.2
	/*int arrA[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int arrB[4][2];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			arrB[i][j] = arrA[j][i];
			printf("%d", arrB[i][j]);
		}
		printf("\n");
	}*/

}