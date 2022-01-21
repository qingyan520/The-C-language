#include<stdio.h>
int main3()
{
	int a = 10;
	int b = 5;
	int c = 17;
	int d = 1;
	printf("%d\n", (a > b) || (a - b));
	printf("%d\n", (a + b) & (b + c));
	printf("%d\n", (a * d + b) | (b & c));
	printf("%d\n", (a | b) && (c & d));

	return 0;

}