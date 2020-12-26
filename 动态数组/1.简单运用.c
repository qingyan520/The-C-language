#include<stdio.h>
#include<stdlib.h>
int main1()
{
	int* p = (int*)malloc(sizeof(int));
	*p = 520;
	printf("%d", *p);
	
	return 0;
}
