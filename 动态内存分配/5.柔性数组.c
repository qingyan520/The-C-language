#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//�������飺�ṹ�����������һλԪ����δ֪��С�����飨ǰ��������ٺ���һ��Ԫ�أ�
//sizeof���صĽṹ���С�в��������������С
//������������ĳ�Ա�ṹ����malloc���ж�̬�ڴ���䣬����Ӧ������ռ�
struct S
{
	int n;
	int arr[];//ֻ�������һλ�Ǵ�Сδ֪�����飬���С��ͨ����̬�ڴ�������
	//arr[0]
};
int main5()
{
	//struct S s;
	//printf("%d\n", sizeof(s));//
	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
	ps->n = 100;

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;//0 1 2 3 4
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	//�ͷ�
	free(ps);
	ps = NULL;

	return 0;
}
//������������ƣ�1.�����ͷ��ڴ�
           //     2.��������߷����ٶ�