#include<stdio.h>
int main3()
{
	float a;
	printf("请输入工资：");
	scanf_s("%f", &a);
	float sum;
	if (a <= 1600)
	{
		printf("应缴税为:0.00");
	}
	if (a > 1600 && a <= 2500)
	{
		sum = a * 0.05;
		printf("应缴税为:%.2f", sum);
	}
	if (a > 2500 && a <= 3500)
	{
		sum = a * 0.1;
		printf("应缴税为:%.2f", sum);
	}
	if (a > 3500 && a <= 4500)
	{
		sum = a * 0.15;
		printf("应缴税为:%.2f", sum);
	}
	if (a > 4500)
	{
		sum = a * 0.2;
		printf("应缴税为:%.2f", sum);
	}
	return 0;
}