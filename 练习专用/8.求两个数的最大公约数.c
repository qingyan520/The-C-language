#include<stdio.h>
int main8()
{
	int a, b ;
	printf("�������������֣��Էֺ�Ϊ���:");
	scanf_s("%d%d", &a, &b);
	for (int i = 1; i <a&&i<b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d��%d�����Լ��Ϊ:%d\n", a, b, i);
		}
	}
	return 0;
}