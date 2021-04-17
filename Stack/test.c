//栈的模拟实现
//栈是一种先入后出的数据结构：先插入的数据后出，后插入的数据先出
//栈是一种特殊的线性表，其只容许在固定的一段插入和删除数据，进行插入和删除
//操作的一段称为栈顶，另一端称为栈底
//压栈：栈的插入操作叫做进栈/压栈/入栈，入数据在栈顶
//出栈：栈的删除操作
#include"Stack.h"
void test01()
{
	Stack p;
	StackInit(&p);
	StackPush(&p,1);
	StackPush(&p, 2);
	StackPush(&p, 3);
	StackPush(&p, 4);
	while (!StackEmpty(&p))
	{
		printf("%d ", StackTop(&p));
		StackPop(&p);
	}
	StackDestroy(&p);
}
int main()
{
	test01();
	return 0;
}