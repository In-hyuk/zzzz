#define __MENU_H__
// �ѹ��� ����ϰٴ� . ������� ����(�ߺ�)����
				// ���������� ǥ������ 
				// #ifndef __MENU_H__ 
				// #define __MENU_H__
				// ~~~ #endif
typedef enum {
	MAIN_INCOME = 1,	// ���� �޴�
	MAIN_SPEND,			// ���� �޴�
	MAIN_CHECK,			// ��ȸ �޴�
	MAIN_DELETE,		// ���� �޴�
	MAIN_EXIT			// ����
} MAIN_MENU;


extern int main_menu();// extern�� ��������
extern int import_menu(); 
extern int check_menu();

