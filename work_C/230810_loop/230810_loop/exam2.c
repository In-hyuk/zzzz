#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int i = 0;
	int j = 0;
	while (i < 5) {
		while (j < i) {
			printf("*\n");
			j++;
		}
		i++;
	}

	/*���� 7.2-2
	int i = 0;
	int j = 0;
	while (i < 5) {
		while (j < i) {
			printf("o ");
			j++;
		}
		j = 0;
		printf("* \n");
		i++;
	}*/

	/*���� 7.2-1
	int sum = 0; int num = 0; int i = 0;

	while (i < 5) {
		while (num <= 0) {
			printf("0���� ū ���� �Է�(%d��°): ", i + 1);
			scanf("%d", &num);
		}
		sum = sum + num;
		num = 0;
		i++;
	}
	printf("�� �� : %d \n", sum);*/


	/*���� 7.1-5
	int n,x;
	printf("�� ���� ���� �Է�? ");
	scanf("%d", &n);
	int i = 1;
	float avg=0;
	while (i <= n) {
		printf("%d��° ���� �Է�: ",i);
		scanf("%d", &x);
		avg = avg + x;
		i++;
	}
	avg = avg / (i - 1);
	printf("����� : %.2f", avg);*/

	/*���� 7.1-4
	int x;
	printf("�� ��: ");
	scanf("%d", &x);
	int i = 9;
	while (i > 0) {
		printf("%d x %d = %d\n", x, i, x * i);
		i--;
	}*/

	/*���� 7.1-3
	int sum = 0;
	int x;
	printf("���� �Է� ");
	scanf("%d", &x);
	while (x != 0) {
		sum = sum + x;
		printf("���� �Է� ");
		scanf("%d", &x);
	}
	printf("�� ��: %d\n", sum);*/

	/*���� 7.1-2
	int x;
	printf("���� ���� �Է� ");
	scanf("%d", &x);
	int num = 1;
	while (num <= x) {
		printf("%d\n", 3 * num);
		num++;
	}*/

	/*���� 7.1-1
	int i = 0;
	int a;
	printf("���� �Է� ");
	scanf("%d", &a);

	while (i < a) {
		printf("Hello World\n");
		i++;
	}*/

}


