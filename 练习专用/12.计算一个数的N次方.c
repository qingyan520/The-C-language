#include<stdio.h>
int main12()
{
	int base, expoint;
	printf("请输入基数：");
	scanf_s("%d", &base);
	printf("请输入指数：");
	scanf_s("%d", &expoint);
	int result = 1;
	while (expoint != 0)
	{
		result *= base;
		--expoint;
	}
	printf("最终结果为：%d",result);
}