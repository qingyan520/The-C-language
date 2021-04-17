#pragma once
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct Stack
{
	int* a;
	int capacity;
	int top;
}Stack;

//��ʼ��ջ
void StackInit(Stack* ps);
//��ջ
void StackPush(Stack* ps,int x);
//��ջ
void StackPop(Stack* ps);
//��ȡջ��Ԫ��
int StackTop(Stack* ps);
//��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps);
//�ж�ջ���Ƿ�Ϊ�գ�Ϊ�շ���1����Ϊ�շ���0��
bool StackEmpty(Stack* ps);
//����ջ
void StackDestroy(Stack* ps);

