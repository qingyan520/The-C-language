#include<stdio.h>
int main()
{
	int arr[5][4] =
	{
		{100,98,100,100},
		{100,100,100,100},
		{100,100,99,99},
		{90,99,90,100},
		{100,98,60,99}
	};
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		{
			for (int j = 0; j < 4; j++)
			{
				sum+=arr[i][j];
			}
			printf("第%d名学生成绩为:%d", i + 1, sum);
		}
		printf("\n");
	}
	int ar[5];
	for (int i = 0; i <5; i++)
	{
		scanf_s("%d", &ar[i]);
	}
	for (int i = 0; i <4; i++)
	{
		for (int j = 0; j <4-i; j++)
		{
			int temp = ar[j];
			ar[j] = ar[j + 1];
			ar[j + 1] = temp;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", ar[i]);
	}
	return 0;
}