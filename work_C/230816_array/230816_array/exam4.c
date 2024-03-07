#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	// �������� ������� ������ 2���� �迭 ����
	// 2x1=2 3x1=3 4x1=4 ... 9x1=9
	// 2x2=4 3x2=6 4x2=8 ... 9x2=18
	// ...
	// 2x9=18 3x9=27 ...    9x9=81
	// ��� ���´� ���� ���� �ϰ� ������� �迭���� �о�ͼ� ���

	int arr[9][8];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			arr[i][j] = (j + 2) * (i + 1);
			printf("%d x %d = %d\t",j+2 ,i+1 ,arr[i][j]);
		    }
		printf("\n");
	}

	int gugu[9][8] = { 0 };
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			gugu[i-1][j-2] = j * i;
			printf("%d x %d = %d\t", j, i, gugu[i-1][j-2]);
		}
		printf("\n");
	}
}