#include <stdio.h>
int f(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 1;
	}
	else
	{
		return( f(n - 1) + f(n - 2));
	}
}
int main20()
{
	int n;
	scanf_s("%d", &n);
	int num = f(n);
	printf("%d", num);
}

	