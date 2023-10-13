package java_231012;
import java.util.Scanner;
// 추상클래스 : 덜 구현된 클래스 
// 추상클래스 + 다중 상속 지원 = 인터페이스 

// interface 인터페이스명{
//	 멤버 선언
//	 - 필드 : 상수 선언 및 초기화 (변수X) 
//		-> public static "final" [타입] [상수명] = [값];
//	 - 메소드 : 추상메소드만 작성 -> 함수를 정의하는 부분 없어야함
//		abstract 키워드 생략 가능
// }

// Character 인터페이스 작성
// 메소드 : attack(), minus(int)   -> 추상 메소드
//		-> 다른 클래스에서 상속받아 재정의 (오버라이딩)
interface Character{
	abstract public void attack();
	public void minus(int d);
}

// User 클래스 작성  ->  Character 인터페이스 상속 (implements)
class User implements Character{
	// 멤버 변수 : hp = 100, mp = 100, 공격럭(hit), 방어력(defense)
	private String name;
	private int hp = 100;
	private int mp = 100;
	private int hit;
	private int defense;
	// get 함수 4개
	public int getHp() {
		return hp;
	}
	public int getMp() {
		return mp;
	}
	public int getHit() {
		return hit;
	}
	public int getDefense() {
		return defense;
	}
	// 메소드 선언부 -> Character 인터페이스 함수 재정의
	// 메소드 : attack()
	public void attack() {
		this.mp -= 10;
		System.out.println(this.name + " 유저가 상대에게 공격하였습니다.");
		System.out.println(this.name + "의 남은 mp는 " + this.mp + "입니다");
	}
	// 메소드 : minus(int) -> 매개변수 값이 상대 공격력
	public void minus(int d) {
		// this.hp -= d*(i/defense); -> 1/2 => 0
		this.hp -= d/this.defense;
		if(this.hp <0) {
			this.hp = 0;
		}
		System.out.println(this.name + "유저가 공격을 받았씁니다.");
		System.out.println(this.name + "의 남은 hp는 " + this.hp + "입니다.");
	}
	// 생성자
	public User(String n, int h, int d) {
		this.name = n;
		this.hit = h;
		this.defense = d;
	}
}

public class Review {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// User 에 대한 객체 2개 생성 ( 입력을 통한 멤버 초기화 )
		User user1 = new User(sc.next(),sc.nextInt(),sc.nextInt());
		User user2 = new User(sc.next(),sc.nextInt(),sc.nextInt());
		
		// user1을 시작으로 하여, user1과 user2가 서로 공격 (hp나 mp가 0이 될때까지!)
		while(user1.getMp() > 0 || user2.getMp() > 0 ) {	
			// 조건 : 두 유저 중 한명이라도 mp값이 있다면
			// 두 유저 모두 mp가 0이 되면 반복문 종료
			
			// user1의 공격시도, user2 데미지 받음
			user1.attack();
			user2.minus(user1.getHit()); 	// 매개변수 : user1의 hit값
			System.out.println();
			// user1의 공격으로 user2의 hp가 0이 된다면 -> 전투 종료
			if(user2.getHp() <= 0) {
				break;
			}
			
			// user2의 공격시도, user1 데미지 받음
			user2.attack();
			user1.minus(user2.getHit()); 	// 매개변수 : user2의 hit값
			System.out.println();
			// user2의 공격으로 user1의 hp가 0이 된다면 -> 전투 종료
			if(user1.getHp() <= 0) {
				break;
			}
		}
		// -> 각 입력에 따라, 누가 대결에서 승리하는지를 출력하도록 하라. (hp 값이 같다면, 무승부 처리)
		if(user1.getHp() == user2.getHp()) {
			System.out.println("무승부입니다---");
		}
		else if(user1.getHp() > user1.getHp()) {
			System.out.println("111 user1의 우승입니다 111");
		}
		else {
			System.out.println("222 user2의 우승입니다 222");
		}
	}
}
