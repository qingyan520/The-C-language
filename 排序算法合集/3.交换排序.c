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
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////��������ʱ�临�Ӷ�O(N*logN),����������ʱ��Ϊ������ʱ�临�Ӷ�ΪO(N*N)
////��ʱ����ͨ���Ż����
//int GetMid(int* arr, int left, int right)
//{
//	int mid = (left + right) / 2;
//	if ((arr[mid] - arr[right]) * (arr[mid] - arr[left]) <= 0)
//	{
//		return mid;
//	}
//	else if ((arr[left] - arr[mid]) * (arr[left] - arr[right]) <= 0)
//	{
//		return left;
//	}
//	else
//	{
//		return right;
//	}
//}
//void QuickSort(int* arr, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int left = begin, right = end;
//	int mid = GetMid(arr, left, right);
//	Swap(&arr[left], &arr[mid]);
//	int key = begin;
//	while (left < right)
//	{
//		while (left < right && arr[right] >= arr[key])
//		{
//			right--;
//		}
//		while (left < right && arr[left] <= arr[key])
//		{
//			left++;
//		}
//		Swap(&arr[left], &arr[right]);
//	}
//	Swap(&arr[key],& arr[left]);
//	QuickSort(arr, begin, left - 1);
//	QuickSort(arr, left + 1, end);
//}
//int main()
//{
//	int arr[] = { 5,1,4,3,2,6,8,7,9,10 };
//	QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0])-1);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
