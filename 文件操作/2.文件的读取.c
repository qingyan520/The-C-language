#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main2()
{
	//���ȴ���һ��FILE����ָ��pfread��Ϊfopen�ķ���ֵ��fopen�������������ļ�����r����ʾֻ������ԭ��û������ļ������ʧ��
	//����FILE*pfread=fopen("text2.txt","r");�������ʾ����
	FILE* pfread = fopen("text.txt", "r");
	//FILE* pfread = fopen("text2.txt", "r");
	if (pfread == NULL)
	{
		//printf("open file text.txt:%s\n", strerror(errno));
		perror("open file text.txt:");
		//�������ж��Ǳ�����룬��һ���Ǹ���Ҫ���string.h��errno.h����ͷ�ļ�
		//�ڶ����Ǹ�����Ҫ���ͷ�ļ��������ȴ�ӡ������������ݣ�Ȼ��ո��������ԭ�������˵���һЩ
	}
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	//fgetc :�ַ��������������˳�������һ��ֻ�����һ���ļ��е��ַ������Ҫ����������ַ�����Ҫһֱ����д��������������������
	fclose(pfread);//�ر��ļ�
	pfread = NULL;
	return 0;
}