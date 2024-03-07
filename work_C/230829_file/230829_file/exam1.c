#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct fren {
	char name[20];
	char sex;
	int age;
}Friend;

int menu();
void write();
void read();

int main()
{
	//--------------------------------
	//  ���� ���� ���α׷� v1.0
	//--------------------------------
	// 1. ģ�� ���� ����
	// 2. ģ�� ���� �б�
	// 3. ����
	//--------------------------------
	// �޴� ����:
	
	while (1) {
		switch (menu()) {
		case 1:
			write();
			break;
		case 2:
			read();
			break;
		case 3:
			printf("���α׷��� ���� �մϴ�!");
			exit(0);
		default:
			printf("�߸��� �޴� ����!\n");
		}
	}

}

int menu()
{
	printf("--------------------------------\n");
	printf("  ���� ���� ���α׷� v1.0\n");
	printf("--------------------------------\n");
	printf("1. ģ�� ���� ����\n");
	printf("2. ģ�� ���� �б�\n");
	printf("3. ����\n");
	printf("--------------------------------\n");
	printf("�޴� ����: ");
	int num;
	scanf("%d", &num);
	return num;
}

void write()
{
	Friend myfren1;
	FILE *fp = fopen("friend.bin", "wb");
	printf("�̸� �Է�: ");
	scanf("%s", myfren1.name);
	getchar();
	printf("����(M/F) �Է�: ");
	scanf("%c", &myfren1.sex);
	printf("���� �Է�: ");
	scanf("%d", &myfren1.age);
	fwrite(&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);
}

void read()
{
	Friend myfren2;
	FILE *fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
}