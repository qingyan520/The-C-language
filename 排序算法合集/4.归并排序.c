//4.�鲢���򣺷���
//�������Ϊ���ˣ�������������ˣ��ұ�Ҳ�����ˣ���ô�ϲ������������������������
//���磺
//1  6  7  10    2  3  4  9
//1  6  7  10  |  2  3  4  9
//1  2  3  4  6  7  9  10
//ȡС������β�嵽�������飬֪��һ������������ٰ���һ������ʣ��Ԫ��β�嵽���

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
//	_MergeSort(arr, mid + 1, right, temp);//������������鲢��temp����������ȥ
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
//	//�鲢��ɺ󿽱���ԭ������
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