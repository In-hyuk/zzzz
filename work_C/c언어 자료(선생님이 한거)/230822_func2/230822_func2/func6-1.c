// func6.c ���� ��ü�� ���� --> func6-1.c
#include <stdio.h>
#define ARR1_ROW_D 3 // ��ó����
void show_arr_comm(int arr[][3], int row, int col);
int main()
{
	// ���������� �ϵ��ڵ��� ����!
	// �ϵ��ڵ��� ������ ��� ����(const) �Ǵ� #define �� ���
	// ��������� ��κ� �빮�ڷ� ǥ��
	const int ARR1_ROW = 3;
	const int ARR1_COL = 3;
	int arr1[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	show_arr_comm(arr1, ARR1_ROW, ARR1_ROW); // hard coding

	int arr2[3][3] = {
		{10},
		{20, 30},
		{40, 50, 60}
	};
	show_arr_comm(arr2, 3, 3);

	int arr3[2][3] = { 100, 200, 300, 400 };
	show_arr_comm(arr3, 2, 3); // �迭�ּ�, ��, ��
}

/*
* FUNC	: show_arr_comm
* PARAM	: row - ��, col - ��
* RETURN: None
* COMM	: 2���� �迭�� ������ �޾� ���
*/
void show_arr_comm(int arr[][3], int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
