#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main2()
{
	//calloc函数其实是创建一个数组，其大小为10，int类型，并将其初始值复为1。
	//其主要功能与mallooc相似
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	else {
		for (int i = 0; i <10; i++)
		{
			printf("%d ", *(p + i));
		
		}
	}

	p = NULL;

	return 0;
}