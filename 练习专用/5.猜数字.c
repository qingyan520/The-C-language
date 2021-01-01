#include<stdio.h>
int main5()
{
	int i;
	srand((unsigned int)time(NULL));
	int value = rand() % 100;
	while(1)
	{
		printf("请输入数字：");
		scanf_s("%d", &i);
		if (i > value)
		{
			printf("您输入的数字太大了");
		}
		if (i < value)
		{
			printf("您输入的数字太小了");
		}
		if (i == value)
		{
			printf("恭喜您，答对了");
			break;
		}
		printf("\n");

	}
	return 0;

}