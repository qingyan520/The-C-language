#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* p = fopen("data.txt", "w");
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		fputc('a', p);
//	}
//	
//	//fclose(p);
//	p = NULL;
//	return 0;
//}

//
//C���Գ�������ʱĬ�ϴ���������
//stdin_��׼�����������̣�
//stdout-��׼���������Ļ��
//stderr-��׼����������Ļ��
//�����߶ȳ���ĸ���
//int main()
//{
//	//fputc('c', stdout);
//	FILE* p = fopen("data.txt", "r");
//	if (p != NULL)
//	{
//		char ch=getc("data.txt");
//		printf("%c", ch);
//	}
//	fclose(p);
//	p = NULL;
//}

#include<stdio.h>
int main()
{
	printf("С����ʱʣ�µ�Ѫ��Ϊ%d\n",6857-235);
	printf("С��һ�������%dָ", (6875 - 235) / 235);
	return 0;
}