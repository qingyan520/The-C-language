#include<stdio.h>
int main88()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int* p = &arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
}