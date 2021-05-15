//5.计数排序
//思想：假设有一个数组如下所示
//2  5  3  0  2  3   0  3
//另外开辟一个计数的数组count,全部初始化为0，，遍历A数组，使得count[A[i]]++;
//2  0  2  3  0  1
//0  1  2  3  4  5
//所以原来数组大小为
//0 0 2 2 3 3 5
//时间复杂度：O(N+range)
//空间复杂度：O(range)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void CountSize(int* arr, int n)
//{
//	int min = arr[0], max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	//数组大小=最大值-最小值+1
//	int range = max - min + 1;
//	int* count = (int*)malloc(sizeof(int) * range);
//	if (count == NULL)
//	{
//		exit(-1);
//	}
//	memset(count, 0, sizeof(int) * range);
//	for (int i = 0; i < n; i++)
//	{
//		count[arr[i]-min]++;
//	}
//	int j = 0;
//	for (int i = 0; i < range; i++)
//	{
//		while (count[i]--)
//		{
//			arr[j++] = i + min;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,5,4,2,3,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	CountSize(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}