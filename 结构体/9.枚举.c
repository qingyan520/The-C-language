#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//枚举：将所要表达的内容一一列举
enum Day//定义枚举类型
{
	//创建常量
	monday,
	sunday
	//数字默认从0开始，可以修改，如monday=1,sunday=9
};
//与#define相比较枚举更加方便，灵活

int main9()
{
	//赋值
	int c = monday;
	int d = sunday;
	//只有拿枚举常量给枚举变量赋值，才不会产生类型差异
	enum day b = monday;
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d",b);

	return 0;
}