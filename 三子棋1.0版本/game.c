#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < ROW; i++)
	{
		////1.��ӡһ������
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);;
		////2.��ӡ�ָ���
		//if(i<row-1)
		//   printf("---|---|--- \n");
		//��ӡ����
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < col - 1) {
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("����ߣ�>");
	while (1)
	{
		printf("������Ҫ�µ����꣺>");
		scanf_s("%d%d", &x, &y);
		//�ж�x,y����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ��\n");
			}

		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//����1��ʾ�������ˣ�����0����ʾ����û��
int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <col; j++)
		{
			if (board[i][j] == ' ')//û��
				return 0;
		}
	}
	//return 1;����
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		//������
		if (board[i][0] == board[i][1] && board[i][i] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//��ɢ��
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[2][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�����Խ���
	if (board[1][1] == board[0][0] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//����Ƿ�ƽ��
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'c';
}
		
		