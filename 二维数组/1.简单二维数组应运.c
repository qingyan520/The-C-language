#include<stdio.h>
int main1()
{
	int arr[2][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", arr[i] [j]);
		}
		printf("  \n");		
	}
	//printf("二维数组大小:%d\n", sizeof(arr));
	//printf("二维数组单个元素大小:%d\n", sizeof(arr[0][0]));
	//printf("二维数组元素个数:%d\n", sizeof(arr) / sizeof(arr[0][0]));
	//printf("二维数组列数:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	//printf("二维数组行数:%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("%p\n", arr[0][0]);
	printf("%p\n", arr[0][1]);
	return 0;
}