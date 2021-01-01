#include<stdio.h>
int main35()
{
	int n = 0;
	int long long i;
	scanf_s("%lld", &i);
	while (i != 0)
	{
		i/=10;
		n++;
	}
	printf("%d",n);

}