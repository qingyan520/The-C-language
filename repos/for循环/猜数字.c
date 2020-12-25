#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main666()
{
	//产生随机数
	//1.导入头文件，time.h  stdlib.h
	//添加随机数种子
	srand((unsigned int)time(NULL));//每次随机数不一样；
	int value=rand()%100 ;
	int num;
	for(;;)
	{
		printf("请输入数字:");
		scanf("%d", &num);
		if (value > num)
		{
			printf("您输入的数字太小了\n");
		}
		else if(value<num)
		{
			printf("您输入的数字太大了\n");
		}
		else
		{
			printf("恭喜您，猜对了\n");
			break;
		}
	}
	return 0;
}