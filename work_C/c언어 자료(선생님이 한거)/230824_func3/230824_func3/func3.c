// func3.c
#include <stdio.h>
#include <stdlib.h>	// srand()
#include <time.h>	// time()
void hap_func();
void avg_func();
char hak_func(int avg);
int main()
{
	// 5���� ��,��,�� ������ �����ϰ� ���� (0~100)
	int score[5][3] = { 0 };
	srand(time(NULL));
	// �����ϰ� �߻��� ���ڸ� 5���� �л�(5x3�迭)���� ����
	int hap = 0; // ����
	int avg = 0; // ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			score[i][j] = (rand() % 101); // 0~100
			printf("score[%d][%d]=%d\t", i, j, score[i][j]);
			hap = hap + score[i][j]; // hap += score[i][j];
		} // ���� ������ ��ġ
		avg = hap / 3;
		printf("����:%d\t���:%d\t", hap, avg);
		printf("%c����", hak_func(avg));
		hap = 0;		
		printf("\n");
	}
}

void hap_func() // ���� ���ϴ� �Լ�
{

}

void avg_func() // ����� ���ϴ� �Լ�
{

}

char hak_func(int avg) // ������ ���ϴ� �Լ�
{
	char hak = 0;
	if (avg >= 90 && avg <= 100) {
		hak = 'A';
	}
	else if (avg >= 80 && avg <= 89) {
		hak = 'B';
	}
	else if (avg >= 70 && avg <= 79) {
		hak = 'C';
	}
	else if (avg >= 60 && avg <= 69) {
		hak = 'D';
	}
	else {
		hak = 'F';
	}
	return hak;
}