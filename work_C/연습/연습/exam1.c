#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �ζ� ���α׷� ����� (�ߺ� ����)
int main()
{
	int lotto[6];
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;
		printf("%d\t", lotto[i]);
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
}
