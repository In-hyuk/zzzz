package java_230927;

import java.util.Scanner;

public class Func {
	// 함수 구현
	// public static [반환형] [함수명](매개변수타입 매개변수명, ...){
	// 		명령문들;
	// }
	public static int plus(int a, int b) {
		return a+b;
	}
	public static int minus(int a, int b) {
		return a-b;
	}
	public static int multi(int a, int b) {
		return a*b;
	}
	public static double div(int a, int b) {
		return (double)a/b;
		// (int)/(int) = (int)
		// (double)/(int)=(double)
		// (double)/(double)=(double)
	}
	public static int rest(int a, int b) {
		return a%b;
	}
	// 출력은, 콘솔 창에서 확인할 수 있는 값일 뿐이고
	// 반환은, 프로그램 실행 흐름 상 "뱉어지는" 결과물
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// 함수 : 특정 목적을 위해 묶어둔 "명령문들의 집합"

		// 예제 : 계산기 구현 (+, -, *, /, %)
		// 2개의 숫자와 1개의 연산자를 입력받고, 연산 결과 출력하라.

		// 1. 입력 (2개의 숫자, 1개의 연산자(char))
		int num1 = sc.nextInt();
		int num2 = sc.nextInt();
		char oper = sc.next().charAt(0);
		
		// 2. 연산자에 따라, 연산 수행
		switch(oper) {
		case '+':	// 덧셈 수행
			System.out.println("덧셈 결과: " + plus(num1,num2));
			break;
		case '-':	// 뺄셈 수행
			System.out.println("뺄셈 결과: " + minus(num1,num2));
			break;
		case '*':	// 곱셈 수행
			System.out.println("곱셈 결과: " + multi(num1,num2));
			break;
		case '/':	// 몫
			System.out.println("몫 결과: " + div(num1,num2));
			break;
		case '%':	// 나머지
			System.out.println("나머지 결과: " + rest(num1,num2));
			break;
		default:	// 올바르지 않게 연산자를 입력했을 경우 -> 오류메시지 출력
			System.out.println("error!!!");
		}
	}
}
