#include"Heap.h"

//��������
void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType temp = *a;
	*a = *b;
	*b = temp;
}

//���µ����㷨��ʼ�����
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


//ÿ���ڶ�β�������ݣ�Ȼ���������ϲ����㷨��������ݵ��������ʵ�λ��
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


//��ʼ����
void HeapInit(HP* hp, HPDataType* arr, int n)
{
	assert(hp);

	hp->a = (HPDataType*)malloc(sizeof(HPDataType) *n);
	if (hp->a != NULL)
	{
		hp->capacity = n;
		hp->size = n;
		memcpy(hp->a, arr, sizeof(HPDataType) * n);
		//����Ԫ��֮�������µ����㷨��������һ����0��Ҷ��ʼ���������乹�ɴ������
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

//���ٶ�
void HeapDestory(HP* hp)
{
	assert(hp);
	free(hp->a);
	hp->capacity = hp->size = 0;
}

//��������
void HeapPush(HP* hp, HPDataType x)
{
	assert(hp);
	//ÿ�β���ǰ�������
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

	//��������
	hp->a[hp->size] = x;
	hp->size++;

	//ÿ�β������ݺ�������ϵ����㷨���е���
	AdjustUp(hp->a, hp->size, hp->size - 1);
}

//ɾ���Ѷ�Ԫ��
void HeapPop(HP* hp)
{
	assert(hp);
	assert(hp->size > 0);
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	hp->size--;
	AdjustDown(hp->a, hp->size, 0);
}

//�õ��Ѷ�Ԫ��
HPDataType HeapTop(HP* hp)
{
	assert(hp);
	assert(hp->size > 0);
	return hp->a[0];
}

//����ѵĴ�С
int HeapSize(HP* hp)
{
	assert(hp);
	return hp->size;
}

//�ж϶��Ƿ�Ϊ��
bool HeapEmpty(HP* hp)
{
	return hp->size == 0;
}

//��ӡ����
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