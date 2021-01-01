#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void judge2(int* arr, int* max, int* min)
{
	*max = *arr;
	*min = *arr;
	for (int i = 0; i < 10; i++)
	{
		if (*(arr + i) > * max)
		{
			*max = *(arr + i);
		}
		if (*(arr + i) < *min)
		{
			*min = *(arr + i);
		}
	}
}
int main50()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int max, min;
	judge2(arr, &max, &min);
	printf("最大值max=%d\n", max);
	printf("最小值min=%d\n", min);

	return 0;
}