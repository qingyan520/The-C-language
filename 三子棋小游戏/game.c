#include"game.h"
void InBoard(char board[ROW][LOW], int row, int low)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < low; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Print_board(char board[ROW][LOW], int row, int low)
{
	for (int i = 0;  i < row;  i++)
	{
		for (int j = 0; j < low; j++)
		{
			printf("%c ",board[i][j]);
			if (j < low - 1)
				printf(" |");
		}
		printf("\n");
		for (int j = 0; j < low; j++)
		{
		
				printf("---");
				if (j < low - 1)
					printf("|");
		}
		printf("\n");
	}
}
void Player_Move(char board[ROW][LOW], int row, int low)
{
	int x = 0, y = 0;
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入要下的坐标：>");
		scanf_s("%d%d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <=low)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}

		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}
void Computer_Move(char board[ROW][LOW], int row, int low)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("电脑走\n");
		x = rand() % row;
		y = rand() % low;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int Is_Full(char board[ROW][LOW], int row, int low)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < low; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Is_Winner(char board[ROW][LOW], int row, int low)
{
	//判断一行元素是否相等
	for (int i = 0; i < low; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	//判断一列元素是否相等
	for (int i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断对角线是否相等
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
	{
		return board[1][1];
	}
	//判断棋盘是否走满，为走满利用Is_Full函数返回0，然后返回c代表游戏继续，否则返回Q代表平局；
	int ret=Is_Full(board, ROW, LOW);
	if (ret == 0)
	{
		return 'c';
	}
	if (ret == 1)
	{
		return 'Q';
	}
}