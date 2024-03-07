#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	char c;
	printf("A ~ E 문자 입력: ");
	scanf("%c", &c);

	switch (c)
	{
	case 'A':
		printf("A는 ONE \n");
		break;
	case 'B':
		printf("B는 TWO \n");
		break;
	case 'C':
		printf("C는 THREE \n");
		break;
	case 'D':
		printf("D는 FOUR \n");
		break;
	case 'E':
		printf("E는 FIVE \n");
		break;
	default:
		printf("I don't know! \n");
	}
}