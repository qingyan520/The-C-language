#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[5][3];
	for (int i = 0; i <5; i++)
	{
		for (int j= 0;j <3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i <5; i++)
	{
		for (int j= 0; j <3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	int sum = 0;
	for (int i = 0; i <5; i++)
	{
		for (int j= 0; j<3; i++)
		{
			sum += arr[i][j];
		}
		printf("��%dλѧ���ܳɼ�:%d/tƽ��������%d", i++, sum, sum / 3);
	}
	return 0;
}