#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	//1.��NULL���н�����
	//int* p = (int*)malloc(20);
	//���malloc�����ڴ�ʧ��,�����һ�в������Ǵ���ģ���Ӧ���ж�P�Ƿ�Ϊ��//if(p!=NULL��Ȼ��ִ����һ��
	//for (int i = 0; i < 5; i++)
	//{
	//	*(p + i) = i;
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
	//2.�Զ�̬�ڴ�Խ�����
	//int* p = (int*)malloc(5);
	//���malloc�����ڴ�ʧ��,�����һ�в������Ǵ���ģ���Ӧ���ж�P�Ƿ�Ϊ��//if(p!=NULL��Ȼ��ִ����һ��
	//for (int i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
	//3.�Բ��Ƕ�̬�ڴ�Ľ���free����

	/*return */0;
	//4.ʹ��free�ͷŶ�̬���ٵ��ڴ�һ����
	//int* p = (int*)malloc(40);
	//	if (p == NULL)
	//		return 0;
	//	else {
	//		for (int i = 0; i < 10; i++)
	//		{
	//			*p++ = i;//��ʱP�Ѿ���ת����β����β��Ŀռ�δ���壬�ʲ��ܽ����ͷ�
	//		}
	//	}
	//	/*free(p);*/
	//	p = NULL;
	//	return 0;

	//5.��һ���ڴ���ж���ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)//һ��Ҫ�ж��Ƿ񿪱��ڴ�ɹ�
	//	return 0;
	//else
	//{
	//	//ʹ������ڴ�
	//}
	//free(p);
	////����
	////�ٴ��ͷ�

	//6.��̬���ٵ��ڴ�ռ������ͷŵ����ڴ�й©
	/*while (1)
	{
		int*p=malloc(50);
		Sleep(1000);

	}*/



}