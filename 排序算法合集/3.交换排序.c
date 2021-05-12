//3.交换排序

//1.冒泡排序
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void BubbleSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				Swap(&arr[j], &arr[j + 1]);
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,7,4,2,1,3,5,6,9,8 };
//	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//2.快速排序(快排)
//选取左边或者右边的值作为key值
//右边往左走找比key小的数字，左边往右走找比key大的数字，找到后交换位置
//这样到最后key会到合适的位置，而左边的数字都比key小，右边的数字都比key大
//之后将区间后分为key左边和右边，然后让在这两个区间内进行上述步骤，这样，每次下来就有一个数字到达它的指定位置，到最后所有数字都到达合适位置
#include<stdio.h>
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//快排的两种优化方式
//1.三数取中法：防止最坏情况(有序序列)的出现
//2.小区间优化：当区间范围足够小时，我们直接插入排序，减少递归次数

//1.三树取中法
//快速排序时间复杂度O(N*logN),当其是有序时，为最坏情况，时间复杂度为O(N*N)
//这时可以通过优化解决
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

//2.小区间优化:当区间范围小时，利用其他排序进行排序，减少排序次数
void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int temp = arr[i + 1];
		while (end >= 0)
		{
			if (arr[end] > temp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = temp;
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

//关于快排中单趟的三种方式：
//1.左右指针法：定义左指针，右指针，左指针找比key大的树，右指针找比key小的数，然后交换
//2.挖坑法：
//3.定义前后指针：初始时prev位于left位置，cur位于left+1,cur向前找小于key的值，找到后++prev,交换prev,cur的值，直到cur到达尾部
//void _QuickSort(int* arr, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int left = begin;
//	int right = end;
//	int key = left;
//	int prev = left;
//	int cur = left + 1;
//	while (cur <= right)
//	{
//		if (arr[cur] < arr[key] && ++prev != cur)
//		{
//			Swap(&arr[cur], &arr[prev]);
//		}
//		cur++;
//	}
//	Swap(&arr[key], &arr[prev]);
//	_QuickSort(arr, begin, prev - 1);
//	_QuickSort(arr,prev+1,end);
//}
//
//
//int main()
//{
//	int arr[] = { 5,1,4,3,2,6,8,7,9,10 };
//	_QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0])-1);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}