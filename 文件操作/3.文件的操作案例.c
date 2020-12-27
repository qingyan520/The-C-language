#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main3()
{
	//1.打开文件与写入
	FILE* pf = fopen("text1.txt", "w");
	if (pf == NULL)
		return 0;
	//2.文件的写入
	fputc('b', pf);
	fputc('i', pf);
	fputc('t', pf);
	//3.读文件
	printf("%c", fgetc(pf));
	printf("%c", fgetc(pf));

	return 0;
}