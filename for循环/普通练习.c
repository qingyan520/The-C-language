#include<stdio.h>
int main2()
{
	int i = 1;
	for (; ; i++)
	{
		if (i >= 10)
		{
			break;
		}
		else
		{
			printf("%d\n", i);
		}
	}
	return 0;
}