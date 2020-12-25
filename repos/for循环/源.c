#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand((unsigned int)time(NULL));
	int value = rand() % 100;
	int num;
	for (;;)
	{
		printf("请输入数字:");
		scanf("%d", &num);
		if (value > num)
		{
			printf("您输入的数字太小了\n");
		}
		else if (value < num)
		{
			printf("您输入的数字太大了\n");
		}
		else
		{
			printf("恭喜您，答对了\n");
		}
	}
	return 0;
}