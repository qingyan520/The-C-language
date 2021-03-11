//联合体：共用一块内存空间
//关键字：union
// #include<stdio.h>
//union u
//{
//	char i;
//	int c;
//};
//int main()
//{
//	printf("%d", sizeof(union u));
//	return 0;
//}
//联合体内存大小的计算：
//联合体的大小是至少是最大成员的大小，
//当联合体的最大成员大小不是最大对齐数的整数倍的时候，就要
//对齐到最大对齐数的整数倍
//例如：
//#include<stdio.h>
//union u
//{
//	char arr[5];
//	int c;
//};//大小为8
//union u1
//{
//	char arr1[10];
//	int i;
//};//12
//union u2
//{
//	short arr3[7];
//	char i;
//};//14
//int main()
//{
//	printf("%d", sizeof(union u2));
//	return 0;
//}
//联合体的应运：判断机械大小端
//1.指针的方法
//#include<stdio.h>
//int main()
//{
//	int i = 1;//0X 00 00 00 01
//	char* p =(char*)&i;
//	if (*p == 1)
//	{
//		printf("小段");
//	}
//	else
//	{
//		printf("大段");
//	}
//}
//2.联合体的方法：
//#include<stdio.h>
//union u
//{
//	char a;
//	int i;
//};
//int main()
//{
//	union u k;
//	k.i = 2;
//	k.a = 1;
//	if (k.i == 1)
//	{
//		printf("小端");
//	}
//
//
//	return 0;
//}
//位段：位段成员必须是int ,unsigned int ,signed int ,char
//位段中的位指的是二进制位
//位段成员后有冒号和一个数字
//例如：
//struct Q
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//
//	return 0;
//}

//结构体内存对齐
//#include<stdio.h>
//struct stu
//{
//	char a;
//	int i;
//};
//int main()
//{
//	printf("%d", sizeof(struct stu));
//	return 0;
//}
//上述代码很多人大概以为是5，但是他们忽略了结构体内存对齐
//首先了解结构体内存对齐的基本规则：
//1.第一个成员在于结构体变量偏移量为0的地址处
//2.其他成员要对齐到某个数字（对齐数）的整数倍的地址处
//对齐数=编译器默认的一个对齐数与该成员大小的较小值
//vs中默认的值为8；
//linux中默认值为4
//3.结构体总大小为最大对齐数的整数倍
//4.如果存在嵌套结构体，嵌套的结构体对齐到自己的最大对齐大数的整数倍
//，结构体的整齐大小就是所有最大对齐数（含有嵌套结构体）的整数倍
//为什么存在内存对齐?
// //大部分的参考资料都是如是说的：
// 1. 平台原因(移植原因)： 不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。
// 2. 性能原因： 数据结构(尤其是栈)应该尽可能地在自然边界上对齐。 原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。
//总的来说：为什么存在内存对齐
//结构体的内存对齐是拿空间来换取时间的做法。
//设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到：
//让占用空间小的成员尽量集中在一起。

//模拟实现stract
//#include<stdio.h>
//#include<assert.h>
//void my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	while (*str1 ++= *str2++);
//}
//
//int main()
//{
//	char str1[20] = "****";
//	char str2[10] = "hello bit";
//	my_strcat(str1, str2);
//	printf("%s", str1);
//	return 0;
//}

//模拟实现strcpy
//#include<stdio.h>
//#include<assert.h>
//int my_strcpy(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (1)
//	{
//		if (*str1 == *str2)
//		{
//			return 0;
//		}
//		else
//		{
//			return * str1 - *str2;
//		}
//		str1++;
//		str2++;
//	}
//}
//int main()
//{
//	char str1[10] = "hello";
//	char str2[10] = "bit";
//	int ret = my_strcpy(str1, str2);
//	printf("%d", ret);
//	return 0;
//}