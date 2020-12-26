#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	int F;
	printf("请输入华氏温度：");
	scanf_s("%d", &F);
	int C = 5 * (F - 32) / 9;
	printf("对应的摄氏温度为：%d\n", C);
	return 0;
}