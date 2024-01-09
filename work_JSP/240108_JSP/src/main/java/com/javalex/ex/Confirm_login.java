package com.javalex.ex;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;
import jakarta.websocket.Session;

import java.io.IOException;

/**
 * Servlet implementation class Confirm_login
 */
@WebServlet("/login")
public class Confirm_login extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Confirm_login() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String id = request.getParameter("id");
		String pw = request.getParameter("pw");
		
		// 세션을 통해서 생성된 변수 : 
		//		선언된 직후 ~ 사용자가 프로그램을 종료할때까지 살아있음 
		
		// 1. HttpSession 객체 생성
		HttpSession session = request.getSession();
		if(id.equals("admin") && pw.equals("1111")) {
			// 참이면, 관리자 로그인 성공한 걸로
			
			// 세션에 데이터를 저장 (id_session : "admin")
			session.setAttribute("id_session", id);
			session.setAttribute("pw_session", pw);
			response.sendRedirect("welcome.jsp");
		}
		else {
			// 거짓이면, 로그인 창으로 복귀
			System.out.println("관리자 로그인에 실패하였습니다.");
			response.sendRedirect("login.html");
		}
	}

}
