#include <stdio.h>
#include <stdlib.h> // srand()
#include<time.h>    // time() 

void check_odd(int a[]);

int main()
{
	// 1.main()에서 10개의 숫자를 저장하는 1차원 배열 생성
	// 2.랜덤하게 10개의 숫자를 배열에 저장
	// 3.배열의 주소값을 매개변수로 전달하여 홀,짝을 구분하여 출력 함수

	int arr[10] = { 0 }; // 난수 저장할 배열

	srand(time(NULL)); // 매번 다른 시드값 생성
	for (int i = 0; i < 10; i++) { // 10회 반복
		arr[i] = (rand() % 45) + 1; // 난수 생성 1~45까지
		//printf("%d\n", arr[i]);
	}
	check_odd(arr);
}

void check_odd(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			printf("%d 짝수\n", a[i]);
		}
		else {
			printf("%d 홀수\n", a[i]);
		}
	}
}

