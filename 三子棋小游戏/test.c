#include"game.h"
void menu()
{
	printf("\t\t      三子棋小游戏\n" );
	printf( "\t\t ---------------------\n");
	printf( "\t\t|\t1.play\t      |\n");
	printf( "\t\t|\t2.exit\t      |\n");
	printf("\t\t ---------------------\n");
}
void game()
{
	char board[ROW][LOW] = { 0 };
	char ret = 0;
	InBoard(board, ROW, LOW);//初始化数组
	Print_board(board, ROW, LOW);//打印棋盘
	while (1)
	{
		Player_Move(board, ROW, LOW);//玩家走
		Print_board(board, ROW, LOW);//电脑走
		ret = Is_Winner(board, ROW, LOW);//判断游戏是否继续
		if (ret != 'c')
		{
			break;
		}
		Computer_Move(board, ROW, LOW);
		Print_board(board, ROW, LOW);
		ret = Is_Winner(board, ROW, LOW);
		if (ret != 'c')
		{
			break;
		}
	}
	//判断输赢
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请输入您要实现的功能:>\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}