package java_231005;
import java.util.Scanner;

// Account 클래스 구현
class Account{
	// 멤버 변수
	private String acc_num;
	private String id;
	private String password;
	// 메소드 : get/set
	public String getAcc_num() {
		return acc_num;
	}
	public void setAcc_num(String acc_num) {
		this.acc_num = acc_num;
	}
	public String getId() {
		return id;
	}
	public void setId(String id) {
		this.id = id;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
	// 메소드 : Print
	public void Print() {
		System.out.println("회원번호: " + this.acc_num);
		System.out.println("아이디: " + this.id);
		System.out.println("비밀번호: " + this.password);
	}
	// 메소드 : changePw
	public void changePw(String pw) {
		if(pw.length()<5) {
			System.out.println("error!!!");
		}
		else {
			this.password = pw;
		}
	}
	// 생성자 메소드 : 1. 각각 "0000", "ex", "0000" 으로 초기화 
	// 생성자 오버로딩 적용되고 있다.
	public Account() {
		this.acc_num = "0000";
		this.id = "ex";
		this.password = "0000";
	}
	// 생성자 메소드 : 2. 3개의 멤버 변수 매개변수 통해 초기화
	public Account(String n, String i, String p) {
		this.acc_num = n;
		this.id = i;
		this.password = p;
	}
}

public class Ex_Account {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// Account 클래스 생성
		// 멤버 변수 : acc_num(회원번호), id(아이디), password(비밀번호)
		// 메소드 :1. get, set 함수
		//       2. Print() : 3개 멤버 변수 값 출력
		//		 3. changePw(String) : 매개변수 값으로 비번 변경 다만, 5자리를 넘기지 않으면 에러메세지 출력
		// 생성자 :1. 각각 "0000", "ex", "0000" 으로 초기화 
		//		 2. 3개의 멤버 변수 매개변수 통해 초기화
		// main 에서 실행할 내용
		// manager[3] 객체 생성 (임의값으로 설정하는 생성자)
		// manager[3] id, password 값 코드 상에서 임의로 수정
		// manager[3] 순차적으로 정보 출력
		// user 객체 생성 (main 에서 입력받아서 초기화)
		// user 정보 순차적으로 출력
		// user 객체에 대해 changePw(String) 수행
		
		// 1. manager[3] 객체 생성 (임의값으로 설정하는 생성자 실행)
		// 배열 할당 >> 객체 생성
		Account manager[] = new Account[3];
		for(int i = 0; i<manager.length; i++) {
			manager[i] = new Account();
		}
		
		// 2. manager[3] id, password 값 코드 상에서 임의로 수정
		// manager[0].setId("test1");	manager[0].setPassword("123456");
		for(int i = 0; i<manager.length ;i++) {
			if(i==0) {
				manager[i].setId("1111");
				manager[i].setPassword("2222");
			}
			else if(i==1) {
				manager[i].setId("가나다");
				manager[i].setPassword("4444");
			}
			else {
				manager[i].setId("5555");
				manager[i].setPassword("6666");
			}	
		}
		// 3. manager[3] 순차적으로 정보 출력
		for(int i = 0; i<manager.length ;i++) {
			manager[i].Print();
			System.out.println();
		}
		// 4. user 객체 생성 (main 에서 입력받아서 초기화)
		String num = sc.next();
		String id = sc.next();
		String pw = sc.next();
		Account user = new Account(num, id, pw);
		// 5. user 정보 순차적으로 출력
		user.Print();
		System.out.println();
		// 6. user 객체에 대해 changePw(String) 수행
		System.out.print("수정할 비밀번호를 입력해주세요: ");
		user.changePw(sc.next());
		user.Print();
	}
}
