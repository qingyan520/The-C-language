#include<stdio.h>
int main17()
{
	double i;
	printf("���������֣�");
	scanf_s("%lf", &i);
	if (i>=0.0)
	{
		if (i > 0.0)
		{
			printf("%.0f������", i);
		}
		else
		{
			printf("0");
		}
	}
	else
	{
		printf("%.2f�Ǹ���", i);
	}
	return 0;


}