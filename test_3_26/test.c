//#include<stdio.h>
//int main()
//
//{
//	int i = 15;
//	printf("%d %d", i++,i--);
//	printf("\n%d", i);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 3;
//	int b = ++i + ++i + ++i;
//	printf("%d", b);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a++ + b;
//	printf("%d", c);
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("%d", 2 / (-2));
//	printf(" %d", 2 % (-2));
//	printf(" %d ", 3 / (-2));
//	return 0;
//}
//
//#define SUM(x) ((x)+(x))
//#include<stdio.h>
//int main()
//{
//	printf("SUM(x)");
//	return 0;
//}

//
//#include<stdio.h>
//#define warning(disable：C4996)
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	return 0;
//}

//
//#include<stdio.h>
//#define PI 3.1415926
//int main()
//{
//	double r = 0;
//	double h = 0;
//	printf("请输入圆柱的半径，高：\n");
//	scanf_s("%lf %lf", &r, &h);
//	printf("圆柱的面积S=%.2lf\n", 2 * PI * r * r + 2 * PI * r * h);
//	printf("圆柱的体积V=%.2lf\n", PI * r * r * h);
//	return 0;
////}
//
//#include<stdio.h>
//int main()
//{
//	char c1=0, c2=0, c3=0, c4=0, c5=0;
//	getchar(c1);
//	getchar(c2);
//	getchar(c3);
//	getchar(c4);
//	getchar(c5);
//	c1 = c1 + 4;
//	c2 = c2 + 4;
//	c3 = c3 + 4;
//	c4 = c4 + 4;
//	c5 = c5 + 4;
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//	putchar(c5);
//	return 0;
//}


#include<stdio.h>
int main()
{
	float s;
	float two_rate = 2.0 / 100;
	float three_rate = 3.0 / 100;
	double sum = 0;
	scanf_s("%f", &s);
	sum = (1 + three_rate) * (1 + two_rate) * s;
	printf("%.2f钱先存2年再存3年，最终本息是%.2f", s, sum);
}