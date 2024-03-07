#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int villa[4][2];
	int popu, i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d類 %d�� 檣掘熱: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		popu = 0;
		popu = popu + villa[i][0] + villa[i][1];
		printf("%d類 檣掘熱: %d \n", i + 1, popu);
	}
}