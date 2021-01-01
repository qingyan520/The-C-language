#include<stdio.h>
int main17()
{
	double i;
	printf("请输入数字：");
	scanf_s("%lf", &i);
	if (i>=0.0)
	{
		if (i > 0.0)
		{
			printf("%.0f是正数", i);
		}
		else
		{
			printf("0");
		}
	}
	else
	{
		printf("%.2f是负数", i);
	}
	return 0;


}