#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void score(int x, int y, int z);

int main()
{
	int kor, eng, math;
	printf("���� ����: ");
	scanf("%d", &kor);
	if (kor < 0 || kor >100) {
		printf("�߸��� ���� �Է�!\n");
		printf("�ٽ� �Է�: ");
		scanf("%d", &kor);
	}
	printf("���� ����: ");
	scanf("%d", &eng);
	if (eng < 0 || eng >100) {
		printf("�߸��� ���� �Է�!\n");
		printf("�ٽ� �Է�: ");
		scanf("%d", &eng);
	}
	printf("���� ����: ");
	scanf("%d", &math);
	if (math < 0 || math >100) {
		printf("�߸��� ���� �Է�!\n");
		printf("�ٽ� �Է�: ");
		scanf("%d", &math);
	}
	
	score(kor, eng, math);
}

void score(int x, int y, int z)
{
	int sum, avg;
	sum = x + y + z;
	avg = sum / 3;
	printf("����: %d��\n", sum);
	printf("���: %d��\n", avg);
}