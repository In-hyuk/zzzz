#include <stdio.h>

int main()
{
	/*int num1 = 100;
	int num2 = 100;
	int* pnum;

	pnum = &num1;
	(*pnum) += 30;
	pnum = &num2;
	(*pnum) -= 30;

	printf("num1:%d, num2:%d \n", num1, num2);*/

	int num = 10;
	printf("1.num(������ ����� ��):%d\n", num);
	printf("2.num(num������ ���� �ּҰ�):0x%p\n", &num);

	// �����ͺ��� pnum�� num ������ �ּҰ� ����
	int* pnum = &num;
	printf("3.*pnum(����� �ּҿ� ����ִ� ��):%d\n", *pnum);
	
	*pnum = 20; // num=20 �� ����
	printf("4.*pnum(����� �ּҿ� ����ִ� ��):%d\n", *pnum);

	printf("5.num(������ ����� ��):%d\n", num);
	printf("6.pnum(pnum������ ����� �ּҰ�):0x%p\n", pnum);
}