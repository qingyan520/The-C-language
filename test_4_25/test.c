//��������ϰ
//���ȶ�������ִӵ�һ����Ҷ�ӽ����н��ѣ��������
//Ȼ���õ�һ��Ԫ�غ����һ��Ԫ�ؽ���λ�ã��ٶ�ǰ��n-1��Ԫ�ؽ���ʱ�������

#include<stdio.h>
//���µ����㷨L:�Ӹ��׽�㿪ʼ����
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
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
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		AdjustDown(arr, end, 0);
//		end--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,23,4,7,5,2,15,87,14,56 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	HeapSort(arr, len);
//	return 0;
//}