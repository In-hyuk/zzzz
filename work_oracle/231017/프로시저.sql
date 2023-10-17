-- 프로시저 : 함수와 유사, DB에서 실행할 수 있는 코드 블럭
--      프로그래밍 논리 수행 가능 (복잡하니까, 구체적으로 다루진 않음...)

-- 프로시저 선언 방식
-- OR REPLACE 안 쓰면, 동일한 이름의 프로시저 사용이 불가
--CREATE OR REPLACE PROCEDURE 프로시저명
--(
--    매개변수 (IN, OUT, INOUT)
--)
--IS
--    변수 선언
--BEGIN
--    프로시저 본문
--END 프로시저명;


-- 사원 테이블 생성
CREATE TABLE EMPLOYEE(
    NUM VARCHAR2(10) PRIMARY KEY,
    NAME VARCHAR(20),
    AGE INT,
    DEPART VARCHAR2(5)
);
-- 부서 테이블 생성
CREATE TABLE DEPART(
    DEPART_NUM VARCHAR2(5),
    NAME VARCHAR2(20),
    CONSTRAINT PK_NUM PRIMARY KEY(DEPART_NUM)
    -- 제약조건 PK_NUM 으로 인해, DEPART_NUM이 기본키가 되었다.
);

-- EMPLOYEE 의 DEPART -> DEPART의 DEPART_NUM 으로 참조
ALTER TABLE EMPLOYEE ADD CONSTRAINT FK_CODE1 FOREIGN KEY (DEPART) REFERENCES DEPART(DEPART_NUM);

-- 사원에 대한 데이터 추가
-- INSERT문으로 데이터 추가를 해왔으나, 프로시저를 구현해서 사용
-- 프로시저 호출 -> EXEC 프로시저명(정보1, 정보2, ...);
EXEC ADD_DEPART('1', '교무부');
EXEC ADD_DEPART('2', '교무지원부');
EXEC ADD_DEPART('3', '경영지원부');
EXEC ADD_EMPLO('525', '이유나', 25, '1');
EXEC ADD_EMPLO('526', '김영동', 35, '2');
EXEC ADD_EMPLO('527', '이일동', 45, '3');
EXEC ADD_EMPLO('528', '김이동', 55, '2');
EXEC ADD_EMPLO('529', '이삼동', 65, '1');
EXEC ADD_EMPLO('530', '김사동', 20, '2');
EXEC ADD_EMPLO('531', '이오동', 30, '3');
EXEC ADD_EMPLO('111', '김육동', 40, '2');
EXEC ADD_EMPLO('101', '이칠동', 50, '1');
EXEC ADD_EMPLO('221', '김팔동', 60, '2');
SELECT * FROM DEPART;
SELECT * FROM EMPLOYEE;

-- 조인 : 2개 이상의 테이블을 "공통된 열" 로 묶음
SELECT * FROM EMPLOYEE E JOIN DEPART D ON E.DEPART = D.DEPART_NUM; 
SELECT NUM, EMPLOYEE.NAME 이름, AGE, DEPART.NAME 부서이름 FROM EMPLOYEE, DEPART WHERE EMPLOYEE.DEPART = DEPART.DEPART_NUM; 


