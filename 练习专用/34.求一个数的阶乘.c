#include<stdio.h>
int main34()
{
	int o = 1;
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <=n; i++)
	{
		o *= i;
	}
	printf("%d", o);
}