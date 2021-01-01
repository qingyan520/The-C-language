#include<stdio.h>
int main39()
{
	int num;
	scanf_s("%d", &num);
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d", count);

}