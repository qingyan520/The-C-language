#include<stdio.h>
int main5()
{
	int a = 10;
	char* p = &a;
	printf("%p\n", a);
	printf("%p\n", p+4);
}