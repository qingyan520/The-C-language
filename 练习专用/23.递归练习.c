#include<stdio.h>
int f(int n)
{
	for (int i = 0; i <= n; i++)
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
			return f(n - 1) + f(n - 2);
		}
	}
}
int main23()
{
	int n;
	scanf_s1("%d", &n);
	int num = f(n);
	for (int i = 0; i < n; i++)
	{
		printf("%d", num);
	}

}