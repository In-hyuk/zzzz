-- DDL(Defination) : 데이터 구조(DB, 테이블, ...) 정의 
--      -> CREATE(생성), ALTER(수정), DROP, TRUNCATE(삭제)          테이블 구조에 대해
-- DML(Manipulation) : 데이터 조작
--      -> INSERT(삽입), UPDATE(수정), DELETE(삭제)  (+SELECT)      데이터 하나하나에 직접 조작
-- CRUD = DDL + DML

CREATE TABLE PHONE(
    NAME VARCHAR2(20),        -- 기종
    OS VARCHAR2(20),          -- 운영체제
    DAY INT,                  -- 출시년도
    WAT INT,                  -- 배터리 최대 와트
    COLOR VARCHAR2(10)        -- 색상
);

SELECT * FROM PHONE;

-- ALTER : 데이터 구조에 대해 수정하는 명령어
--  -> ADD(칼럼 추가)
--  -> DROP COLUMN (칼럼 제거)
--  -> MODIFY (칼럼의 타입 수정)
--  -> RENAME (테이블명 변경)
--  -> RENAME COLUMN (칼럼명 변경)

-- ADD : 칼럼 추가
-- ALTER TABLE 테이블명 ADD 칼럼명 칼럼타입;
-- PHONE 테이블에 FLOAT형 INCH 칼럼 추가
ALTER TABLE PHONE ADD INCH FLOAT;

-- DROP COLUMN : 칼럼 제거
-- ALTER TABLE 테이블명 DROP COLUMN 칼럼명;
-- PHONE 테이블에 WAT 칼럼 제거
ALTER TABLE PHONE DROP COLUMN WAT;

-- RENAME : 테이블명 변경
-- ALTER TABLE 테이블명 RENAME TO 변경할 테이블명;
-- RENAME COLUMN : 칼럼명 변경
-- ALTER TABLE 테이블명 RENAME COLUMN 기존_컬럼명 TO 변경할_컬럼명

-- PHONE 테이블을 SMARTPHONE_LIST로 이름 변경
ALTER TABLE PHONE RENAME TO SMARTPHONE_LIST;
ALTER TABLE SMARTPHONE_LIST RENAME TO PHONE;
-- PHONE 테이블의 DAY 컬럼명을 YEAR로 이름 변경
ALTER TABLE PHONE RENAME COLUMN DAY TO YEAR;

-- MODIFY : 데이터 칼럼의 타입 변경
-- ALTER TABLE 테이블명 MODIFY 칼럼명 변경할_칼럼타입
-- PHONE 테이블에서, INCH 칼럼의 타입을 FLOAT -> INT로 변경
-- 컬럼의 데이터 타입을 변경하기 위해서는 해당 컬럼의 값을 모두 지워야 변경이 가능하다.
-- ALTER TABLE PHONE MODIFY INCH INT;

-- INSERT 통해서 데이터 추가
INSERT INTO PHONE VALUES('갤럭시S20', '11', 2021, 'PINK', 6.4);
INSERT INTO PHONE VALUES('아이폰13', '10', 2023, 'WHITE', 7.0);
INSERT INTO PHONE VALUES('갤럭시폴드2', '12', 2022, 'BLUE', 8.5);

-- UPDATE : 특정 데이터를 수정하는 명령어
-- UPDATE 테이블명 SET 칼럼1=변경값1, ... WHERE 조건절;
-- 출시년도가 2022인 데이터의 OS 값을 13으로 변경
UPDATE PHONE SET OS = '13' WHERE DAY = '2022';
-- 기종이 아이폰13인 데이터의 OS값을 13으로 변경, COLOR 값을 BLACK으로 변경
UPDATE PHONE SET OS = '13', COLOR = 'BLACK' WHERE NAME = '아이폰13';






