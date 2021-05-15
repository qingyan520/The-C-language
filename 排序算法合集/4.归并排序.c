//4.归并排序：分治
//将区间分为两端，假设左边有序了，右边也有序了，那么合并插入排序，整个数组就有序了
//例如：
//1  6  7  10    2  3  4  9
//1  6  7  10  |  2  3  4  9
//1  2  3  4  6  7  9  10
//取小的数据尾插到下面数组，知道一个区间结束，再把另一个区间剩下元素尾插到最后

//#include<stdio.h>
//#include<stdlib.h>
//void _MergeSort(int* arr, int left, int right, int* temp)
//{
//	if (left >= right)
//	{
//		return;
//	}
//	int mid = (right + left) / 2;
//	_MergeSort(arr, left, mid, temp);
//	_MergeSort(arr, mid + 1, right, temp);
//	int begin1 = left;
//	int end1 = mid;
//	int begin2 = mid + 1;
//	int end2 = right;
//	int i = left;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (arr[begin1] < arr[begin2])
//		{
//			temp[i++] = arr[begin1++];
//		}
//		else
//		{
//			temp[i++] = arr[begin2++];
//		}
//	}
//	while (begin1 <= end1)
//	{
//		temp[i++] = arr[begin1++];
//	}
//	while(begin2 <= end2)
//	{
//		temp[i++] = arr[begin2++];
//	}
//	for (int i = left; i <= right; i++)
//	{
//		arr[i] = temp[i];
//	}
//
//
//}
//void MergeSort(int* arr, int n)
//{
//	int* temp = malloc(sizeof(int) * n);
//	if (temp == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	_MergeSort(arr, 0, n - 1, temp);
//	free(temp);
//}
//int main()
//{
//	int arr[] = { 2,1,5,4,3,6,8,9,7,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	MergeSort(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//#include<stdlib.h>
//
//void _MergeSort(int* arr, int left, int right, int* temp)
//{
//	if (left >= right) {
//		return;
//	}
//
//	int mid = (right + left) / 2;
//
//	_MergeSort(arr, left, mid, temp);
//
//	_MergeSort(arr, mid + 1, right, temp);//两端有序区间归并到temp，并拷贝回去
//	int begin1 = left, end1 = mid;
//
//	int i = left;
//
//	int begin2 = mid + 1, end2 = right;
//
//	while (begin1 <= end1 && begin2 <= end2)
//
//		if (arr[begin1] < arr[begin2])
//		{
//			temp[i++] = arr[begin1++];
//		}
//
//		else
//		{
//			temp[i++] = arr[begin2++];
//		}
//
//	while (begin1 <= end1)
//
//		temp[i++] = arr[begin1++];
//	while (begin2 <= end2);
//
//	temp[i++] = arr[begin2++];
//
//	//归并完成后拷贝到原来数组
//
//	for (int i = left; i <= right; i++)
//
//		arr[i] = temp[i];
//}
//
//void MergeSort(int* arr, int n)
//{
//	int* temp = (int*)malloc(sizeof(int) * n);
//	if (temp == NULL)
//	{
//		printf(" malloc fail\n");
//		exit(-1);
//	}
//
//	_MergeSort(arr, 0, n - 1, temp);
//	free(temp);
//}
//
//int main()
//
//{
//	int arr[] = { 2,1,5,4,3,6,8,9,7,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	MergeSort(arr, len);
//
//	for (int i = 0; i < len; i++)
//
//		printf("%d", arr[i]);
//
//	return 0;
//}





////2.归并排序的非递归版本
#include<stdio.h>
#include<stdlib.h>
void _Merge(int* arr, int* temp, int left1, int right1, int left2, int right2)
{
	//int mid = (left + right) / 2;
	int begin1 = left1;
	int end1 = right1;
	int begin2 = left2;
	int end2 = right2;
	int i = left1;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
		{
			temp[i++] = arr[begin1++];
		}
		else
		{
			temp[i++] = arr[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		temp[i++] = arr[begin1++];
	}
	while (begin2 <= end2)
	{
		temp[i++] = arr[begin2++];
	}
	for (int i = left1; i <= right2; i++)
	{
		arr[i] = temp[i];
	}
}
void _MergeSort(int* arr, int* temp, int left, int right)
{

}
//1.最后一个小组归并时，第二个小区间不存在，不需要归并
//2.                                 存在，但是不够gap个
//3.最后一组小组归并时，第一个小区间不够gap个，不需要归并

void MergeSort(int* arr, int n)
{
	int* temp = (int*)malloc(sizeof(int) * n);
	if (temp == NULL)
	{
		exit(-1);
	}
	//_MergeSort(arr, temp,0,n-1);
	int gap = 1;
	while (gap < n)
	{

		for (int i = 0; i < n; i += 2 * gap)
		{
			//如果第二个小区间不存在则结束循环
			int begin1 = i;
			int end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			if (begin2>= n)
			{
				break;
			}
			//第二个区间存在但是第二个小区间不够gap个，结束位置越界了
			//需要修正一下
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			_Merge(arr, temp, begin1,end1, begin2, end2);

		}
		gap *= 2;
	}

	
	free(temp);
}
int main()
{
	int arr[] = { 1,8,5,4,9,6,2,3,7,10 ,11};
	int len = sizeof(arr) / sizeof(arr[0]);
	MergeSort(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
