#include<stdio.h>
int main21()
{
	int i, j;
	for ( i = 0; i <8; i++)
	{
		for ( j = 0; j < 8; j++)
		{
			if ((i+j) % 2 == 0)
			{
				printf("¡ö");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}