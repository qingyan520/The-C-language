#include<stdio.h>
int main11()
{
	int number;
	printf("���������֣�");
	scanf_s("%d", &number);
	printf("%d��������ʽ��", number);
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}