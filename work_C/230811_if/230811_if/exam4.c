#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j >= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 1. 3���� ���ڸ� �Է¹޾Ƽ� Ȧ��, ¦�� �����ϱ�
	// ����) �ݺ����� ����ؼ� �Է¹ޱ�
	
	/*for (int i = 0; i < 3; i++) {
		printf("���� %d ��° �Է�: ", i + 1);
		int n;
		scanf("%d", &n);
		if (n % 2 == 0) {
			printf("%d ¦��\n",n);
		}
		else {
			printf("%d Ȧ��\n",n);
		}
	}*/

	// 2. 1~100 ������ �����߿��� 5�� ����� ����ϱ�.
	// ����) �ݺ��� for, while ����ϱ�
	
	// for��
	//for (int i = 1; i < 101; i++) {
	//	if (i % 5 == 0) {
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n=============================================================\n");
	//// while��
	//int x = 1;
	//while (x < 101) {
	//	if (x % 5 == 0) {
	//		printf("%d ", x);
	//	}
	//	x++;
	//}

}