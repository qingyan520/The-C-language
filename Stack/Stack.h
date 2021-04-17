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

//初始化栈
void StackInit(Stack* ps);
//入栈
void StackPush(Stack* ps,int x);
//出栈
void StackPop(Stack* ps);
//获取栈顶元素
int StackTop(Stack* ps);
//获取栈中有效元素个数
int StackSize(Stack* ps);
//判断栈中是否为空，为空返回1，不为空返回0；
bool StackEmpty(Stack* ps);
//销毁栈
void StackDestroy(Stack* ps);

