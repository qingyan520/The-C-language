//从一个已经排好的序列中插入一个新的序列，而后进行排序,得到一个新的，数量增1的有序表
#include<stdio.h>
//void insort(int arr, int n)
//{
//	for (int i = 1; i < 11; i++)
//	{
//		int t = arr[i];
//		for (int j = i-1;j>=0&&t<arr[j]; j--)
//		{
//			arr[j + 1] = arr[j];
//			arr[j + 1] = t;
//		}
//	}
//}
//int main()
//{
//	int arr[11], i;
//	printf("请输入10个数据：");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", arr[i]);
//	}
//	printf("原始顺序：\n");
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	insort(arr, 10);
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	return 0;
//}