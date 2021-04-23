#include"Heap.h"
void HeapCreate(Heap* hp, HPDataType* a, int n)//堆的构建
{
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType) * (n));
	hp->_capacity = n;
	hp->_size = 0;
}


void HeapDestory(Heap* hp)//堆的销毁
{
	hp->_capacity = hp->_size = 0;
	free(hp);
	hp = NULL;
}


//交换数据
void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType temp = *a;
	*a = *b;
	*b = temp;
}

//大堆的构建
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



//每次插入元素后，重新进行大堆排序
//从最后一个非子叶结点开始
void AdjustUp(HPDataType* arr, int n, int child)
{
	for (int i = (child - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);
	}
}


// 堆的插入
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
			printf("扩容失败\n");
		}
	}
	hp->_a[hp->_size] = x;
	hp->_size++;
	//每插入一个元素，重新进行一次大堆排列
	AdjustUp(hp->_a, hp->_size, hp->_size - 1);
}


// 堆的删除:删除最大的元素
void HeapPop(Heap* hp)
{
	assert(hp);
	Swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	hp->_size--;
	AdjustDown(hp->_a, hp->_size, 0);
}


// 取堆顶的数据
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->_a[0];
}



// 堆的数据个数
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->_size;
}


// 堆的判空
int HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->_size == 0;
}