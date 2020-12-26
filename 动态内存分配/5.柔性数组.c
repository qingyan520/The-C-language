#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//柔性数组：结构体里允许最后一位元素是未知大小的数组（前面必需至少含有一个元素）
//sizeof返回的结构体大小中不包括柔性数组大小
//包含柔性数组的成员结构体用malloc进行动态内存分配，以适应其需求空间
struct S
{
	int n;
	int arr[];//只允许最后一位是大小未知的数组，其大小可通过动态内存分配调整
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

	//释放
	free(ps);
	ps = NULL;

	return 0;
}
//柔性数组的优势：1.方便释放内存
           //     2.有利于提高访问速度