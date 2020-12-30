#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main3()
{
	int arr[4][4] = { 1,5,9,13,17,21,25,29,33,37,41,45,49,53,57,61 };
	int array[16];
	int* p = arr;
	for (int i = 0; i < 16; i++)
	{
		array[i] = *(p + i);
	}
	for (int i = 0; i < 16; i++)
	{
		printf("%d\n", *(array + i));
	}
	return 0;
}
