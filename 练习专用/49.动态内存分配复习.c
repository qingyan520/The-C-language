#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main49()
{
	int num;
	scanf_s("%d", &num);
	int* p = malloc(num * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	for (int  i = 0; i < num; i++)
	{
		*(p+i)=i;
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d ", *(p+i));
	}
	return 0;
}