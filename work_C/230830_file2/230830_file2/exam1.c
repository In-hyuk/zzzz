#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _PERSON {
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} PERSON;

int menu();
void insert();
void show();

char* name[5] = { "ȫ�浿","����ġ","������","�̼���","��μ�" };
int age[5] = { 10,20,30,40,50 };
char* tel[5] = { "010-1234-5678","010-2424-4242","010-3636-6363","010-8282-2828","010-9876-5432" };
char* addr[5] = { "�뱸�� ����","�뱸�� ����","�뱸�� ����","�뱸�� �߱�","�뱸�� ������" };

int main()
{
	//-----------------------------
	//  ���� ���� ���α׷� v1.0
	//-----------------------------
	// 1. ������ ������ ���� �Է�
	// 2. ���Ͽ��� �о����
	// 3. ����
	//-----------------------------
	// �޴� ����: 
	
	while (1) {
		switch (menu()) {
		case 1:
			insert();
			break;
		case 2:
			show();
			break;
		case 3:
			printf("���α׷� ����\n");
			exit(0);
		default:
			printf("�߸��� �޴� �Է�!\n");
		}
	}
}

int menu()
{
	printf("-----------------------------\n");
	printf("  ���� ���� ���α׷� v1.0\n");
	printf("-----------------------------\n");
	printf("1. ������ ������ ���� �Է�\n");
	printf("2. ���Ͽ��� �о����\n");
	printf("3. ����\n");
	printf("-----------------------------\n");
	printf("�޴� ����: ");
	int num;
	scanf("%d", &num);
	return num;
}

void insert()
{
	PERSON son[10] = { 0 };
	FILE *fp = fopen("per.bin", "wb");
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		strcpy(son[i].name, name[rand() % 5]);
		son[i].age = age[rand() % 5];
		strcpy(son[i].tel, tel[rand() % 5]);
		strcpy(son[i].addr, addr[rand() % 5]);
		fwrite(&son[i], sizeof(PERSON), 1, fp);
	}
	fclose(fp);
}
void show()
{
	PERSON temp = { 0 };
	FILE* fp = fopen("per.bin", "rb");
	int cnt = 1;
	while (fread(&temp, sizeof(PERSON), 1, fp) == 1) {
		printf("��ȣ:%d %s %d�� %s %s\n", cnt++, temp.name, temp.age, temp.tel, temp.addr);
	}
	fclose(fp);
}