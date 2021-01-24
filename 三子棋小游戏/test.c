#include"game.h"
void menu()
{
	printf("\t\t      ������С��Ϸ\n" );
	printf( "\t\t ---------------------\n");
	printf( "\t\t|\t1.play\t      |\n");
	printf( "\t\t|\t2.exit\t      |\n");
	printf("\t\t ---------------------\n");
}
void game()
{
	char board[ROW][LOW] = { 0 };
	char ret = 0;
	InBoard(board, ROW, LOW);//��ʼ������
	Print_board(board, ROW, LOW);//��ӡ����
	while (1)
	{
		Player_Move(board, ROW, LOW);//�����
		Print_board(board, ROW, LOW);//������
		ret = Is_Winner(board, ROW, LOW);//�ж���Ϸ�Ƿ����
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
	//�ж���Ӯ
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��������Ҫʵ�ֵĹ���:>\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}