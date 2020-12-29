//定义一个数组，存储五名学生三门成绩
//求出每名学生平均成绩，总成绩
//求出每门学科总成绩，平均成绩
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[5][3];
	//获取学生成绩
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<3;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//显示学生成绩
	for (int i = 0; i < 5; i++)
    {
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//求出每名同学总成绩，平均成绩
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
		    sum += arr[i][j];
		}
		printf("第%d名学生总成绩:%d/t平均成绩为:%d\n",i+1,sum,sum/3);
	}
	//求出每门科目总分，平均分
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			sum += arr[j][i];
		}
		printf("第%d名课程总成绩:%d/t平均成绩为:%d\n",i+1, sum, sum / 5);
	}


	
	return 0;
}