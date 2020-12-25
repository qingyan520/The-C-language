#include<stdio.h>
int main555(void)
{
	int i = 1;
	do
	{
		if (i % 7 == 0 || i / 10 == 7 || i % 10 == 7)
		{
			printf("ÇÃ×À×Ó\n");
		}
		else
		{
			printf("%d\n", i);
		}
		i++;
	} while (i <= 100);
	return 0;
}