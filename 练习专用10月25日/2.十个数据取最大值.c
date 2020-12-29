#include<stdio.h>
int main2()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}