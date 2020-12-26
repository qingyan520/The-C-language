#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 0;
	for (int x = 1; x <=20; x++)
	{
		sum += (2 * x * x + 3 * x + 1);
	}
	printf("%d", sum);
}