#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main666()
{
	//���������
	//1.����ͷ�ļ���time.h  stdlib.h
	//������������
	srand((unsigned int)time(NULL));//ÿ���������һ����
	int value=rand()%100 ;
	int num;
	for(;;)
	{
		printf("����������:");
		scanf("%d", &num);
		if (value > num)
		{
			printf("�����������̫С��\n");
		}
		else if(value<num)
		{
			printf("�����������̫����\n");
		}
		else
		{
			printf("��ϲ�����¶���\n");
			break;
		}
	}
	return 0;
}