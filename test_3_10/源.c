//自定义类型
//结构体内存对齐：结构体在计算大小时会存在内存对齐
//vs中默认最大对齐数为8
//默认对齐数的修改：#program pack(自定义最大对齐数)
//恢复默认对齐数：#program pack();
#include<stdio.h>
struct stu
{
	char c1;
	int i;
	char c2;
}S;
int main1()
{
	printf("%d",sizeof(S));//12字节
	return 0;
}

