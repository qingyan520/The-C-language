#include<stdio.h>
int main55()
{
	//让二维数组行和列交换位置
	int arr[2][3] = { {1,2,3},{4,5,6} };//定义一个二维数组
	int b[3][2];
	printf("横向的数组为：\n");//打印横向数组
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j= 0; j<3 ; j++)
		{
			b[j][i] = arr[i][j];//其本质是交换行和列的位置
		}
	}
	printf("纵向的数组为：\n");//打印新数组
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%6d", b[i][j]);
		}
		printf("\n");
	}
	return 0;

}