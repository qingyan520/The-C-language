#include<stdio.h>
int main16()
{
	int year;
	printf("��������ݣ�");
	scanf_s("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 10 == 0)
		{
			printf("%d��Ϊ��������", year);
		}
		else
		{
			printf("%d��Ϊ��ͨ����", year);
		}
	}
	else
	{
		printf("%d�겻������", year);
	}
	return 0;
}