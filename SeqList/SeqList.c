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
	assert(pq);
	assert(pq->size > 0);
	for (int i = 0; i < pq->size-1; i++)
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

//查找指定内容
void SeqListFind(SeqList* ps, SeqDateType x)
{
	assert(ps);
	int i = 0;
	for (; i < ps->size; i++)
	{
		if (x == ps->a[i])
		{
			break;
		}
	}
	if (i == ps->size)
	{
		printf("未找到该成员\n");
		return;
	}
	else
	{
		printf("%d的下标为%d\n", ps->a[i], i);
	}
}
//指定位置插入数据
void SeqListInsert(SeqList* ps, size_t pos, SeqDateType x)
{
	assert(ps);
	//assert(pos<=ps->size);

	SeqListCheckCapacity(ps);
	if (pos == 0)
	{

	}

	//int end = ps->size - 1;
	//while (end >= (int)pos)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	--end;
	//}

	size_t end = ps->size;
	while (end >= pos)
	{
		ps->a[end] = ps->a[end - 1];
		--end;
	}


	ps->a[pos] = x;
	ps->size++;
}
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos)
{
	//assert(ps && (pos <ps->size));

	//size_t start = pos;
	//while (start < ps->size-1)
	//{
	//	ps->a[start] = ps->a[start + 1];
	//	++start;
	//}
	//asserr(ps);
	//assert(pos >=0 && pos<=ps.size);
	size_t start = pos + 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	ps->size--;
}