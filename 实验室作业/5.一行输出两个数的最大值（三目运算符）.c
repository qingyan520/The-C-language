#include<stdio.h>
int main5()
{
	int a, b;
	printf("请输入数字a,b:");
	scanf_s("%d%d", &a, &b);
	if (a >= b? a: b)
	{
		printf("最大值为:%d\n", a >= b ? a:b);
	}
	return 0;
}