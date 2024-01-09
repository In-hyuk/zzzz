package com.javalex.ex;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

/**
 * Servlet implementation class Student_Servlet
 */
@WebServlet("/Student")
public class Student_Servlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Student_Servlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		
		// html 파일에서의 입력값 파라미터 처리
		String name=request.getParameter("name");
		int age=Integer.parseInt(request.getParameter("age"));
		String number=request.getParameter("number");
		String gender=request.getParameter("gender");
		
		// 자바빈을 이용하여, Student 타입의 s 객체 생성
		Student s= new Student(name, age, number, gender);
		
		// 브라우저 상, 객체 멤버변수 값들을 출력
		response.setContentType("text/html; charset=UTF-8");
		PrintWriter pw=response.getWriter();
		pw.println("이름: "+s.getName()+"<br>");
		pw.println("나이: "+s.getAge()+"<br>");
		pw.println("번호: "+s.getNumber()+"<br>");
		pw.println("성별: "+s.getGender()+"<br>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
