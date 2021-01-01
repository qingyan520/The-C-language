#include<stdio.h>
int main16()
{
	int year;
	printf("请输入年份：");
	scanf_s("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 10 == 0)
		{
			printf("%d年为世纪闰年", year);
		}
		else
		{
			printf("%d年为普通闰年", year);
		}
	}
	else
	{
		printf("%d年不是闰年", year);
	}
	return 0;
}