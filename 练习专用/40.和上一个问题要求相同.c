#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main40()
{
	int num;
	scanf_s("%d", &num);
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		
		if (1==(num >> i)^1 )
			count++;
	}
	printf("%d", count);
}