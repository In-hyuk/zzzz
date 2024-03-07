#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()

typedef struct _CAR {
	char model[20];
	char price[20];
	int year;
}CAR;

typedef struct _CUST {
	char name[20];
	char tel[20];
	char addr[50];
	CAR car;
}CUST;

int main_menu();
void self_insert();

int main()
{
	char* name[5] = { "ȫ�浿","������","�̼���","��μ�","�ڹμ�" };
	char* tel[5] = { "010-1234-1234", "010-1234-1111", "010-1234-2222","010-1234-3333", "010-1234-4444" };
	char* addr[5] = { "�뱸 ���� �ž�4��", "���� ���� �ž�4��" ,"���� ���� �ž�4��", "���� ���� �ž�4��", "�λ� ���� �ž�4��" };
	char* model[5] = { "�׷���","���׽ý�","�ҳ�Ÿ","�ƹݶ�","���" };
	char* price[5] = { "õ����","��õ����","��õ����","��õ����","��õ����" };
	int year[5] = { 19,20,21,22,23 };
	// ����: ���Ͽ� ������ �� ���� �����Ͱ� ��� �����ؾߵ�!!!
	//============================
	// �� ���� ���� ���α׷� v2.0
	//============================
	// 1. �� ���� ���� �Է�
	// 2. �� ���� ���� �Է�
	// 3. �� ���� ����
	// 4. ����
	//============================
	// �޴� ����: 

	// �� ����: �̸�, ��ȭ, �ּ�
	// ���� ����: �𵨸�, ����, ����
	srand(time(NULL));
	while (1) {
		switch (main_menu()) {
		case 1: 
			self_insert();
			break;
		case 2: {
			FILE* fp = fopen("car.bin", "ab");
			CUST cus = { 0 };
			strcpy(cus.name, name[rand() % 5]);
			strcpy(cus.tel, tel[rand() % 5]);
			strcpy(cus.addr, addr[rand() % 5]);
			strcpy(cus.car.model, model[rand() % 5]);
			strcpy(cus.car.price, price[rand() % 5]);
			cus.car.year = year[rand() % 5];
			fwrite(&cus, sizeof(CUST), 1, fp);
			fclose(fp);
		}  
			break;
		case 3: {
			FILE* fp = fopen("car.bin", "rb");
			CUST temp = { 0 };
			while (fread(&temp, sizeof(CUST), 1, fp) == 1) {
				printf("�̸�: %s, ��ȭ: %s, �ּ�: %s, ��: %s, ����: %s, %d���\n", temp.name,temp.tel,temp.addr, temp.car.model, temp.car.price, temp.car.year);
				printf("------------------------------------------------------------------------------------------------\n");
			}
			fclose(fp);
		}
			break;
		case 4: {
			FILE* fp = fopen("car.bin", "wb");
			fclose(fp);
			break;
		}
		case 5:
			printf("���α׷��� �����մϴ�!");
			exit(0);
		default :
			printf("�߸��� �޴� ����!\n");
		}
	}
}

int main_menu()
{
	printf("============================\n");
	printf("�� ���� ���� ���α׷� v2.0\n");
	printf("============================\n");
	printf("1. �� ���� ���� �Է�\n");
	printf("2. �� ���� ���� �Է�\n");
	printf("3. �� ���� ����\n");
	printf("4. �� ���� ��ü ����\n");
	printf("5. ����\n");
	printf("============================\n");
	printf("�޴� ����: ");
	int num;
	scanf("%d", &num);
	return num;
}

void self_insert()
{
	FILE* fp = fopen("car.bin", "ab");
	CUST cus = { 0 };
	printf("�̸� �Է�: ");
	scanf("%s", cus.name);
	printf("��ȭ �Է�: ");
	scanf("%s", cus.tel);
	printf("�ּ� �Է�: ");
	//scanf("%s", cus.addr); ���� �νľȵ�
	getchar();
	gets(cus.addr); // ������ �Է¹ޱ� ���� ��� ex)�뱸�� ����
	printf("���� �� �Է�: ");
	scanf("%s", cus.car.model);
	printf("���� ���� �Է�: ");
	scanf("%s", cus.car.price);
	printf("���� ����: ");
	scanf("%d", &cus.car.year);
	fwrite(&cus, sizeof(CUST), 1, fp);
	fclose(fp);
}