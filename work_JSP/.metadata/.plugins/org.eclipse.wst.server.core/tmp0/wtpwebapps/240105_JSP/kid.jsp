<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<p><%= session.getAttribute("name") %>씨는 어린이^^이고 <%= session.getAttribute("age") %>세</p>
</body>
</html>