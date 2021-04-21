//插入排序的基本操作是将一个数据插入已经排好的有序数据中，从而得到一个新的、个数加一的有序数列，该算法适用于少量数据的排序。
//下面通过一个实例讲解插入排序
//输入10个无规律数字，数字之间用空格进行隔开，按Enter键，程序会自动使用插入排序对输入的无规律数字进行从大到小排序并输出
#include<stdio.h>
int main()
{
	int arr[10];
	printf("请输入10个数并用空格隔开\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int k;
	for (int i = 0; i < 9; i++)
	{
		k = i;
		for (int j = i+1; j < 10; j++)
		{
			if (arr[k] > arr[j])
			{
				k = j;
			}
			if (k != i)
			{
				int temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}
	printf("用选择法之后的排序\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}