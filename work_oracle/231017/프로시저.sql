-- ���ν��� : �Լ��� ����, DB���� ������ �� �ִ� �ڵ� ��
--      ���α׷��� �� ���� ���� (�����ϴϱ�, ��ü������ �ٷ��� ����...)

-- ���ν��� ���� ���
-- OR REPLACE �� ����, ������ �̸��� ���ν��� ����� �Ұ�
--CREATE OR REPLACE PROCEDURE ���ν�����
--(
--    �Ű����� (IN, OUT, INOUT)
--)
--IS
--    ���� ����
--BEGIN
--    ���ν��� ����
--END ���ν�����;


-- ��� ���̺� ����
CREATE TABLE EMPLOYEE(
    NUM VARCHAR2(10) PRIMARY KEY,
    NAME VARCHAR(20),
    AGE INT,
    DEPART VARCHAR2(5)
);
-- �μ� ���̺� ����
CREATE TABLE DEPART(
    DEPART_NUM VARCHAR2(5),
    NAME VARCHAR2(20),
    CONSTRAINT PK_NUM PRIMARY KEY(DEPART_NUM)
    -- �������� PK_NUM ���� ����, DEPART_NUM�� �⺻Ű�� �Ǿ���.
);

-- EMPLOYEE �� DEPART -> DEPART�� DEPART_NUM ���� ����
ALTER TABLE EMPLOYEE ADD CONSTRAINT FK_CODE1 FOREIGN KEY (DEPART) REFERENCES DEPART(DEPART_NUM);

-- ����� ���� ������ �߰�
-- INSERT������ ������ �߰��� �ؿ�����, ���ν����� �����ؼ� ���
-- ���ν��� ȣ�� -> EXEC ���ν�����(����1, ����2, ...);
EXEC ADD_DEPART('1', '������');
EXEC ADD_DEPART('2', '����������');
EXEC ADD_DEPART('3', '�濵������');
EXEC ADD_EMPLO('525', '������', 25, '1');
EXEC ADD_EMPLO('526', '�迵��', 35, '2');
EXEC ADD_EMPLO('527', '���ϵ�', 45, '3');
EXEC ADD_EMPLO('528', '���̵�', 55, '2');
EXEC ADD_EMPLO('529', '�̻ﵿ', 65, '1');
EXEC ADD_EMPLO('530', '��絿', 20, '2');
EXEC ADD_EMPLO('531', '�̿���', 30, '3');
EXEC ADD_EMPLO('111', '������', 40, '2');
EXEC ADD_EMPLO('101', '��ĥ��', 50, '1');
EXEC ADD_EMPLO('221', '���ȵ�', 60, '2');
SELECT * FROM DEPART;
SELECT * FROM EMPLOYEE;

-- ���� : 2�� �̻��� ���̺��� "����� ��" �� ����
SELECT * FROM EMPLOYEE E JOIN DEPART D ON E.DEPART = D.DEPART_NUM; 
SELECT NUM, EMPLOYEE.NAME �̸�, AGE, DEPART.NAME �μ��̸� FROM EMPLOYEE, DEPART WHERE EMPLOYEE.DEPART = DEPART.DEPART_NUM; 


