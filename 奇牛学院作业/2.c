#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main2()
{
	int score[10];
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &score[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		sum += *(score + i);
	}
	printf("这10名同学语文总分为sum=%d\n", sum);
	printf("这10名同学语文平均分avreage=%d", sum / 10);
	return 0;
}