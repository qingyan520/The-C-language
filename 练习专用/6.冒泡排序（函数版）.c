#include<stdio.h>
void sort(int arr[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	return;
} 
int main6()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	sort(arr, sizeof(arr) / sizeof(arr[0]));
	int sum = 0;
	int min, max;
	for (int i = 0; i <5; i++)
	{
		sum += arr[i];
		 min = arr[0];
		 max = arr[4];
	}
	printf("min=%d  ",min);
	printf("max=%d  ", max);
	printf("average=%d\n", sum / 5);
	return 0;
}