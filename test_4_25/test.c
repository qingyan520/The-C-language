//堆排序练习
//首先对所有书局从第一个非叶子结点进行建堆，建立大堆
//然后，让第一个元素和最后一个元素交换位置，再对前面n-1个元素进行时大堆排序

#include<stdio.h>
//向下调整算法L:从父亲结点开始操作
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void AdjustDown(int* arr, int n, int parent)
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
void HeapSort(int* arr, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&arr[0], &arr[end]);
		AdjustDown(arr, end, 0);
		end--;
	}
}
int main()
{
	int arr[] = { 1,23,4,7,5,2,15,87,14,56 };
	int len = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, len);
	return 0;
}