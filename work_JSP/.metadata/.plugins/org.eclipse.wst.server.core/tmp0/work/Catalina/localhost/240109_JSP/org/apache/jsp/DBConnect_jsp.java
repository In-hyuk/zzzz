/*
 * Generated by the Jasper component of Apache Tomcat
 * Version: Apache Tomcat/10.1.17
 * Generated at: 2024-01-09 05:32:41 UTC
 * Note: The last modified time of this file was set to
 *       the last modified time of the source file after
 *       generation to assist with modification tracking.
 */
package org.apache.jsp;

import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.jsp.*;
import java.sql.*;

public final class DBConnect_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent,
                 org.apache.jasper.runtime.JspSourceImports,
                 org.apache.jasper.runtime.JspSourceDirectives {

  private static final jakarta.servlet.jsp.JspFactory _jspxFactory =
          jakarta.servlet.jsp.JspFactory.getDefaultFactory();

  private static java.util.Map<java.lang.String,java.lang.Long> _jspx_dependants;

  private static final java.util.Set<java.lang.String> _jspx_imports_packages;

  private static final java.util.Set<java.lang.String> _jspx_imports_classes;

  static {
    _jspx_imports_packages = new java.util.HashSet<>();
    _jspx_imports_packages.add("java.sql");
    _jspx_imports_packages.add("jakarta.servlet");
    _jspx_imports_packages.add("jakarta.servlet.http");
    _jspx_imports_packages.add("jakarta.servlet.jsp");
    _jspx_imports_classes = null;
  }

  private volatile jakarta.el.ExpressionFactory _el_expressionfactory;
  private volatile org.apache.tomcat.InstanceManager _jsp_instancemanager;

  public java.util.Map<java.lang.String,java.lang.Long> getDependants() {
    return _jspx_dependants;
  }

  public java.util.Set<java.lang.String> getPackageImports() {
    return _jspx_imports_packages;
  }

  public java.util.Set<java.lang.String> getClassImports() {
    return _jspx_imports_classes;
  }

  public boolean getErrorOnELNotFound() {
    return false;
  }

  public jakarta.el.ExpressionFactory _jsp_getExpressionFactory() {
    if (_el_expressionfactory == null) {
      synchronized (this) {
        if (_el_expressionfactory == null) {
          _el_expressionfactory = _jspxFactory.getJspApplicationContext(getServletConfig().getServletContext()).getExpressionFactory();
        }
      }
    }
    return _el_expressionfactory;
  }

  public org.apache.tomcat.InstanceManager _jsp_getInstanceManager() {
    if (_jsp_instancemanager == null) {
      synchronized (this) {
        if (_jsp_instancemanager == null) {
          _jsp_instancemanager = org.apache.jasper.runtime.InstanceManagerFactory.getInstanceManager(getServletConfig());
        }
      }
    }
    return _jsp_instancemanager;
  }

  public void _jspInit() {
  }

  public void _jspDestroy() {
  }

  public void _jspService(final jakarta.servlet.http.HttpServletRequest request, final jakarta.servlet.http.HttpServletResponse response)
      throws java.io.IOException, jakarta.servlet.ServletException {

    if (!jakarta.servlet.DispatcherType.ERROR.equals(request.getDispatcherType())) {
      final java.lang.String _jspx_method = request.getMethod();
      if ("OPTIONS".equals(_jspx_method)) {
        response.setHeader("Allow","GET, HEAD, POST, OPTIONS");
        return;
      }
      if (!"GET".equals(_jspx_method) && !"POST".equals(_jspx_method) && !"HEAD".equals(_jspx_method)) {
        response.setHeader("Allow","GET, HEAD, POST, OPTIONS");
        response.sendError(HttpServletResponse.SC_METHOD_NOT_ALLOWED, "JSP들은 오직 GET, POST 또는 HEAD 메소드만을 허용합니다. Jasper는 OPTIONS 메소드 또한 허용합니다.");
        return;
      }
    }

    final jakarta.servlet.jsp.PageContext pageContext;
    jakarta.servlet.http.HttpSession session = null;
    final jakarta.servlet.ServletContext application;
    final jakarta.servlet.ServletConfig config;
    jakarta.servlet.jsp.JspWriter out = null;
    final java.lang.Object page = this;
    jakarta.servlet.jsp.JspWriter _jspx_out = null;
    jakarta.servlet.jsp.PageContext _jspx_page_context = null;


    try {
      response.setContentType("text/html; charset=UTF-8");
      pageContext = _jspxFactory.getPageContext(this, request, response,
      			null, true, 8192, true);
      _jspx_page_context = pageContext;
      application = pageContext.getServletContext();
      config = pageContext.getServletConfig();
      session = pageContext.getSession();
      out = pageContext.getOut();
      _jspx_out = out;

      out.write("\r\n");
      out.write("\r\n");
      out.write("<!DOCTYPE html>\r\n");
      out.write("<html>\r\n");
      out.write("<head>\r\n");
      out.write("<meta charset=\"UTF-8\">\r\n");
      out.write("<title>Insert title here</title>\r\n");
      out.write("</head>\r\n");
      out.write("<body>\r\n");

	// 데이터베이스 연동과 관련한 객체 선언
	Connection conn = null;		// JDBC 연결을 담당
	Statement stmt = null;		// SQL문 작성에 필요
	ResultSet rs = null;		// SQL문 실행 결과 저장
	
	String url="jdbc:mysql://localhost:3306/apidb";		// 어떤 DB 서버를 불러오는지 정의
	String dbId = "root";								// 해당 DB 서버의 아이디와 비밀번호 주입
	String dbPwd = "1234";
	
	try{	// "시도하다."
		// jdbc 드라이버 불러오기
		Class.forName("com.mysql.jdbc.Driver");	
		// DB 서버 연결 시도
		conn = DriverManager.getConnection(url, dbId, dbPwd);
		System.out.println("연결 성공");		// 연결 성공했을 때에만 뜨게끔 할 예정
		
		// 쿼리문 작성
		String query = "SELECT * FROM student";
		stmt = conn.createStatement();		// Statement 객체 생성
		rs = stmt.executeQuery(query);
	}
	catch(Exception error){
		// DB 서버로 접속이 실패한다면, try문을 계속 실행하지 않고 catch문으로 이동
		out.println("연결에 실패하였습니다.");
	}

      out.write("\r\n");
      out.write("\r\n");
      out.write("	<h2>학생 정보 조회</h2>\r\n");
      out.write("	<table border=\"1\">\r\n");
      out.write("		<tr>\r\n");
      out.write("			<th>학번</th>\r\n");
      out.write("			<th>이름</th>\r\n");
      out.write("			<th>나이</th>\r\n");
      out.write("			<th>학년</th>\r\n");
      out.write("			<th>전공</th>\r\n");
      out.write("		</tr>\r\n");
      out.write("		");
 
		while(rs.next()){		// select 구문 결과가 있다면 계속 실행 
      out.write("\r\n");
      out.write("		<tr>\r\n");
      out.write("			<td>");
      out.print( rs.getInt("hakbun") );
      out.write("</td>\r\n");
      out.write("			<td>");
      out.print( rs.getString("name") );
      out.write("</td>\r\n");
      out.write("			<td>");
      out.print( rs.getInt("age") );
      out.write("</td>\r\n");
      out.write("			<td>");
      out.print( rs.getInt("grade") );
      out.write("</td>\r\n");
      out.write("			<td>");
      out.print( rs.getString("major") );
      out.write("</td>\r\n");
      out.write("		</tr>\r\n");
      out.write("		");
} 
      out.write("\r\n");
      out.write("	</table>\r\n");
      out.write("</body>\r\n");
      out.write("</html>");
    } catch (java.lang.Throwable t) {
      if (!(t instanceof jakarta.servlet.jsp.SkipPageException)){
        out = _jspx_out;
        if (out != null && out.getBufferSize() != 0)
          try {
            if (response.isCommitted()) {
              out.flush();
            } else {
              out.clearBuffer();
            }
          } catch (java.io.IOException e) {}
        if (_jspx_page_context != null) _jspx_page_context.handlePageException(t);
        else throw new ServletException(t);
      }
    } finally {
      _jspxFactory.releasePageContext(_jspx_page_context);
    }
  }
}
