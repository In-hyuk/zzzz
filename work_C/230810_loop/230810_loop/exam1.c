#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1���� ���ڸ� �Է¹޾� ������ ����ϴ� ���α׷�.
	// ��) 3�� �Է��ϸ� ������ 3�� ���

	/*int num;
	int i = 2;
	printf("�� ��? ");
	scanf("%d", &num);
	for (num; i < 10; i+=2) {
		printf("%d x %d = %d\n", num, i, num * i);
	}*/

	// ���۰��� ���������� �Է¹޾� �� ���ϴ� ���α׷�.
	// ��) 1��° �Է�: 2, 2��° �Է�: 5 
	//     2+3+4+5 = 14
	// ����) ���࿡ 2��° ���� 1��° ������ �۰ų� ������ �ٽ� �Է�.(do while)

	//int n1, n2, total = 0; // do~while��

	//printf("1��° �Է�: ");
	//scanf("%d", &n1);
	//do {
	//	printf("2��° �Է�: ");
	//	scanf("%d", &n2);
	//} while (n2 <= n1);
	//for (int i = n1; i <= n2; i++)
	//	{
	//		total = total + i;
	//	}
	//	printf("%d�� %d������ �� ���� %d", n1, n2, total);

	//int n1, n2, total = 0; //while��
	//printf("1��° �Է�: ");
	//scanf("%d", &n1);
	//printf("2��° �Է�: ");
	//scanf("%d", &n2);
	//while (n1 >= n2) {
	//	printf("2��° �Է�: ");
	//	scanf("%d", &n2);
	//}
	//for (int i = n1; i <= n2; i++)
	//	{
	//		total = total + i;
	//	}
	//printf("%d�� %d������ �� ���� %d", n1, n2, total);

	// ������ ��ü ���. (2~9�� ���)
	// 2x1=2 3x1=3 4x1=4 ... 9x1=9
	// 2x2=4 3x2=6 4x2=8 ... 9x2=18
	// ...                   9x9=81

	//for (int x=1; x < 10; x++){ //1~9 
	//	for (int y=2; y < 10; y++){ // 2~9��
	//		printf("%d x %d = %d\t",y,x,x*y);			
	//	}
	//	printf("\n");
	//}	

	for (int i = 0; i < 3; i++) {
		printf("1����%d\t", i+1);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {       // ��
		for (int j = 0; j < 2; j++) {   // ��
			printf("%d�� %d��\t", i+1, j+1);
		}
		printf("\n");
	}

	// ������
	for (int i = 1; i < 10; i++) {  
		for (int j = 2; j < 10; j++) {
			printf("%d x %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
}