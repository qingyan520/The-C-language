#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main1()
{
	//����һ���СΪ40�ֽڿռ䣬��ռ���Ԫ��δ���г�ʼ��
	int* p = (int*)malloc(10 * sizeof(int));
	//int* p = (int*)malloc(INT_MAX);//(ʹ�俪�ٵ��ڴ�ռ����޴󣬳��������ڴ�����ռ䣬�����޷����ٿռ�)
	//�����ڴ�ռ����ʧ�ܣ��ʽ������ж϶�̬�ڴ濪���Ƿ�ɹ���
	if (p == NULL)
	{
		//strerror(errno)��ʾ�����ֵĴ���ͷ�ļ�Ϊerrno.h
		printf("%s\n", strerror(errno));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
	}
	//����ڴ�����֮������ͷ�
	free(p);
	p = NULL;

	return;
}