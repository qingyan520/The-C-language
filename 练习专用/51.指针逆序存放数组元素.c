#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fun(int* arr)
{
	int* p, * x, * j, m = (10 - 1) / 2;
	p = arr;//存放数组首元素地址
	x = arr + 9;//数组末尾元素地址
	j = arr + m;//数组中间元素地址
	for ( ; p<=j; p++,x--)
	{
		//交换前半段和后半段的数据
		int temp = *p;
		*p = *x;
		*x = temp;
	}
}
int main51()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	fun(arr);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}