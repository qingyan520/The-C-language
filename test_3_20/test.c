//�ļ�Ԥ����
//#include<stdio.h>
//#define  MAX(a,b) a>b?a:b
//int main()
//{
//	int c = 1;
//	int d = 2;
//	int max = MAX(c++, d++);
//	printf("%d", max);
//	printf(" %d", d);
//	return 0;
//}
//
//#define MALLOC(num,type)  (type*)malloc(num*sizeof(type))
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = MALLOC(10, int);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	free(p);
//	p = NULL;
//	return  0;
//}

//#undef
//#ifdef
//#ifndef
//#if
//#elif
//#else
//�൱�ڽ��кͺ���������
//#include "stdio.h"
////<> - һ��Ӧ����C�����ṩ�Ŀ⺯����ͷ�ļ�
////���ʹ��<>,������ֱ��ȥ��Ŀ¼����
////D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
////   linux - /usr/include
////
//
//
//#include "add.h"
////"" - һ����Ӧ�����Զ����ͷ�ļ�
////���ʹ��"",����ȥ��ǰ���̵�Ŀ¼�²��ң�����Ҳ�������ȥ��Ŀ¼�²���
////D:\2021_code\winter-class2021\test_3_19\test_3_19
////D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include


//�궨��ģ��offsetof�ͽṹ��ƫ����
#include <stdio.h>
#include <stddef.h>
#define OFFSETOF(struct_name, mem_name)     (int)&(((struct_name*)0)->mem_name)
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, c));
	//printf("%d\n", (int)&(((struct S*)0)->c));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, d));
	return 0;
}
