#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct professor {
	char name[20];	// ������
	char major[20]; // ����
	int age;		// ��������
};

struct info {
	char name[20];			// �л���
	char phoneNum[20];		// ��ȭ��ȣ
	int age;				// ����
	char address[50];		// �ּ�
	struct professor pro;   // ��米��
};


int main()
{
	// 1. �л� ���� ����ü �����
	// 2. �л� ������ �̸�, �޴�����ȣ, ����, �ּҰ� ����.
	// 3. 100���� �л� ������ �����ϰ� �����Ͽ� ���
	// 4. �������� �迭�� ���� �����ϰ� �����ϰ� �ҷ����� ó��
	char* name[5] = { "ȫ�浿","����ġ","������","������","������" };
	char* addr[5] = { "�뱸 ����","�뱸 ������","�뱸 �ϱ�","�뱸 ����","�뱸 ����" };
	int age[5] = { 20,30,40,50,60 };
	char* tel[5] = { "010-1234-5677","010-2424-2424","010-6731-2241","010-2421-1111","010-0000-0000" };
	
	srand(time(NULL));
	struct info st[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		strcpy(st[i].name, name[rand() % 5]);
		strcpy(st[i].phoneNum, tel[rand() % 5]);
		st[i].age = age[rand() % 5];
		strcpy(st[i].address, addr[rand() % 5]);
		printf(">>> %d��° �л� ���� <<<\n", i + 1);
		printf("�̸�: %s\n", st[i].name);
		printf("��ȣ: %s\n", st[i].phoneNum);
		printf("����: %d\n", st[i].age);
		printf("�ּ�: %s\n", st[i].address);
		printf("===================\n");
	}
	st[0].pro.age = 50; // ù��° �л��� ��米�� ����
	strcpy(st[0].pro.name, "ȫ����");
	printf("%s �л��� ��� ����: %s\n", st[0].name, st[0].pro.name);
}