#include<stdio.h>
int f(int n)
{
	return n < 2 ? n : f(n - 1) + f(n - 2);
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	printf("%d", f(n));
	return 0;
}