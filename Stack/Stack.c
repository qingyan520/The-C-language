#include"Stack.h"
//初始化栈
void StackInit(Stack* ps)
{
	ps->a = malloc(sizeof(int) * 4);
	ps->capacity = 4;
	ps->top = 0;
}
//入栈
void StackPush(Stack* ps, int x)
{
	//判断容量是否足够
	if (ps->capacity == ps->top)
	{
		int* p = (int*)realloc(ps->a, sizeof(int) * ps->capacity * 2);
		if (p == NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
		else
		{
			ps->a = p;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;

}
//出栈:即删除最后一个元素
void StackPop(Stack* ps)
{
	assert(ps->top!=0);
	assert(ps);
	ps->top--;
	
}
//获取栈顶元素
int StackTop(Stack* ps)
{
	return ps->a[ps->top - 1];
}
//获取栈中有效元素个数
int StackSize(Stack* ps)
{
	return ps->top;
}
//判断栈中是否为空，为空返回1，不为空返回0；
bool StackEmpty(Stack* ps)
{
	return ps->top == 0;
}
//销毁栈
void StackDestroy(Stack* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}