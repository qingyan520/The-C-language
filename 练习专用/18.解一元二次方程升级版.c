#include<stdio.h>
#include<math.h>
int main18()
{
	double a, b, c, d,x1,x2;
	char ch;
	do
	{
		printf("请输入二次项系数a：");
		scanf_s("%lf", &a);
		printf("请输入一次项系数b:");
		scanf_s("%lf", &b);
		printf("请输入常数项c:");
		scanf_s("%lf", &c);
		d = sqrt(b * b - 4 * a * c);
		if (d >= 0)
		{
			x1 = (-b + d) /( 2 * a);
			x2 = (-b - d) /( 2 * a);
			if (d > 0)
			{
				printf("该方程有两个不同的实数解，分别为x1=%d,x2=%lf\n", x1, x2);
			}
			else
			{
				printf("该方程有两个相等的实数解：x1=x2=%lf\n", x1);
			}
		}
		else
		{
			printf("该方程无实数解\n");
		}
		printf("是否继续，若退出，请按y||Y键;若继续，请按任意键\n");
		scanf_s("%c",&ch);
	} while (ch=='y' || ch == 'Y');
	return 0;
}