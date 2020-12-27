#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main01()
{
	int arr[5][4];
	for (int i = 0; i <5; i++)
	{
		for (int j = 0; j <4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i <5; i++)
	{
		for (int j = 0; j <4; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j <4; j++)
		{
			sum += arr[i][j];
			printf("第%d位学生总成绩:%d", i+1, sum);
		}
		printf("\n");
	}
	return 0;
	
}