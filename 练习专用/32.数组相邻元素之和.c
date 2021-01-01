#include<stdio.h>
//在键盘中输入有1个数组，求出A中相邻两元素之和，并把它存储到数组B中
int main32()
{
	int a[10];
	int b[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 1; i <10; i++)
	{
		b[i-1] = a[i - 1] + a[i];
	}
	for (int i = 0; i < 9; i++)
	{
		printf("%d\t", b[i]);
	}
}