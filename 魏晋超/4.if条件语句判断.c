#include<stdio.h>
int main4()
{
	float a, b, c;
	while (scanf_s("%f%f%f", &a, &b, &c) != EOF)
	{
		if (a == b && b == c && a == c)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}