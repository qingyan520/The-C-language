#include"Stack.h"
//��ʼ��ջ
void StackInit(Stack* ps)
{
	ps->a = malloc(sizeof(int) * 4);
	ps->capacity = 4;
	ps->top = 0;
}
//��ջ
void StackPush(Stack* ps, int x)
{
	//�ж������Ƿ��㹻
	if (ps->capacity == ps->top)
	{
		int* p = (int*)realloc(ps->a, sizeof(int) * ps->capacity * 2);
		if (p == NULL)
		{
			printf("����ʧ��\n");
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
//��ջ:��ɾ�����һ��Ԫ��
void StackPop(Stack* ps)
{
	assert(ps->top!=0);
	assert(ps);
	ps->top--;
	
}
//��ȡջ��Ԫ��
int StackTop(Stack* ps)
{
	return ps->a[ps->top - 1];
}
//��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps)
{
	return ps->top;
}
//�ж�ջ���Ƿ�Ϊ�գ�Ϊ�շ���1����Ϊ�շ���0��
bool StackEmpty(Stack* ps)
{
	return ps->top == 0;
}
//����ջ
void StackDestroy(Stack* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}