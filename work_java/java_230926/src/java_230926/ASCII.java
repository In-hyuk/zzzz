package java_230926;
import java.util.Scanner;

public class ASCII {
	public static void main(String_Func[] args) {
		Scanner scan = new Scanner(System.in);
		// 아스키코드
		// 콘솔 창에서 영문자 또는 숫자를 입력받게끔 하고 그 입력값에 대한 아스키코드 값 출력하면서 종료하기.
		char c = scan.next().charAt(0);
		System.out.println("아스키 코드 값: " + (int)c);
		// 0은 48 A는 65 a는 97		
	}
}
