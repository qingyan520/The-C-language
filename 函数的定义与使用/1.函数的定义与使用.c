#include<stdio.h>
int add(int a, int b)
{
	int sum = a + b;
	return sum;
}
int main1()
{
	int a = 20;
	int b = 10;
	int c = add(a, b);
	printf("%d\n", c);
	return 0;
}