#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���� �ֹ� ���α׷�
	//while (1) {
	//	system("cls"); // cls: ȭ���� û���ϴ� ��ɾ�
	//	printf("--------------------------------\n");
	//	printf("�Ĵ� �޴� �ڵ� �ֹ� ���α׷� v1.0\n");
	//	printf("--------------------------------\n");
	//	printf("a. ��ġ� : 5,000��\n");
	//	printf("b. ����� : 5,000��\n");
	//	printf("c. Į����   : 4,500��\n");
	//	printf("d. ��ġ���� : 4,000��\n");
	//	printf("e. �����   : 5,000��\n");
	//	printf("x. ���α׷� ����\n");
	//	printf("--------------------------------\n");

	//	char menu;
	//	printf("�޴��� �����ϼ���: ");
	//	scanf(" %c", &menu);

	//	switch (menu) {
	//	case 'a':
	//		printf("��ġ��� �ֹ��߽��ϴ�. \n");
	//		break;
	//	case 'b':
	//		printf("������� �ֹ��߽��ϴ�. \n");
	//		break;
	//	case 'c':
	//		printf("Į������ �ֹ��߽��ϴ�. \n");
	//		break;
	//	case 'd':
	//		printf("��ġ������ �ֹ��߽��ϴ�. \n");
	//		break;
	//	case 'e':
	//		printf("������� �ֹ��߽��ϴ�. \n");
	//		break;
	//	case 'x':
	//		exit(0); // ������ ���� ����
	//	}
	//	// �ܺ� ���α׷��� C��� ������ ���۽�Ű�� �Լ�
	//	system("pause"); //������ �Ͻ� ����
	//}

	printf("--------------------------------\n");
	printf("��� ���Ǳ� ���α׷� v1.0\n");
	printf("--------------------------------\n");
	printf("1. ���� ��� ����   6,000��\n");
	printf("2. ���� ����� ��� 5,000��\n");
	printf("3. ���� ���        4,500��\n");
	printf("4. ���� ������      4,500��\n");
	printf("5. ���� ȭ��Ʈ      4,500��\n");
	printf("--------------------------------\n");
	
	int num;
	printf("��踦 �����ϼ��� => ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("���� ��� ������ �����ϼ̽��ϴ�\n");
		break;
	case 2:
		printf("���� ����� ��带 �����ϼ̽��ϴ�\n");
		break;
	case 3:
		printf("���� ��縦 �����ϼ̽��ϴ�\n");
		break;
	case 4:
		printf("���� �������� �����ϼ̽��ϴ�\n");
		break;
	case 5:
		printf("���� ȭ��Ʈ�� �����ϼ̽��ϴ�\n");
		break;
	}
	printf("--------------------------------\n");
	int money;
	printf("��� �ݾ��� �Ա��ϼ��� => ");
	scanf("%d", &money);
	/*if (num == 1 && money >= 6000) {
		printf("�Ž����� %d���� ��������", money - 6000);
	}
	else if (num == 1 && money < 6000) {
		printf("%d�� �� �ʿ��մϴ�", 6000 - money);
	}
	else if (num == 2 && money >= 5000) {
		printf("�Ž����� %d���� ��������", money - 5000);
	}
	else if (num == 2 && money < 5000) {
		printf("%d�� �� �ʿ��մϴ�", money - 5000);
	}
	else if ((num == 3 || num == 4 || num == 5) && (money >= 4500)) {
		printf("�Ž����� %d���� ��������", money - 4500);
	}
	else {
		printf("%d�� �� �ʿ��մϴ�", 4500 - money);
	}*/
	switch (num) {
	case 1:
		// ���� �ҽ��ڵ忡 ���� ǥ���ϴ� ��� - �ϵ��ڵ�(hard coding)
		// �ϵ��ڵ������ ��ȿ���� ---> ������ �̿�(ȿ����)
		printf("���� ��� ������ �����ϼ̽��ϴ�\n");
		printf("�Ž����� %d�� ��������\n", money - 6000);
		break;
	case 2:
		printf("���� ����� ��带 �����ϼ̽��ϴ�\n");
		printf("�Ž����� %d�� ��������\n", money - 5000);
		break;
	case 3:
		printf("���� ��縦 �����ϼ̽��ϴ�\n");
		printf("�Ž����� %d�� ��������\n", money - 4500);
		break;
	case 4:
		printf("���� �������� �����ϼ̽��ϴ�\n");
		printf("�Ž����� %d�� ��������\n", money - 4500);
		break;
	case 5:
		printf("���� ȭ��Ʈ�� �����ϼ̽��ϴ�\n");
		printf("�Ž����� %d�� ��������\n", money - 4500);
		break;
	}

	 /*���� : ����(������)�� �����ϴ� ����
	 ���� : ����(����int, �Ǽ�float), ����(����, ���ڿ�)
	 ����: int(%d), �Ǽ�: float(%f), ����: char(%c)
	 ������ : %(������), ��(����)������, ��������
	 ��� : printf �Լ�, �Է� : scanf �Լ�
	 �ݺ���(for, while, do-while)
	 ���(if, switch)*/
}