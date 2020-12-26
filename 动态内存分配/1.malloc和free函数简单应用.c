#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main1()
{
	//开辟一块大小为40字节空间，其空间内元素未进行初始化
	int* p = (int*)malloc(10 * sizeof(int));
	//int* p = (int*)malloc(INT_MAX);//(使其开辟的内存空间无限大，超出开辟内存的最大空间，让其无法开辟空间)
	//开辟内存空间可能失败，故接下来判断动态内存开辟是否成功；
	if (p == NULL)
	{
		//strerror(errno)显示所出现的错误，头文件为errno.h
		printf("%s\n", strerror(errno));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	//这块内存用完之后进行释放
	free(p);
	p = NULL;

	return;
}