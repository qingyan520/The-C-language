#include<stdio.h>
int main8()
{
	int a, b ;
	printf("请输入两个数字，以分号为间隔:");
	scanf_s("%d%d", &a, &b);
	for (int i = 1; i <a&&i<b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d和%d的最大公约数为:%d\n", a, b, i);
		}
	}
	return 0;
}