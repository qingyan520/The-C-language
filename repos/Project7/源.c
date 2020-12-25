#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("三只小猪体重");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("小猪a体重最重");
		}
		else
		{
			printf("小猪c体重最重");
		}
	}
	else
	{
		if (b > c)
		{
			printf("小猪b体重最重");
		}
		else
		{
			printf("小猪c体重最重");
		}
	}
	return 0;
}