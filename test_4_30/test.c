////1.ѡ�񷨽�������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		int max =i;
//		for (int j = i + 1; j < 10; j++)
//		{
//			if (arr[max] > arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max > i)
//		{
//			int temp = arr[max];
//			arr[max] = arr[i];
//			arr[i] = temp;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}



////2.��һ�����ֲ��뵽��������
////���磺���������������ŵ�����Ϊ�� 1 2 3 4 5 7 8 9 10 
////���ǲ���һ������6
//#include<stdio.h>
//#include<stdlib.h>
//int Compare(void* v1, void* v2)
//{
//	return *(int*)v1 - *(int*)v2;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	scanf_s("%d", &x);
//	arr[9] = x;
//	qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(int), Compare);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}



//4.�ҳ���ά����İ���
#include<stdio.h>
#define n 3
#define m 4
int main()
{
	int arr[n][m];
	int flag = 1, count = 0,jmax=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		int max = arr[i][0];
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] >= max)
			{
				max = arr[i][j];
				jmax = j;
			}
		}
		flag = 1;
		for (int k = 0; k < n; k++)
		{
			if (arr[k][jmax] < max)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf("%d %d\n", i, jmax);
			count++;
		}
	}
	if (count == 0)
	{
		printf("None\n");
	}
	return 0;
}