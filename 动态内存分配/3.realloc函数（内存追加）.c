#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main3()
{
	int* p =(int*) malloc(20);
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else {
		for (int i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//在这里我们需要增加内存长度，就需要使用realloc函数int*ptr=(int*)realloc(p,40)
	//使用realloc函数注意事项
	//1.如果P指向的空间后有足够的空间则追加
	//2.如果P指向的空间后没有足够的空间，则realloc会重新找一个新的内存区域，开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，然后释放原来的空间
	//最后返回新开辟的内存地址
	//3.得用一个新的变量接受realloc,不然可能出错
	int* ptr =(int*)realloc(p,40);
	if (ptr != NULL)
		p = ptr;
	for (int i = 5; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p+i));
	}
	//释放内存
	free(p)
		;
	p = NULL;
	return 0;
}
