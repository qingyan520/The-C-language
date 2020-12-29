
#include"Contact.h"
#include "Contact.c"



void menu()
{
	printf("\t\t --------------通讯录--------------\n");
	printf("\t\t|\t1.添加联系人               |\n");
	printf("\t\t|\t2.删除联系人               |\n");
	printf("\t\t|\t3.查找联系人               |\n");
	printf("\t\t|\t4.修改联系人               |\n");
	printf("\t\t|\t5.显示联系人               |\n");
	printf("\t\t|\t6.排序联系人               |\n");
	printf("\t\t ----------------------------------\n");
}
int main()
{
	int input;
	struct Contact con;//里面包含data,size,capacity
	Initcontact(&con);
	do
	{
		menu();
		printf("请输入您要实现的功能:>");
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
			printf("退出通讯录\n");
			break;
		case SORT:
			/*SortContact(&con);*/
			//qsort(&con.data->name, MAX, NAME_MAX, compare);
			break;
		default:
			printf("输入错误，请重新输入\n");
			printf("----------------------------------------------------------------------------------------------------------------------\n");
		}

	} while (input);
	return 0;
}