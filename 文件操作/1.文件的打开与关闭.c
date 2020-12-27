#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	//fopen打开一个文件，基本格式为fopen("文件名"，"操作内容"），
	//“w”为只写，为了输出数据，打开一个文本文件，若原来没有这个文件，则会新建一个
	//fputs,文本行输出函数，即向开辟的文件中写入内容基本格式为fputs("输入内容"，指针名)
	FILE* file = fopen("text.txt", "w");
	if (file != NULL)
	{
		fputs("fopen example", file);
		fclose(file);
		//flclose关闭文件
	}
	return 0;
}