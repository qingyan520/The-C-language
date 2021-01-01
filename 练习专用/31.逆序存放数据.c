#include<stdio.h>
int main31()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		for (int j =0 ; j <=i; j++)
		{
			int temp = arr[i];
		    arr[i] = arr[j];
			arr[j] = temp;

		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
}