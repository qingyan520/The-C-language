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
//C语言程序运行时默认打开三个流：
//stdin_标准输入流（键盘）
//stdout-标准输出流（屏幕）
//stderr-标准错误流（屏幕）
//流：高度抽象的概念
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
	printf("小明此时剩下的血量为%d\n",6857-235);
	printf("小刚一共打出了%d指", (6875 - 235) / 235);
	return 0;
}