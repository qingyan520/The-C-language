#include<stdio.h>
int mai221()
{
	int i = 1;
	while (i <= 100)
	{
		if (i%10==7||i/10==7||i%7==0)
		{
			printf("ÇÃ×À×Ó");
		}
		else
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}