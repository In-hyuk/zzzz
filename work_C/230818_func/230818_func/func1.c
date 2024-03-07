#include <stdio.h>

void greeting(); // main함수 아래에 정의가 있다는것을 알려줌(함수의 프로토타입 선언)

int main() // 메인함수
{
	greeting(); // 함수의 정의를 호출함, 함수의 호출은 다른 함수에서 가능
	printf("main함수의 다른 동작\n");
	greeting();
}

// >>>> 중요 <<<<
// 함수의 정의는 실행되지 못함 -> 사용하기 위해서는 다른 함수에서 해당 함수 호출이 필요 
void greeting() // 내가 만든 함수의 정의(사용자 정의 함수)
{
	printf(">>>> 함수 시작 <<<<\n");
	printf("안녕하세요\n");
	printf("반갑습니다\n");
	printf(">>>> 함수 종료 <<<<\n");
}

