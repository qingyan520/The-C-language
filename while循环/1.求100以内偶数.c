#include<stdio.h>
int main01()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}