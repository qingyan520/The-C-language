#include<stdio.h>
int main()
{
	char a[5] = "hell";
	char(*p3)[3] = &a;
	char(*p4)[] = a;
	printf("%d\n", (*p3 + 1));
	printf("%d\n", (*p4 + 1));

	return 0;
}