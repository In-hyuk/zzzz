#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct fren {
	char name[10];
	char sex;
	int age;
} Friend;

int main()
{
	FILE* fp;
	Friend myfren1;
	Friend myfren2;

	// ���� ����
	fp = fopen("friend.bin", "wb");
	printf("�̸� �Է�:");
	scanf("%s", myfren1.name);
	//getchar();
	printf("����(M/F) �Է�:");
	scanf("%c", &myfren1.sex);
	printf("���� �Է�:");
	scanf("%d", &myfren1.age);
	fwrite(&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);

	// ���� �б�
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("�̸�:%s\n", myfren2.name);
	printf("����:%c\n", myfren2.sex);
	printf("����:%d\n", myfren2.age);
	fclose(fp);
}