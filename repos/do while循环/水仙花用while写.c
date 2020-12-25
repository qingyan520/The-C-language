#include<stdio.h>
int main01()
{
	int i = 100;
	int a = i / 100;
	int b = i % 10;
	int c = (i % 100) / 10;
	while (i <= 999)
	{
		if (a * a * a + b * b * b + c * c * c == i)
		{
			printf("Ë®ÏÉ»¨Êı£º%d\n", i);
		}
		i++;
	}
	return 0;

}