#include"Contact.h"
#include "Contact.c"
void menu()
{
	printf("*************************************\n");
	printf("*********1.ADD     2.DEL*************\n");
	printf("*********3.SEARCH  4.MODIFY**********\n");
	printf("*********5.SHOW    6.SORT************\n");
	printf("*********0.EXIT          ************\n");
	printf("*************************************\n");

}
int main()
{
	int input;
	struct Contact con;
	Initcontact(&con);
	do
	{
		menu();
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
			qsort(&con.data->name, MAX, NAME_MAX, compare);
		default:
			printf("�����������������\n");
			printf("----------------------------------------------------------------------------------------------------------------------\n");
		}

	} while (input);
	return 0;
}