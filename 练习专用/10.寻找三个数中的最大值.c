#include<stdio.h>
int main10()
{
	double n1, n2, n3;
	printf("请分别输入数字n1,n2,n3,以分号隔开:");
	scanf_s("%lf%lf%lf", &n1, &n2, &n3);
	if (n1 >= n2 && n1>= n3)
	{
		printf("最大值为n1:%.2f\n", n1);
	}
	if (n2 >= n1 && n2 >= n3)
	{
		printf("最大值为n2:%.2f\n", n2);
	}
	if (n3 >= n2 && n3 >= n1)
	{
		printf("最大值为n3:%.2f\n", n1);
	}
	if (n1==n2 && n2 == n3)
	{
		printf("最大值为:%.2f", n1);
	}




}