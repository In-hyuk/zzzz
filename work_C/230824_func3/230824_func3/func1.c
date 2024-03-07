#include <stdio.h>
//#define DEBUG 1 // 주석으로 막혀있으면 디버깅코드가 동작 X

int main()
{
	// 1.로또 생성(중복방지) - 배열까지의 학습 내용
	// 2.함수로 처리 - 함수 학습

	// 로또 번호를 저장할 배열 생성
	int lotto[6] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;
#ifdef DEBUG // #define DEBUG 가 정의되어있으면 동작함
		printf("%d\t",lotto[i]); // 디버깅 용
#endif
		for (int j = 0; j < i; j++) {
			// 배열에 있는 숫자와 새로 획득한 숫자 비교
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 6; i++){
		printf("%d\t", lotto[i]);
	}
}