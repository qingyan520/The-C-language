#include<stdio.h>
int main01()
{
	int i = 0;
	for (; ; )
	{
		if (i >= 10)
		{
			break;
			//在循环语句中break表示结束循环；
		}
		printf("%d\n", i);
		i++;
	}
	return 0;
}