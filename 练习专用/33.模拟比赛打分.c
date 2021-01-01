#include<stdio.h>
int main33()
{
	int n;
	int sum = 0;
	int arr[6];
	printf("Enter the number of players:\n");
	scanf_s("%d", &n);
	for (int i = 0; i <5; i++)
	{
		printf("now player %d\n", i+1);
		printf("please input score:\n");
		for (int j = 0; j <6; j++)
		{
			scanf_s("%d", arr[j]);
			sum += arr[j];
		}	
	}
	printf("player   judgeA  judgeB  judgeC  judgeD  total\n");
	for (int i = 0; i <=n; i++)
	{
		printf("play %d\n", i);
		for (int j = 0; j <=6; j++)
		{
			printf("     %d  ", arr[j]);
		}
	}
}