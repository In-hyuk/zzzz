#include <stdio.h>
#include <stdlib.h> // srand()
#include<time.h>    // time() 

void check_odd(int a[]);

int main()
{
	// 1.main()���� 10���� ���ڸ� �����ϴ� 1���� �迭 ����
	// 2.�����ϰ� 10���� ���ڸ� �迭�� ����
	// 3.�迭�� �ּҰ��� �Ű������� �����Ͽ� Ȧ,¦�� �����Ͽ� ��� �Լ�

	int arr[10] = { 0 }; // ���� ������ �迭

	srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����
	for (int i = 0; i < 10; i++) { // 10ȸ �ݺ�
		arr[i] = (rand() % 45) + 1; // ���� ���� 1~45����
		//printf("%d\n", arr[i]);
	}
	check_odd(arr);
}

void check_odd(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			printf("%d ¦��\n", a[i]);
		}
		else {
			printf("%d Ȧ��\n", a[i]);
		}
	}
}

