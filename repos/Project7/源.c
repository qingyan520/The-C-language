#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("��ֻС������");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("С��a��������");
		}
		else
		{
			printf("С��c��������");
		}
	}
	else
	{
		if (b > c)
		{
			printf("С��b��������");
		}
		else
		{
			printf("С��c��������");
		}
	}
	return 0;
}