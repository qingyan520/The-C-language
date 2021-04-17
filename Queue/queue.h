#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct QueueNode
{
	int data;
	struct QueueNode* next;
}QueueNode;
typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;
//初始化队列
void QueueInit(Queue* q);
//队尾入队列
void QueuePush(Queue* q,int x);
//队头出队列
void QueuePop(Queue* q);
//获取头部元素
int QueueFront(Queue* q);
//获取队列队尾元素
int QueueBack(Queue* q);
//获取队列中有效元素个数
int QueueSize(Queue* q);
//检测队列是否为空，如果为空返回1，如果非空返回0
int QueueEmpty(Queue* q);
//销毁队列
void QueueDestroy(Queue* q);

