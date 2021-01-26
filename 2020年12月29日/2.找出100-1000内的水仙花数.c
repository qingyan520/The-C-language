#include<stdio.h>
int main2()
{
	for (int i = 100; i <= 1000; i++)
	{
		int sum = 0;
		int a = 0;
		int m = i;
		while (m!=0)
		{
			a= m% 10;
			sum += (a*a*a);
			m = m / 10;
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}