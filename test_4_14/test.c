////1.利用函数trapezoid求梯形面积
//#include<stdio.h>
//float trapezoid(float a, float b, float h)
//{
//	return (a + b) * h / 2.0;
//}
//int main()
//{
//	float a = 0;//梯形上底
//	float b = 0;//梯形下底
//	float h = 0;//梯形的高
//	float s = 0;//梯形的面积
//	printf("请依次输入梯形的上底，下底，高，并以空格隔开:\n");
//	scanf_s("%f%f%f", &a, &b,&h);
//	s = trapezoid(a, b, h);
//	printf("梯形的面积S=%.2f\n", s);
//	return 0;
//}

//
////2.利用函数V求圆柱体积
//#include<stdio.h>
//#define PI 3.14//宏定义Π为3.14
//float V(float r, float h)
//{
//	return PI * r * r * h;
//}
//int main()
//{
//	float r = 0;//圆柱底面半径
//	float h = 0;//圆柱的高
//	float v = 0;//圆柱的体积
//	printf("请分别输入圆柱的半径，体积，并以空格隔开:\n");
//	scanf_s("%f%f", &r, &h);
//	v = V(r, h);
//	printf("圆柱的体积V=%.2f\n", v);
//	return 0;
//}
//
////3.编写函数rectangle(a.b,x)求修剪草坪的时间
//#include<stdio.h>
//float rectangle(float a, float b, float x)
//{
//	return a * b / x;
//}
//int main()
//{
//	float a = 0;//草坪的长
//	float b = 0;//草坪的宽
//	float x = 0;//修剪草坪的速度
//	float t = 0;//修剪草坪所需要的时间
//	printf("请分别输入草坪的长，宽，修剪速度，并以空格隔开:\n");
//	scanf_s("%f%f%f", &a, &b, &x);
//	t = rectangle(a, b, x);
//	printf("修剪草坪所需要的时间T=%.2fs\n", t);
//	return 0;
//}

//4.编写函数反序输出五位数
//思路：将五位数每一位从后往前拿出来分别乘以10000，1000，100，10，1然后相加
#include<stdio.h>
int intv(int m)
{
	int flag= 10000;
	int sum = 0;
	while (m)
	{
		int k = m;
		k = k % 10;
		sum += flag * k;
		flag = flag / 10;
		m = m / 10;
	}
	return sum;
}
int main()
{
	int m = 0;//输入反转的这个数
	int n = 0;//反转后的数
	printf("请输入要反转的五位数:\n");
	scanf_s("%d", &m);
	n = intv(m);
	printf("反转后的数m=%d\n", n);
	return 0;
}