#include<stdio.h>
int main4()
{
	//空指针：内存编号地址为0的值
	//操作空指针对应的空间一定会报错
	int* p = NULL;
	printf("%d\n", *p);
	return 0;
}