#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	// 1��. �Է¹��� num ���� ��
	if (num < 0) {
		printf("�Է� ���� 0���� �۴�. \n"); // ����
	}
	// 2��. �Է¹��� num ���� ��
	if (num > 0) {
		printf("�Է� ���� 0���� ũ��. \n"); // ���
	}
	// 3��. �Է¹��� num ���� ��
	if (num == 0) {
		printf("�Է� ���� 0�̴�. \n"); // 0
	}

	// 3���� ����� ���� ����
	if (num < 0) {
		printf("�Է� ���� 0���� �۴�. \n");
	}
	else if (num > 0) {
		printf("�Է� ���� 0���� ũ��. \n");
	}
	else {
		printf("�Է� ���� 0. \n");
	}
	// 1. if�� ������ 1���� ���
	// 2. else if�� ������ ��� ����
	// 3. else �� ����ϴ� ��쿡�� ������ ����
}