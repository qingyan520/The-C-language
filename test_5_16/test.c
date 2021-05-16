#include<stdio.h>
#include<stdlib.h>

//¥Ú”°∫Ø ˝
void Print(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}



//Ωªªª∫Ø ˝
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//1.≤Â»Î≈≈–Ú
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


//2.œ£∂˚≈≈–Ú
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


//3.—°‘Ò≈≈–Ú
void SelectSort(int* arr, int n)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		int max = left;
		int min = left;
		for (int i = left; i <= right; i++)
		{
			if (arr[i] > arr[max])
			{
				max = i;
			}
			if (arr[i] < arr[min])
			{
				min = i;
			}
		}
		Swap(&arr[left], &arr[min]);
		if (max == left)
		{
			max = min;
		}
		Swap(&arr[right], &arr[max]);
		left++;
		right--;

	}
}


//4.∂—≈≈–Ú
void AdjustDown(int* arr, int n,int parent)
{
	int child = 2 * parent + 1;
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
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}
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



//5.√∞≈›≈≈–Ú
void BubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}



//6.øÏÀŸ≈≈–Ú
void QuickSort(int* arr, int begin,int end)
{
	if (begin >= end)
	{
		return;
	}
	int key = begin;
	int left = begin;
	int right = end;
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


//7.πÈ≤¢≈≈–Ú
void _MergeSort(int* arr, int* temp, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	_MergeSort(arr, temp, left, mid);
	_MergeSort(arr, temp, mid + 1, right);
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
		exit(-1);
	}
	_MergeSort(arr, temp, 0, n - 1);
	free(temp);
}

int main()
{
	int arr[] = { 1,5,9,7,3,2,4,6,8,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//InsertSort(arr, len);
	//ShellSort(arr, len);
	//SelectSort(arr, len);
	//HeapSort(arr, len);
	//BubbleSort(arr, len);
	//QuickSort(arr, 0, len - 1);
	MergeSort(arr, len);
	Print(arr, len);

	return 0;
}