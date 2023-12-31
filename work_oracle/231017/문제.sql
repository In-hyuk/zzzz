-- TEACHER 테이블 생성
CREATE TABLE TEACHER(
    NAME VARCHAR2(20) PRIMARY KEY,
    DEPART VARCHAR2(20),
    CAREER INT,
    CHARGE VARCHAR2(20)
);

-- STUDENT 테이블 생성
CREATE TABLE STUDENT(
    STUDENT_ID INT PRIMARY KEY,
    NAME VARCHAR2(20),
    AGE INT,
    TEACHER VARCHAR2(20),
    CONSTRAINT FK1 FOREIGN KEY (TEACHER) REFERENCES TEACHER(NAME)  
);

-- STUDENT 테이블 데이터 추가하는 프로시저 작성
CREATE OR REPLACE PROCEDURE ADD_STUDENT
(
    INPUT_STUDENT_ID IN INT,
    INPUT_NAME IN VARCHAR2,
    INPUT_AGE IN INT,
    INPUT_TEACHER IN VARCHAR2
)
IS BEGIN
    INSERT INTO STUDENT VALUES(INPUT_STUDENT_ID, INPUT_NAME, INPUT_AGE, INPUT_TEACHER);
END ADD_STUDENT;
/
-- TEACHER 테이블 데이터 추가하는 프로시저 작성
CREATE OR REPLACE PROCEDURE ADD_TEACHER
(
    INPUT_NAME IN VARCHAR2,
    INPUT_DEPART IN VARCHAR2,
    INPUT_CARRER IN INT,
    INPUT_CHARGE IN VARCHAR2 
)
IS BEGIN
    INSERT INTO TEACHER VALUES(INPUT_NAME, INPUT_DEPART, INPUT_CARRER, INPUT_CHARGE);
END ADD_TEACHER;
/
-- TEACHER 테이블에 아래 데이터 추가
EXEC ADD_TEACHER('이동준','KB',3,'개발');
EXEC ADD_TEACHER('이유나','KB',1,'개발');
EXEC ADD_TEACHER('박준현','KB',5,'보안');
EXEC ADD_TEACHER('정제원','KB',1,'보안');
-- STUDENT 테이블에 10개 데이터 임의로 추가
EXEC ADD_STUDENT(100,'김영동',20,'이동준');
EXEC ADD_STUDENT(101,'이일동',30,'이유나');
EXEC ADD_STUDENT(102,'김이동',40,'박준현');
EXEC ADD_STUDENT(103,'이삼동',50,'정제원');
EXEC ADD_STUDENT(104,'김사동',60,'박준현');
EXEC ADD_STUDENT(105,'이오동',25,'이유나');
EXEC ADD_STUDENT(106,'김육동',35,'이동준');
EXEC ADD_STUDENT(107,'이칠동',45,'이유나');
EXEC ADD_STUDENT(108,'김팔동',55,'정제원');
EXEC ADD_STUDENT(109,'이구동',65,'박준현');
EXEC ADD_STUDENT(110,'김십동',15,'박준현');
-- STUDENT, TEACHER 각각의 테이블로 출력
SELECT * FROM STUDENT;
SELECT * FROM TEACHER;
-- STUDENT, TEACHER 하나의 테이블로 출력
SELECT * FROM STUDENT, TEACHER WHERE TEACHER.NAME = STUDENT.TEACHER;
-- STUDENT, TEACHER 하나의 테이블로 출력 STUDENT.이름 오름차순, TEACHER.경력 내림차순 정렬
SELECT * FROM STUDENT, TEACHER WHERE TEACHER.NAME = STUDENT.TEACHER ORDER BY STUDENT.AGE ASC,TEACHER.CAREER DESC;
-- 학생 중 나이가 20 미만인 학생 데이터 제거
CREATE OR REPLACE PROCEDURE DEL_STUDENT
IS BEGIN
    DELETE FROM STUDENT WHERE AGE < 20;
END DEL_STUDENT;
/
EXEC DEL_STUDENT;
-- 교사들의 경력을 1씩 추가해서 수정하기
CREATE OR REPLACE PROCEDURE UPDATE_CAREER
(
    UPDATE_CAREER_NAME IN VARCHAR2
)
IS BEGIN
    UPDATE TEACHER SET CAREER = CAREER + 1 WHERE NAME = UPDATE_CAREER_NAME;
END UPDATE_CAREER;
/
EXEC UPDATE_CAREER('이동준');
EXEC UPDATE_CAREER('이유나');
EXEC UPDATE_CAREER('박준현');
EXEC UPDATE_CAREER('정제원');
-- 학생들 총 인원, 나이의 총 합, 최대값, 최소값, 평균값을 모두 하나의 테이블로 출력
SELECT COUNT(*) "총 인원", SUM(AGE) "나이의 총합", MAX(AGE) 최대값, MIN(AGE) 최소값, AVG(AGE) 평균값 FROM STUDENT;
-- 교사의 소속 및 담당 출력, 이때 중복되는 값은 한번만 출력되게끔 한다.
SELECT DISTINCT DEPART, CHARGE FROM TEACHER;
-- 교사의 소속 및 평균 경력 출력
SELECT DEPART, AVG(CAREER) FROM TEACHER GROUP BY DEPART;

COMMIT;
