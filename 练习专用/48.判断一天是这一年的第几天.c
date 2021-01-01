#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int estimate(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 1 : 0;
}
int judge(int year, int month, int day)//判断具体是那一天
{
	int a[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int b[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	//输入两种月份，如果是平年则用数组a,闰年则用数组b
	int sum = 0;
	int n = estimate(year);//判断是平年还是闰年
	if (n == 1)
	{
		//
		for (int i = 0; i < month - 1; i++)
		{
			sum + b[i];
		}
	}
	else
	{
		for (int i = 0; i < month - 1; i++)
		{
			sum += a[i];
		}
	}
	return sum + day;
}
int main48()
{
	//输入年月日
	int year, month, day;
	printf("请输入年月日:");
	scanf_s("%d.%d.%d", &year, &month, &day);
	int m = judge(year, month, day);//利用函数判断具体是那一天
	printf("%d.%d.%d为%d年第%d天", year, month, day, year, m);
	return 0;
}