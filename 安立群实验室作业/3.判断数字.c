#include<stdio.h>
int fun(int a)
{
	if (a >= 0 && a < 60)
	{
		printf("������");
	}
	else if (a > 60 && a <= 80)
	{
		printf("����");
	}
	if (a > 80 && a <= 100)
	{
		printf("����");
	}
	if(a>100||a<0)
	{
		printf("error");
	}
	return 0 ;

}
int main()
{
	int a;
	printf("������ɼ�;");
	scanf_s("%d", &a);
	fun(a);
}