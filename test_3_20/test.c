//文件预处理
//#include<stdio.h>
//#define  MAX(a,b) a>b?a:b
//int main()
//{
//	int c = 1;
//	int d = 2;
//	int max = MAX(c++, d++);
//	printf("%d", max);
//	printf(" %d", d);
//	return 0;
//}
//
//#define MALLOC(num,type)  (type*)malloc(num*sizeof(type))
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = MALLOC(10, int);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	free(p);
//	p = NULL;
//	return  0;
//}

//#undef
//#ifdef
//#ifndef
//#if
//#elif
//#else
//相当于进行和函数的声明
//#include "stdio.h"
////<> - 一般应用于C语言提供的库函数的头文件
////如果使用<>,查找是直接去库目录下找
////D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
////   linux - /usr/include
////
//
//
//#include "add.h"
////"" - 一般是应用于自定义的头文件
////如果使用"",首先去当前工程的目录下查找，如果找不到，再去库目录下查找
////D:\2021_code\winter-class2021\test_3_19\test_3_19
////D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include


//宏定义模仿offsetof就结构体偏移量
#include <stdio.h>
#include <stddef.h>
#define OFFSETOF(struct_name, mem_name)     (int)&(((struct_name*)0)->mem_name)
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, c));
	//printf("%d\n", (int)&(((struct S*)0)->c));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, d));
	return 0;
}
