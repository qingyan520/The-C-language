#pragma once
#include<stdio.h>
#include<time.h>
#define ROW 3
#define LOW 3
void InBoard(char board[ROW][LOW], int row, int low);
void Print_board(char board[ROW][LOW], int row, int low);
void Player_Move(char board[ROW][LOW], int row, int low);
void Computer_Move(char board[ROW][LOW], int row,int low);
char Is_Winner(char board[ROW][LOW], int row, int low);
//# ����Ӯ
//*���Ӯ
//c ����Ҫ����
//Q ����ƽ��