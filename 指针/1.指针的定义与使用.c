#include<stdio.h>
int main1()
{
	int a = 100;
	int* p;
	p = &a;
	*p = 100;
	printf("%p\n", p);
	printf("%p\n", &a);
	printf("%d\n", a);
	printf("%d\n", *p);
	return 0;
}