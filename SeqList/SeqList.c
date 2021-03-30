#include"SeqList.h"
//初始化顺序表
void SeqListInit(SeqList* pq)
{
	assert(pq);
	pq->a = NULL;
	pq->size = 0;
	pq->capacity = 0;
}
//检查容量
void SeqListCheckCapacity(SeqList* pq)
{
	if (pq->size == pq->capacity)
	{
		int newcapacity = (pq->capacity == 0 ? 4 : pq->capacity * 2);
		SeqDateType* p = realloc(pq->a,newcapacity * sizeof(SeqDateType));
		if (p != NULL)
		{
			pq->a = p;
			pq->capacity = newcapacity;
		}
		else
		{
			printf("realloc fail\n");
			exit(-1);
		}
	}
	
}
//尾部插入数据
void SeqListPushBack(SeqList* pq,SeqDateType x)
{
	assert(pq);
	//每次插入数据都要检查容量
	SeqListCheckCapacity(pq);
	pq->a[pq->size] = x;
	pq->size++;
}
//头部插入数据
void SeqListPushFront(SeqList* pq, SeqDateType x)
{
	assert(pq);
	SeqListCheckCapacity(pq);
	int end = pq->size - 1;
	for (;end>=0;end--)
	{
		pq->a[end+1] = pq->a[end];
	}
	pq->a[0] = x;
	pq->size++;
}
//尾删
void SeqListPopBack(SeqList* pq)
{
	pq->size--;
}
//头删
void SeqListPopFront(SeqList* pq)
{
	for (int i = 0; i < pq->size; i++)
	{
		pq->a[i] = pq->a[i + 1];
	}
	pq->size--;
}
//打印数据
void SeqListPrint(SeqList* pq)
{
	assert(pq);
	for (int i = 0; i < pq->size; i++)
	{
		printf("%d\n", pq->a[i]);
	}
}
//销毁数据
void SeqListDestory(SeqList* pq)
{
	assert(pq);
	pq->a = NULL;
	pq->capacity = 0;
	pq->size = 0;
}

