#include<stdio.h>
long long pow(int n)
{
	return 1 << n;
}
int main10()
{
	int n;
	scanf_s("%d", &n);
	long long result = pow(n);
	printf("%lld", result);
	return 0;
}