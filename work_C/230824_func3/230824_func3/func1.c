#include <stdio.h>
//#define DEBUG 1 // �ּ����� ���������� ������ڵ尡 ���� X

int main()
{
	// 1.�ζ� ����(�ߺ�����) - �迭������ �н� ����
	// 2.�Լ��� ó�� - �Լ� �н�

	// �ζ� ��ȣ�� ������ �迭 ����
	int lotto[6] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;
#ifdef DEBUG // #define DEBUG �� ���ǵǾ������� ������
		printf("%d\t",lotto[i]); // ����� ��
#endif
		for (int j = 0; j < i; j++) {
			// �迭�� �ִ� ���ڿ� ���� ȹ���� ���� ��
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 6; i++){
		printf("%d\t", lotto[i]);
	}
}