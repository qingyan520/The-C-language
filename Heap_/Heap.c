#include"Heap.h"
void HeapCreate(Heap* hp, HPDataType* a, int n)//�ѵĹ���
{
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType) * (n));
	hp->_capacity = n;
	hp->_size = 0;
}


void HeapDestory(Heap* hp)//�ѵ�����
{
	hp->_capacity = hp->_size = 0;
	free(hp);
	hp = NULL;
}


//��������
void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType temp = *a;
	*a = *b;
	*b = temp;
}

//��ѵĹ���
void AdjustDown(HPDataType*arr, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child + 1] > arr[child])
		{
			child++;
		}
		if (arr[child] > arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}



//ÿ�β���Ԫ�غ����½��д������
//�����һ������Ҷ��㿪ʼ
void AdjustUp(HPDataType* arr, int n, int child)
{
	for (int i = (child - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);
	}
}


// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x)
{
	if (hp->_capacity == hp->_size)
	{
		HPDataType* p = realloc(hp->_a, sizeof(HPDataType) * (hp->_capacity * 2));
		if (p != NULL)
		{
			hp->_a = p;
			hp->_capacity *= 2;
		}
		else
		{
			exit(-1);
			printf("����ʧ��\n");
		}
	}
	hp->_a[hp->_size] = x;
	hp->_size++;
	//ÿ����һ��Ԫ�أ����½���һ�δ������
	AdjustUp(hp->_a, hp->_size, hp->_size - 1);
}


// �ѵ�ɾ��:ɾ������Ԫ��
void HeapPop(Heap* hp)
{
	assert(hp);
	Swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	hp->_size--;
	AdjustDown(hp->_a, hp->_size, 0);
}


// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->_a[0];
}



// �ѵ����ݸ���
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->_size;
}


// �ѵ��п�
int HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->_size == 0;
}