#include<stdio.h>
int main54()
{
	//输入3*4的矩阵求其最大值，并返回其行下表和列下表
	int arr[3][4] = { {1,2,3,4},{90,8,7,6},{-10,10,-5,2} };//定义一个3*4的矩阵
	int row, column, max;//定义行，列序号，及最大值标号
	for (int i = 0; i < 3; i++)//打印矩阵
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	max = arr[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][i] > max)//取其最大值和其下标
			{
				max = arr[i][j];
				row = i;
				column = j;
			}
		}
	}
	printf("max=%d\n", max);
	printf("行数为：%d\n", row+1);//数组下表总比行和列少一
	printf("列数为：%d\n", column + 1);
	return 0;
}