#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж�����״̬
//���Ӯ  ��*��
//����Ӯ   ��#��
//ƽ��     ��Q��
//����    �� C��
char IsWin(char board[ROW][COL],int row,int col);