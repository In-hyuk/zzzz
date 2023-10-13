package java_230926;

import java.util.Scanner;

public class Ex_Alpha {
	public static void main(String[] args) {
		// 문장을 입력받고 문장에 대한 26개의 알파벳 각 빈도수를 측정하여 각각 출력하라.
		// (대문자 및 소문자를 모두 포함하여 입력받는다고 가정한다.)
		// (다만, 한번도 나타나지 않은 알파벳은 출력하지 않도록 한다.
		// (ex) 입력값 : Hello
		// <출력 결과>
		// e : 1개
		// h : 1개
		// l : 2개
		// o : 1개
		Scanner scan = new Scanner(System.in);
		// 1. 문장 입력받기
		System.out.println("단어 입력");
		String st = scan.nextLine();

		// 2. 문장에 포함된 알파벳 각 빈도수 측정
		// -> 알파벳 빈도 저장하는 배열(alpha) 별도 선언
		int alpha[] = new int[26];
		for (int i = 0; i < st.length(); i++) { // 0번~(문자열 길이-1)까지 반복
			// 'A' : 65
			// 'a' : 97
			char ch = st.charAt(i);
			if (ch >= 'A' && ch <= 'Z') { // 대문자인 경우
				alpha[ch - 'A']++;
			}
			if (st.charAt(i) >= 'a' && st.charAt(i) <= 'z') { // 소문자인 경우
				alpha[ch - 'a']++;
			}
		}
		for (int i = 0, j = 65; i < 26; i++, j++) {
			// 0인 경우는, 해당 알파벳이 아예 안 나온 경우
			if (alpha[i] > 0) {
				System.out.println((char) j + ": " + alpha[i]);
			}
		}
	}
}