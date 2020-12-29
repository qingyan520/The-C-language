#include<stdio.h>
int main3()
{
	int arr[10] = { 11,10,10,10,10,10,10,10,10,11 };
	int i = 0;
	int j = sizeof(arr) / sizeof(arr[0]) -1;
	while (i < j)
	{
		int temp = arr[i];
         arr[i] = arr[j];
		 arr[j] = temp;
		 i++;
		 j--;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;

}