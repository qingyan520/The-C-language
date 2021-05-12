//#include<stdio.h>
//
//void Print(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
////1.直接插入排序
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
////2.希尔排序
//void ShellSort(int* arr, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int temp = arr[i + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > temp)
//				{
//					arr[end + gap] = arr[end];
//					end -= gap;
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
////3.选择排序
//void SelectSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int min = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[min])
//			{
//				min = j;
//			}
//		}
//		if (min!= i)
//		{
//			Swap(&arr[i], &arr[min]);
//		}
//	}
//}
//
////选择排序优化版
//void _SelectSort(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int maxIndex = left;
//		int minIndex = left;
//		for (int i = left; i <= right; i++)
//		{
//			if (arr[i] < arr[minIndex])
//			{
//				minIndex = i;
//			}
//			if (arr[i] > arr[maxIndex])
//			{
//				maxIndex = i;
//
//			}
//		}
//		Swap(&arr[left], &arr[minIndex]);
//		if (left == maxIndex)
//		{
//			maxIndex = minIndex;
//		}
//		Swap(&arr[right], &arr[maxIndex]);
//		left++;
//		right--;
//	}
//}
//
//
//
////4.堆排序
////向下调整算法
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
////构建大堆及排序
//void HeapSort(int* arr, int n)
//{
//	//从第一个非叶子节点可是构建大堆
//	for (int i = (n-1-1)/2; i >=0; i--)
//	{
//		AdjustDown(arr, n, i);
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		AdjustDown(arr, end, 0);
//		end--;
//	}
//}
//
//
//
//
//void test01()
//{
//	int arr[] = { 2,4,5,1,3,7,6,8,10,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//InsertSort(arr, len);
//	//ShellSort(arr, len);
//	//SelectSort(arr, len);
//	//_SelectSort(arr, len);
//	HeapSort(arr, len);
//	Print(arr, len);
//}
//int main()
//{
//	test01();
//	return 0;
//}