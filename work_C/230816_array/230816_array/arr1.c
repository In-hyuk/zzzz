#include <stdio.h>

int main(void)
{
	int arr[5] = { 10,20,30,40,50 }; // 1���� �迭 �ʱ�ȭ
	int sum = 0, i;

	/*arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;*/ /*�̹���� �� �Ⱦ�*/

	for (i = 0; i < 5; i++) {
		/*arr[i] = (i + 1) * 10;*/ // ������ ��Ģ�� ���� �����϶� ��� (10�� ����)
		printf("arr[%d]:%d\n", i, arr[i]);
		sum = sum + arr[i];
	}
	printf("�迭��ҿ� ����� ���� �� : %d \n", sum);
}