////2.ѡ������
//
//
////(1)ֱ��ѡ������
////ÿ�������Ԫ��������Ԫ�رȽϣ�ѡ����С��
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
////�Ż��汾����һ��
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
//		for (int i = left; i < right; i++)
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
////(2)������
////1.�Ƚ��ѣ������򣬽���ѣ��Ž��򣬽�С��
////2.������һ���������һ������λ�ã�Ȼ��ʹ�����µ����㷨
////ע�⣺����ʱ�����һ����Ҷ�ӽ�㿪ʼ������n-1-1��/2��ʼʹ��ʹ�����µ����㷨���н���
////      ����֮����бȽϣ�������һ���������һ������λ�ã�Ȼ��ʹ�����µ����㷨����ѡ���ڶ������
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////�������
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
//	//1.�Ƚ������
//	for (int i = (n-1-1)/2; i >= 0; i--)
//	{
//		AdjustDown(arr, i, n);
//	}
//	//2.������һ��Ԫ��λ�ú����һ��Ԫ��λ�ã�--end��Ȼ��ʹ�����µ����㷨��������
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