-- ���̺��� ����� �� (�ּ��� --)
create table test1(
num int primary key,
name varchar2(100));
/*
�̷� �ּ��� ����
������ ����
*/
insert into test1 (num, name) values (1, '�̵���');
insert into test1 (num, name) values (2, '�̵���');

-- ���̺� �ִ� �����͸� ��ü ��ȸ�ϴ� ��
select * from test1;

delete from test1 where num=2;

update test1 set name = '�̵��ؼ�����' where num=1;



create table stu1 (
hakbeon char(8) primary key,
name varchar2(100),
birth varchar2(100),
age int);

insert into stu1(hakbeon, name, birth, age)
values('09038033','�̵���','890430',34);

insert into stu1(hakbeon, name, birth, age)
values('09038003','�̻���','990430',24);

select * from stu1;
-- ����!!!
commit;

