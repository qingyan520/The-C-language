////2.选择排序
//
//
////(1)直接选择排序
////每次让这个元素与后面的元素比较，选出最小的
//#include<stdio.h>
//void SelectSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int min = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[min] > arr[j])
//			{
//				min = j;
//			}
//		}
//		if (min != i)
//		{
//			int temp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = temp;
//		}
//	}
//}
//void Print02(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 4,2,3,1,6,5,9,7,8,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	SelectSort(arr, len);
//	Print02(arr, len);
//	return 0;
//}
//
////优化版本：快一倍
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void SelectSort(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int minIndex = left;
//		int maxIndex = left;
//		for (int i = left; i <= right; i++)
//		{
//			if (arr[i] < arr[minIndex])
//			{
//				minIndex = i;
//			}
//			if (arr[i] > arr[maxIndex])
//			{
//				maxIndex = i;
//			}
//		}
//		Swap(&arr[minIndex], &arr[left]);
//		if (left == maxIndex)
//		{
//			maxIndex = minIndex;
//		}
//		Swap(&arr[maxIndex], &arr[right]);
//		left++;
//		right--;
//	}
//}
//void Print02(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 4,2,3,1,6,5,9,7,8,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	SelectSort(arr, len);
//	Print02(arr, len);
//	return 0;
//}
//
//
////(2)堆排序
////1.先建堆：排升序，建大堆，排降序，建小堆
////2.交换第一个数和最后一个数的位置，然后使用向下调整算法
////注意：建堆时从最后一个非叶子结点开始，即（n-1-1）/2开始使用使用向下调整算法进行建堆
////      建堆之后进行比较，交换第一个数和最后一个数的位置，然后使用向下调整算法重新选出第二大的数
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//建立大堆
//void AdjustDown(int* arr, int parent, int n)
//{
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child+1<n&&arr[child + 1] > arr[child])
//		{
//			child = child + 1;
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
//	1.先建立大堆
//	for (int i = (n-1-1)/2; i >= 0; i--)
//	{
//		AdjustDown(arr, i, n);
//	}
//	2.交换第一个元素位置和最后一个元素位置，--end，然后使用向下调整算法继续调整
//	int end = n - 1;
//	while (end >0)
//	{
//		Swap(&arr[0], &arr[end]);
//		AdjustDown(arr, 0, end);
//		end--;
//	}
//}
//int main()
//{
//	int arr[] = { 4,3,6,1,5,2,7,9,8 ,10};
//	HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}