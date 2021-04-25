#include<stdio.h>
//在模拟实现堆时，每插入一个元素我们都要使用向上调整算法来将这个新插入的数据插入到合适的位置
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void AdjustDown(int* arr, int n, int child)
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
int main()
{
	return 0;
}