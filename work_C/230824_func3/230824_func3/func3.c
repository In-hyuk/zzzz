#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char hak(int avg);
int avg(int hap);

int main()
{
	/*5���� ��,��,�� ������ �����ϰ� ���� (0~100)*/
	int score[5][3] = { 0 };
	srand(time(NULL));
	int hap = 0; // ����
	int avg=0;// ���

for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 3; j++) {
		score[i][j] = (rand() % 101); // 0~100
		printf("score[%d][%d]=%d\t", i, j, score[i][j]);
		hap = hap + score[i][j]; // hap += score[i][j];
		}
		printf("hap: %d ", hap);
		printf("%c����", hak(avg));
		//	if (avg >= 90) {
		//		printf("����: A");
		//	}
		//	else if (avg >= 80) {
		//		printf("����: B");
		//	}
		//	else if (avg >= 70) {
		//		printf("����: C");
		//	}
		//	else if (avg >= 60) {
		//		printf("����: D");
		//	}
		//	else if (avg >= 50) {
		//		printf("����: E");
		//	}
		//	else
		//		printf("����: F");
			hap = 0;
			printf("\n");
			
		}
}

char hak(int avg)
{
	char hak = 0;
	if (avg >= 90) {
		hak = 'A';
			}
	else if (avg >= 80) {
		hak = 'B';
			}
	else if (avg >= 70) {
		hak = 'C';
			}
	else if (avg >= 60) {
		hak = 'D';
			}
	else if (avg >= 50) {
		hak = 'E';
			}
	else
		hak = 'F';
	return hak;
}

int avg(int hap)
{
	return hap / 3;
}