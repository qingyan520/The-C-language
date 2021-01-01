#include<stdio.h>
int main38()
{
	int a = 3;
	int b = 5;
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d", a, b);

}