#include<stdio.h>
int we(int a, int b)
{
	if (a >= b)
	{
		printf("最大值为:%d", a);
	}
	else
	{
		printf("最大值为:%d", b);
	}
	return 0;
}
int main4()
{
	int a, b;
	printf("请输入数字a,b:");
	scanf_s("%d%d", &a, &b);
	we(a, b);

}