#include<stdio.h>
#include<stdlib.h>
#include<stack>
using namespace std;


//打印函数
void Print(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}



//交换函数
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}



//1.直接插入排序
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



//2.希尔排序
void ShellSort(int* arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int temp = arr[i + gap];
			while (end >= 0)
			{
				if (arr[end] > temp)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = temp;
		}
	}
}



//3.选择排序
void SelectSort(int* arr, int n)
{
	int left = 0;
	int right = n - 1;
	while (left <right)
	{
		int MinIndex = left;
		int MaxIndex = left;
		for (int i = left; i <= right; i++)
		{
			if (arr[i] > arr[MaxIndex])
			{
				MaxIndex = i;
			}
			if (arr[i] < arr[MinIndex])
			{
				MinIndex = i;
			}
		}
		Swap(&arr[left], &arr[MinIndex]);
		if (left == MaxIndex)
		{
			MaxIndex = MinIndex;
		}
		Swap(&arr[right], &arr[MaxIndex]);
		left++;
		right--;
	}
}



//4.堆排序
//向下调整算法
void AdjustDown(int* arr, int n,int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && arr[child + 1] > arr[child])
		{
			child++;
		}
		if (arr[child] > arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
//建大堆排序
void HeapSort(int* arr, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&arr[0], &arr[end]);
		AdjustDown(arr, end, 0);
		end--;
	}
}



//5.冒泡排序
void BubbleSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}



//6.快排+三数取中法+小区间优化
// 三数取中法
int GetMid(int* arr, int left, int right)
{
	int mid = (left + right) / 2;
	if ((arr[mid] - arr[left]) * (arr[mid] - arr[right]) <= 0)
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
//6.1左右指针法
int PastSort1(int* arr, int begin, int end)
{
	int left = begin, right=end;
	int mid = GetMid(arr, left, right);
	Swap(&arr[left], &arr[mid]);
	int keyi = left;
	while (left < right)
	{
		while (left < right && arr[right] >= arr[keyi])
		{
			right--;
		}
		while (left < right && arr[left] <= arr[keyi])
		{
			left++;
		}
		Swap(&arr[left],& arr[right]);
	}
	Swap(&arr[keyi], &arr[left]);
	return left;

}
//3.前后指针法
int PastSort2(int* arr, int begin, int end)
{
	int mid=GetMid(arr, begin, end);
	Swap(&arr[begin], &arr[mid]);
	int keyi = begin;
	int prev = begin;
	int cur = begin + 1;
	while (cur <= end)
	{
		if (arr[cur] < arr[keyi] && ++prev != cur)
		{
			Swap(&arr[cur], &arr[prev]);
		}
		cur++;
	}
	Swap(&arr[keyi], &arr[prev]);
	return prev;

}
void QuickSort(int* arr, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int left = begin;
	int right = end;
	//1.左右指针法
	//nt keyi = PastSort1(arr, left, right);
	//2.挖坑法
	//3.前后指针法
	int keyi = PastSort2(arr, left, right);
	QuickSort(arr, begin, keyi - 1);
	QuickSort(arr, keyi + 1, end);
}
//6.1快排非递归写法
void _QuickSort(int* arr, int begin, int end)
{
	stack<int>st;
	st.push(begin);
	st.push(end);
	while (!st.empty())
	{
		int right = st.top();
		st.pop();
		int left = st.top();
		st.pop();
		int keyi = PastSort2(arr, left, right);
		if (left < keyi - 1)
		{
			st.push(left);
			st.push(keyi - 1);
		}
		if (right > keyi + 1)
		{
			st.push(keyi + 1);
			st.push(right);
		}
	}

}



//7.归并排序
void _MergeSort(int* arr, int left, int right, int* temp)
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	_MergeSort(arr, left, mid, temp);
	_MergeSort(arr, mid + 1, right, temp);
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int i = left;
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
	for (int i = left; i <= right; i++)
	{
		arr[i] = temp[i];
	}
}
void MergeSort(int* arr, int n)
{
	int* temp = (int*)malloc(sizeof(int) * n);
	if (temp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	_MergeSort(arr, 0, n - 1, temp);
	free(temp);
}
int main()
{
	int arr[] = { 2,4,5,1,3,6,7,9,8,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//1.直接插入排序
	//InsertSort(arr, len);

	//2.希尔排序
	//ShellSort(arr, len);

	//3.选择排序
	//SelectSort(arr, len);

	//4.堆排序
	//HeapSort(arr, len);

	//5.冒泡排序
	//BubbleSort(arr, len);

	//6.快排
	//QuickSort(arr, 0, len - 1);

	//6.1快排非递归写法
	//_QuickSort(arr, 0, len - 1);

	//7.归并排序
	MergeSort(arr, len);

	Print(arr, len);
	return 0;
}