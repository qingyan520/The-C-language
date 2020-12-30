#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S//定义结构体类型
{
	int a;
	char c;
	double d;
};
void fuzhi(struct S* s)//定义函数为结构体变量赋值
{
	s->a = 100;
	s->c = 'a';
	s->d = 3.14;

}
void Point3(struct S s)
{
	printf("值传递：a=%d  c=%c d=%lf\n", s.a, s.c, s.d);
}
void Point4(struct S* s)
{
	printf("址传递：a=%d c=%c  d=%lf", s->a, s->c, s->d);
}
int main8()
{
	struct S s = { 0 };
	fuzhi(&s);
	//打印结构体变量
	Point3(s);
	Point4(&s);//地址传递更具有优势

	return 0;

}