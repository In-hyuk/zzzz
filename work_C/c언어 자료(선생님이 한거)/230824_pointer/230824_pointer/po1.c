// po1.c - 230824_pointer(������Ʈ��)
#include <stdio.h>

int main()
{
	int num = 10;
	printf("1.num(������ ����� ��):%d\n", num);
	printf("2.num(num������ ���� �ּҰ�):0x%p\n", &num);
	
	// �����ͺ��� pnum�� num������ �ּҰ� ����
	int* pnum = &num;
	printf("3.*pnum(����� �ּҿ� ����ִ� ��):%d\n", *pnum);

	*pnum = 20;
	printf("4.*pnum(����� �ּҿ� ����ִ� ��):%d\n", *pnum);

	printf("5.num(������ ����� ��):%d\n", num);
	printf("6.pnum(pnum������ ����� �ּҰ�):0x%p\n", pnum);
	
}