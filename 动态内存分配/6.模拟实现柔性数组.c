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
	//使用realloc对其进行追加
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	for (int i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//使用完后对其进行释放
	//注意释放顺序
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	//错误的写法
	/*free(ps);
	ps = NULL;
	free(ps->arr);
	ps->arr = NULL;*/
	return 0;
}