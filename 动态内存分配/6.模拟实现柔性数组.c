#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	int i;
	int* arr;
};
int main6()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		ps->arr[i]=i;
	}
	//ʹ��realloc�������׷��
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	for (int i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//ʹ������������ͷ�
	//ע���ͷ�˳��
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	//�����д��
	/*free(ps);
	ps = NULL;
	free(ps->arr);
	ps->arr = NULL;*/
	return 0;
}