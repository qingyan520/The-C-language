#include<stdio.h>
int main6()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *p);
		p = p + 1;
	}
	return 0;
}