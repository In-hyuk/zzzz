#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���迬����, �������� if���� �������� ���� ���
	// ����1.
	// 1���� ���ڸ� �Է¹޾Ƽ� ¦��, Ȧ������ üũ�ϴ� ���α׷�(������ ������ % Ȱ��)
	int num; // ������ ���� ����(����)
	printf("Ȧ�� ¦�� �Ǻ��ϱ�\n");
	printf("���� �Է�: ");
	scanf("%d", &num); // Ű����� �����͸� �Է¹޾� ���� n�� ����

	if (num % 2 == 0) { // ���迬���� <, <=, ==, != �������� &&, ||
		printf("���� %d�� ¦�� �Դϴ�\n", num);
	}
	else
		printf("���� %d�� Ȧ�� �Դϴ�.\n", num);

	// ����2.
	// 2���� ���ڸ� �Է¹޾Ƽ� ũ��, �۴�, ���ٸ� üũ�ϴ� ���α׷�.
	int x, y;
	printf("���� 2�� �Է� ");
	scanf("%d %d", &x, &y);

	if (x > y) {
		printf("%d�� %d���� ũ��\n", x, y);
	}
	else if (x < y) {
		printf("%d�� %d���� �۴�\n", x, y);
	}
	else
		printf("%d�� %d�� ����\n", x, y);

	// ����3.
	// ����, ����, ���� ������ �Է¹޾Ƽ� ����, ���, ������ ���ϴ� ���α׷�
	// ����: 100~90:A����, 89~80:B����, .... 59 ~ 0:F���� A,B,C,D,F
	// if ( 90 <= num <= 100) <- �̷��� ���� 
	// if (num >= 90 && num <=100) <- �̷���
	int kor, eng, math;
	printf("���� ����: ");
	scanf("%d", &kor);
	printf("���� ����: ");
	scanf("%d", &eng);
	printf("���� ����: ");
	scanf("%d", &math);
	float avg, sum;
	sum = kor + math + eng;
	avg = sum / 3;

	if (avg >= 90 && avg <= 100) { // 90��~100�� ����
		printf("����: %.2f, ���: %.2f, ����: A\n", sum, avg);
	}
	else if (avg >= 80) { // 80 ~ 89
		printf("����: %.2f, ���: %.2f, ����: B\n", sum, avg);
	}
	else if (avg >= 70) { // 70 ~ 79
		printf("����: %.2f, ���: %.2f, ����: C\n", sum, avg);
	}
	else if (avg >= 60) { // 60 ~ 69
		printf("����: %.2f, ���: %.2f, ����: D\n", sum, avg);
	}
	else // 0 ~ 59
		printf("����: %.2f, ���: %.2f, ����: F\n", sum, avg);	
}