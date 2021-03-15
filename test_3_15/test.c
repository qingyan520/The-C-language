//#define  _CRT_SECURE_NO_WARNINGS
//
//stdin--标准输入流
//stdout--标准输出流
//stderrno--标准错误输出流
//fopen函数如果是以方式打开的方式，文件不存在打开失败
// fopen如果是以只写的形式存在若文件不存在则创建文件，若文件存在则清空文件内容
// FILE*pf=fopen函数语法：fopen("文件名"，"打开方式")；
//计算文件内字符个数
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	FILE* pf = fopen("data.txt", "r");//通过fopen函数打开打开一个文件，其中r为只读
//	if (pf == NULL)
//	{
//		printf("can't open the file");
//		exit(0);
//	}
//	if (pf != NULL)
//	{
//		while (fgetc(pf) != EOF)//fegetc标准输入流，适合所有输入流，每次只读一个字符
//		{
//			num++;
//		}
//	}
//
//	printf("%d", num);
//	return 0;
//}
//
//fgetc函数：适用于所有输入流
//每次从文件中读取一个字母然后赋给ch，最终当文件结束的时候返回EOF
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	char ch;
//	if (pf != NULL)
//	{
//		while ((ch = fgetc(pf)) != EOF)
//		{
//			printf("%c ", ch);
//		}
//		fclose(pf);
//	}
//	
//	pf = NULL;
//	return 0;
//}
//从键盘中读取
//#include<stdio.h>
//int main()
//{
//	char ch;
//	ch = fgetc(stdin);
//	printf("%c ", ch);
//	return 0;
//}
//
//
//fputc:字符输出函数  适用于所有输出流
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf != NULL)
//	{
//		fputc("h",pf);
//	}
//}
//
//fgets函数：文本行输入函数  适用于所有输入流
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	char arr[10];
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}
//
//fprintf函数：格式化输出函数  适用于所有输出流 
//语法：fprintf(stream,"输入数据的格式"，名字)(语法形式与printf相似)
//流若为文件，则将内容显示到文件中
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct stu s = { "zhangsan",10 };
//	FILE* pf = fopen("data.txt", "w");
//	char buf[100];
//	if (pf != NULL)
//	{
//		//格式化的写入：将数据写入文件中去
//		fprintf(stdout, "%s %d", s.name, s.age);
//		//sscanf()
//		fclose(pf);
//	}
//	pf = NULL;
//	return 0;
//}
//
//fscanf函数:格式化输入函数  适用于所有流
//语法：fscanf(流，"数据类型"，&数据名)；
//#include<stdio.h>
//int main()
//struct stu
//{
//	char name[20];
//	int age;	
//};
//{
//	struct stu s = { "张三",10 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf != NULL)
//	{
//		//格式化的读取
//		fscanf(pf, "%s%d", s.name, &s.age);
//		//输出到屏幕上来
//		fprintf(stdout, "%s %d", s.name, s.age);
//	}
//	return 0;
//}
//
//sprintf:将一个结构化的数据转化成字符串
//sscanf:将一个字符串转化成结构化的数据
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = { "张三",10,66.66f };
//	char buf[200];
//	//sprintf:将结构化的数据转化成字符串
//	sprintf(buf, "%s%d%f", s.name, s.age, s.score);
//	printf("%s\n",buf);
//	//sscanf:将字符串转化成结构化数据
//	struct stu temp = { 0 };
//	sscanf(buf, "%s%d%f", temp.name, temp.age, temp.score);
//	printf("%s %d %f", temp.name, temp.age, temp.score);
//	return 0;
//}
//
//
///* fseek example */#include <stdio.h>int main (){  FILE * pFile;  pFile = fopen ( "example.txt" , "wb" );  fputs ( "This is an apple." , pFile );  fseek ( pFile , 9 , SEEK_SET );  fputs ( " sam" , pFile );  fclose ( pFile );  return 0;fseek
//根据文件指针的位置和偏移量来定位文件指针。
//例子：
//int fseek(FILE* stream, long int offset, int origin)/* fseek example */
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("data.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}


//文件结束的判定
//被错误使用的feof
//牢记：在文件读取过程中，不能用feof的返回值直接来判断文件是否结束
//而是应运于当文件读取失败时，判断文件是读取失败结束，还是遇到文件尾结束
//1.文本文件读取是否结束，判断返回值是否为EOF或者NULL(fgets)
//例如：fgetc判断是否为EOF
//      fgets判断是否为NULL
//2.二进制文件的读取结束判断，判断返回值是否小于实际要读的个数
//例如：fread判断返回值是否小于实际要读取的个数

//scanf printf   函数是应用于标准输入流和输出流的格式化输入输出语句
//fscanf  sprintf  函数是应用于所有输入流和输出流的格式化输入输出语句
//sscanf  sprintf  函数是可以把结构化数据转化成字符串，也可以从字符串中读取结构化的数据

//fwrite:
//fread:
//linux:
#include<stdio.h>
int main()
{

	return 0;
}