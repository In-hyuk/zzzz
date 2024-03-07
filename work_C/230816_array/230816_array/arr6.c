#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2x3 (2 by 3)
	//int arr1[2][3] = {
	//	{1,2,3}, // 1행
	//	{4,5,6}  // 2행
	//};

	int num = 1;
	int arr2[5][3] = { 0 }; // 5행3열(5x3) 배열
	for (int i = 0; i < 5; i++) { // 행
		for (int j = 0; j < 3; j++) { // 열
			arr2[i][j] = num++; // arr2에 1~6까지 숫자 넣기
			printf("%d\t ", arr2[i][j]);
		}
		printf("\n");
	}
	
}