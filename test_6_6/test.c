//#include<stdio.h>
//int main()
//{
//	int arr[20] = { 0 };
//	for (int i = 0; i < 20; i++)
//	{
//		int n = i + 1;
//		if (n == 1)
//		{
//			arr[i] = 1;
//		}
//		else if (n == 2)
//		{
//			arr[i] = 2 * n - 1;
//		}
//		else
//		{
//			arr[i] = arr[i - 1] + 2 * n;
//		}
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;;
//}


//#include<stdio.h>
//void Search(int* arr, int n)
//{
//	int j = 0;
//	for (int i = 1; i <= 500; i++)
//	{
//		if ((i % 7 == 0 && i % 11 != 0) || (i % 11 == 0 && i % 7 != 0))
//		{
//			arr[j] = i;
//			j++;
//		}
//	}
//}
//int main()
//{
//	int count = 0;
//	int arr[104] = { 0 };
//	int n = sizeof(arr) / sizeof(int);
//	Search(arr, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


#include<stdio.h>
#include<time.h>
void Print(int arr[][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", arr[i][j]);
			if (j == 9)//每10个元素进行换行
			{
				printf("\n");
			}
		}
	}
}
int main()
{
	int arr[10][10] = {0};//创建二维数组并将其初始化为0
	srand((unsigned int)time(NULL));//设计随机数种子，产生随机数，为二维数组赋值，包含头文件time.h，让随机数随时间变化
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = rand() % 10;//产生随机数位于0~9，为二维数组进行赋值操作
		}
	}
	Print(arr);//封装打印函数，打印这个10*10的二维数组
	printf("\n");
	int max = arr[0][0];//定义一个最大值，然后循环遍历这个二维数组，更新最大值
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	printf("上述10*10的二维数组最大值为：%d\n", max);

}