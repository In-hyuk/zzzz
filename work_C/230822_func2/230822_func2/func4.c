#include <stdio.h>

void show_arr(int a[2][3]);

int main()
{
	int arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	// arr1 �迭 ���
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	show_arr(arr1);
	printf("\n");


	int arr2[2][3] = {
		{10},
		{20, 30}
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	show_arr(arr2);
	printf("\n");


	int arr3[][3] = { 100,200,300,400 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", arr3[i][j]);
		}
		printf("\n");
	}
	show_arr(arr3);
	// ���� arr1, arr2, arr3 �迭�� ����ϴ� �Լ� 3�� �ۼ�
}
	
void show_arr(int a[2][3])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
