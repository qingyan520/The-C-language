#include<stdio.h>
int main5()
{
	int a, b;
	printf("����������a,b:");
	scanf_s("%d%d", &a, &b);
	if (a >= b? a: b)
	{
		printf("���ֵΪ:%d\n", a >= b ? a:b);
	}
	return 0;
}