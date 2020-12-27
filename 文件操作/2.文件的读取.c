#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main2()
{
	//首先创建一个FILE类型指针pfread作为fopen的返回值，fopen打开我所创建的文件，“r”表示只读，若原来没有这个文件，则打开失败
	//例如FILE*pfread=fopen("text2.txt","r");，则会显示错误
	FILE* pfread = fopen("text.txt", "r");
	//FILE* pfread = fopen("text2.txt", "r");
	if (pfread == NULL)
	{
		//printf("open file text.txt:%s\n", strerror(errno));
		perror("open file text.txt:");
		//上面两行都是报错代码，第一行那个需要添加string.h和errno.h两个头文件
		//第二行那个不需要添加头文件，他会先打印（）里面的内容，然后空格输出错误原因，相对来说简洁一些
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
	//fgetc :字符输出函数，他是顺序输出，一次只能输出一个文件中的字符，因此要输出完所有字符串就要一直往下写（适用于所有输入流）
	fclose(pfread);//关闭文件
	pfread = NULL;
	return 0;
}