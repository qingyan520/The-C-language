//ջ��ģ��ʵ��
//ջ��һ�������������ݽṹ���Ȳ�������ݺ���������������ȳ�
//ջ��һ����������Ա���ֻ�����ڹ̶���һ�β����ɾ�����ݣ����в����ɾ��
//������һ�γ�Ϊջ������һ�˳�Ϊջ��
//ѹջ��ջ�Ĳ������������ջ/ѹջ/��ջ����������ջ��
//��ջ��ջ��ɾ������
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