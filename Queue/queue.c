#include"queue.h"
//初始化队列
void QueueInit(Queue* q)
{
	q->head = q->tail = NULL;
}
//队尾入队列
void QueuePush(Queue* q,int x)
{
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode !=NULL)
	{
		newnode->data = x;
		newnode->next = NULL;
	}
	else
	{
		printf("失败\n");
		exit(-1);
	}
	if (q->head == NULL)
	{
		q->head = q->tail = newnode;
	}
	else
	{
		q->tail->next=newnode;
		q->tail = newnode;

	}
}
//队头出队列
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	if (q->head->next == NULL)
	{
		free(q->head);
		q->head = q->tail = NULL;
	}
	else
	{
		QueueNode* next = q->head->next;
		free(q->head);
		q->head->next = next;
		q->head = next;
	}
}
//获取头部元素
int QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->head->data;
}
//获取队列队尾元素
int QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->tail->data;
}
//获取队列中有效元素个数
int QueueSize(Queue* q)
{
	int size = 0;
	QueueNode* cur = q->head;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

//检测队列是否为空，如果为空返回1，如果非空返回0
int QueueEmpty(Queue* q)
{
	return q->head == NULL;
}
//销毁队列
void QueueDestroy(Queue* q)
{
	free(q->head);
	free(q->tail);
	q->head = NULL;
	q->tail = NULL;
}

