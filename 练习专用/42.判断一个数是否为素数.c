#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main42()
{
	int a = 0;
	int num = 0;
	printf("���������֣�");
	scanf_s("%d", &num);
	for (int i =2; i < num; i++)
	{
		if (num % i== 0)
			a++;
	}
	if (a == 0)
		printf("%d������",num);
	else
		printf("%d��������", num);
	return 0;
}