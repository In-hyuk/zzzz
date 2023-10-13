-- ���� ������ �����ݷ�(;) �ֱ�
-- ��ҹ��� ���� ����

-- CRUD : CREATE / READ / UPDATE / DELETE => ���� / �б� / ���� / ����
-- SQL�� : ���� CRUD ����� �����ϱ� ���� ��ɹ�(���ǹ�)
--      -> DQL / DDL / DML / DCL / TCL

-- DQL (Query) : ������ ��ȸ
--    SELECT�� : �����͸� �˻��ϴ� ��ɾ� (�˻��� ����� ����Ͽ� ǥ��)
--    SELECT Į���� FROM ���̺�� (WHERE ���ǹ�);

SELECT LENGTH('HelloSQL') FROM DUAL WHERE LENGTH('HelloSQL') >= 5;

-- DDL(Defination) : ������ ����(DB, ���̺�, ...) ���� 
--      -> CREATE(����), ALTER(����), DROP, TRUNCATE(����)          ���̺� ������ ����
-- DML(Manipulation) : ������ ����
--      -> INSERT(����), UPDATE(����), DELETE(����)  (+SELECT)      ������ �ϳ��ϳ��� ���� ����

-- ORACLE �ڷ��� : VARCHAR2(N)
-- * ������
-- CHAR(N) : ���� ũ���� ������ Ÿ��, ������ N���� ���� �Ҵ� (��ȿ����)
-- VARCHAR2(N) : ����ũ���� ������ Ÿ��, "�ִ� N�� ����"�� ���� �Ҵ�O
-- NVARCHAR2(N) 
-- * ������
-- INT : ���� ������
-- FLOAT : �Ǽ� ������
-- NUMBER(P,S) : ����/�Ǽ� ��� ����
--      P(�����κ� + �Ǽ��κ� �ִ� �ۼ������� ����) / S(�Ǽ��κ� �ִ� �ۼ������� ����)

-- ��α� "��"�� ���� ���̺� ����
CREATE TABLE POST(
    TITLE VARCHAR2(30),      -- �� ����
    DAY VARCHAR2(10),        -- �� �ۼ���¥
    BODY VARCHAR2(100)       -- �� ����
);

-- POST ���̺� ���Ͽ�, ������ ����
INSERT INTO POST VALUES('Hello', '20231013', 'Hellllllll');
INSERT INTO POST(DAY, TITLE, BODY) VALUES ('20221010', 'BBBB', 'Byeeeee');
INSERT INTO POST VALUES('AB', '20211130', 'aaaaaaaaaa');
INSERT INTO POST VALUES('CD', '20231128', 'cccccccccccc');
INSERT INTO POST VALUES('EF', '20221031', 'eeeeeeeeeee');

-- POST ���̺� �־�, DAY�� ���� '20231013'�� �����͸� ����
-- DELETE FROM POST;       -- TRUNCATE�� �Ȱ���, �����Ͱ� ��� ����
DELETE FROM POST WHERE DAY = '20231013';

-- POST ���̺� ���� ��ü �˻��Ͽ� ���
SELECT * FROM POST;

-- DROP : ���̺� ���� (������, ���̺� ���� ��� ����)
-- TRUNCATE : ���̺� ���� (�����͸� ��ü ����, ���̺� ���� ��������)
DROP TABLE POST;








