#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main43()
{
	int x, y;
	printf("请输入数字x,y:");
	scanf_s("%d%d", &x, &y);
	//将较大数付给x
	if (x < y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	//将较小数字y赋值给i，然后i开始递减，用x,y分别除以i，则其第一次符合条件的极为最大公约数，然后立即跳出循环
	for (int i =y; i>0; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			printf("%d,%d的最大公约数为：%d", x, y, i);
			break;
		}
	}
	return 0;
}