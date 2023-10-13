package java_230927;
import java.util.Scanner;

public class Repeat {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		// 조건문 : if-else if-else문, switch
//		if(조건문1) {			// "조건문1"을 만족하면, 여기에 있는 내용을 수행하라.
//			
//		}
//		else if(조건문2) {	// 위 조건문을 만족하지 못하고, "조건문2"를 만족할 때, 여기에 있는 내용을 수행하라.	
//			
//		}
//		else {				// 위 조건문을 모두 만족하지 못하였다면, 이거라도 수행해라.
//			
//		}
		
		// 반복문 : (조건을 만족한단 전제 하)동일한 명령문을 반복하는 구문
		// for문, while문, do-while문
//		while(조건문) {
//			조건문 만족할 시 ,반복할 명령문
//		}
		
		// for 문에 있어, 조건문 빼고는 모두 생략 가능
//		for(조건문 판별 이전 사전작업 ;조건문; 루프완료시 후처리) {
//			반복할 명령문
//		}
		
		// 1) 숫자 n을 입력받고 1부터 n까지 숫자 중 짝수만 추려내어 출력하고 짝수들끼리의 합을 출력하도록 하여라.
//		System.out.println("숫자 입력: ");
//		int n = scan.nextInt();
//		int sum = 0;
//		for(int i = 1; i<=n; i++) {
//			if(i%2==0) {
//				sum += i;
//				System.out.println(i);
//			}
//		}
//		System.out.println("총 합: " + sum);
		// 2) 숫자 n을 입력받고 1부터 n까지의 숫자 중 소수만 추려내어 출력하라.
		// (소수란, 특정 숫자에 대해 약수가 1과 자기 자신 밖에 없는 숫자를 의미한다.)
		// ex) 입력값 : 9 -> 2,3,5,7
		
		// 1. num 입력받기
		System.out.println("숫자 입력: ");
		int num = scan.nextInt();
		
		// 1부터 n까지 숫자 탐색
		for(int i = 1; i<=num; i++) { // i는 1부터 n까지 순회
			// 소수 : 숫자 a에 대해, 약수가 1과 자기 자신(a)만 있는 숫자
			// 		=> 2~(a-1) 범위에선 약수가 없어야 한다.
			int count = 0;
			for(int j = 2; j<i; j++) {
				if(i%j==0) {	// j가 i의 약수일 때,
					// 요기로 들어오면, 소수가 아니게 된다.
					count++;
				}
			}
			
			// count의 값이 0을 유지하지 못한다면, 소수가 아니다.
			// count가 0을 유지하면, 소수라고 할 수 있음
			if(count == 0 && i != 1) {
				// 여기 안에 들어오면 소수 -> 소수 출력
				System.out.println(i);
			}
		}
	}
}
