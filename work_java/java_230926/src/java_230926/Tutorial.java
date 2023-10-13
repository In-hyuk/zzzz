package java_230926;
import java.util.Scanner;

public class Tutorial {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		// 여기에서, 주요 명령문 작성하면 됌
		/*
		 	여러줄 주석
		 */
		
		// 출력문
		//System.out.printf("결과값은 %d입니다.", 3);
		System.out.print("Hello222");	  // "Hello222"
		System.out.println("Hello111");   // "Hello111" + "\n"
		
		System.out.println();	// "\n" -> 출력값이 있는 상태
		//System.out.print();		// 출력값이 없음, 에러 발생
		
		// 입력문 ->
		// 정수형 자료형
		int i = scan.nextInt();
		long l = scan.nextLong();
		// 실수형 자료형
		double d =  scan.nextDouble();
		float f = scan.nextFloat();
		// 문자형 자료형
		char c = scan.next().charAt(0); 
		String s1 = scan.next();		// " " 을 만나면 종료
		String s2 = scan.nextLine();	// "\n"을 만나면 종료
		
		
	}	
}
