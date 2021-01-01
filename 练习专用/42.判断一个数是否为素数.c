#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main42()
{
	int a = 0;
	int num = 0;
	printf("请输入数字：");
	scanf_s("%d", &num);
	for (int i =2; i < num; i++)
	{
		if (num % i== 0)
			a++;
	}
	if (a == 0)
		printf("%d是素数",num);
	else
		printf("%d不是素数", num);
	return 0;
}