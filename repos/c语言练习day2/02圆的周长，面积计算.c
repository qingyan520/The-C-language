#include<stdio.h>
int main()
{
	const float pi = 3.1415926;
	float r = 2.0;
	float l = 2 * pi * r;
	float s = pi * r * r;
	printf("圆的周长：%.1f\n",l );
	printf("圆的面积:%f\n", s);
	return 0;

}