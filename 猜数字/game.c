#include"game.h"
void LOgin()
{
	char NAME[20]="����";
	char PASSWORD[10] = "123456";
	char name[20];
	char password[10];
	printf("- - - - - �����������˺ź����룬����3�λ���- - - - -\n");
	the:
	int i = 0;
	for (i =0; i <3; i++)
	{
		printf("- - - - - - - - - - - ��%d������- - - - - - - - - - - \n", i + 1);
		printf("�������˺�:>\n");
		scanf_s("%s", name, 20);
		printf("����������:>\n");
		scanf_s("%s", password, 10);
		if (strcmp(NAME, name) == 0 && strcmp(PASSWORD, password) == 0)
		{
			break;
		}
		if(i!=2)
		{
			printf("- - - - - - - - ����������������� - - - - - - - - \n");
		}
	}
	if (i == 3)
	{
		printf("- - - - - �����λ��������꣬���������� - - - - - - -  \n");
		goto the;
	}
}
void game()
{
	srand((unsigned int)time(NULL));
	int value = rand() % 100;
	int num;
	while (1)
	{
		printf("������������:>\n");
		scanf_s("%d", &num);
		if (value > num)
			printf("�����������̫С��\n");
		if (value < num)
			printf("�����������̫����\n");
		if (value == num)
		{
			printf("��ϲ��������ˡ�(��������)(��������)��\n");
			printf("\n");
			break;
		}

	}
}