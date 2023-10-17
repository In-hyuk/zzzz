DROP VIEW AVG_AGE_BUSEO;
drop table insa;
drop table buseo;
drop table jikgeup;
DROP SEQUENCE jikseq;

TRUNCATE TABLE INSA;

create table buseo (code char(3) primary key, name varchar2(100));

create table jikgeup(code int primary key, name varchar2(100));

create table insa(
sabeon char(5),
buseo_code char(3) references buseo(code),
jikgeup_code int references jikgeup(code),
name varchar2(100),
age int,
gender char(1),
hp varchar2(15) unique);

insert into buseo values('A01', '교무1팀');
insert into buseo values('B01', '교무2팀');
insert into buseo values('CCC', '경영지원');

CREATE SEQUENCE jikseq START WITH 1 INCREMENT BY 1;

insert into jikgeup values(jikseq.nextval, '사원');
insert into jikgeup values(jikseq.nextval, '대리');
insert into jikgeup values(jikseq.nextval, '과장');


insert into insa values('00001', 'A01', 1, '이동준', 35, 'M', '010-2940-1613');
insert into insa values('00002', 'B01', 2, '이유나', 25, 'F',NULL);
insert into insa values('00003', 'CCC', 3, '김형준', 45, 'M', '010-2940-1111');
insert into insa values('00004', 'CCC', 2, '박준현', 40, 'M', '010-2940-2222');
insert into insa values('00005', 'B01', 2, '정제원', 29, 'M', '010-2940-3333');
insert into insa values('00006', 'B01', 2, '곽봉구', 55, 'M', '010-2940-4444');
insert into insa values('00007', 'CCC', 3, '방채문', 60, 'M', '010-5555-1613');
insert into insa values('00008', 'A01', 3, '최광욱', 38, 'M', '010-1234-1613');
insert into insa values('00009', 'A01', 3, '표주광', 37, 'M', '010-7777-1613');
insert into insa values('0000A', 'A01', 1, '정효미', 27, 'F', '010-8888-1613');

-- 성이 이씨인 사람을 찾는 쿼리를 작성(like 혹은 구글링이나 gpt 쓰기)
SELECT * FROM INSA WHERE NAME LIKE '이%';
-- 가장 많은 나이는 몇 살인지 출력
SELECT MAX(AGE) FROM INSA;
-- 가장 나이가 어린 사람은 누구인지 출력(중첩질의문을 쓰면 되는 데 무슨 말인지 모르면 구글링이나 gpt)
SELECT * FROM INSA WHERE AGE = (SELECT MIN(AGE) FROM INSA);
-- 가장 나이가 많은 부서 찾기(평균 나이 기준)
-- 부서별 평균 나이를 구해야 한다.
SELECT buseo_code, ROUND(AVG(AGE),1) RAVGAGE FROM INSA GROUP BY buseo_code;
-- 뷰로 만들 때 중요한 것 ROUND, AVG 등을 이용해서 VIEW 만들 때는 이 부분에 대한 임시 이름을 붙여 줘야 함!
CREATE VIEW AVG_AGE_BUSEO AS SELECT buseo_code, ROUND(AVG(AGE),1) RAVGAGE FROM INSA GROUP BY buseo_code;
-- 뷰의 결과
SELECT * FROM AVG_AGE_BUSEO;
-- 그 중에서 MAX인 값을 구해야 한다.
SELECT * FROM AVG_AGE_BUSEO WHERE RAVGAGE=(SELECT MAX(RAVGAGE) FROM AVG_AGE_BUSEO);
-- 부서별 평균 나이가 MAX랑 일치하는 부서를 찾아야 한다.
SELECT NAME, BUSEO_CODE, RAVGAGE FROM AVG_AGE_BUSEO JOIN BUSEO ON AVG_AGE_BUSEO.BUSEO_CODE=BUSEO.CODE;
SELECT NAME, BUSEO_CODE, RAVGAGE FROM AVG_AGE_BUSEO JOIN BUSEO ON AVG_AGE_BUSEO.BUSEO_CODE=BUSEO.CODE WHERE  RAVGAGE=(SELECT MAX(RAVGAGE) FROM AVG_AGE_BUSEO);
-- 성별별 평균 나이 출력하기
SELECT AVG(AGE), GENDER FROM INSA GROUP BY GENDER;
-- 인사 테이블을 출력하되, 부서코드와 직급코드들도 부서명과 직급명으로 출력하기 즉, 3개의 테이블을 서로 조인해야 함
SELECT SABEON, INSA.NAME 사원명, BUSEO.NAME 부서명, JIKGEUP.NAME 직급명, AGE, GENDER, HP FROM INSA JOIN BUSEO ON insa.buseo_code=BUSEO.CODE JOIN jikgeup ON insa.jikgeup_code=JIKGEUP.CODE;