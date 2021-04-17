#include"queue.h"
//��ʼ������
void QueueInit(Queue* q)
{
	q->head = q->tail = NULL;
}
//��β�����
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
		printf("ʧ��\n");
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
//��ͷ������
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
//��ȡͷ��Ԫ��
int QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->head->data;
}
//��ȡ���ж�βԪ��
int QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->tail->data;
}
//��ȡ��������ЧԪ�ظ���
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

//�������Ƿ�Ϊ�գ����Ϊ�շ���1������ǿշ���0
int QueueEmpty(Queue* q)
{
	return q->head == NULL;
}
//���ٶ���
void QueueDestroy(Queue* q)
{
	free(q->head);
	free(q->tail);
	q->head = NULL;
	q->tail = NULL;
}

