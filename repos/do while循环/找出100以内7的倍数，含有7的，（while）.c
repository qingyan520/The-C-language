#include<stdio.h>
int main98()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			printf("ÇÃ×À×Ó\n");
		}
		else
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}