-- ��(VIEW)
-- ���� ���̺��� �ƴϰ� ���� ���̺�
-- �⺻���� ����, ����, ������ �ȵǰ� ��� ������ �ٲ�� VIEW�� ���� �ٲ�
-- VIEW = SELECT �����
-- SELECT���� �ʹ� ���������ų� Ȥ�� �� ���� ���̴� SELECT���� �� �� ���ϰ� �ҷ������� ���� ��
-- �⺻ �뵵 ��ü�� �����͸� '���� ����'

CREATE VIEW MYSTUDENT AS 
SELECT STUDENT_ID, KBSTUDENT.NAME, KBMAJOR.MAJOR FROM KBSTUDENT JOIN KBMAJOR ON KBSTUDENT.MAJOR_CODE = KBMAJOR.MAJOR_CODE;

SELECT * FROM MYSTUDENT; -- MYSTUDENT �� ���� ���� �ƴ�.
-- KBSTUDENT,KBMAJOR�� ������� ������ ǥ(SELECT �����)
-- DELETE, UPDATE, INSERT�� �ܼ��� ������ VIEW������ �Ǵ� ��, ������ ������ VIEW������ �ȵ�

-- VIEW�� ���ؼ� SELECT���� �ܼ�ȭ�ϰ�, ���� ������ ������ JOIN� ������ ������
----------------------------------------------------------------------------------------------------
-- ������� ����ϴ� ��
-- ~������ ����ϴ� �� : ORDER BY (ORDER : ����)
SELECT * FROM KBSTUDENT;
SELECT * FROM KBSTUDENT ORDER BY STUDENT_ID; -- �й� ������ ��� (��������)
SELECT * FROM KBSTUDENT ORDER BY STUDENT_ID DESC; -- �й� ������ ��� (��������)

-- �׷� ���� ����ϴ� �� (GROUP BY, HAVING)
-- ���� �� �л��� 100���� �ִ�.
-- ���л� N��, ���л�M���� ������, �л����� ��� ���� ��� ���ϴ� ���� '�׷캰��' ���´ٰ� ��

-- KBSTUDENT�� ���� ��� �а����� �� ���ִ��� ����غ� �� �ִ�.
-- ���� KBSTUDENT�� ���� ������ �ִٸ� �а����� ��� ���̵鵵 ���� �� ���� ���̴�.
SELECT MAJOR_CODE, COUNT(*) FROM KBSTUDENT GROUP BY MAJOR_CODE;

-- VIEW�� �̿��ϸ� ����
SELECT MAJOR , COUNT(*) FROM MYSTUDENT GROUP BY MAJOR;

-- GROUP BY�� WHERE ���� �ִµ� �ٷ� HAVING��
-- GROUP BY������ ��밡���� WHERE ��
-- EX. �а����� ���� �� �� �ִ��� ���ϰ�, �� �߿��� 1���� �Ѵ� ���� ����϶�
SELECT MAJOR , COUNT(*) FROM MYSTUDENT GROUP BY MAJOR HAVING COUNT(*)>1;

