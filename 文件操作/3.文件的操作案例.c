#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main3()
{
	//1.���ļ���д��
	FILE* pf = fopen("text1.txt", "w");
	if (pf == NULL)
		return 0;
	//2.�ļ���д��
	fputc('b', pf);
	fputc('i', pf);
	fputc('t', pf);
	//3.���ļ�
	printf("%c", fgetc(pf));
	printf("%c", fgetc(pf));

	return 0;
}