-- 테이블을 만드는 것 (주석은 --)
create table test1(
num int primary key,
name varchar2(100));
/*
이런 주석도 있음
데이터 삽입
*/
insert into test1 (num, name) values (1, '이동준');
insert into test1 (num, name) values (2, '이동준');

-- 테이블에 있는 데이터를 전체 조회하는 것
select * from test1;

delete from test1 where num=2;

update test1 set name = '이동준선생님' where num=1;



create table stu1 (
hakbeon char(8) primary key,
name varchar2(100),
birth varchar2(100),
age int);

insert into stu1(hakbeon, name, birth, age)
values('09038033','이동준','890430',34);

insert into stu1(hakbeon, name, birth, age)
values('09038003','이상하','990430',24);

select * from stu1;
-- 저장!!!
commit;

