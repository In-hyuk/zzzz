-- DJStudent ���̺� ����� : �й�, �̸�, �а����� ������ (��� varchar2�� �� ��)
CREATE TABLE DJStudent(
    STUDENT_ID VARCHAR2(20),
    NAME VARCHAR2(20),
    MAJOR VARCHAR2(20)
);
-- KBMajor ���̺� ����� : �а��ڵ�(char(3)) �а���(varchar2)
CREATE TABLE KBMajor(
    MAJOR_CODE CHAR(3) PRIMARY KEY,
    MAJOR VARCHAR2(20)
);
-- KBStudent ���̺� ����� : �й� �̸� �а��ڵ�(char(3))
CREATE TABLE KBSTUDENT(
    STUDENT_ID VARCHAR2(20)PRIMARY KEY,
    NAME VARCHAR2(20),
    MAJOR_CODE CHAR(3)
);
-- �� ���̺� ���� ������ 5�� �̻� �߰��ϱ�
INSERT INTO DJStudent VALUES ('101', '��μ�', '�濵');
INSERT INTO DJStudent VALUES ('102', '��ö��', '���');
INSERT INTO DJStudent VALUES ('103', '������', '�İ�');
INSERT INTO DJStudent VALUES ('104', '������', '���');
INSERT INTO DJStudent VALUES ('105', 'Ȳ��', '����');

INSERT INTO KBMajor VALUES ('1','�濵');
INSERT INTO KBMajor VALUES ('2','���');
INSERT INTO KBMajor VALUES ('3','�İ�');
INSERT INTO KBMajor VALUES ('4','���');
INSERT INTO KBMajor VALUES ('5','����');

INSERT INTO KBSTUDENT VALUES ('111', '������', '1');
INSERT INTO KBSTUDENT VALUES ('112', '������', '2');
INSERT INTO KBSTUDENT VALUES ('113', '�����', '3');
INSERT INTO KBSTUDENT VALUES ('114', '�����', '4');
INSERT INTO KBSTUDENT VALUES ('115', '�����', '5');

UPDATE KBSTUDENT SET NAME = '������' WHERE STUDENT_ID = '113';

SELECT * FROM DJStudent;
SELECT * FROM KBMajor;
SELECT * FROM KBStudent;    -- �ܷ�Ű�� �߰���, ������ ���̺��� KBMAJOR�� MAJOR_CODE

-- �������̺��� MAJOR_CODE�� '����' �Ͽ��� �л� ���̺��� �����͸� �����ϰڴٴ� �ǹ�
-- �������̺� ���� ������ �߰��� ���� ����.
ALTER TABLE KBSTUDENT ADD CONSTRAINT FK_CODE FOREIGN KEY (MAJOR_CODE) REFERENCES KBMAJOR(MAJOR_CODE);

INSERT INTO KBSTUDENT VALUES('116', '�����', '1'); -- OK
INSERT INTO KBSTUDENT VALUES('117', 'ȫ��ȯ', '111'); -- �а��ڵ尡 111�� ���� ���� ���� ����

INSERT INTO KBMAJOR VALUES ('6', 'ȭ��');
INSERT INTO KBSTUDENT VALUES('117', '�Ǻ���', '6');

-- JOIN �� �� �̻��� ���̺��� ����� ��(COLUMN)�� ���´�.
SELECT STUDENT_ID, KBSTUDENT.NAME, KBMAJOR.MAJOR FROM KBSTUDENT JOIN KBMAJOR ON KBSTUDENT.MAJOR_CODE = KBMAJOR.MAJOR_CODE;
-- �����Ŷ� �ؿ��� ��������
SELECT STUDENT_ID �й�, KBSTUDENT.NAME �л��̸�, KBMAJOR.MAJOR �а��� FROM KBSTUDENT JOIN KBMAJOR ON KBSTUDENT.MAJOR_CODE = KBMAJOR.MAJOR_CODE;
-- WHERE�� �̿��� JOIN��, �� ���̺��� �޸�(,)�� ����, WHERE���� �����
SELECT STUDENT_ID �й�, KBSTUDENT.NAME �л��̸�, KBMAJOR.MAJOR �а��� FROM KBSTUDENT, KBMAJOR WHERE KBSTUDENT.MAJOR_CODE = KBMAJOR.MAJOR_CODE;


