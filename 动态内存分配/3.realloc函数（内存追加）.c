#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main3()
{
	int* p =(int*) malloc(20);
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else {
		for (int i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//������������Ҫ�����ڴ泤�ȣ�����Ҫʹ��realloc����int*ptr=(int*)realloc(p,40)
	//ʹ��realloc����ע������
	//1.���Pָ��Ŀռ�����㹻�Ŀռ���׷��
	//2.���Pָ��Ŀռ��û���㹻�Ŀռ䣬��realloc��������һ���µ��ڴ����򣬿���һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ���������Ȼ���ͷ�ԭ���Ŀռ�
	//��󷵻��¿��ٵ��ڴ��ַ
	//3.����һ���µı�������realloc,��Ȼ���ܳ���
	int* ptr =(int*)realloc(p,40);
	if (ptr != NULL)
		p = ptr;
	for (int i = 5; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p+i));
	}
	//�ͷ��ڴ�
	free(p)
		;
	p = NULL;
	return 0;
}
