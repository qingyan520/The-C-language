#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	int a, b;
	printf("请输入长方形的长：");
	scanf_s("%d", &a);
	printf("请输入长方形的宽：");
	scanf_s("%d", &b);
	int s = a * b;
	printf("长方形的面积为：%d",s);
	return 0;
}