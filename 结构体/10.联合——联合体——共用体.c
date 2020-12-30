#define _CRT_SECURE_NO_WARNINGS 1
//联合体是一种特殊的自定义类型，它里面包含一系列成员，
#include<stdio.h>
union U
{
	char a;
	int i;
};
int main()
{
	union U u;
	/*union U u = { 'b' };
	printf("%c\n", u.a);
	printf("%d", u.i);*/
	printf("%d\n", sizeof(u));
	//联合体类型的大小至少为其最大值的大小
	//当最大成员不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍
	printf("%p\n", &u);
	printf("%p\n", &(u.a));
	printf("%p\n", &(u.i));

	return 0;
}