#include<stdio.h>
int fun(int a)
{
	if (a >= 0 && a < 60)
	{
		printf("不及格");
	}
	else if (a > 60 && a <= 80)
	{
		printf("良好");
	}
	if (a > 80 && a <= 100)
	{
		printf("优秀");
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
	printf("请输入成绩;");
	scanf_s("%d", &a);
	fun(a);
}