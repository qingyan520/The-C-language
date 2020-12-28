#include<stdio.h>
int main2(void)
{
	char ch = 'a';
	int* p = &ch;
	printf("%p\n", p);
	printf("%p\n", &ch);
	printf("%d\n", sizeof(char*));
	return 0;
}
//在321位操作系统中，所有指针地址都4字节
//在64位操作系统中，所有指针地址都是8字节