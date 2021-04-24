#include"Heap.h"

//交换函数
void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType temp = *a;
	*a = *b;
	*b = temp;
}

//向下调整算法初始化大堆
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = 2 * parent + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}


//每次在堆尾插入数据，然后利用向上查找算法将这个数据调整到合适的位置
void AdjustUp(HPDataType* arr, int n, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[child] > arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


//初始化堆
void HeapInit(HP* hp, HPDataType* arr, int n)
{
	assert(hp);

	hp->a = (HPDataType*)malloc(sizeof(HPDataType) *n);
	if (hp->a != NULL)
	{
		hp->capacity = n;
		hp->size = n;
		memcpy(hp->a, arr, sizeof(HPDataType) * n);
		//放入元素之后用向下调整算法从最后最后一个非0子叶开始调整，让其构成大堆序列
		for (int i = (n - 1 - 1) / 2; i >= 0; i--)
		{
			AdjustDown(hp->a, hp->size, i);
		}
	}
	else
	{
		printf("malloc fail!\n");
		exit(-1);
	}

}

//销毁堆
void HeapDestory(HP* hp)
{
	assert(hp);
	free(hp->a);
	hp->capacity = hp->size = 0;
}

//插入数据
void HeapPush(HP* hp, HPDataType x)
{
	assert(hp);
	//每次插入前检查容量
	if (hp->capacity == hp->size)
	{
		HPDataType* p = realloc(hp->a,sizeof(HPDataType) * hp->capacity * 2);
		if (p != NULL)
		{
			hp->a = p;
			hp->capacity *= 2;
		}
		else
		{
			printf("realloc fail!\n");
			exit(-1);
		}
	}

	//插入数据
	hp->a[hp->size] = x;
	hp->size++;

	//每次插入数据后采用向上调整算法进行调整
	AdjustUp(hp->a, hp->size, hp->size - 1);
}

//删除堆顶元素
void HeapPop(HP* hp)
{
	assert(hp);
	assert(hp->size > 0);
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	hp->size--;
	AdjustDown(hp->a, hp->size, 0);
}

//拿到堆顶元素
HPDataType HeapTop(HP* hp)
{
	assert(hp);
	assert(hp->size > 0);
	return hp->a[0];
}

//计算堆的大小
int HeapSize(HP* hp)
{
	assert(hp);
	return hp->size;
}

//判断堆是否为空
bool HeapEmpty(HP* hp)
{
	return hp->size == 0;
}

//打印函数
void Print(HP* hp)
{
	for (int i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->a[i]);
	}
	printf("\n");
	int num = 0;
	int level = 1;
	for (int i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->a[i]);
		num++;
		if (num == level)
		{
			printf("\n");
			num = 0;
			level *= 2;
		}
	}
	printf("\n\n");
}