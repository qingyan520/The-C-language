//3.��������

//1.ð������
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void BubbleSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				Swap(&arr[j], &arr[j + 1]);
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,7,4,2,1,3,5,6,9,8 };
//	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//2.��������(����)
//ѡȡ��߻����ұߵ�ֵ��Ϊkeyֵ
//�ұ��������ұ�keyС�����֣�����������ұ�key������֣��ҵ��󽻻�λ��
//���������key�ᵽ���ʵ�λ�ã�����ߵ����ֶ���keyС���ұߵ����ֶ���key��
//֮��������Ϊkey��ߺ��ұߣ�Ȼ�����������������ڽ����������裬������ÿ����������һ�����ֵ�������ָ��λ�ã�������������ֶ��������λ��
#include<stdio.h>
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//���ŵ������Ż���ʽ
//1.����ȡ�з�����ֹ����(��������)�ĳ���
//2.С�����Ż��������䷶Χ�㹻Сʱ������ֱ�Ӳ������򣬼��ٵݹ����

//1.����ȡ�з�
//��������ʱ�临�Ӷ�O(N*logN),����������ʱ��Ϊ������ʱ�临�Ӷ�ΪO(N*N)
//��ʱ����ͨ���Ż����
int GetMid(int* arr, int left, int right)
{
	int mid = (left + right) / 2;
	if ((arr[mid] - arr[right]) * (arr[mid] - arr[left]) <= 0)
	{
		return mid;
	}
	else if ((arr[left] - arr[mid]) * (arr[left] - arr[right]) <= 0)
	{
		return left;
	}
	else
	{
		return right;
	}
}

//2.С�����Ż�:�����䷶ΧСʱ��������������������򣬼����������
void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int temp = arr[i + 1];
		while (end >= 0)
		{
			if (arr[end] > temp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = temp;
	}
}

void QuickSort(int* arr, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int left = begin, right = end;
	int mid = GetMid(arr, left, right);
	Swap(&arr[left], &arr[mid]);
	int key = begin;
	while (left < right)
	{
		while (left < right && arr[right] >= arr[key])
		{
			right--;
		}
		while (left < right && arr[left] <= arr[key])
		{
			left++;
		}
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[key], &arr[left]);
	
		QuickSort(arr, begin, left - 1);
		QuickSort(arr, left + 1, end);
}

//���ڿ����е��˵����ַ�ʽ��
//1.����ָ�뷨��������ָ�룬��ָ�룬��ָ���ұ�key���������ָ���ұ�keyС������Ȼ�󽻻�
//2.�ڿӷ���
//3.����ǰ��ָ�룺��ʼʱprevλ��leftλ�ã�curλ��left+1,cur��ǰ��С��key��ֵ���ҵ���++prev,����prev,cur��ֵ��ֱ��cur����β��
//void _QuickSort(int* arr, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int left = begin;
//	int right = end;
//	int key = left;
//	int prev = left;
//	int cur = left + 1;
//	while (cur <= right)
//	{
//		if (arr[cur] < arr[key] && ++prev != cur)
//		{
//			Swap(&arr[cur], &arr[prev]);
//		}
//		cur++;
//	}
//	Swap(&arr[key], &arr[prev]);
//	_QuickSort(arr, begin, prev - 1);
//	_QuickSort(arr,prev+1,end);
//}
//
//
//int main()
//{
//	int arr[] = { 5,1,4,3,2,6,8,7,9,10 };
//	_QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0])-1);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}