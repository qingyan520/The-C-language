#include"SeqList.h"
//��ʼ��˳���
void SeqListInit(SeqList* pq)
{
	assert(pq);
	pq->a = NULL;
	pq->size = 0;
	pq->capacity = 0;
}
//�������
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
//β����������
void SeqListPushBack(SeqList* pq,SeqDateType x)
{
	assert(pq);
	//ÿ�β������ݶ�Ҫ�������
	SeqListCheckCapacity(pq);
	pq->a[pq->size] = x;
	pq->size++;
}
//ͷ����������
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
//βɾ
void SeqListPopBack(SeqList* pq)
{
	pq->size--;
}
//ͷɾ
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
//��ӡ����
void SeqListPrint(SeqList* pq)
{
	assert(pq);
	for (int i = 0; i < pq->size; i++)
	{
		printf("%d ", pq->a[i]);
	}
	printf("\n");
}
//��������
void SeqListDestory(SeqList* pq)
{
	assert(pq);
	pq->a = NULL;
	pq->capacity = 0;
	pq->size = 0;
}

//����ָ������
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
		printf("δ�ҵ��ó�Ա\n");
		return;
	}
	else
	{
		printf("%d���±�Ϊ%d\n", ps->a[i], i);
	}
}
//ָ��λ�ò�������
void SeqListInsert(SeqList* ps, size_t pos, SeqDateType x)
{
	assert(ps);
	assert(pos<=ps->size&&pos>=0);

	SeqListCheckCapacity(ps);


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
// ˳���ɾ��posλ�õ�ֵ
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
	if (pos == -1)
	{
		printf("δ�ҵ���Ԫ��\n");
	}
	else
	{
		size_t start = pos + 1;
		while (start<ps->size)
		{
			ps->a[start - 1] = ps->a[start];
			++start;
		}
		ps->size--;
	}
}

void SeqListPush_Init(SeqList* ps)
{
	for (int i = 0; i < 50; i++)
	{
		
		int val = rand() % 11;
		if (val % 2 == 0)
		{
			SeqListPushBack(ps, val);
		}
	}
}



void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int GetMid(int* arr, int left, int right)
{
	int mid = (left + right) / 2;
	if ((arr[mid] - arr[right]) * (arr[mid] - arr[left]) <= 0)
	{
		return mid;
	}
	else if ((arr[left] - arr[mid]) * (arr[left] - arr[right]) <= 0)
	{
		return left;
	}
	else
	{
		return right;
	}
}


void QuickSort(int* arr, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int left = begin, right = end;
	int mid = GetMid(arr, left, right);
	Swap(&arr[left], &arr[mid]);
	int key = begin;
	while (left < right)
	{
		while (left < right && arr[right] >= arr[key])
		{
			right--;
		}
		while (left < right && arr[left] <= arr[key])
		{
			left++;
		}
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[key], &arr[left]);
	QuickSort(arr, begin, left - 1);
	QuickSort(arr, left + 1, end);
}


//�����㷨���ÿ���+����ȡ�з�
void SeqList_Sort(SeqList* ps)
{
	QuickSort(ps->a, 0, ps->size - 1);
}

void SeqListSize(SeqList* ps)
{
	printf("�����Ա���Ϊ:%d\n", ps->size);
}

void SeqListNumberSearch(SeqList* ps)
{
	int index;
	printf("������Ҫ����Ԫ�ص��±�:\n");
	scanf_s("%d", &index);
	if (index < 0 || index >= ps->size)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("����Ϊ��%d\n", ps->a[index]);
	}
}


int SeqListSearch(SeqList* ps, int x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}
