#include <stdio.h>

int main()
{
	// ���� ����
	int j = 0;
	int arr[] = { 8,3,1,4 };
	for (int i = 1; i < 4; i++) {
		int key = arr[i]; // �迭 2��° ��ġ���� Ű���� ����
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
				arr[j + 1] = arr[j];
		}
		// �ڸ� �̵��� ������ Ű���� ���ڸ��� ����
		arr[j + 1] = key;
	}

	for (int i = 0; i < 4 ; i++) {
		printf("%d\t", arr[i]);
	}

}