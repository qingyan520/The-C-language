#include"game.h"
void LOgin()
{
	char NAME[20]="清颜";
	char PASSWORD[10] = "123456";
	char name[20];
	char password[10];
	printf("- - - - - 请输入您的账号和密码，您有3次机会- - - - -\n");
	the:
	int i = 0;
	for (i =0; i <3; i++)
	{
		printf("- - - - - - - - - - - 第%d次输入- - - - - - - - - - - \n", i + 1);
		printf("请输入账号:>\n");
		scanf_s("%s", name, 20);
		printf("请输入密码:>\n");
		scanf_s("%s", password, 10);
		if (strcmp(NAME, name) == 0 && strcmp(PASSWORD, password) == 0)
		{
			break;
		}
		if(i!=2)
		{
			printf("- - - - - - - - 输入错误，请重新输入 - - - - - - - - \n");
		}
	}
	if (i == 3)
	{
		printf("- - - - - 您三次机会已用完，请重新输入 - - - - - - -  \n");
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
		printf("请您输入数字:>\n");
		scanf_s("%d", &num);
		if (value > num)
			printf("您输入的数字太小了\n");
		if (value < num)
			printf("您输入的数字太大了\n");
		if (value == num)
		{
			printf("恭喜您，答对了～(￣▽￣～)(～￣▽￣)～\n");
			printf("\n");
			break;
		}

	}
}