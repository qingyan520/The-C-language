#define _CRT_SECURE_NO_WARNINGS 1

//
//дһ��ͨѶ¼
//���Ա���1000���˵���Ϣ
//ÿ���˵���Ϣ��
//����
//����
//�Ա�
//�绰
//סַ

//���ܣ�
//1. ����һ���˵���Ϣ
//2. ɾ��һ��ָ������ϵ��
//3. ����һ��ָ������ϵ��
//4. �޸�һ��ָ������ϵ��
//5. ��ʾͨѶ¼�������˵���Ϣ
//6. ����
//0. �˳�
//
//��̬�汾 - һ�ο���1000��Ԫ�ص������ռ�
//��̬�����İ汾 - ���迪��
//�ļ��İ汾 - ���ݿ��Դ洢���ļ��У������ڶ�ʧ

#include "contact.h"

void menu()
{
	printf("*************************************\n");
	printf("*****   1. add         2. del   *****\n");
	printf("*****   3. search      4. modify*****\n");
	printf("*****   5. show        6. sort  *****\n");
	printf("*****   0. exit        7. save  *****\n");
	printf("*************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

void test()
{
	int input = 0;
	struct Contact con;//������һ��ͨѶ¼

	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		case SORT:
			break;
		case SAVE:
			SaveContact(&con);
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

//��̬ͨѶ¼ - 