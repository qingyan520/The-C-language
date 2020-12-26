#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	//1.对NULL进行解引用
	//int* p = (int*)malloc(20);
	//如果malloc开辟内存失败,则后面一切操作都是错误的，故应先判断P是否为空//if(p!=NULL）然后执行下一步
	//for (int i = 0; i < 5; i++)
	//{
	//	*(p + i) = i;
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
	//2.对动态内存越界访问
	//int* p = (int*)malloc(5);
	//如果malloc开辟内存失败,则后面一切操作都是错误的，故应先判断P是否为空//if(p!=NULL）然后执行下一步
	//for (int i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
	//3.对不是动态内存的进行free操作

	/*return */0;
	//4.使用free释放动态开辟的内存一部分
	//int* p = (int*)malloc(40);
	//	if (p == NULL)
	//		return 0;
	//	else {
	//		for (int i = 0; i < 10; i++)
	//		{
	//			*p++ = i;//此时P已经跳转到结尾，结尾后的空间未定义，故不能进行释放
	//		}
	//	}
	//	/*free(p);*/
	//	p = NULL;
	//	return 0;

	//5.对一块内存进行多次释放
	//int* p = (int*)malloc(40);
	//if (p == NULL)//一定要判断是否开辟内存成功
	//	return 0;
	//else
	//{
	//	//使用这块内存
	//}
	//free(p);
	////……
	////再次释放

	//6.动态开辟的内存空间忘记释放导致内存泄漏
	/*while (1)
	{
		int*p=malloc(50);
		Sleep(1000);

	}*/



}