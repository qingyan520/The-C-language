#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	//fopen��һ���ļ���������ʽΪfopen("�ļ���"��"��������"����
	//��w��Ϊֻд��Ϊ��������ݣ���һ���ı��ļ�����ԭ��û������ļ�������½�һ��
	//fputs,�ı���������������򿪱ٵ��ļ���д�����ݻ�����ʽΪfputs("��������"��ָ����)
	FILE* file = fopen("text.txt", "w");
	if (file != NULL)
	{
		fputs("fopen example", file);
		fclose(file);
		//flclose�ر��ļ�
	}
	return 0;
}