//1.快速排序
// 小插曲：快速求三个数中的中间位置
//#include<stdio.h>
//int GetMid(int a, int b, int c)
//{
//	if ((a - b) * (a - c) <= 0)
//	{
//		return a;
//	}
//	else if ((b - a) * (b - c) <= 0)
//	{
//		return b;
//	}
//	else
//	{
//		return c;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	printf("%d\n", GetMid(a, b, c));
//}

//快速排序
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int GetMid(int* arr, int left, int right)
//{
//	int mid = (left + right) / 2;
//	if ((arr[mid] - arr[left]) * (arr[mid] - arr[right]) <= 0)
//	{
//		return mid;
//	}
//	else if ((arr[left] - arr[mid]) * (arr[left] - arr[right]) <= 0)
//	{
//		return left;
//	}
//	else
//	{
//		return right;
//	}
//}
//void QuickSort(int* arr, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int left = begin;
//	int right = end;
//	int mid = GetMid(arr, left, right);
//	Swap(&arr[left], &arr[mid]);
//	int key = begin;
//	while (left < right)
//	{
//		while (left < right && arr[right] >= arr[key])
//		{
//			right--;
//		}
//		while (left < right && arr[left] <= arr[key])
//		{
//			left++;
//		}
//		Swap(&arr[left], &arr[right]);
//	}
//	Swap(&arr[key], &arr[left]);
//	QuickSort(arr, begin, left - 1);
//	QuickSort(arr, left + 1, end);
//}
//int main()
//{
//	int arr[] = { 1,2,4,3,5,6,7,9,8,10 };
//	QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////2.冒泡排序
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void Print(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void BubbleSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j + 1] < arr[j])
//			{
//				Swap(&arr[j + 1], &arr[j]);
//			}
//		}
//	}
//}
//
//
////3.选择排序
//void SelectSort(int *arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int MaxIndex = right;
//		int MinIndex = left;
//		for (int i = left; i <=right; i++)
//		{
//			if (arr[i] < arr[MinIndex])
//			{
//				MinIndex = i;
//			}
//			if (arr[i] > arr[MaxIndex])
//			{
//				MaxIndex = i;
//			}
//		}
//		Swap(&arr[left], &arr[MinIndex]);
//		if (left == MaxIndex)
//		{
//			MaxIndex = MinIndex;
//		}
//		Swap(&arr[right], &arr[MaxIndex]);
//		left++;
//		right--;
//	}
//}
//
////4.堆排序
//void AdjustDown(int* arr, int n, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child + 1 < n && arr[child + 1] > arr[child])
//		{
//			child++;
//		}
//		if (arr[child] > arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapSort(int* arr, int n)
//{
//	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(arr, n, i);
//	}
//
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		AdjustDown(arr, end, 0);
//		end--;
//	}
//
//}
//
//
//
////5.插入排序
//void InsertSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int temp = arr[i + 1];
//		while (end >= 0)
//		{
//			if (arr[end] > temp)
//			{
//				arr[end + 1] = arr[end];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = temp;
//	}
//}
//
//
////6.希尔排序
//void ShellSort(int* arr, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = (gap / 3) + 1;
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int temp = arr[i + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > temp)
//				{
//					arr[end + gap] = arr[end];
//					end-=gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			arr[end + gap] = temp;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,5,9,7,3,4,6,2,8,2 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	//BubbleSort(arr, n);
//	//SelectSort(arr, n);
//	//HeapSort(arr, n);
//	//InsertSort(arr, n);
//	ShellSort(arr, n);
//	Print(arr, n);
//	return 0;
//}