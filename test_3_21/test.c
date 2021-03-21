#include<stdio.h>
int fun(int a)
{
	return a ^= (1 << 5) - 1;
}
int main1()
{
	printf("%d", fun(21));
}