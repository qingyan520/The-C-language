#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main44()
{
	int x, y;
	printf("请输入数字x,y:");
	scanf("%d%d", &x, &y);
	if (x < y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	for (int i =x; i >0; i++)
	{
		if (i % x == 0 && i % y == 0)
		{
			printf("%d,%d的最小公倍数为:%d", x, y, i);
			break;
		}
	}

	return 0;

}