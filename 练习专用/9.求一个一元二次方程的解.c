//求一元二次方程：ax2 + bx + c = 0 的根。
//并且a的系数不等于0；
#include<stdio.h>
#include<math.h>
int main9()
{
	double a, b, c, x1, x2,d;
	printf("请分别输入系数a,b,c：");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a != 0)
	{
		d = sqrt(b*b-4*a*c);
		if (d < 0)
		{
			printf("此方程无解");
		}
		else
		{
			x1 = (-b + d) / (2 * a);
			x2 = (-b - d) / (2 * a);
			printf("%.2f,%.2f", x1, x2);
		}
	}
	return 0;

}
