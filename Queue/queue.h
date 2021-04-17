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
//��ʼ������
void QueueInit(Queue* q);
//��β�����
void QueuePush(Queue* q,int x);
//��ͷ������
void QueuePop(Queue* q);
//��ȡͷ��Ԫ��
int QueueFront(Queue* q);
//��ȡ���ж�βԪ��
int QueueBack(Queue* q);
//��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* q);
//�������Ƿ�Ϊ�գ����Ϊ�շ���1������ǿշ���0
int QueueEmpty(Queue* q);
//���ٶ���
void QueueDestroy(Queue* q);

