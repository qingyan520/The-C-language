#include<stdio.h>
int main13()
{
	int arr[] = { 2,7,11,15 };
	int target = 9;
	for (int i = 0; i <4; i++)
	{
		for (int j = i+1; j < 4; j++)
		{
			if (arr[i] + arr[j] == target && i!= j)
			{
				printf("%d  %d", i, j);
			}
		}
	}
	return 0;
}