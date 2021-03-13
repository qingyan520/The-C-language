
#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//传过去的是实参，形参是实参的一份零时拷贝，形参的改变并不会影响实参



//栈空间释放问题：局部变量是放在栈上的，当函数结束后栈上的内存就会销毁，而后根据地址找不到要找的变量
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//与上述问题相同
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*p = test();
//	*p = 20;
//
//	return 0;
//}


//
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//} 
//
//int main()
//{
//	Test();
//	return 0;
//}


//动态内存管理复习
//malloc函数复习
//#include<stdio.h>
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));//p[i]
//	}
//	free(p);
//	return 0;
//}


//calloc函数:函数参数列表：元素个数  ，每个元素大小
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(5,sizeof(int));
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc函数：(void*)realloc(要追加的地址，原来个数+追加个数)；
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 4);
//	if (p != NULL)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			p[i] = i;
//		}
//		p = (int*)realloc(p, 36);
//		for (int i = 4; i < 9; i++)
//		{
//			p[i] = i;
//		}
//		for (int i = 0; i < 9; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	return 0;
//}



//柔性数组：结构体的最后一位容许是大小未知的数组
//包含0柔性数组的结构体在计算大小是不包括柔性数组的大小
//#include<stdio.h>
//struct stu
//{
//	char c;
//	char b;
//	char a;
//	char d;
//	char f;
//	int arr[0];
//};
//int main()
//{
//	struct stu* p = (struct stu*)malloc(sizeof(struct stu) + sizeof(int) * 5);
//	for (int i = 0; i < 5; i++)
//	{
//		p->arr[i] = i;
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//模拟实现柔性数组
//#include<stdio.h>
//struct stu
//{
//	char c;
//	int* p;
//};
//int main()
//{
//	struct stu* ptr = (struct stu*)malloc(sizeof(struct stu));
//	ptr->p = (int*)malloc(sizeof(int) * 10);
//	if (ptr != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			ptr->p[i] = i;
//			printf("%d ", ptr->p[i]);
//		}
//	}
//	free(ptr->p);
//	ptr->p = NULL;
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
//





//文件操作
#include<stdio.h>
int main()
{
	FILE* p = fopen("test.txt", "r");
	return 0;
}