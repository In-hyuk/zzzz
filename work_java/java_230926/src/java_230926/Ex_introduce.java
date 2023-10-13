package java_230926;
import java.util.Scanner;

public class Ex_introduce {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		// 아래의 입력을 받고 출력을 수행하여라.
		// - 이름
		// - 나이
		// - 혈액형(char형)
		// - 키 (double형)
		// - 자기소개
		System.out.println("이름");
		String name = scan.nextLine();
		System.out.println("나이");
		int age = scan.nextInt();
		System.out.println("혈액형");
		char blood = scan.next().charAt(0);
		System.out.println("키");
		double height = scan.nextDouble();
		scan.nextLine(); // 버퍼 비우기. (엔터 값을 먹어주는 입력값)
		System.out.println("자기소개");
		String intro = scan.nextLine();
				
		System.out.println("이름: " + name);
		System.out.println("나이: " + age + "세");
		System.out.println("혈액형: " + blood + "형");
		System.out.println("키: " + height + "cm");
		System.out.println("자기소개: "+ intro);
	}
}
