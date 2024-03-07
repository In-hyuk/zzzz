#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	
#include <time.h>	
#include <string.h>

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
}ADDR;

int main_menu();
void addr_rand(char address[]);
void addr_dir(char address[]);
void addr_del(char address[]);
void addr_show(char address[]);

const int id[] = { 111,222,333,444,555 };
const char* name[] = { "ȫ�浿","����ġ","�̼���","��μ�","Ȳö��" };
const char* tel[] = { "010-1111-2222","010-3333-4444","010-5555-6666","010-7777-8888","010-9999-0000" };
const char* addr[] = { "�뱸�� ����","�뱸�� ����","�뱸�� ����","�뱸�� �߱�","�뱸�� ������" };
const char* email[] = { "kim@naver.com","lee@naver.com","jung@naver.com","Hwang@naver.com","Hong@naver.com" };

int main()
{
	char address[] = "address.bin";
	srand(time(NULL));
	// ���ϸ�: address.bin -> �Ű������� ����

	//=============================
	// �ּҷ� ���� ���α׷� v1.0
	//=============================
	//1. �ּҷ� �ڵ� ����
	//2. �ּҷ� ���� �Է�
	//3. �ּҷ� ��ü ����
	//4. �ּҷ� ����
	//5. ����
	//=============================
	//�޴� ����: 
	while (1) {
		switch (main_menu()) {
		case 1: 
			addr_rand(address);
			break;
		case 2:
			addr_dir(address);
			break;
		case 3:
			addr_del(address);
			break;
		case 4:
			addr_show(address);
			break;
		case 5:
			printf("���α׷��� �����մϴ�!");
			exit(0);
		default :
			printf("�߸��� �޴� �Է�!\n");
		}
	}
}

int main_menu()
{
	printf("=============================\n");
	printf(" �ּҷ� ���� ���α׷� v1.0\n");
	printf("=============================\n");
	printf("1. �ּҷ� �ڵ� ����\n");
	printf("2. �ּҷ� ���� �Է�\n");
	printf("3. �ּҷ� ��ü ����\n");
	printf("4. �ּҷ� ����\n");
	printf("5. ����\n");
	printf("=============================\n");
	printf("�޴� ����: ");
	int num;
	scanf("%d", &num);
	return num;
}
void addr_rand(char address[])
{
	FILE* fp = fopen(address , "ab");
	ADDR add = { 0 };
	add.id = id[rand() % 5];
	strcpy(add.name, name[rand() % 5]);
	strcpy(add.tel, tel[rand() % 5]);
	strcpy(add.addr, addr[rand() % 5]);
	strcpy(add.email, email[rand() % 5]);
	fwrite(&add, sizeof(ADDR), 1, fp);
	fclose(fp);
}
void addr_dir(char address[])
{
	FILE* fp = fopen(address, "ab");
	ADDR add = { 0 };
	printf("id �Է�: ");
	scanf("%d", &add.id);
	printf("�̸� �Է�: ");
	scanf("%s", add.name);
	printf("�ּ� �Է�: ");
	getchar();
	gets(add.addr);
	printf("�̸��� �Է�: ");
	scanf("%s", add.email);
	fwrite(&add, sizeof(ADDR), 1, fp);
	fclose(fp);
}
void addr_del(char address[])
{
	FILE* fp = fopen(address, "wb");
	fclose(fp);
}
void addr_show(char address[])
{
	FILE* fp = fopen(address, "rb");
	ADDR temp = { 0 };
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		printf("id: %d\n", temp.id);
		printf("�̸�: %s\n", temp.name);
		printf("�ּ�: %s\n", temp.addr);
		printf("�̸���: %s\n", temp.email);
		printf("------------------\n");
	}
	fclose(fp);
}
