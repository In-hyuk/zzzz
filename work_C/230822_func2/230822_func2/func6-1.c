#include <stdio.h>
#define ARR1_ROW_D 3 // 전처리기

void show_arr(int a[][3], int row, int col);

int main()
{
	// 실전에서는 하드코딩은 금지 ex show_arr(arr1, 2, 3);
	// 하드코딩된 값들은 상수 변수(const) 또는 #define을 사용
	// 상수변수는 대부분 대문자로 표기
	const int ARR1_ROW = 2;
	const int ARR1_COL = 3;
	int arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	show_arr(arr1, ARR1_ROW, ARR1_COL);

	int arr2[3][3] = {
		{10},
		{20, 30},
		{40,50,60}
	};
	
	int arr3[2][3] = { 100,200,300,400 };

	show_arr(arr1,2,3); // 배열주소, 행, 열
	show_arr(arr2,3,3);
	show_arr(arr3,2,3);
}

// 서로 다른 배열값을 받아서 출력하기
void show_arr(int a[][3], int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
				printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
