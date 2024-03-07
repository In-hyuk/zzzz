#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int menu();
void cus_info(int n);

struct car {
	char model[20];
	int price;
	int year;
	char color[20];
	char store[20];
};

struct customer {
	char name[20];
	char phoneNum[20];
	char address[50];
	char job[20];
	char birthday[20];
	struct car car;
};

int main()
{
	//--------------------------------------
	// �� ���� ���� ���α׷� v1.5
	//--------------------------------------
	// 1. �� �� �������� ���� �Է�
	// 2. �� �� �������� ����
	// 3. ����
	//--------------------------------------
	// �޴� ����: 
	while (1) {
		/*system("cls");
		int num = menu();
		cus_info(num);
		system("pause");*/
		int num = menu();
		switch (num) {
		case 1:
			cus_info(num);
			break;
		case 2:
			cus_info(num);
			break;
		case 3:
			cus_info(num);
			printf("���α׷� ����!\n");
			break;
		default:
			printf("�߸��� �޴� ����!!\n");
		}
	}
}

int menu()
{
	int num;
	printf("--------------------------------------\n");
	printf(" �� ���� ���� ���α׷� v1.5\n");
	printf("--------------------------------------\n");
	printf("1. �� �� �������� ���� �Է�\n");
	printf("2. �� �� �������� ����\n");
	printf("3. ����\n");
	printf("--------------------------------------\n");
	printf("�޴� ����: ");
	scanf("%d", &num);
	return num;
}

void cus_info(int n)
{
	char* name[5] = { "ȫ�浿","�̼���","������","������","����ġ" };
	char* phoneNum[5] = { "010-1234-5678","010-2345-6789","010-3456-7890","010-4567-8910","010-5678-9012" };
	char* address[5] = { "�뱸�� ����","�뱸�� ����","�뱸�� �߱�","�뱸�� ������","�뱸�� ����" };
	char* job[5] = { "�ʵ�","�ߵ�","���","���","������" };
	char* birthday[5] = { "1��11��","12��12��","7��21��","5��26��","11��24��" };
	char* model[5] = { "K3","K5","K7","K8","K9" };
	int price[5] = { 10000000,20000000,30000000,40000000,50000000 };
	int year[5] = { 19,20,21,22,23 };
	char* color[5] = { "white","black","silver","yellow","gray" };
	char* store[5] = { "����","����","�뱸","�λ�","���" };

	struct customer cus[10] = { 0 };
	struct car car[10] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		strcpy(cus[i].name, name[rand() % 5]);
		strcpy(cus[i].phoneNum, phoneNum[rand() % 5]);
		strcpy(cus[i].address, address[rand() % 5]);
		strcpy(cus[i].job, job[rand() % 5]);
		strcpy(cus[i].birthday, birthday[rand() % 5]);
		strcpy(cus[i].car.model, model[rand() % 5]);
		cus[i].car.price = price[rand() % 5];
		cus[i].car.year = year[rand() % 5];
		strcpy(cus[i].car.color, color[rand() % 5]);
		strcpy(cus[i].car.store, store[rand() % 5]);
	}
	if (n == 2) {
		for (int i = 0; i < 10; i++) {
			printf("==========%d ��° ������===========\n", i + 1);
			printf("%s %s %s %s %s\n", cus[i].name, cus[i].phoneNum, cus[i].address, cus[i].job, cus[i].birthday);
			printf("%s %d %d %s %s\n", cus[i].car.model, cus[i].car.price, cus[i].car.year, cus[i].car.color, cus[i].car.store);
		}
	}
	if (n == 3)
		exit(0);
	if (n >= 4) {
		printf("�߸��� ���� �Է�!\n");
	}
}
