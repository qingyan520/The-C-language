#include"game.h"
void mnue()
{
	printf("\t\t      ���������Ϸ��\t\n");
	printf("\t\t - - - - - - - - - - - \n");
	printf("\t\t|\t��1.play��        |\n");
	printf("\t\t|\t��0.exit��        |\n");
	printf("\t\t - - - - - - - - - - -  \n");
}
int main()
{
	
	int input;
	while(1)
	{
		mnue();
		printf("����������ѡ��:>");
		scanf_s("%d", &input);
		LOgin();
		printf("- - - - - - - - ���ڼ�����Ϸ�������ĵȴ�- - - - - - -\n");
		printf("- - - - - - - - - �����뿪ʼ������Ϸ��- - - - - - - - \n");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������:>\n");
			break;
		}

	} 
	return 0;
}