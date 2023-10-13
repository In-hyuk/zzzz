package java_231004;

import java.util.Scanner;

public class Ex_Day {
	public static int getDaily(int m, int d) {
		int count = 0;
		for (int i = 1; i < m; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				count += 31;
			} else if (i == 2) {
				count += 28;
			} else if (i == 4 || i == 6 || i == 9 || i == 11) {
				count += 30;
			}
		}
		return 365 - count - d; 
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// 오늘 날짜(월, 일) 을 입력받고 이번 해가 끝나기까지 몇 일이 남았는지 출력하기
		// main에서 입출력 수행하기
		// -getDaily() -> 월, 일 정보를 통해 연말까지 몇 일 남았는지 반환하는 함수 구현
		// ex) 입력값 : 12 31 입력값 : 10 4 입력값 : 3 14 입력값 : 1 1
		// 출력값 : 0일 남음 출력값 : 88일 남음 출력값 : 292일 남음 출력값 : 364일 남음
		System.out.println("월 입력: ");
		int month = sc.nextInt();
		System.out.println("일 입력: ");
		int day = sc.nextInt();
		int restday = getDaily(month, day);
		System.out.println(restday + "일 남음");
	}
}
