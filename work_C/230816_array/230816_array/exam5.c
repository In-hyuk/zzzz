#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	// 1���� �迭 dmz�� ���ڰ� �Ʒ�ó�� �ż��Ǿ���.
	 /** B * B *
	 1 1 2 1 1 */
	/*char dmz[] = { '*','B','*','B','*' };
	int arr[5] = { 0 };*/

	//for (int i = 0; i < 5; i++) {
	//	if (dmz[i - 1] == 'B' && dmz[i] == 'B' && dmz[i + 1] == 'B') { // ��� �� �ȳ����� ����ó�� �ؾ���.
	//		arr[i] = 3;
	//	}
	//		else if ((dmz[i - 1] == 'B' && dmz[i] == 'B') || (dmz[i] == 'B' && dmz[i + 1] == 'B') || (dmz[i - 1] == 'B' && dmz[i + 1] == 'B')) {
	//		arr[i] = 2;
	//		}
	//		else if (dmz[i - 1] == 'B') {
	//		arr[i] = 1;
	//		}
	//		else if (dmz[i] == 'B') {
	//		arr[i] = 1;
	//		}
	//		else if (dmz[i + 1] == 'B') {
	//		arr[i] = 1;
	//		}
	//	printf("%d", arr[i]);
	//}

	//const int START = 0; // ������� (������ ���� ���� x)
	//#define END 4
	//for (int i = 0; i < 5; i++) {
	//	if (dmz[i] == 'B') {
	//		arr[i] += 1;
	//	}
	//	if (i > 0 && dmz[i - 1] == 'B') {
	//		arr[i] += 1;
	//	}
	//	if (dmz[i + 1] == 'B' && i != END) {
	//		arr[i] += 1;
	//	}
	//	printf("%d", arr[i]);
	//}

	char dmz[2][3] = {
		{'*','B','B'},
		{'*','B','*'}
	};
	int arr[2][3] = { 0 };
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (dmz[i][j] == 'B') {
				arr[i][j] += 1;
			}
			if (j !=0 && dmz[i][j - 1] == 'B') {
				arr[i][j] += 1;
			}
			if (dmz[i][j + 1] == 'B') {
				arr[i][j] += 1;
			}
			if (i !=0 && dmz[i - 1][j] == 'B') {
				arr[i][j] += 1;
			}
			if (dmz[i + 1][j] == 'B') {
				arr[i][j] += 1;
			}
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}