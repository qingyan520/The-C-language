#include<stdio.h>
int we(int a, int b)
{
	if (a >= b)
	{
		printf("���ֵΪ:%d", a);
	}
	else
	{
		printf("���ֵΪ:%d", b);
	}
	return 0;
}
int main4()
{
	int a, b;
	printf("����������a,b:");
	scanf_s("%d%d", &a, &b);
	we(a, b);

}