#include<stdio.h>
int main3()
{
	float a;
	printf("�����빤�ʣ�");
	scanf_s("%f", &a);
	float sum;
	if (a <= 1600)
	{
		printf("Ӧ��˰Ϊ:0.00");
	}
	if (a > 1600 && a <= 2500)
	{
		sum = a * 0.05;
		printf("Ӧ��˰Ϊ:%.2f", sum);
	}
	if (a > 2500 && a <= 3500)
	{
		sum = a * 0.1;
		printf("Ӧ��˰Ϊ:%.2f", sum);
	}
	if (a > 3500 && a <= 4500)
	{
		sum = a * 0.15;
		printf("Ӧ��˰Ϊ:%.2f", sum);
	}
	if (a > 4500)
	{
		sum = a * 0.2;
		printf("Ӧ��˰Ϊ:%.2f", sum);
	}
	return 0;
}