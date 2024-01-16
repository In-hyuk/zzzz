<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<h3>스크립트릿으로 출력</h3>
<p>제 이름은 <%="이유나" %> 입니다.</p>

<h3>EL 태그로 출력</h3>
<p>제 이름은 ${"이유나"}입니다.</p>

<p> 이름: ${param.name} <br> 나이: ${param.age} </p>
<br>

<jsp:useBean id="user1" class="com.javalex.ex.UserDTO" scope="page" />
<jsp:setProperty name="user1" property="name" value="${param.name }" />
<jsp:setProperty name="user1" property="age" value="${param.age }" />
<!-- EL 태그를 활용하면, 자동으로 형변환 -->

<h3>DTO 활용해서 출력</h3>
<p>
	이름: <jsp:getProperty name="user1" property="name" /><br>
	나이: <jsp:getProperty name="user1" property="age" />
</p>	
<script>
	let sum=100+100;
	console.log(`100+100의 결과는 ${200} 입니다`);
</script>
</body>
</html>