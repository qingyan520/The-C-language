#include<stdio.h>
int main11()
{
	int number;
	printf("请输入数字：");
	scanf_s("%d", &number);
	printf("%d的所有因式：", number);
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}