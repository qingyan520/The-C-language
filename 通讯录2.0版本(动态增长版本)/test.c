
#include"Contact.h"
#include "Contact.c"



void menu()
{
	printf("\t\t --------------ͨѶ¼--------------\n");
	printf("\t\t|\t1.�����ϵ��               |\n");
	printf("\t\t|\t2.ɾ����ϵ��               |\n");
	printf("\t\t|\t3.������ϵ��               |\n");
	printf("\t\t|\t4.�޸���ϵ��               |\n");
	printf("\t\t|\t5.��ʾ��ϵ��               |\n");
	printf("\t\t|\t6.������ϵ��               |\n");
	printf("\t\t|\t7.������ϵ��               |\n");
	printf("\t\t ----------------------------------\n");
}
int main()
{
	int input;
	struct Contact con;//�������data,size,capacity
	Initcontact(&con);
	do
	{
		menu();
		printf("��������Ҫʵ�ֵĹ���:>");
		scanf_s("%d", &input);
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
			printf("�˳�ͨѶ¼\n");
			break;
		case SORT:
			/*SortContact(&con);*/
			//qsort(&con.data->name, MAX, NAME_MAX, compare);
			break;
		case SAVE:
			SaveContact(&con);
		default:
			printf("�����������������\n");
			printf("----------------------------------------------------------------------------------------------------------------------\n");
		}

	} while (input);
	return 0;
}