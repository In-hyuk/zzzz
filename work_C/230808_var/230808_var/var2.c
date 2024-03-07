#include <stdio.h>

int main(void) 
{
	char* name = "홍길동";
	int age = 200;
	char* phone = "010-1234-4321";
	char* address = "조선 한양 홍대감댁 11번지";
	float height = 180.2;
	float weight = 78.5;
	char blood_type = 'B';

	printf("---------------------------------\n");
	printf("        수강생 정보 확인서        \n");
	printf("---------------------------------\n");
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("전화: %s\n", phone);
	printf("주소: %s\n", address);
	printf("키: %.1fcm\n", height);
	printf("몸무게: %.1fkg\n", weight);
	printf("혈액형: %c형\n", blood_type);
	printf("---------------------------------\n");

	int a = 100; // 초기화(변수를 생성하고 난 직후 값을 대입)
	int b = 200;
	int c ; // 변수를 생성하고 난 직후 값을 대입하지 않음
	c = a + b;
	printf("%d\n\n", c);

	// 원의 면적
	float PI = 3.14;
	float radius = 3.452;
	float area = radius * radius * PI;
	printf("%f\n", area);

	// 성적표 구하는 프로그램 작성하기
	int language, english, math, science = 0;
	language = 90;
	printf("%d\n", language);
	english = 80;
	printf("%d\n", english);
	math = 70;
	printf("%d\n", math);
	science = 60;
	printf("%d\n", science);
	float avg, sum;
	avg = (language + english + math + science) / 4;
	sum = language + english + math + science;
	printf("평균값: %f, 총점: %f\n", avg, sum);

	// 온도를 구하는 프로그램
	int x;
	x = 40;
	float y;
	y = (x - 32) / 1.8;
	printf("%f\n", y);
}