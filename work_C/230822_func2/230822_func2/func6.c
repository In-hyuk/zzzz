#include <stdio.h>

void show_arr(int a[][4], int b[][3], int c[][2]);

int main()
{
	// 2차원 배열의 열의 크기가 다른 경우에는 매개변수 전달이 까다롭다.
	int arr1[2][4] = {
		{1,2,3,30},
		{4,5,6,60}
	};
		
	int arr2[3][3] = {
		{10},
		{20, 30},
		{40,50,60}
	};
	
	int arr3[2][2] = { 100,200,300,400 };

	show_arr(arr1,arr2,arr3);
}

// 서로 다른 배열값을 받아서 출력하기
void show_arr(int a[][4], int b[][3], int c[][2])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}


