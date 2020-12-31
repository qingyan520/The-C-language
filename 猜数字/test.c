#include"game.h"
void mnue()
{
	printf("\t\t      ★猜数字游戏★\t\n");
	printf("\t\t - - - - - - - - - - - \n");
	printf("\t\t|\t☆1.play☆        |\n");
	printf("\t\t|\t☆0.exit☆        |\n");
	printf("\t\t - - - - - - - - - - -  \n");
}
int main()
{
	
	int input;
	while(1)
	{
		mnue();
		printf("请输入您的选择:>");
		scanf_s("%d", &input);
		LOgin();
		printf("- - - - - - - - 正在加载游戏，请耐心等待- - - - - - -\n");
		printf("- - - - - - - - - 现在请开始您的游戏吧- - - - - - - - \n");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误请重新输入:>\n");
			break;
		}

	} 
	return 0;
}