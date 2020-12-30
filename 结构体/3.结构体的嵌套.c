#include<stdio.h>
struct s
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct t
{
	char ch[10];
	struct s s;
	char* pc;
};
int main3()
{
	char arr[] = { "hello world\n" };
	struct t t = { "hehe",{10,'a',"hello",3.14},arr };
	printf("ch=%s\n", t.ch);
	printf("struct s a=%d\n", t.s.a);
	printf("c=%c\n", t.s.c);
	printf("arr=%s\n", t.s.arr);
	printf("d=%lf\n", t.s.d);
	printf("*pc=%s\n", t.pc);
	return 0;
}