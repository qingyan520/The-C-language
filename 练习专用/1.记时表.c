#include<stdio.h>
int main1()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int  i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d\n", arr[i]);
		}

	}
	return 0;

}