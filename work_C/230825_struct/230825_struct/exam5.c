#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int menu();
void insert(struct customer cus[]);
void random_insert(struct customer cus[]);
void show(struct customer cus[]);

struct car {
	char model[20];
};

struct manager {
	char name[20];
};

struct customer {
	char name[20];
	struct car car;
	struct manager mana;
};

char* name[5] = { "ȫ�浿", "����ġ", "������", "�̼���", "������" };
char* model[5] = { "�׷���", "���׽ý�", "��Ÿ��", "�ҳ�Ÿ", "K9" };
char* dealer[5] = { "������","������","������","Ȳ����","������" };

int main()
{
	// ���̸�, ������, �Ŵ�����
	//--------------------------------
	// �� ���� ���� ���α׷� v1.6
	//--------------------------------
	// 1. ������ ���� �Է�
	// 2. ������ ���� �Է�
	// 3. ������ ����
	// 4. ����
	//--------------------------------
	// �޴�����:
	struct customer cus[5] = { 0 };

	srand(time(NULL));
		while (1) {
		switch (menu()) {
		case 1:
			insert(cus);
			break;
		case 2:
			random_insert(cus);
			break;
		case 3:
			show(cus);
			break;
		case 4:
			printf("���α׷� ����");
			exit(0);
			break;
		default:
			printf("�߸��� �޴� ����!\n");

		}
	}
}

int menu()
{
	printf("--------------------------------\n");
	printf(" �� ���� ���� ���α׷� v1.6\n");
	printf("--------------------------------\n");
	printf("1. ������ ���� �Է�\n");
	printf("2. ������ ���� �Է�\n");
	printf("3. ������ ����\n");
	printf("4. ����\n");
	printf("--------------------------------\n");
	printf("�޴� ����: ");
	int num;
	scanf("%d", &num);
	return num;
}

void insert(struct customer cus[])
{
	printf("�̸� �Է�: ");
	scanf("%s", &cus[0].name);
	printf("���� �� �Է�: ");
	scanf("%s", &cus[0].car.model);
	printf("���� �̸� �Է�: ");
	scanf("%s", &cus[0].mana.name);
}

void random_insert(struct customer cus[])
{
	for (int i = 0; i < 5; i++) {
		strcpy(cus[i].name, name[rand() % 5]);
		strcpy(cus[i].car.model, model[rand() % 5]);
		strcpy(cus[i].mana.name, dealer[rand() % 5]);
	}
}

void show(struct customer cus[])
{
	for (int i = 0; i < 5; i++) {
		// cus[i].name�� ���� ""�� ���ٸ�
		if (strcmp(cus[i].name, "") == 0) {
			break;
		}
		printf("����:%s\n", cus[i].name);
		printf("������:%s\n", cus[i].car.model);
		printf("�Ŵ�����:%s\n", cus[i].mana.name);
	}
}