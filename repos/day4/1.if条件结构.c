#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int score;
	scanf("%d", &score);
	if (score > 700)
	{
		printf("我要上清华");
		if (score > 720)
		{
			printf("计算机系");
		}
		else if (score > 710)
		{
			printf("数学系");
		}
		else
		{
			printf("其他系");
		}
	}
	else if (score > 680)
	{
		printf("复旦大学");
	}
	else
	{
		printf("普通大学");
	}
	return 0;
}