#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main2()
{
	//calloc������ʵ�Ǵ���һ�����飬���СΪ10��int���ͣ��������ʼֵ��Ϊ1��
	//����Ҫ������mallooc����
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	else {
		for (int i = 0; i <10; i++)
		{
			printf("%d ", *(p + i));
		
		}
	}

	p = NULL;

	return 0;
}