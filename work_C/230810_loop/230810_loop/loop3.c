#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int cur = 2, is = 1; //�� �ݺ�Ƚ�� 72ȸ
	while (cur < 10) {
		is = 1;
		while (is < 10) {
			printf("%d x %d = %d\n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
}