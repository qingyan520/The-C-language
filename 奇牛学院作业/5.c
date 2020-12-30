#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[4][4] = { 2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32 };
	int sum = 0;
	for (int i = 0; i <4; i++)
	{
		sum =sum+ *(*(arr + i) + i);
	}
	printf("sum=%d", sum);
	return 0;
}