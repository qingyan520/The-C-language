#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p;
	int num;
	scanf_s("%d", &num);
	p = (int*)malloc(num, sizeof(int));
	for (int i = 0; i <num; i++)
	{
		p[i] = i + 1;
	}
	for (int i = 0; i <num; i++)
	{
		printf("%d  ", p[i]);
	}
	return 0;
}
