#include<stdio.h>
int main10()
{
	double n1, n2, n3;
	printf("��ֱ���������n1,n2,n3,�ԷֺŸ���:");
	scanf_s("%lf%lf%lf", &n1, &n2, &n3);
	if (n1 >= n2 && n1>= n3)
	{
		printf("���ֵΪn1:%.2f\n", n1);
	}
	if (n2 >= n1 && n2 >= n3)
	{
		printf("���ֵΪn2:%.2f\n", n2);
	}
	if (n3 >= n2 && n3 >= n1)
	{
		printf("���ֵΪn3:%.2f\n", n1);
	}
	if (n1==n2 && n2 == n3)
	{
		printf("���ֵΪ:%.2f", n1);
	}




}