#include<stdio.h>
int main3()
{
	//不建议将一个变量的值直接赋值给指针
	//野指针：指变量指向一个未知空间
	//
	int* p = 1000;
	printf("%d\n", *p);
	return 0;
}