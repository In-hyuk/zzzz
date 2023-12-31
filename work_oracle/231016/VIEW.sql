-- 뷰(VIEW)
-- 실제 테이블은 아니고 가상 테이블
-- 기본적인 삭제, 수정, 삽입은 안되고 대신 원본이 바뀌면 VIEW의 값도 바뀜
-- VIEW = SELECT 결과물
-- SELECT문이 너무 복잡해지거나 혹은 좀 자주 쓰이는 SELECT문을 좀 더 편하게 불러오고자 쓰는 것
-- 기본 용도 자체가 데이터를 '보기 위함'

CREATE VIEW MYSTUDENT AS 
SELECT STUDENT_ID, KBSTUDENT.NAME, KBMAJOR.MAJOR FROM KBSTUDENT JOIN KBMAJOR ON KBSTUDENT.MAJOR_CODE = KBMAJOR.MAJOR_CODE;

SELECT * FROM MYSTUDENT; -- MYSTUDENT 는 실제 값이 아님.
-- KBSTUDENT,KBMAJOR로 만들어진 가상의 표(SELECT 결과물)
-- DELETE, UPDATE, INSERT가 단순한 구조의 VIEW에서는 되는 데, 복잡한 구조의 VIEW에서는 안됨

-- VIEW를 통해서 SELECT문을 단순화하고, 보다 복잡한 형태의 JOIN등도 구현이 가능함
----------------------------------------------------------------------------------------------------
-- 순서대로 출력하는 것
-- ~순으로 출력하는 것 : ORDER BY (ORDER : 순서)
SELECT * FROM KBSTUDENT;
SELECT * FROM KBSTUDENT ORDER BY STUDENT_ID; -- 학번 순으로 출력 (오름차순)
SELECT * FROM KBSTUDENT ORDER BY STUDENT_ID DESC; -- 학번 순으로 출력 (내림차순)

-- 그룹 별로 출력하는 것 (GROUP BY, HAVING)
-- 예를 들어서 학생이 100명이 있다.
-- 남학생 N명, 여학생M명이 있을때, 학생별로 평균 나이 등등 구하는 것을 '그룹별로' 묶는다고 함

-- KBSTUDENT로 예를 들면 학과별로 몇 명있는지 출력해볼 수 있다.
-- 만약 KBSTUDENT에 나이 정보가 있다면 학과별로 평균 나이들도 구할 수 있을 것이다.
SELECT MAJOR_CODE, COUNT(*) FROM KBSTUDENT GROUP BY MAJOR_CODE;

-- VIEW를 이용하면 편함
SELECT MAJOR , COUNT(*) FROM MYSTUDENT GROUP BY MAJOR;

-- GROUP BY용 WHERE 절이 있는데 바로 HAVING절
-- GROUP BY에서만 사용가능한 WHERE 절
-- EX. 학과별로 각각 몇 명 있는지 구하고, 그 중에서 1명을 넘는 과만 출력하라
SELECT MAJOR , COUNT(*) FROM MYSTUDENT GROUP BY MAJOR HAVING COUNT(*)>1;

