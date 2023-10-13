package java_231004;
import java.util.Scanner;

// Clock 클래스 구현
class Clock {
	// 멤버 변수 선언
	// Clock 에 대한 객체 생성함과 동시에 3개의 멤버 변수들이 모두 0으로 초기화한다.
	private int hour = 0;
	private int minute = 0;
	private int second = 0;
	
	public int getHour() {
		return hour;
	}
	public void setHour(int hour) {
		this.hour = hour;
	}
	
	public int getMinute() {
		return minute;
	}
	public void setMinute(int minute) {
		this.minute = minute;
	}
	
	public int getSecond() {
		return second;
	}
	public void setSecond(int second) {
		this.second = second;
	}
	
	// 멤버 함수 선언
	public void PrintTime() {
		System.out.println(this.hour + "시 " + this.minute + "분 " + this.second + "초");
	}
//	public void AmPm() {
//		if(this.hour >= 12) {
//			System.out.print("오후 ");
//		}
//		else {
//			System.out.print("오전 ");
//		}
//	}
	public String AmPm() {
		if(this.hour >= 0 && this.hour <12) { 		// 오전인 경우
			return "오전";
		}
		else {										// 오후인 경우
			return "오후";
		}
	}
}

public class Ex_Clock {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// Clock 클래스 구현
		// -멤버 변수 : hour=0, minute=0, second=0 (private 으로 선언)
		// -멤버 함수 : PrintTime() -> 현재 시간 출력
		//			  AmPm() -> 오전인지 오후인지 출력
		// main 에서 수행할 것
		// - Clock 클래스를 통해 c1,c2 객체 생성
		// - 3개의 입력을 받아 c2 객체 필드 초기화
		// - c1, c2 객체에 대한, PrintTime() 및 AmPm() 실행
		
		// Clock 클래스를 통해 c1, c2 객체 각각 생성 
		Clock c1 = new Clock();
		Clock c2 = new Clock();

		// 3개의 입력을 받아 c2 객체 필드 초기화
		System.out.println("현재 시각을 입력하세요. (hour, minute, second)");
		c2.setHour(sc.nextInt());
		c2.setMinute(sc.nextInt());
		c2.setSecond(sc.nextInt());
		
		// c1, c2 객체에 대한, PrintTime() 및 AmPm() 실행
		System.out.println("현재는 " + c1.AmPm() + "입니다.");			// "오전" 또는 "오후" 반환
		c1.PrintTime();		
		System.out.println("현재는 " + c2.AmPm() + "입니다.");
		c2.PrintTime();	
	}
}
