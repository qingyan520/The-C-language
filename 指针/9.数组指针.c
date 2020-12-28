
#include<stdio.h>
int main8()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[] = { a,b,c };
	for (int i = 0; i < 3; i++)
	{
		printf("%p\n", arr[i]);
		printf("%p\n", a);
		printf("%p\n", b);
		printf("%p\n", c);
	}
}