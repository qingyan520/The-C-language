
#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//����ȥ����ʵ�Σ��β���ʵ�ε�һ����ʱ�������βεĸı䲢����Ӱ��ʵ��



//ջ�ռ��ͷ����⣺�ֲ������Ƿ���ջ�ϵģ�������������ջ�ϵ��ڴ�ͻ����٣�������ݵ�ַ�Ҳ���Ҫ�ҵı���
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//������������ͬ
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*p = test();
//	*p = 20;
//
//	return 0;
//}


//
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//} 
//
//int main()
//{
//	Test();
//	return 0;
//}


//��̬�ڴ����ϰ
//malloc������ϰ
//#include<stdio.h>
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));//p[i]
//	}
//	free(p);
//	return 0;
//}


//calloc����:���������б�Ԫ�ظ���  ��ÿ��Ԫ�ش�С
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(5,sizeof(int));
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc������(void*)realloc(Ҫ׷�ӵĵ�ַ��ԭ������+׷�Ӹ���)��
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 4);
//	if (p != NULL)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			p[i] = i;
//		}
//		p = (int*)realloc(p, 36);
//		for (int i = 4; i < 9; i++)
//		{
//			p[i] = i;
//		}
//		for (int i = 0; i < 9; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	return 0;
//}



//�������飺�ṹ������һλ�����Ǵ�Сδ֪������
//����0��������Ľṹ���ڼ����С�ǲ�������������Ĵ�С
//#include<stdio.h>
//struct stu
//{
//	char c;
//	char b;
//	char a;
//	char d;
//	char f;
//	int arr[0];
//};
//int main()
//{
//	struct stu* p = (struct stu*)malloc(sizeof(struct stu) + sizeof(int) * 5);
//	for (int i = 0; i < 5; i++)
//	{
//		p->arr[i] = i;
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//ģ��ʵ����������
//#include<stdio.h>
//struct stu
//{
//	char c;
//	int* p;
//};
//int main()
//{
//	struct stu* ptr = (struct stu*)malloc(sizeof(struct stu));
//	ptr->p = (int*)malloc(sizeof(int) * 10);
//	if (ptr != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			ptr->p[i] = i;
//			printf("%d ", ptr->p[i]);
//		}
//	}
//	free(ptr->p);
//	ptr->p = NULL;
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
//





//�ļ�����
//#include<stdio.h>
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	return 0;
//}